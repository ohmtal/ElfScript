#include "TextureObject.h"
#include "console/engineAPI.h"
#include "ConsoleTypes.h"
#include "console/simSet.h"
#include "ColorConstants.h"
#include "BaseFlux/Main.h"
extern BaseFlux::Main app;

namespace BaseFluxElf {


    void AtlasEntryObject::initPersistFields(){
        Parent::initPersistFields();
        addField("rect", TypeRectF, Offset(mRect,AtlasEntryObject));
        addField("x", TypeF32, Offset(mRect.x,AtlasEntryObject));
        addField("y", TypeF32, Offset(mRect.y,AtlasEntryObject));
        addField("width", TypeF32, Offset(mRect.w,AtlasEntryObject));
        addField("height", TypeF32, Offset(mRect.h,AtlasEntryObject));
    }
    IMPLEMENT_CONOBJECT(AtlasEntryObject);
    //----------------------------------------------------------------------------
    void TextureObject::addObject(SimObject* obj){
        // NOTE: make sure we only add AtlasEntryObject's
        AtlasEntryObject* atlasEntry = dynamic_cast<AtlasEntryObject*>(obj);
        if (!atlasEntry) return;
        Parent::addObject(obj);
    }

    void TextureObject::unload(){
        if (mOwnsTexture && mTexture) {
            SDL_DestroyTexture(mTexture);
            mTexture = nullptr;
        }
    }
    //----------------------------------------------------------------------------
    TextureObject::TextureObject(){
        mFileName = StringTable->EmptyString();
    }
    //----------------------------------------------------------------------------

    bool TextureObject::onAdd(){
        mTexture = nullptr;
        if (mFileName && dStrlen(mFileName) > 0) {
            mTexture = app.getTexture(mFileName);
        }
        if (!mTexture) {
            //1 pixel white SDL_Texture as fallback
            if (!mFileName && dStrlen(mFileName) > 0) {
                Con::warnf("TextureObject. Failed to load texture: %s", mFileName);
            }
            mTexture = SDL_CreateTexture(
                app.getRenderer(),
                SDL_PIXELFORMAT_RGBA8888,
                SDL_TEXTUREACCESS_STATIC,
                1, 1
            );
            if (mTexture) {
                uint32_t whitePixel = 0xFFFFFFFF;
                SDL_UpdateTexture(mTexture, NULL, &whitePixel, sizeof(uint32_t));
            } else {
                return false;
            }
        }
        setBlendModeAndColor(WHITE, mDefaultBlendMode); //initial color and blendmode
        return Parent::onAdd();
    }
    //----------------------------------------------------------------------------
    void TextureObject::onRemove()  {
        unload();
        Parent::onRemove();
    }
    //----------------------------------------------------------------------------
    bool TextureObject::load(String fileName) {
        if (fileName.isEmpty()) return false;
        mFileName = StringTable->insert(fileName);
        SDL_Texture* tex =  app.getTexture(mFileName);
        if (!tex) return false;
        unload();
        mTexture = tex;
        return true;
    }

