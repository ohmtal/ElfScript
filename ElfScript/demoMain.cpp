#include <cstdio>
#include "platform/platform.h"
#include "core/frameAllocator.h"
#include "core/strings/stringFunctions.h"
#include "core/stringTable.h"

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
    printf(" * Test stringFunctions: %d %f\n", dAtoi("66"), dAtof("66.66"));
    printf(" * Test stringTable: %s\n", StringTable->insert("Hello World - ElfScript"));

    printf("\n:: Bye Bye - reached the end. good sign -----------------\n");
    return 0;
}
