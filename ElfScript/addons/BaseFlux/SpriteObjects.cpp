
// ElfScript
#include "console/engineAPI.h"
#include "math/mMathFn.h"
#include "math/mMathConsoleVector.h"

// BaseFluxElf
#include "Camera2DObject.h"
#include "TextureObject.h"
#include "SpriteObjects.h"
// SDL3Elf
#include "ConsoleTypes.h"
// BaseFlux
#include "BaseFlux/Collision.h"

namespace BaseFluxElf {

    // =============================================================================
    // SpriteBaseObject
    // a different approch as GameObject. Store:
    //  - RecF src rectangle
    //  - RecF dest rectangle
    //  - F32 angle
    //  - Point2F centerPoint
    //  - S32 flip (mode)
    //  - Color color
    // =============================================================================
    IMPLEMENT_CONOBJECT(SpriteBaseObject);

    void SpriteBaseObject::CenterCenterPoint(){
        mCenterPoint.points[0] = mDstRect.points[2] / 2.0;
        mCenterPoint.points[1] = mDstRect.points[3] / 2.0;
    }

    void SpriteBaseObject::initPersistFields() {
        Parent::initPersistFields();
        addField("srcRect", TypeVector, Offset(mSrcRect,SpriteBaseObject), "Rect on Texture.");
        addField("srcX", TypeF32, Offset(mSrcRect.points[0],SpriteBaseObject));
        addField("srcY", TypeF32, Offset(mSrcRect.points[1],SpriteBaseObject));
        addField("srcWidth", TypeF32, Offset(mSrcRect.points[2],SpriteBaseObject));
        addField("srcHeight", TypeF32, Offset(mSrcRect.points[3],SpriteBaseObject));

        addField("dstRect", TypeVector, Offset(mDstRect,SpriteBaseObject), "Rect on Render Target.");
        addField("x", TypeF32, Offset(mDstRect.points[0],SpriteBaseObject));
        addField("y", TypeF32, Offset(mDstRect.points[1],SpriteBaseObject));
        addField("width", TypeF32, Offset(mDstRect.points[2],SpriteBaseObject));
        addField("height", TypeF32, Offset(mDstRect.points[3],SpriteBaseObject));

        addField("angle", TypeF32, Offset(mAngle,SpriteBaseObject)
            , "Rotation Angle on Render Target (degree)");
        addField("centerPoint", TypeVector, Offset(mCenterPoint,SpriteBaseObject)
           , "The Centerpoit of the Rotation - when angle is set.");
        addField("flip", TypeS32, Offset(mFlip,SpriteBaseObject)
            , "Flip mode on Render Target 0..3, see also SDL_FlipMode");

        addField("color", TypeColor, Offset(mColor,SpriteBaseObject)
            , "Color in Byte representation default WHITE = 255 255 255 255");
        addField("r", TypeU8, Offset(mColor.r,SpriteBaseObject));
        addField("g", TypeU8, Offset(mColor.g,SpriteBaseObject));
        addField("b", TypeU8, Offset(mColor.b,SpriteBaseObject));
        addField("a", TypeU8, Offset(mColor.a,SpriteBaseObject));

        addField("visible", TypeBool, Offset(mVisible,SpriteBaseObject)
        , "Flag for Rendering with SpriteGroup or manually checked.");

        addField("ScreenRect", TypeVector, Offset(mScreenRect,SpriteBaseObject)
        , "Translated rect when using camera translate");
        addField("ScreenCenterPoint", TypeVector, Offset(mScreenCenterPoint,SpriteBaseObject), "Translated point when using camera translate");
    }
    DefineEngineMethod(SpriteBaseObject, CenterCenterPoint,void, (),
                       ,"center the centerPoint inside the dstRect") {
        object->CenterCenterPoint();
    }

