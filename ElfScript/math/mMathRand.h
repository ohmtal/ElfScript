//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#pragma once
#include "mConstants.h"
#include <random>
#include <algorithm>

namespace ElfMath {

inline S32 mRandI_safe(S32 x, S32 y){

    static thread_local std::mt19937 gen(std::random_device{}());
    static thread_local std::uniform_int_distribution<int> dist;
    return dist(gen, std::uniform_int_distribution<int>::param_type{x, y});


}
inline F32 mRandF_safe(F32 min, F32 max){
    auto range = std::minmax(min, max);

    static thread_local std::mt19937 gen(std::random_device{}());
    static thread_local std::uniform_real_distribution<float> dist;

    return dist(gen, std::uniform_real_distribution<float>::param_type{range.first, range.second});
}
inline F32 mRandF_safe() {
    static thread_local std::mt19937 gen(std::random_device{}());
    static thread_local std::uniform_real_distribution<float> dist(0.f, 1.f);
    return dist(gen);
}


// ------- not thead safe: --------
inline S32 mRandI(S32 x, S32 y){

    static std::mt19937 gen(std::random_device{}());
    static std::uniform_int_distribution<int> dist;
    return dist(gen, std::uniform_int_distribution<int>::param_type{x, y});
}

inline F32 mRandF(F32 min, F32 max){
    auto range = std::minmax(min, max);
    static std::mt19937 gen(std::random_device{}());
    static std::uniform_real_distribution<float> dist;
    return dist(gen, std::uniform_real_distribution<float>::param_type{range.first, range.second});
}

inline F32 mRandF() {
    static std::mt19937 gen(std::random_device{}());
    static std::uniform_real_distribution<float> dist(0.f, 1.f);
    return dist(gen);
}

inline F64 mRandF64() {
    static std::mt19937_64 mRandGen64{ std::random_device{}() };
    static std::uniform_real_distribution<F64> mRandDist64{ 0.0, 1.0 };
    return mRandDist64(mRandGen64);
}

}
