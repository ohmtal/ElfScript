# OP_CALLFUNC the beast:

#ifdef ELF_CALLFUNC_CACHED 

NOT faster :( and a bit instable ... bummer.
---

Handbreak 1:
```
ns = thisObject->getNamespace();
if (ns)
   nsEntry = ns->lookup(fnName);
```
Handbreak 2:
```
gCallStack.argvc(fnName, callArgc, &callArgv);
```

Good: 
```
case Namespace::Entry::FloatCallbackType:
{
   F64 result = nsEntry->cb.mFloatCallbackFunc(thisObject, callArgc, callArgv);
   gCallStack.popFrame();
   // ...
   stack[_STK + 1].setFloat(result);
   _STK++;
   break;
}
```


### Idea: OP_CALLFUNC_CACHED for function calls.

---
```
      case OP_CALLFUNC:
      {
         // This routingId is set when we query the object as to whether
         // it handles this method.  It is set to an enum from the table
         // above indicating whether it handles it on a component it owns
         // or just on the object.
         fnName = CodeToSTE(code, ip);
         fnNamespace = CodeToSTE(code, ip + 2);
         U32 callType = code[ip + 4];

         //if this is called from inside a function, append the ip and codeptr
         if (!Script::gEvalState.stack.empty())
         {
            Script::gEvalState.getCurrentFrame().module = this;
            Script::gEvalState.getCurrentFrame().ip = ip - 1;
         }

         ip += 5;
         gCallStack.argvc(fnName, callArgc, &callArgv);

         if (callType == FuncCallExprNode::FunctionCall)
         {
            // Note: This works even if the function was in a package. Reason being is when
            // activatePackage() is called, it swaps the namespaceEntry into the global namespace
            // (and reverts it when deactivatePackage is called). Method or Static related ones work
            // as expected, as the namespace is resolved on the fly.
            nsEntry = Namespace::global()->lookup(fnName);
            if (!nsEntry)
            {
               Con::warnf(ConsoleLogEntry::General,
                  "%s: Unable to find function %s",
                  getFileLine(ip - 4), fnName);

               gCallStack.popFrame();
               stack[_STK + 1].setEmptyString();
               _STK++;
               break;
            }
         }
         else if (callType == FuncCallExprNode::StaticCall)
         {
            // Try to look it up.
            ns = Namespace::find(fnNamespace);
            nsEntry = ns->lookup(fnName);
            if (!nsEntry)
            {
               Con::warnf(ConsoleLogEntry::General,
                  "%s: Unable to find function %s%s%s",
                  getFileLine(ip - 4), fnNamespace ? fnNamespace : "",
                  fnNamespace ? "::" : "", fnName);

               gCallStack.popFrame();
               stack[_STK + 1].setEmptyString();
               _STK++;
               break;
            }
         }
         else if (callType == FuncCallExprNode::MethodCall)
         {
            ConsoleValue& simObjectLookupValue = callArgv[1];
            thisObject = getThisObject(simObjectLookupValue);

            if (thisObject == NULL)
            {
               Con::warnf(
                  ConsoleLogEntry::General,
                  "%s: Unable to find object: '%s' attempting to call function '%s'",
                  getFileLine(ip - 6),
                  simObjectLookupValue.getString(),
                  fnName
               );

               gCallStack.popFrame();
               stack[_STK + 1].setEmptyString();
               _STK++;
               break;
            }

            ns = thisObject->getNamespace();
            if (ns)
               nsEntry = ns->lookup(fnName);
            else
               nsEntry = NULL;
         }
         else // it's a ParentCall
         {
            ConsoleValue& simObjectLookupValue = callArgv[1];
            thisObject = getThisObject(simObjectLookupValue);

            if (thisObject == NULL)
            {
               Con::warnf(
                  ConsoleLogEntry::General,
                  "%s: Unable to find object: '%s' attempting to call function '%s'",
                  getFileLine(ip - 6),
                  simObjectLookupValue.getString(),
                  fnName
               );

               gCallStack.popFrame();
               stack[_STK + 1].setEmptyString();
               _STK++;
               break;
            }

            if (thisNamespace)
            {
               ns = thisNamespace->mParent;
               if (ns)
                  nsEntry = ns->lookup(fnName);
               else
                  nsEntry = NULL;
            }
            else
            {
               ns = NULL;
               nsEntry = NULL;
            }
         }

         if (!nsEntry || noCalls)
         {
            if (!noCalls)
            {
               Con::warnf(ConsoleLogEntry::General, "%s: Unknown command %s.", getFileLine(ip - 4), fnName);
               if (callType == FuncCallExprNode::MethodCall)
               {
                  Con::warnf(ConsoleLogEntry::General, "  Object %s(%d) %s",
                     thisObject->getName() ? thisObject->getName() : "",
                     thisObject->getId(), Con::getNamespaceList(ns));
               }
            }
            gCallStack.popFrame();
            stack[_STK + 1].setEmptyString();
            _STK++;
            break;
         }
         if (nsEntry->mType == Namespace::Entry::ConsoleFunctionType)
         {
            if (nsEntry->mFunctionOffset)
            {
               ConsoleValue returnFromFn = nsEntry->mModule->exec(nsEntry->mFunctionOffset, fnName, nsEntry->mNamespace, callArgc, callArgv, false, nsEntry->mPackage).value;
               stack[_STK + 1] = (returnFromFn);
            }
            else // no body
               stack[_STK + 1].setEmptyString();
            _STK++;

            gCallStack.popFrame();
         }
         else
         {
            if ((nsEntry->mMinArgs && S32(callArgc) < nsEntry->mMinArgs) || (nsEntry->mMaxArgs && S32(callArgc) > nsEntry->mMaxArgs))
            {
               const char* nsName = ns ? ns->mName : "";
               Con::warnf(ConsoleLogEntry::Script, "%s: %s::%s - wrong number of arguments. got %d, expected %d to %d", getFileLine(ip - 4), nsName, fnName, S32(callArgc), nsEntry->mMinArgs, nsEntry->mMaxArgs);
               Con::warnf(ConsoleLogEntry::Script, "%s: usage: %s", getFileLine(ip - 4), nsEntry->mUsage);
               gCallStack.popFrame();
               stack[_STK + 1].setEmptyString();
               _STK++;
            }
            else
            {
               switch (nsEntry->mType)
               {
               case Namespace::Entry::StringCallbackType:
               {
                  const char* result = nsEntry->cb.mStringCallbackFunc(thisObject, callArgc, callArgv);
                  gCallStack.popFrame();
                  stack[_STK + 1].setString(result);
                  _STK++;
                  break;
               }
               case Namespace::Entry::IntCallbackType:
               {
                  S64 result = nsEntry->cb.mIntCallbackFunc(thisObject, callArgc, callArgv);
                  gCallStack.popFrame();

                  if (code[ip] == OP_POP_STK)
                  {
                     ip++;
                     break;
                  }

                  stack[_STK + 1].setInt(result);
                  _STK++;
                  break;
               }
               case Namespace::Entry::FloatCallbackType:
               {
                  F64 result = nsEntry->cb.mFloatCallbackFunc(thisObject, callArgc, callArgv);
                  gCallStack.popFrame();

                  if (code[ip] == OP_POP_STK)
                  {
                     ip++;
                     break;
                  }

                  stack[_STK + 1].setFloat(result);
                  _STK++;
                  break;
               }
               case Namespace::Entry::VoidCallbackType:
               {
                  nsEntry->cb.mVoidCallbackFunc(thisObject, callArgc, callArgv);
                  gCallStack.popFrame();

                  if (code[ip] == OP_POP_STK)
                  {
                     ip++;
                     break;
                  }

                  if (Con::getBoolVariable("$Con::warnVoidAssignment", true))
                  {
                     Con::warnf(ConsoleLogEntry::General, "%s: Call to %s in %s uses result of void function call.", getFileLine(ip - 4), fnName, functionName);
                  }

                  stack[_STK + 1].setEmptyString();
                  _STK++;

                  break;
               }
               case Namespace::Entry::BoolCallbackType:
               {
                  bool result = nsEntry->cb.mBoolCallbackFunc(thisObject, callArgc, callArgv);
                  gCallStack.popFrame();

                  if (code[ip] == OP_POP_STK)
                  {
                     ip++;
                     break;
                  }

                  stack[_STK + 1].setBool(result);
                  _STK++;

                  break;
               }
               }
            }
         }
         break;
      } //OP_CALLFUNC
```
