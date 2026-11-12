//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// BaseFluxElf Texture
//----------------------------------------------------------------------------
#pragma once

#include "BaseFlux/Main.h"
#include "console/engineAPI.h"
#include "console/simSet.h"
#include "console/engineAPI.h"
#include "ConsoleTypes.h"
#include "ColorConstants.h"


namespace BaseFluxElf {
// =============================================================================
//  TextureObject
//  As group to AtlasEntryObject's
// =============================================================================
class AtlasEntryObject : public SimObject {
  typedef SimObject Parent;
public:
    DECLARE_CONOBJECT(AtlasEntryObject);
    RectF mRect;
    static void initPersistFields();
};


class TextureObject : public SimGroup
{
    typedef SimGroup Parent;
    StringTableEntry mFileName=nullptr;
    SDL_Texture* mTexture = nullptr;
    bool mIsTargetTexture = false;
    bool mOwnsTexture = false; // we need to take care or removing!

    Color mCurrentColor = BLACK;
    SDL_BlendMode mCurrentBlendMode = SDL_BLENDMODE_INVALID; //trigger inital setup

    void addObject( SimObject* obj ) override;

    void unload();


public:
    DECLARE_CONOBJECT(TextureObject);

    SDL_BlendMode mDefaultBlendMode = SDL_BLENDMODE_BLEND;

    TextureObject();
    bool onAdd() override;
    void onRemove() override;

    bool load(String fileName);
    SDL_Texture* get();
    bool set(SDL_Texture* texture, bool isTargetTexture);

    static void initPersistFields();
    // ----------------------------------------------------
    bool SaveImage( const char* fileName, bool asPNG = true);
    RectF getAtlasRect(S32 rowCount, S32 colCount, S32 index);
    void setBlendModeAndColor(Color color, SDL_BlendMode mode);
    bool DrawRotatedSrcDstRect(RectF srcRect, RectF dstRect,
            F32 angle, Point2F centerPoint,
            SDL_FlipMode flip = SDL_FLIP_NONE,
            Color color=WHITE, SDL_BlendMode blendMode = SDL_BLENDMODE_INVALID);
    bool DrawRotatedCentered(F32 x, F32 y, F32 angle,
            SDL_FlipMode flip = SDL_FLIP_NONE, Color color=WHITE,
            SDL_BlendMode blendMode = SDL_BLENDMODE_INVALID);
    bool DrawSrcDstRect(RectF srcRect, RectF dstRect, Color color=WHITE, SDL_BlendMode blendMode = SDL_BLENDMODE_INVALID);
    bool DrawRect( RectF dstRect, Color color=WHITE, SDL_BlendMode blendMode = SDL_BLENDMODE_INVALID);
    bool DrawCentered( F32 x, F32 y, Color color=WHITE, SDL_BlendMode blendMode = SDL_BLENDMODE_INVALID);
};


} //namespace
