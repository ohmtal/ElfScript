# DreiZehn Todo

## 0.2

- [X] fix Identifier and Keywords can be delimited by a '.' or ':'
- [X] neg numbers and fix '.' somewhere outside a number  
- [X] fix Garbage collection to current scope, using a current scope global env 
It needs to be done in "end" 
- [X] add preprocessor with ';' break to lines
- [X] added multiline statement parser and fixed issues with undetected syntax errors - endless loop
- [X] while or similar while(true) loop

## 0.3 

- add some basic SDL3 bindings ;) Test if i can use my ElfScript macros - but i 
don't have to PoD Types here at the moment. 
- [X] setup projecct Simply Added to current CMake
- [X] add some basic bindings
- [X] fixed if statement broken afer while inserted
- [X] added getDouble/getInt for auto type convert
- [X] BinaryExpression::evaluate uses getDouble
- [X] Added else and finally fixed If as BlockStatement - run in a own execute !! .. variables ?!?
- [X] "!=" as compare 
- [X] add a constant system ...
    - true and false added in core
- [X] write the starfield demo in DreiZehn
- [X] test params  => if (math.random 10 20) != 4 print "huhu" end
- [X] need: ||, &&, <=, >=, >>, <<, |, &
- [X] Pointer method calles with Array '->' \o/
- [X] rewrote RunScript .. 
- [X] added Symbols Table for fast lookup variables/functions/constants ....
- [X] optimized a bit found 3 sek on test_var bench ;) 

# 0.4
- [X] VariableFrame for variables and garbage collection
- [X] ValueObject type registry (gUserObjectTypes / registerUserObjectType)
- [X] When a new String is set the old should be deleted!!! ..
    => added an mAssigned flag
- [~] add delete method to ALL object.  .. onMethod must call the parent 
    => let the garbage collection do that - i added the assigned flag. 
    
- [ ] Bytecode 
    - [ ] change the direct threading like it is in ElfScript
    - [ ] While i port it use the new VariableFrame 
    
- [ ] header only 

# future ideas

- change printf errorf to a overwritable class or add a handler 

