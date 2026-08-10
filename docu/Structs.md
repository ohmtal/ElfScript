# Structs

After i implemented the parser for PoD Stucts: { 1, 2, 3} i also want to get 
a benefit out of it. 

The first idea was to expand ConsoleValue to also store at least a struct with 
four (or more) float values. But the engineType did not deliver enough informations
to transfer the data.

Next idea is to expand the ConsoleGetType/ConsoleGetType to let the stuct decide 
whats to do with the data. 

It's called from : 

Set .field=  : handle_OP_SAVEFIELD_FASTPATH => SimObject::pushDataField* => SimObject::setDataField => Con::setData => ConsoleSetType
Get on echo(): handle_OP_LOADFIELD_STR => SimObject::stackDataField* => Con::getData => ConsoleGetType
(*): Here we have direct access to ConsoleValue 

I need a someting in the field which tells me: Hey i have a nativ setter / getter.


But first i want to have to cvVector Type with ConsoleValue in place. While
implementing it should be handled as string to the others so i work like 
expected.

Next is to do something like :
%foo = { 1.0, 2.0}; 
%echo(%foo.x); // instead of parsing the string it should return the first field 





```
#define _IMPLEMENT_STRUCT( type, exportName, scope, doc )                                                                              \
   namespace { namespace _ ## exportName {                                                                                             \
      extern EngineStructTypeInfo< type > gsTypeInfo;                                                                                  \
   } }                                                                                                                                 \
   _IMPLEMENT_TYPE( type, exportName );                                                                                                \
   namespace { namespace _ ## exportName {                                                                                             \
      typedef type StructType;                                                                                                         \
      typedef StructType ThisType;                                                                                                     \
      static const char* const _sStructName = #exportName;                                                                             \
      static const char* const _sDoc = doc;                                                                                            \
      static EngineExportScope& _sScope = _SCOPE< scope >()();                                                                         \
      static EngineFieldTable::Field _sFields[] = {

#define _END_IMPLEMENT_STRUCT                                                                                                          \
         { NULL }                                                                                                                      \
      };                                                                                                                               \
      static EngineFieldTable _sFieldTable( sizeof( _sFields ) / sizeof( _sFields[ 0 ] ) - 1, _sFields );                              \
      EngineStructTypeInfo< StructType > gsTypeInfo( _sStructName, &_sScope, _sDoc, &_sFieldTable );                                   \
   } }
   
```
