//-----------------------------------------------------------------------------
// Copyright (c) 2012 GarageGames, LLC
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#pragma once

#if defined(_MSC_VER)
#include <intrin.h>
#endif


inline bool dCompareAndSwap( volatile uintptr_t& refVar, uintptr_t oldVal, uintptr_t newVal )
{
    #if defined(_MSC_VER)
    // --- WINDOWS (MSVC) ---
    #if defined(_WIN64)
    return _InterlockedCompareExchange64((long long*)&refVar, (long long)newVal, (long long)oldVal) == (long long)oldVal;
    #else
    return _InterlockedCompareExchange((long*)&refVar, (long)newVal, (long)oldVal) == (long)oldVal;
    #endif

    #else
    // --- LINUX / MAC (GCC & Clang) ---
    return __sync_bool_compare_and_swap(&refVar, oldVal, newVal);
    #endif
}

template< typename T >
inline bool dCompareAndSwap( T* volatile& refPtr, T* oldPtr, T* newPtr )
{
    return dCompareAndSwap( *reinterpret_cast< volatile uintptr_t* >( &refPtr ), ( uintptr_t ) oldPtr, ( uintptr_t ) newPtr );
}
