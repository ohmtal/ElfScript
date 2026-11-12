//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// BaseFluxElf Sprites
//----------------------------------------------------------------------------
#pragma once

#include "console/engineAPI.h"
#include "ConsoleTypes.h"
#include "ColorConstants.h"
#include "console/simSet.h"
#include "core/util/tDictionary.h" //Map

namespace BaseFluxElf {

    class Camera2DObject;
    class TextureObject;

    class SpriteBaseObject :public SimObject
    {
        typedef SimObject Parent;
    public:
        DECLARE_CONOBJECT(SpriteBaseObject);
        ConsoleVector   mSrcRect = { 0.f, 0.f, 0.f, 0.f};
        ConsoleVector   mDstRect = { 0.f, 0.f, 0.f, 0.f};
        F32     mAngle   = 0.f;
        ConsoleVector mCenterPoint = {0.f, 0.f};
        S32     mFlip = 0; // (SDL_FlipMode)
        Color   mColor = WHITEBLEND;
        bool    mVisible = true;

        // this is used for camera !!!!
        ConsoleVector   mScreenRect = { 0.f, 0.f, 0.f, 0.f};
        ConsoleVector mScreenCenterPoint = { 0.f, 0.f};

        static void initPersistFields();

        // center the centerpoint by dstRect
        void CenterCenterPoint();
    }; //CLASS


    // =============================================================================
    //  SpriteObject
    // =============================================================================
    class SpriteObject :public SpriteBaseObject
    {
        typedef SpriteBaseObject Parent;
    public:
        DECLARE_CONOBJECT(SpriteObject);

        ConsoleVector mVelo = {0.f, 0.f , 0.f, 0.f};
        U32     mLayer = 0;
        SDL_BlendMode mBlendMode = SDL_BLENDMODE_INVALID;
        SimObjectId mTextureObjectId = 0;
        StringTableEntry mTextureName = StringTable->EmptyString();


        static void initPersistFields();
        // -------------------------------------------------------------------------
        // RectF getRectF() {
        //     return mDstRect;
        // }
        ConsoleVector getCenter2F();
        // -------------------------------------------------------------------------
        // Movement
        // -------------------------------------------------------------------------
        void moveLinear(F32 dt = -1.f);
        void moveGravity(F32 gravityX, F32 gravityY, F32 dt = -1.f);
        void moveOrbital(Point2F ankerPoint,F32 gravity, F32 softening, F32 maxSpeed, F32 dt = -1.f);
        // -------------------------------------------------------------------------
        // Collistion solver
        // -------------------------------------------------------------------------
        bool solveCollideLine(F32 x1, F32 y1, F32 x2, F32 y2, F32 bounceStrength /*= 0.2f*/);
        bool solveCollideRect(RectF otherRect, bool stopMovement);
        // -------------------------------------------------------------------------

        bool Draw(Camera2DObject* camera = nullptr , bool ignoreVisible = false);
        // called from DrawBatch/drawAtlasBatch
        bool Draw(TextureObject* texture,  Camera2DObject* camera = nullptr , bool ignoreVisible = false);
        // -------------------------------------------------------------------------
    };

    // =============================================================================
    //  SpriteGroup
    //  - A Group which only accepts SpriteObjects
    //  - NOTE: drawAtlasBatch accept only one Texture - it's desinged for AtlasTextures!
    // =============================================================================
    class SpriteGroup : public SimGroup
    {
        typedef SimGroup Parent;
        Map<U32, TextureObject*> mTextureMap;

    public:
        DECLARE_CONOBJECT(SpriteGroup);

        SpriteGroup() {
            mTextureMap.clear();
        }
        void addObject( SimObject* obj ) override;
        void drawBatch(Camera2DObject* camera = nullptr);
        void drawAtlasBatch(TextureObject* texture, Camera2DObject* camera = nullptr);
        void sortLayers();

    private:
        static S32 QSORT_CALLBACK compare_Layer( const void* a, const void* b );

    };

}
