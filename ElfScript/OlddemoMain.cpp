#include <cstdio>
#include "platform/platform.h"
#include "core/frameAllocator.h"
#include "core/strings/stringFunctions.h"
#include "core/strings/stringTable.h"
#include "core/util/tVector.h"

#include "core/strings/String.h"

// testing includes from unfinshed port
#include "platform/typetraits.h"
#include "core/util/autoPtr.h"

int main() {

    printf("Startup ....\n");

    printf("\n1. Platform -----------------------------------------\n");
    // types loaded ?
    S32 myInt = -66; U32 myUInt = 66; F32 myFloat = 66.66f;
    char myChar[66];
    // memory loaded ?
    dMemset(myChar, 0,66);
    dMemset(myChar, 'A',8);
    dMemset(myChar + 8, 'B',8);
    dMemset(myChar + 16, 'C',8);

    printf(" * Types loaded: %d, %d, %f\n", myInt, myUInt, myFloat);
    printf(" * Memory test: %s\n", myChar);
    printf(" * Platform Stub test:"); Platform::postQuitMessage(0);


    printf("\n2. Basic Core -----------------------------------------\n");
    AlignedBufferAllocator<U32> alloc32;
    alloc32.initWithElements(new U32[10], 10);
    void* ptr = alloc32.allocBytes(2);
    // Reset back to start
    alloc32.setPosition(0);
    printf(" * frameAllocator test: size=%d (10) pointer:%p\n"
        , alloc32.getSize(), (void*) ptr);

    printf("\n3. StringTable && stringFunctions ------------------------\n");
    dPrintf(" * Test stringFunctions: %d %f (now with dPrintf)\n", dAtoi("66"), dAtof("66.66"));
    dPrintf(" * Test stringTable: %s\n", StringTable->insert("Hello World - ElfScript"));

    dPrintf("\n4. Vector ---------------------------------------------\n");

    Vector<S32> myNumbers;
    dPrintf(" * Test Vector countdown: ");
    for(S32 i = 10; i > 0; i--) { myNumbers.push_back(i); }
    for (S32 i = 0; i < myNumbers.size(); i++) dPrintf("%d ", myNumbers[i]);
    dPrintf("\n");

    dPrintf("\n5/6. String ---------------------------------------------\n");
    String myString = "Hello ElfString:D, this String class is amazing!";
    myString += " append like with std::string :)";
    dPrintf(" * String: %s\n",myString.c_str());
    myString = "Hello";
    if (myString.compare("hello", 0,  String::NoCase|String::Left ) == 0) {
        dPrintf(" * String: compare Hello with hello match noCase - thats cool.\n");
    } else {
        dPrintf (" * String compare failed !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    }

    printf("\n:: Bye Bye - reached the end. good sign -----------------\n");





    return 0;
}