    DefineEngineMethod(SpriteBaseObject, colorFromHSV, void, (S32 hue, F32 saturation, F32 value, U8 alpha)
    , (255), "Set the color from hue(0..359), sat (0..1), value(0..1). The Rainbow function ;)") {
        object->mColor = fromHSV(hue, saturation, value, alpha);
    }
    // -------------------------------------------------------------------------
    // -------------------------------------------------------------------------
    bool SpriteObject::Draw(TextureObject* texture, Camera2DObject* camera, bool ignoreVisible)
    {

        if (!this->mVisible && !ignoreVisible) return false;

        if (!texture) return false;

        // autosize src if not set or invalid
        if (this->mSrcRect.points[2] <= 0.f || this->mSrcRect.points[3] <= 0.f) {
            this->mSrcRect = {
                0.f,
                0.f,
                (F32)texture->get()->w,
                (F32)texture->get()->h
            };
        }
        if (camera) {
            // Translate also make a frustum check :
            if (camera->Translate(this)) {
                return texture->DrawRotatedSrcDstRect(
                    toRectF(this->mSrcRect),
                    toRectF(this->mScreenRect),
                    this->mAngle,
                    toPoint2F( this->mScreenCenterPoint),
                    (SDL_FlipMode)this->mFlip,
                    this->mColor,
                    this->mBlendMode
                );
            }
        } else {
            return texture->DrawRotatedSrcDstRect(
                toRectF(this->mSrcRect),
                toRectF(this->mDstRect),
                this->mAngle,
                toPoint2F(this->mCenterPoint),
                (SDL_FlipMode)this->mFlip,
                this->mColor,
                this->mBlendMode
            );
        }
        return false;
    }

    // -------------------------------------------------------------------------
    bool SpriteObject::Draw(Camera2DObject* camera, bool ignoreVisible) {
        if (!this->mVisible && !ignoreVisible) return false;
        // we have to fetch the texture
        TextureObject* texObject = dynamic_cast<TextureObject*>(Sim::findObject(this->mTextureObjectId));
        if (!texObject) return false;

        Draw(texObject, camera, ignoreVisible);
        return true;
    }

    // -------------------------------------------------------------------------
    bool SpriteObject::solveCollideRect(RectF otherRect, bool stopMovement) {
        BaseFlux::Collision::Info info;
        if (BaseFlux::Collision::getInfoRectF(toRectF(mDstRect), otherRect, info)) {

            RectF r = toRectF(mDstRect);
            BaseFlux::Collision::solveOberlap(r, info);
            mDstRect = toConsoleVector(r);

            if (stopMovement) {
                mVelo.points[0] = 0.f;
                mVelo.points[1] = 0.f;
            }
            return true;
        }
        return false;
    }

    // -------------------------------------------------------------------------
    bool SpriteObject::solveCollideLine(F32 x1, F32 y1, F32 x2, F32 y2, F32 bounceStrength) {

        BaseFlux::Collision::Info info;
        if ( BaseFlux::Collision::getInfoRectLine(toRectF(mDstRect), x1, y1, x2, y2 , info))
        {
            RectF r = toRectF(mDstRect);
            BaseFlux::Collision::solveOberlap(r, info);
            mDstRect = toConsoleVector(r);

            if (bounceStrength > 0.f) {
                // float dotProduct = (mVelo.x * info.mNormal.x) + (mVelo.y * info.mNormal.y);
                float dotProduct = (mVelo.points[0] * info.mNormal.x) + (mVelo.points[1] * info.mNormal.y);
                if (dotProduct < 0.0f) {
                    float impulse = -(1.0f + bounceStrength) * dotProduct;
                    mVelo.points[0] += info.mNormal.x * impulse;
                    mVelo.points[1] += info.mNormal.y * impulse;
                }
            }
            return true;
        }
        return false;
    }

    // -------------------------------------------------------------------------
    void SpriteObject::moveOrbital(Point2F ankerPoint, F32 gravity, F32 softening, F32 maxSpeed, F32 dt) {
        if (dt <= 0.f ) dt =(F32)BaseFlux::getFrameTime();

        Point2F p = {mDstRect.points[0], mDstRect.points[1]};
        Point2F direction = ankerPoint - p;

        F32 distance = length(direction);

        // F32 G = 9.81f;

        if (distance > 0.0001f) {
            normalize(direction);
            F32 gravityPull = (gravity * 1000.f) / (distance * distance + softening);
            mVelo.points[0] += direction.x * gravityPull * dt;
            mVelo.points[1] += direction.y * gravityPull * dt;
        }

        // F32 drag = 0.995f;
        // mVelo.x *= drag;
        // mVelo.y *= drag;

        // F32 currentSpeed = ElfMath::mSqrt(mVelo.x * mVelo.x + mVelo.y * mVelo.y);
        F32 currentSpeed = ElfMath::Vec2Length(mVelo);
        if (currentSpeed > maxSpeed && currentSpeed > 0.0f) {
            mVelo.points[0] = (mVelo.points[0] / currentSpeed) * maxSpeed;
            mVelo.points[1] = (mVelo.points[1] / currentSpeed) * maxSpeed;
        }

        moveLinear(dt);

    }

