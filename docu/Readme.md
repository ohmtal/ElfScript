# ELFSCRIPT_*

# ELFSCRIPT_FASTPATH_FLD

This is the best :). 

When save a static field value SimObject::setDataField is called:

- In the original TorueScript no matter what type the field is, it is converted to string in the VM then
SimObject::setDataField alloc memory for an array and convert it back to the type defined
in the engine. It you use %this.x = 5.0; this eat a lot of time.

- In ElfScript's FastPath in the VM it is check what type it is and if fload/int it's directly 
pushed to the new specialized SimObject::setDataField function. There is checked the field is using
default get/set and if yes the value is written directly to the variable register. Now %this.x = 5.0
is nearly as fast as using a local variable. 




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

Note: I think about adding dynamic fields also to the Abstract class. Or should check i can 
skip save to engine and keep it in the VM byte code. 


# ELFSCRIPT_CALLFUNC_CACHED

Cache the funktion calls. While it was a hard to get it in , 
the scripts work not so good with it. And in the my loopTest
it did not speed up anything - strange enought. Maybe the 
same problem i have with strict slot type when a "." is added
to the script the speed breaks down. 

NOTE: Also if it's useless at the moment i may find a way to use it differently. 
