# Fieldcache ElfScript 0.7g

LOAD:

When writing the GuiTextWidgetVintage (CrazyElf). Load cache sometimes missed to find
the fields. This ends up in unstable behaviour. 
Unforutally I cant reproduce this with my test scripts so find the reason. 

SAVE:

When load cache is off and only save cache is on it works - maybe because save is
less used in GuiTextWidgetVintage than load (rendering the lines).

I just found out the problems begin, when i use this editor as Console. Then 
Load and Save are in a bad condition.

I think the problems begin when it cache a field from a "new Object(){field..}"
The SimID is zero at this moment so i skip this on save. 

This fixed it ?! 



--- old: 
# Fieldcache ElfScript 0.6

## Prepare OPCodes
Tag: //XXTH FieldCache

1.) SlotAssignNode::compile 
   codeStream.emit(OP_SAVEFIELD_FASTPATH);

   //XXTH FieldCache
   codeStream.emit(0);
   codeStream.emit(0);

2.) SlotAssignOpNode::compile

   codeStream.emit(OP_SAVEFIELD_FASTPATH);

   //XXTH FieldCache
   codeStream.emit(0);
   codeStream.emit(0);

3.) Skip ip

3.1) CodeBlock::exec
    handle_OP_SAVEFIELD_UINT:
    handle_OP_SAVEFIELD_FLT:
    handle_OP_SAVEFIELD_FASTPATH:

        // XXTH FieldCache prepare:
        ++ip; ++ip;
        
3.2) CodeBlock::dumpInstructions

## Action 

1.) Definition

    enum FieldCacheType {
        unknownField,
        staticField,
        staticField_NoFastPath,
        dynamicField,
        componentField,
        ARCFirstCustomField //skip this
    };

    struct FieldCache {
        bool cacheFailed = true;
        FieldCacheType type = unknownField;
        const class AbstractClassRep* classRepPtr = nullptr;
        const struct AbstractClassRep::Field* staticFieldPtr = nullptr;
        S32 staticArrayIndex = 0;
        const ConsoleValue* fieldValuePtr = nullptr;
        // FieldValuePtr can be used for dynamicField or Component Variable??
        S32 componentIndex = -1;

    };
    
    
2.) Add to skelleton to SAVEFIELD
    handle_OP_SAVEFIELD_FASTPATH:

        // XXTH FieldCache prepare:
        FieldCache** cacheSlot = (FieldCache**)(&code[ip]);
        ++ip; ++ip; // skip 64bit 2 slots
        FieldCache* cache = *cacheSlot;
        if (!cache) {
                if (curObject) {
                    // is is static or dynamic and we need to fill it
                } else {
                    // check component
                }
        }

3.) I do component first to validate it's not bullshit what i'am doing here:        
        
        ...... to lazy to add all to this file ... .... ;) i'am tired 
