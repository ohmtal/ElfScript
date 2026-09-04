//-----------------------------------------------------------------------------
// Copyright (c) 2012 GarageGames, LLC
// Copyright (c) 2026 Thomas Hühn
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------
// 2026-08-21 XXTH rewritten to linear probing
//-----------------------------------------------------------------------------

#include "core/strings/stringFunctions.h"
#include "core/stringTable.h"
// XXTH #include "platform/profiler.h"

_StringTable *_gStringTable = NULL;
// orig: const U32 _StringTable::csm_stInitSize = 29;
const U32 _StringTable::csm_stInitSize = 256;

//---------------------------------------------------------------
//
// StringTable functions
//
//---------------------------------------------------------------

namespace {
bool sgInitTable = true;
U8   sgHashTable[256];

void initTolowerTable()
{
   for (U32 i = 0; i < 256; i++) {
      U8 c = dTolower(i);
      sgHashTable[i] = c * c;
   }

   sgInitTable = false;
}

} // namespace {}

U32 _StringTable::hashString(const char* str)
{
   if (sgInitTable)
      initTolowerTable();

   if(!str) return -1;

   U32 ret = 0;
   char c;
   while((c = *str++) != 0) {
      ret <<= 1;
      ret ^= sgHashTable[static_cast<U8>(c)];
   }
   return ret;
}

U32 _StringTable::hashStringn(const char* str, S32 len)
{
   if (sgInitTable)
      initTolowerTable();

   U32 ret = 0;
   char c;
   while((c = *str++) != 0 && len--) {
      ret <<= 1;
      ret ^= sgHashTable[static_cast<U8>(c)];
   }
   return ret;
}

//--------------------------------------
// ElfScript 0.6:
_StringTable::_StringTable()
{
      buckets = nullptr;
      numBuckets = 0;
      itemCount = 0;

      resize(csm_stInitSize);
}


// orig:
// _StringTable::_StringTable()
// {
//    buckets = (Node **) dMalloc(csm_stInitSize * sizeof(Node *));
//    for(U32 i = 0; i < csm_stInitSize; i++) {
//       buckets[i] = 0;
//    }
//
//    numBuckets = csm_stInitSize;
//    itemCount = 0;
// }

//--------------------------------------
_StringTable::~_StringTable()
{
   dFree(buckets);
}


//--------------------------------------
void _StringTable::create()
{
   //AssertFatal(_gStringTable == NULL, "StringTable::create: StringTable already exists.");
   if(!_gStringTable)
   {
      _gStringTable = new _StringTable;
      _gStringTable->_EmptyString = _gStringTable->insert("");
   }
}


//--------------------------------------
void _StringTable::destroy()
{
   AssertFatal(StringTable != NULL, "StringTable::destroy: StringTable does not exist.");
   delete _gStringTable;
   _gStringTable = NULL;
}


//--------------------------------------
// ElfScript 0.6:
StringTableEntry _StringTable::insert(const char* _val, const bool caseSens)
{
      const char *val = _val;
      if( val == NULL )
            val = "";

      U32 key = hashString(val);
      U32 valLen = dStrlen(val);
      U32 mask = numBuckets - 1;
      U32 idx = key & mask;

      while(buckets[idx].val != nullptr) {

            if(buckets[idx].len == valLen) {

                  if(caseSens && !String::compare(buckets[idx].val, val))
                        return buckets[idx].val;
                  else if(!caseSens && !dStricmp(buckets[idx].val, val))
                        return buckets[idx].val;
            }

            idx = (idx + 1) & mask;
      }

      U32 allocLen = valLen + 1;
      buckets[idx].len = valLen;

      char* newStr = (char*) mempool.alloc(allocLen);
      dStrcpy(newStr, val, allocLen);
      buckets[idx].val = newStr;

      itemCount++;

      if(itemCount > (numBuckets * 3) / 4) {
            resize(numBuckets * 2);
      }

      return buckets[idx].val;
}

// ORIG:
// StringTableEntry _StringTable::insert(const char* _val, const bool caseSens)
// {
//    // PROFILE_SCOPE(StringTableInsert);
//
//    // Added 3/29/2007 -- If this is undesirable behavior, let me know -patw
//    const char *val = _val;
//    if( val == NULL )
//       val = "";
//    //-
//
//    Node **walk, *temp;
//    U32 key = hashString(val);
//    walk = &buckets[key % numBuckets];
//    while((temp = *walk) != NULL)   {
//       if(caseSens && !String::compare(temp->val, val))
//          return temp->val;
//       else if(!caseSens && !dStricmp(temp->val, val))
//          return temp->val;
//       walk = &(temp->next);
//    }
//    char *ret = 0;
//    if(!*walk) {
//       dsize_t valLen = dStrlen(val) + 1;
//       *walk = (Node *) mempool.alloc(sizeof(Node));
//       (*walk)->next = 0;
//       (*walk)->val = (char *) mempool.alloc(valLen);
//       dStrcpy((*walk)->val, val, valLen);
//       ret = (*walk)->val;
//       itemCount ++;
//    }
//    if(itemCount > 2 * numBuckets) {
//       resize(4 * numBuckets - 1);
//    }
//    return ret;
// }

//--------------------------------------
StringTableEntry _StringTable::insertn(const char* src, S32 len, const bool  caseSens)
{
   char val[256];
   AssertFatal(len < 255, "Invalid string to insertn");
   dStrncpy(val, src, len);
   val[len] = 0;
   return insert(val, caseSens);
}