    // -------------------------------------------------------------------------
    void SpriteObject::moveGravity(F32 gravityX, F32 gravityY, F32 dt){
        if (dt <= 0.f ) dt =(F32)BaseFlux::getFrameTime();
        mVelo.points[0] += gravityX * dt;
        mVelo.points[1] += gravityY * dt;
        moveLinear(dt);
    }

    // -------------------------------------------------------------------------
    void SpriteObject::moveLinear(F32 dt){
        if (dt <= 0.f ) dt =(F32)BaseFlux::getFrameTime();
        mDstRect.points[0] += mVelo.points[0] * dt;
        mDstRect.points[1] += mVelo.points[1] * dt;
    }

    // -------------------------------------------------------------------------
    ConsoleVector SpriteObject::getCenter2F(){
        return { mDstRect.points[0] + mDstRect.points[2] / 2.0f , mDstRect.points[1] + mDstRect.points[3] / 2.0f, 0.f, 0.f };
    }

    // -------------------------------------------------------------------------
    void SpriteObject::initPersistFields(){
        Parent::initPersistFields();
        addField("velocity", TypePoint2F, Offset(mVelo,SpriteObject), "velocity as point see also veloX veloY");
        addField("veloX", TypeF32, Offset(mVelo.points[0],SpriteObject), "X velocity");
        addField("veloY", TypeF32, Offset(mVelo.points[1],SpriteObject), "Y velocity");
        addField("layer", TypeU32, Offset(mLayer,SpriteObject), "Layer of the Sprite. ");
        addField("blendMode", TypeU32, Offset(mBlendMode,SpriteObject), "SDL_BLENDMODE_ overwrite the Texture blendmode\ndefault SDL_BLENDMODE_INVALID => not overwritten");
        addField("textureObjectId", TypeU32, Offset(mTextureObjectId,SpriteObject), "Id of the Texture Object. Must be set after loading from file. The id is not persistent!");
        addField("textureName", TypeString, Offset(mTextureName,SpriteObject), "optional Texturename");
    }
    // -------------------------------------------------------------------------
    // -------------------------------------------------------------------------
    IMPLEMENT_CONOBJECT(SpriteObject);

    DefineEngineMethod(SpriteObject, getCenter2F, ConsoleVector, (), ,"get the center point") {
        return object->getCenter2F();
    }
    // -------------------------------------------------------------------------
    // Draw
    // -------------------------------------------------------------------------
    DefineEngineMethod(SpriteObject, Draw, bool, (U32 camera2DObjectId),(0),
                       "Draw the Texture") {
        Camera2DObject* camera = nullptr;
        if (camera2DObjectId > 0) {
            camera = dynamic_cast<Camera2DObject*>(Sim::findObject(camera2DObjectId));
        }
        return object->Draw(camera);

    }
    // -------------------------------------------------------------------------
    // Movement
    // -------------------------------------------------------------------------
    DefineEngineMethod(SpriteObject, moveLinear, void, (F32 dt ),(-1.f) ,"Move Linear by velocity") {
        object->moveLinear(dt);
    }
    DefineEngineMethod(SpriteObject, moveGravity,void, (F32 gravityX, F32 gravityY, F32 dt),
                    (0.f, 9.81f, -1.f) ,"Move with gravity acceleration default: 0,9.81") {
        object->moveGravity(gravityX, gravityY, dt);
    }
    DefineEngineMethod(SpriteObject, moveOrbital, void,
                    (Point2F ankerPoint, F32 gravity, F32 softening, F32 maxSpeed, F32 dt),
                    (10.f, 150.f, 350.f, -1.f) ,"Orbital Movement around ankerPoint") {
        object->moveOrbital(ankerPoint, gravity, softening, maxSpeed, dt);
    }
    // -------------------------------------------------------------------------
    // Collistion solver
    // -------------------------------------------------------------------------
    DefineEngineMethod(SpriteObject, solveCollideLine,bool, (RectF linePoints, F32 bounceStrength)
    ,(0.2f),"check collision agains a line .. using Points as parameter x1,x2,y1,y2 (packed in a RectF)")
    {
        return object->solveCollideLine(linePoints.x, linePoints.y, linePoints.w, linePoints.h, bounceStrength);
    }
    DefineEngineMethod(SpriteObject, solveCollideRect,bool, (RectF otherRect, bool stopMovement)
    ,(false),"Check collide and move out")
    {
        return object->solveCollideRect(otherRect, stopMovement);
    }
    // -------------------------------------------------------------------------
    // --- SpriteGroup ---
    // -------------------------------------------------------------------------
     IMPLEMENT_CONOBJECT(SpriteGroup);
    void SpriteGroup::addObject( SimObject* obj ){
        // NOTE: make sure we only add SpriteObject's
        SpriteObject* sprite = dynamic_cast<SpriteObject*>(obj);
        if (!sprite) return;
        Parent::addObject(obj);
    }

