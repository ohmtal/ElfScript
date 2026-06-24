# ELFSCRIPT_*

# ELFSCRIPT_STRICT_SLOT_TYPE
Make slots type save but same slotname always have the same type.
+ you cant add a string to a float for example
- it did not speed up*

*Because void SimFieldDictionary::setFieldValue(StringTableEntry slotName, const char *value)
does the lookup and save it as string again no matter which type it is.
So it's more or less useless. 
This is called on **OP_SAVEFIELD_FLT**

Unfortually i cant handle dynamic fields only inside the VM since they can be saved / loaded. 
But SimFieldDictionary::Entry may save float and int ?! 


# ELFSCRIPT_CALLFUNC_CACHED

Cache the funktion calls. While it was a hard to get it in , 
the scripts work not so good with it. And in the my loopTest
it did not speed up anything - strange enought. Maybe the 
same problem i have with strict slot type when a "." is added
to the script the speed breaks down. 

---

Check: in a function %this should be a handled in the local variable 
cache. 

