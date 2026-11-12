#include "console/engineAPI.h"

#include "Helpers.h"
#include "SpriteObjects.h"
#include "Camera2DObject.h"

#include "ConsoleTypes.h"

#include "BaseFlux/Main.h"

extern BaseFlux::Main app;
extern SDL_Point gMousePos;
namespace BaseFluxElf {

    // -----------------------------------------------------------------------------
    bool Camera2DObject::onAdd(){
        Reset(); //<< begin + center
        return Parent::onAdd();
    }

    // -----------------------------------------------------------------------------
    void Camera2DObject::initPersistFields(){
        Parent::initPersistFields();
        addField("x", TypeF32, Offset(mX,Camera2DObject));
        addField("y", TypeF32, Offset(mY,Camera2DObject));
        addField("zoom", TypeF32, Offset(mZoom,Camera2DObject));
    }

    // -----------------------------------------------------------------------------
    void Camera2DObject::Reset(){
        Begin();  //make sure we are up to date!
        mX = mCenter.x;
        mY = mCenter.y;
        mZoom = 1.f;
    }

    // -----------------------------------------------------------------------------
    void Camera2DObject::Begin(){
        Point2I sizeI = GetScreenSize();
        mCenter.x = (F32)sizeI.x / 2.0f;
        mCenter.y = (F32)sizeI.y / 2.0f;
    }

    // -----------------------------------------------------------------------------
    Point2F Camera2DObject::ScreenToWorld(const Point2F& screenPos){
        Point2F worldPos;
        F32 safeZoom = (mZoom == 0.f) ? 0.0001f : mZoom;
        worldPos.x = ((screenPos.x - mCenter.x) / safeZoom) + mX;
        worldPos.y = ((screenPos.y - mCenter.y) / safeZoom) + mY;
        return worldPos;
    }

    // -----------------------------------------------------------------------------
    bool Camera2DObject::IsInView(const RectF& worldRect) {
        F32 safeZoom = (mZoom == 0.f) ? 0.0001f : mZoom;
        F32 halfViewW = mCenter.x / safeZoom;
        F32 halfViewH = mCenter.y / safeZoom;

        F32 camMinX = mX - halfViewW;
        F32 camMaxX = mX + halfViewW;
        F32 camMinY = mY - halfViewH;
        F32 camMaxY = mY + halfViewH;

        F32 objMinX = worldRect.x;
        F32 objMaxX = worldRect.x + worldRect.w;
        F32 objMinY = worldRect.y;
        F32 objMaxY = worldRect.y + worldRect.h;

        return (objMaxX >= camMinX && objMinX <= camMaxX &&
        objMaxY >= camMinY && objMinY <= camMaxY);
    }

    // -----------------------------------------------------------------------------
    void Camera2DObject::TranslateWorldRect(RectF& rect){
        rect.x = (rect.x - mX) * mZoom + mCenter.x;
        rect.y = (rect.y - mY) * mZoom + mCenter.y;
        rect.w *= mZoom;
        rect.h *= mZoom;
    }

    // -----------------------------------------------------------------------------
    void Camera2DObject::TranslateCenterPoint(Point2F& centerPoint){
        centerPoint.x *= mZoom;
        centerPoint.y *= mZoom;
    }

    // -----------------------------------------------------------------------------
    bool Camera2DObject::Translate(RectF& rect, Point2F& centerPoint){
        if (!IsInView(rect)) return false;
        TranslateWorldRect(rect);
        TranslateCenterPoint(centerPoint);
        return true;
    }
    // -----------------------------------------------------------------------------

    bool Camera2DObject::Translate(SpriteBaseObject* sprite){
        // skip invisible
        if (!sprite || !sprite->mVisible) return false;
        sprite->mScreenCenterPoint = sprite->mCenterPoint;
        sprite->mScreenRect = sprite->mDstRect;
        RectF r = toRectF(sprite->mScreenRect);
        Point2F p = toPoint2F(sprite->mScreenCenterPoint);
        bool result = Translate(r,p);
        sprite->mScreenRect = toConsoleVector(r);
        sprite->mScreenCenterPoint = toConsoleVector(p);
        return result;
    }

    // -----------------------------------------------------------------------------
    Point2F Camera2DObject::GetMousePosition(){
        return ScreenToWorld({(F32)gMousePos.x, (F32)gMousePos.y});
    }

    // -----------------------------------------------------------------------------
    IMPLEMENT_CONOBJECT(Camera2DObject);

    // -----------------------------------------------------------------------------
    DefineEngineMethod(Camera2DObject, Begin, void, (),,
            "Refresh the Center position. Must be called on init and when screensize is changed\n"
            "This is called on add. If you do not changes the screen size you do not need to call it at all."
    ) {
        object->Begin();
    }

    DefineEngineMethod(Camera2DObject, Reset, void, (),,
            "Refresh the position and Reset the cam to center postion and zoom 1") {
        object->Reset();
    }
    // -----------------------------------------------------------------------------
    DefineEngineMethod(Camera2DObject, GetMousePosition, Point2F, (),,
            "Get the Mouse position in world Coordinates") {
        return object->GetMousePosition();
    }
    DefineEngineMethod(Camera2DObject, ScreenToWorld, Point2F, (Point2F position),,
                    "get the world position by a screen position") {
        return object->ScreenToWorld(position);
    }

    // -----------------------------------------------------------------------------
    DefineEngineMethod(Camera2DObject, GetInsideSceen, bool, (RectF rect),,
                    "Check is a rect is inside the screen (frustum culling)") {
        return object->IsInView(rect);
    }
    // -----------------------------------------------------------------------------
    // Camera Translate world 2 screen:
    // -----------------------------------------------------------------------------
    DefineEngineMethod(Camera2DObject, TranslateWorldRect, /*RectF*/ ConsoleVector, (RectF rect),,
            "Translate a world rect to screen / render rect ") {
        object->TranslateWorldRect(rect);
        return toConsoleVector(rect);
    }
    DefineEngineMethod(Camera2DObject, TranslateCenterPoint, /*Point2F*/ ConsoleVector, (Point2F point),,
            "Translate a world rect to screen / render rect ") {
        object->TranslateCenterPoint(point);
        return toConsoleVector(point);
    }

    DefineEngineMethod(Camera2DObject, TranslateSpriteBaseObject, bool, (SpriteBaseObject* spriteObj),,
            "Translate to screenRect and screenCenterPoint of a SpriteBaseObject\n"
            "return false if out of view.") {
        if (!spriteObj) {
            Con::errorf("TranslateSpriteBaseObject: SpriteBaseObject invalid");
            return false;
        }
        return object->Translate(spriteObj);
    }


} //namespace
