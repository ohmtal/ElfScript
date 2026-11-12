//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// BaseFluxElf Camera2D
//----------------------------------------------------------------------------
#pragma once

#include "console/engineAPI.h"
#include "ConsoleTypes.h"
#include "SpriteObjects.h"

namespace BaseFluxElf {


    // =============================================================================
    //  Camera2DObject
    // This does not work automaticly it's used to translate a destination Rectangle
    // =============================================================================
    class Camera2DObject: public SimObject
    {
        typedef SimObject Parent;

        Point2F mCenter = {0.f, 0.f};

    public:
        DECLARE_CONOBJECT(Camera2DObject);

        F32 mX = 0.f;
        F32 mY = 0.f;
        F32 mZoom = 1.f;

        bool onAdd() override;

        static void initPersistFields();

        void Reset();

        // must be called before !!!
        void Begin();

        // -------------------------------------------------------------------------
        // Screen Coordinates -> World Coordinates
        // (example usage: mouse point)
        Point2F ScreenToWorld(const Point2F& screenPos);
        // -------------------------------------------------------------------------
        // Fast Frustum Culling Check (Uses AABB intersection in World Space)
        bool IsInView(const RectF& worldRect);
        // -------------------------------------------------------------------------
        // Translate the WorldRect to Render Rect
        void TranslateWorldRect(RectF& rect);

        // Translate the rotation center point when zoomed.
        void TranslateCenterPoint(Point2F& centerPoint);

        // All in One call
        bool Translate(RectF& rect, Point2F& centerPoint);
        // -------------------------------------------------------------------------
        // Translate a SpriteBaseObject
        bool Translate(SpriteBaseObject* sprite);

        // get the Translated mouse position !
        Point2F GetMousePosition();

    };





}