    // -----------------------------------------------------------------------------
    void SpriteGroup::drawBatch(Camera2DObject* camera) {
        TextureObject* texture = nullptr;
        mTextureMap.clear(); //this is slower but keep dangling pointers away
        lock();
        for( SimSet::iterator iter = begin(); iter != end(); ++ iter ) {
            SpriteObject* sprite = static_cast<SpriteObject*>(*iter);

            if (!sprite->mVisible) continue;

            if (sprite->mTextureObjectId == 0) continue;
            texture  = mTextureMap[sprite->mTextureObjectId];

            if (!texture) {
                texture = dynamic_cast<TextureObject*>(Sim::findObject(sprite->mTextureObjectId));
                if (!texture) {
                    Con::errorf("Sprite: %d Invalid Texture ID: %d ==> i set the sprite to invisible!"
                    ,sprite->getId(),sprite->mTextureObjectId );
                    sprite->mVisible = false;
                    continue;
                }
                mTextureMap[sprite->mTextureObjectId] = texture;
            }


            sprite->Draw(texture, camera);

        }
        unlock();
    }


    // -----------------------------------------------------------------------------
    void SpriteGroup::drawAtlasBatch(TextureObject* texture, Camera2DObject* camera) {
        if (!texture) return;
        lock();
        for( SimSet::iterator iter = begin(); iter != end(); ++ iter ) {
            SpriteObject* sprite = static_cast<SpriteObject*>(*iter);

            if (!sprite->mVisible) continue;

            sprite->Draw(texture, camera);

        }
        unlock();
    }


    // -----------------------------------------------------------------------------
    // Layer
    S32 QSORT_CALLBACK SpriteGroup::compare_Layer( const void* a, const void* b )
    {
        const SpriteObject * cp_a = *(const SpriteObject**)a;
        const SpriteObject * cp_b = *(const SpriteObject**)b;

        if (cp_a->mLayer == cp_b->mLayer) return 0;

        if (cp_a->mLayer > cp_b->mLayer)
            return -1;
        else
            return 1;

    }
    void SpriteGroup::sortLayers()
    {
        lock();
        dQsort( mObjectList.address(), size(), sizeof(SimObject *), SpriteGroup::compare_Layer );
        unlock();
    }

    DefineEngineMethod(SpriteGroup, sortLayers, void, (),,"Sort SpriteObject's by layer") {
        object->sortLayers();
    }
    // -----------------------------------------------------------------------------
    // DrawBatch and Camera
    // -----------------------------------------------------------------------------
    DefineEngineMethod(SpriteGroup, drawBatch, bool, (S32 camera2DObjectId), (0),
                        "Draw all sprites in the group with option camera object") {
        Camera2DObject* camObject = nullptr;
        if (camera2DObjectId > 0) {
            camObject = dynamic_cast<Camera2DObject*>(Sim::findObject(camera2DObjectId));
        }
        object->drawBatch(camObject);
        return true;
    }

    DefineEngineMethod(SpriteGroup, drawAtlasBatch, bool, (S32 texObjectID, S32 camera2DObjectId), (0),
                        "Draw all sprites in the group with option camera object") {
        TextureObject* texObject = dynamic_cast<TextureObject*>(Sim::findObject(texObjectID));
        if (!texObject) return false;

        Camera2DObject* camObject = nullptr;
        if (camera2DObjectId > 0) {
            camObject = dynamic_cast<Camera2DObject*>(Sim::findObject(camera2DObjectId));
        }
        object->drawAtlasBatch(texObject,camObject);
        return true;
    }


}