    //----------------------------------------------------------------------------
    SDL_Texture* TextureObject::get() {
        return mTexture;
    };
    //----------------------------------------------------------------------------
    bool TextureObject::set(SDL_Texture* texture, bool isTargetTexture) {
        if (!texture) return false;
        unload();
        mTexture = texture;
        mIsTargetTexture = isTargetTexture;
        mOwnsTexture = true;
        return true;
    }
    //----------------------------------------------------------------------------
    void TextureObject::initPersistFields(){
        Parent::initPersistFields();
        addField("fileName", TypeString, Offset(mFileName,TextureObject));
        addField("blendMode", TypeU32, Offset(mDefaultBlendMode,TextureObject));
    }
    //----------------------------------------------------------------------------
    bool TextureObject::SaveImage(const char* fileName, bool asPNG) {
        if ( !mTexture || !fileName) return false;

        SDL_PropertiesID props = SDL_GetTextureProperties(mTexture);
        S32 width = (int)SDL_GetNumberProperty(props, SDL_PROP_TEXTURE_WIDTH_NUMBER, 0);
        S32 height = (int)SDL_GetNumberProperty(props, SDL_PROP_TEXTURE_HEIGHT_NUMBER, 0);
        SDL_PixelFormat format = (SDL_PixelFormat)SDL_GetNumberProperty(props, SDL_PROP_TEXTURE_FORMAT_NUMBER, SDL_PIXELFORMAT_UNKNOWN);

        if (width == 0 || height == 0 || format == SDL_PIXELFORMAT_UNKNOWN) {
            return false;
        }

        SDL_Texture* oldTarget = SDL_GetRenderTarget(app.getRenderer());

        if (!SDL_SetRenderTarget(app.getRenderer(), mTexture)) {
            return false;
        }
        SDL_Surface* surface = SDL_RenderReadPixels(app.getRenderer(), NULL);
        SDL_SetRenderTarget(app.getRenderer(), oldTarget);
        if (!surface) {
            SDL_Log("Failed to read pixels from texture: %s", SDL_GetError());
            return false;
        }

        bool success = false;

        if (asPNG) success = SDL_SavePNG(surface, fileName);
        else success = SDL_SaveBMP(surface, fileName);

        SDL_DestroySurface(surface);

        return success;
    }
    //----------------------------------------------------------------------------
    RectF TextureObject::getAtlasRect(S32 rowCount, S32 colCount, S32 index) {
        RectF result = {0.f,0.f,0.f,0.f};
        if (!mTexture || colCount < 1 || rowCount < 1 ) return result;
        F32 texW = (F32)mTexture->w;
        F32 texH = (F32)mTexture->h;

        result.w = texW / colCount;
        result.h = texH / rowCount;

        S32 cellX = index % colCount;
        S32 cellY = index / colCount;

        result.x = cellX * result.w;
        result.y = cellY * result.h;

        return result;
    }
    //----------------------------------------------------------------------------
    void TextureObject::setBlendModeAndColor(Color color, SDL_BlendMode mode) {
        if (color != mCurrentColor) {
            mCurrentColor = color;
            SDL_SetTextureColorMod(mTexture, color.r, color.g, color.b);
            SDL_SetTextureAlphaMod(mTexture, color.a);
        }

        // reset to default
        if (mode == SDL_BLENDMODE_INVALID) {
            // check it is changed-
            if (mCurrentBlendMode != mDefaultBlendMode) {
                mCurrentBlendMode = mDefaultBlendMode;
                SDL_SetTextureBlendMode(mTexture, mCurrentBlendMode);
            }
            // nothing else to do here - bail out
            return;
        }

        // check new mode is current mode
        if ( mode == mCurrentBlendMode ) {
            return;
        }
        mCurrentBlendMode = mode;
        SDL_SetTextureBlendMode(mTexture, mCurrentBlendMode);
    }
    //----------------------------------------------------------------------------
    bool TextureObject::DrawRotatedSrcDstRect(RectF srcRect, RectF dstRect, F32 angle, Point2F centerPoint, SDL_FlipMode flip, Color color, SDL_BlendMode blendMode) {
        SDL_Texture* tex = mTexture;
        if (color.a < 1 || !tex) return false;

        setBlendModeAndColor(color, blendMode);

        return SDL_RenderTextureRotated(app.getRenderer(), tex, &srcRect, &dstRect,
                                        angle, &centerPoint, flip);
    }

    //----------------------------------------------------------------------------
    bool TextureObject::DrawRotatedCentered(F32 x, F32 y, F32 angle, SDL_FlipMode flip, Color color, SDL_BlendMode blendMode) {
        SDL_Texture* tex = mTexture;
        if (color.a < 1 || !tex) return false;

        F32 w = (F32)tex->w;
        F32 h = (F32)tex->h;
        RectF dstRect = {x - w * 0.5f,y - h * 0.5f, w, h};
        Point2F centerPoint = { w/2, h/2 };

        setBlendModeAndColor(color, blendMode);

        return SDL_RenderTextureRotated(app.getRenderer(), tex, nullptr, &dstRect,
                                        angle, &centerPoint, flip);
    }

   //----------------------------------------------------------------------------
   bool TextureObject::DrawSrcDstRect(RectF srcRect, RectF dstRect, Color color, SDL_BlendMode blendMode) {
       SDL_Texture* tex = mTexture;
       if (color.a < 1 || !tex) return false;
       setBlendModeAndColor(color, blendMode);

       return SDL_RenderTexture(app.getRenderer(), tex, &srcRect, &dstRect);
   }