//--------------------------------------
StringTableEntry _StringTable::lookup(const char* val, const bool caseSens)
{
      if (val == NULL)
            val = "";

      U32 key = hashString(val);
      U32 valLen = dStrlen(val);
      U32 mask = numBuckets - 1;
      U32 idx = key & mask;

      while (buckets[idx].val != nullptr) {
            if (buckets[idx].len == valLen) {
                  if (caseSens && !String::compare(buckets[idx].val, val))
                        return buckets[idx].val;
                  else if (!caseSens && !dStricmp(buckets[idx].val, val))
                        return buckets[idx].val;
            }
            idx = (idx + 1) & mask;
      }

      return NULL;
}

StringTableEntry _StringTable::lookupn(const char* val, S32 len, const bool caseSens)
{
      if (val == NULL || len <= 0) {
            val = "";
            len = 0;
      }

      U32 key = hashStringn(val, len);
      U32 mask = numBuckets - 1;
      U32 idx = key & mask;
      U32 valLen = (U32)len;

      while (buckets[idx].val != nullptr) {

            if (buckets[idx].len == valLen) {
                  if (caseSens && !dStrncmp(buckets[idx].val, val, valLen))
                        return buckets[idx].val;
                  else if (!caseSens && !dStrnicmp(buckets[idx].val, val, valLen))
                        return buckets[idx].val;
            }

            idx = (idx + 1) & mask;
      }

      return NULL;
}


// orig:
// StringTableEntry _StringTable::lookup(const char* val, const bool  caseSens)
// {
//    // PROFILE_SCOPE(StringTableLookup);
//
//    Node **walk, *temp;
//    U32 key = hashString(val);
//    walk = &buckets[key % numBuckets];
//    while((temp = *walk) != NULL)   {
//       if(caseSens && !String::compare(temp->val, val))
//             return temp->val;
//       else if(!caseSens && !dStricmp(temp->val, val))
//          return temp->val;
//       walk = &(temp->next);
//    }
//    return NULL;
// }
//
// //--------------------------------------
// StringTableEntry _StringTable::lookupn(const char* val, S32 len, const bool  caseSens)
// {
//    // PROFILE_SCOPE(StringTableLookupN);
//
//    Node **walk, *temp;
//    U32 key = hashStringn(val, len);
//    walk = &buckets[key % numBuckets];
//    while((temp = *walk) != NULL) {
//       if(caseSens && !dStrncmp(temp->val, val, len) && temp->val[len] == 0)
//          return temp->val;
//       else if(!caseSens && !dStrnicmp(temp->val, val, len) && temp->val[len] == 0)
//          return temp->val;
//       walk = &(temp->next);
//    }
//    return NULL;
// }

//--------------------------------------
// ElfScript 0.6:
void _StringTable::resize(const U32 _newSize)
{
      U32 newSize = _newSize ? _newSize : 1;

      if ((newSize & (newSize - 1)) != 0) {
            newSize--;
            newSize |= newSize >> 1;
            newSize |= newSize >> 2;
            newSize |= newSize >> 4;
            newSize |= newSize >> 8;
            newSize |= newSize >> 16;
            newSize++;
      }

      StringNode* oldBuckets = buckets;
      U32 oldNumBuckets = numBuckets;

      buckets = (StringNode*) dMalloc(newSize * sizeof(StringNode));
      for(U32 i = 0; i < newSize; i++) {
            buckets[i].val = nullptr;
            buckets[i].len = 0;
      }
      numBuckets = newSize;
      U32 mask = numBuckets - 1;

      if (oldBuckets == nullptr) {
            return;
      }

      for(U32 i = 0; i < oldNumBuckets; i++) {
            if(oldBuckets[i].val != nullptr) {

                  U32 key = hashString(oldBuckets[i].val);
                  U32 idx = key & mask;

                  while(buckets[idx].val != nullptr) {
                        idx = (idx + 1) & mask;
                  }

                  buckets[idx] = oldBuckets[i];
            }
      }

      dFree(oldBuckets);
}


// ORIG
// // void _StringTable::resize(const U32 _newSize)
// // {
// //    /// avoid a possible 0 division
// //    const U32 newSize = _newSize ? _newSize : 1;
// //
// //    Node *head = NULL, *walk, *temp;
// //    U32 i;
// //    // reverse individual bucket lists
// //    // we do this because new strings are added at the end of bucket
// //    // lists so that case sens strings are always after their
// //    // corresponding case insens strings
// //
// //    for(i = 0; i < numBuckets; i++) {
// //       walk = buckets[i];
// //       while(walk)
// //       {
// //          temp = walk->next;
// //          walk->next = head;
// //          head = walk;
// //          walk = temp;
// //       }
// //    }
// //    buckets = (Node **) dRealloc(buckets, newSize * sizeof(Node));
// //    for(i = 0; i < newSize; i++) {
// //       buckets[i] = 0;
// //    }
// //    numBuckets = newSize;
// //    walk = head;
// //    while(walk) {
// //       U32 key;
// //       temp = walk;
// //
// //       walk = walk->next;
// //       key = hashString(temp->val);
// //       temp->next = buckets[key % newSize];
// //       buckets[key % newSize] = temp;
// //    }
// // }

