#include <cstdio>
#include "platform/platform.h"

int main() {

    printf("Startup ....\n");

    printf("1. Platform -----------------------------------------\n");
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



    // Bye Bye
    return 0;
}