   //----------------------------------------------------------------------------
    bool TextureObject::DrawRect(RectF dstRect, Color color, SDL_BlendMode blendMode) {
        SDL_Texture* tex = mTexture;
        if (color.a < 1 || !tex) return false;
        setBlendModeAndColor(color, blendMode);

        return SDL_RenderTexture(app.getRenderer(), tex, nullptr, &dstRect);
    }
   //----------------------------------------------------------------------------
    bool TextureObject::DrawCentered(F32 x, F32 y, Color color, SDL_BlendMode blendMode) {
        SDL_Texture* tex = mTexture;
        if (color.a < 1 || !tex) return false;

        F32 w = (F32)tex->w;
        F32 h = (F32)tex->h;
        RectF dstRect = {x - w * 0.5f,y - h * 0.5f, w, h};

        setBlendModeAndColor(color, blendMode);

        return SDL_RenderTexture(app.getRenderer(), tex, nullptr, &dstRect);
    }
   //----------------------------------------------------------------------------
   //----------------------------------------------------------------------------
    IMPLEMENT_CONOBJECT(TextureObject);

    DefineEngineMethod(TextureObject, load, bool, (const char* fileName),,"Load a Texture") {
        return object->load(fileName);
    }

    DefineEngineMethod(TextureObject, getSize,/*Point2I*/ ConsoleVector, (),
                    ,"get the width and height of the loaded texture" ) {
        SDL_Texture* tex = object->get();
        if (!tex) return {0,0};

        return { (F32)tex->w,(F32)tex->h,0.f,0.f };
        // return {tex->w,tex->h};
    }

    DefineEngineMethod(TextureObject, getAtlasRect,/*RectF*/ ConsoleVector, (S32 colCount, S32 rowCount, S32 index),
                    ,"get the rectangle on a atlas texture for a given index" ) {
        return toConsoleVector(object->getAtlasRect(colCount, rowCount, index));
    }


    DefineEngineMethod(TextureObject, DrawRotatedSrcDstRect,bool,
            (RectF srcRect, RectF dstRect,F32 angle, Point2F centerPoint, S32 sdl_flip,  Color color, U32 blendMode),
            (0,WHITE, (U32)SDL_BLENDMODE_INVALID)
            ,"Draw a rotated and optional flipped texture with source and destination rect."
            "@flip: see also SDL_FLIP_ constants" ) {
        return object->DrawRotatedSrcDstRect(srcRect, dstRect,angle, centerPoint, (SDL_FlipMode)sdl_flip, color, blendMode);
    }

    DefineEngineMethod(TextureObject, DrawRect,bool, (RectF dstRect, Color color, U32 blendMode), (WHITE, (U32)SDL_BLENDMODE_INVALID)
                    ,"Draw a texture with source and destination rect" ) {
        return object->DrawRect( dstRect, color, blendMode);
    }

    DefineEngineMethod(TextureObject, DrawSrcDstRect,bool,
                    (RectF srcRect, RectF dstRect,  Color color, U32 blendMode),
                    (WHITE,  (U32)SDL_BLENDMODE_INVALID)
                    ,"Draw a the texture from srcRect to dstRect") {
        return object->DrawSrcDstRect(srcRect, dstRect, color, blendMode);

    }



    DefineEngineMethod(TextureObject, DrawCentered,bool, (F32 x, F32 y, Color color, U32 blendMode), (WHITE,(U32)SDL_BLENDMODE_INVALID)
                    ,"Draw the texture centered at the position" ) {
        return object->DrawCentered(x,y,color, blendMode);
    }


    DefineEngineMethod(TextureObject, DrawRotatedCentered,bool,
        (F32 x, F32 y, F32 angle , S32 flip, Color color, U32 blendMode)
        , (0,WHITE, (U32)SDL_BLENDMODE_INVALID)
        ,"Draw a centered rotated (optional flipped) texture at the position"
        "@flip: see also SDL_FLIP_ constants" ) {
        return object->DrawRotatedCentered(x,y,angle, (SDL_FlipMode)flip, color, blendMode);
    }


    DefineEngineMethod(TextureObject, SaveImage,bool, (const char* fileName, bool asPNG),(true)
    ,"Save the current texture image as png or bmp." ) {
        return object->SaveImage(fileName, asPNG);
    }

}
