//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// BaseFluxElf Main Glue
//----------------------------------------------------------------------------
#include <SDL3/SDL.h>

//-----
#include "main/engineGlue.h"
#include "console/engineAPI.h"
#include "console/consoleExtras.h"
#include "console/simSet.h"
#include "core/volume.h"
#include "math/mMathFn.h"
#include "math/mMathConsoleVector.h"
#include "core/util/tDictionary.h"
#include "console/script.h"
#include "core/strings/stringUnit.h"
//-----
#include "BaseFlux/Main.h"
#include "BaseFlux/Draw.h"
#include "BaseFlux/Collision.h"
#include "spice/gui/ImConsole.h"
//-----
#include "imgui.h"
//-----
#include "addons/SDL3/SDL3_render.h"
#include "addons/SDL3/SDL3_input.h"
#include "addons/SDL3/SDL3_Filesystem.h"
#include "ConsoleTypes.h"
//-----
#include "ColorConstants.h"
#include "Helpers.h"
#include "SettingsObject.h"
#include "SpriteObjects.h"
#include "TextureObject.h"
//-----

BaseFlux::Main app;
ImConsole gConsole;
SDL_Point gMousePos = {0,0};

bool gDoUpdateCall; // = Con::isFunction("OnUpdate");
bool gDoRenderCall; // = Con::isFunction("OnRender");

bool gShowConsole = false;

String gDirectory = "";
String gScriptFile = "main.elf";

extern void InitBindings_ImGui();

namespace BaseFluxElf {
    // -------------------------------------------------------------------------
    void registerColors() {
        const String prefix = "";

        const std::vector<std::pair<String, Color>> colors = {
            {"LIGHTGRAY", LIGHTGRAY},
            {"GRAY", GRAY},
            {"DARKGRAY", DARKGRAY},
            {"YELLOW", YELLOW},
            {"GOLD", GOLD},
            {"ORANGE", ORANGE},
            {"PINK", PINK},
            {"RED", RED},
            {"MAROON", MAROON},
            {"GREEN", GREEN},
            {"LIME", LIME},
            {"DARKGREEN", DARKGREEN},
            {"SKYBLUE", SKYBLUE},
            {"BLUE", BLUE},
            {"DARKBLUE", DARKBLUE},
            {"PURPLE", PURPLE},
            {"VIOLET", VIOLET},
            {"DARKPURPLE", DARKPURPLE},
            {"BEIGE", BEIGE},
            {"BROWN", BROWN},
            {"DARKBROWN", DARKBROWN},
            {"WHITE", WHITE},
            {"BLACK", BLACK},
            {"BLANK", BLANK},
            {"MAGENTA", MAGENTA},
            {"RAYWHITE", RAYWHITE},

            {"WHITEBLEND", WHITEBLEND},
            {"SLATEGRAY", SLATEGRAY},
            {"SEABLUE", SEABLUE},
            {"NEONPINK", NEONPINK},
            {"ACIDGREEN", ACIDGREEN}
        };


        for (std::size_t i = 0; i < colors.size(); ++i) {
            String fullName = prefix + colors[i].first;
            Color value = static_cast<Color>(colors[i].second);

            StringBuilder colorString;
            colorString.format("{ %d, %d, %d, %d }", value.r, value.g, value.b, value.a);
            Con::setScriptConstant(fullName.c_str(), colorString.end().c_str() );

        }

    }
    // -------------------------------------------------------------------------
    // ---------- color Manupulation ----------
    DefineEngineFunction(getColorFromHSV, Color , (S32 hue, F32 saturation, F32 value, U8 alpha)
    , (255), "get the color from hue(0..359), sat (0..1), value(0..1). The Rainbow function ;)") {
        return fromHSV(hue, saturation, value, alpha);
    }

    DefineEngineFunction( getScaledColorSaturation, Color, (Color color, F32 scale), , "scale the color saturation ") {
        setSaturationScale(color, scale);
        return color;
    }
    DefineEngineFunction( getScaledColorValue, Color, (Color color, F32 scale), , "scale the color value ") {
        setValueScale(color, scale);
        return color;
    }
    DefineEngineFunction( getScaledColor, Color, (Color color, F32 scale), , "scale the color") {
        setScale(color, scale);
        return color;
    }

    // -------------------------------------------------------------------------
    // SDL
    // -----------------------------------------------------------------------------
    DefineEngineFunction(SetColor, void , (Color color),
                        ,"set the render color") {
        SDL_SetRenderDrawColor(app.getRenderer(), color.r, color.g, color.b, color.a);
    }
    // ----------------------------------------------------------------------------
    DefineEngineFunction(BeginBlendMode, void, (U32 blendmode),(SDL_BLENDMODE_BLEND)," see also SDL_BLENDMODE_*") {
        SDL_SetRenderDrawBlendMode(app.getRenderer(), blendmode );

    }
    DefineEngineFunction(EndBlendMode, void,(),,"") {
        SDL_SetRenderDrawBlendMode(app.getRenderer(), SDL_BLENDMODE_NONE );
    }
    // ----------------------------------------------------------------------------
    DefineEngineFunction(BeginScale, void , (F32 x, F32 y),,"") {
        SDL_SetRenderScale(app.getRenderer(), x, y);
    }
    DefineEngineFunction(EndScale, void , (),,"") {
        SDL_SetRenderScale(app.getRenderer(), 1.f, 1.f);
    }
    // -----------------------------------------------------------------------------
    DefineEngineFunction(PointInRectI, bool , (Point2I p, RectI rect),
                        ,"Check a point is in rect") {
        return SDL_PointInRect(&p, &rect);
    }
    DefineEngineFunction(PointInRect, bool , (Point2F p, RectF rect),
                        ,"Check a point is in rect") {
        return SDL_PointInRectFloat(&p, &rect);
    }
    DefineEngineFunction(HasRectIntersectionI, bool , (RectI rectA, RectI rectB),
                        ,"Check rect intersection") {
        return SDL_HasRectIntersection(&rectA, &rectB);
    }

    DefineEngineFunction(HasRectIntersection, bool , (RectF rectA, RectF rectB),
                        ,"Check rect intersection") {
        return SDL_HasRectIntersectionFloat(&rectA, &rectB);
    }
    DefineEngineFunction(GetRectIntersection, ConsoleVector , (RectF rectA, RectF rectB),
                        ,"get rect intersection (overlap)") {
        RectF result = {0};
        SDL_GetRectIntersectionFloat(&rectA, &rectB, &result);
        return { result.x, result.y, result.w,result.h};
    }
    DefineEngineFunction(GetRectUnion, ConsoleVector , (RectF rectA, RectF rectB),
                        ,"get rect unio both rects combined to one big.") {
        RectF result = {0};
        SDL_GetRectUnionFloat(&rectA, &rectB, &result);
        return { result.x, result.y, result.w,result.h};
    }
    // extern SDL_DECLSPEC bool SDLCALL SDL_GetRectEnclosingPointsFloat(const SDL_FPoint *points, int count, const SDL_FRect *clip, SDL_FRect *result);

    DefineEngineFunction(HasRectLineIntersection, bool , (RectF rect, F32 x1,F32 y1, F32 x2, F32 y2),
                        ,"check if a rect and a line intersects") {

        return SDL_GetRectAndLineIntersectionFloat(&rect, &x1, &y1, &x2, &y2);
    }



    // ------

    DefineEngineFunction(DrawFPS, void, (F32 x, F32 y)
    ,, "Draw FPS as position")
    {
        Color color = GREEN;
        U32 fps =  BaseFlux::getFPS();
        String text = String::ToString("%d fps",fps);

        if (fps < 15) color = RED;
        else if (fps < 30) color = ORANGE;

        BaseFlux::DrawDebugText(app.getRenderer(),x,y,text.c_str(), 1.0f, color, true/*, shadowColor*/);
    }

    DefineEngineFunction(DrawText, void, ( F32 x, F32 y,String text,
                                        F32 scale, Color color,
                                        bool doShadow, Color shadowColor)
    ,(1.0, BLACK, false, DARKGRAY),"Draw a Text with optional shadow")
    {
        BaseFlux::DrawDebugText(app.getRenderer(),x,y,text.c_str(), scale, color, doShadow, shadowColor);
    }

    DefineEngineFunction(MeasureText, ConsoleVector /*Point2F*/, ( String text, F32 scale)
    ,(1.0),"Calculate Text Width and Heigth and return Point2F")
    {
        F32 size = (F32)SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE * scale;
        return { (F32) text.length() * size, size, 0.f, 0.f};
    }

    DefineEngineFunction(DrawLine, void, (F32 x1, F32 y1,F32 x2, F32 y2, Color color, F32 thickness)
            ,(WHITE, 1.f),"Draw a Line") {
        if (thickness != 1.f)
            BaseFlux::DrawLineThick(app.getRenderer(), x1,y1,x2,y2, thickness, color);
        else
            BaseFlux::DrawLine(app.getRenderer(), {x1,y1},{x2,y2}, color);
    }

    DefineEngineFunction(DrawLineRec, void, (RectF points, Color color, F32 thickness)
        ,(WHITE, 1.f),"Draw a Line using rect w=x2 h=y2 as parameter") {
        if (thickness != 1.f)
            BaseFlux::DrawLineThick(app.getRenderer(), {points.x,points.y},{points.w,points.h}, thickness, color);
        else
            BaseFlux::DrawLine(app.getRenderer(), {points.x,points.y},{points.w,points.h}, color);
    }

    DefineEngineFunction(DrawRect, void, (F32 x, F32 y,F32 w, F32 h, Color color, bool fill)
            ,(WHITE, true),"Draw a Rect") {
        BaseFlux::DrawRect(app.getRenderer(), {x,y,w,h}, color, fill);
    }
    DefineEngineFunction(DrawRectRec, void, (RectF rect, Color color, bool fill)
    ,(WHITE, true),"Draw a Rect") {
        BaseFlux::DrawRect(app.getRenderer(), rect, color, fill);
    }

    DefineEngineFunction(DrawCircle, void, (F32 x, F32 y,F32 radius, Color color, bool fill)
        ,(WHITE, true),"Draw a Circle") {
        BaseFlux::DrawCircle(app.getRenderer(), radius, {x,y}, color, fill);
    }
    DefineEngineFunction(DrawArc, void, (F32 x, F32 y,F32 radius,F32 startRad, F32 endRad, Color color, bool fill)
    ,(WHITE, true),"Draw a Arc: startRad / endRad in radians ") {
        BaseFlux::DrawArc(app.getRenderer(), radius,startRad, endRad, {x,y}, color, fill);
    }
    DefineEngineFunction(DrawDonut, void, (F32 x, F32 y,F32 innerRadius,F32 outerRadius, Color color, bool fill)
    ,(WHITE, true),"Draw a Arc") {
        BaseFlux::DrawDonut(app.getRenderer(), innerRadius,outerRadius, {x,y}, color, fill);
        // BaseFlux::DrawDonut(app.getRenderer(), innerRadius,outerRadius, Point2F(x,y), color, fill);
    }


    // =============================================================================
    // RenderTarget and Save functions
    // =============================================================================
    DefineEngineFunction(CreateRenderTarget, S32  /*textureObjectId*/, (Point2I size),,
                        "Create a Render Target Texture and return the TextureObject") {
        SDL_Texture *target_texture = SDL_CreateTexture(
            app.getRenderer(),
            SDL_PIXELFORMAT_RGBA8888,
            SDL_TEXTUREACCESS_TARGET,
            size.x, size.y
        );
        if (!target_texture) {
            Con::errorf("Failed to create Target Texture!");
            return 0;
        }
        BaseFluxElf::TextureObject* result = new BaseFluxElf::TextureObject();
        result->registerObject(); // before set because this calles add
        if (!result->set(target_texture, true)) {
            result->deleteObject();
            return 0;
        }
        return result->getId();
    }
    // -----------------------------------------------------------------------------
    DefineEngineFunction(SetRenderTarget, bool  , (SimObjectId texObjectID),,
                        "Set a Render Target if textureObjectId is 0 it is reseted") {

        if (texObjectID == 0) {
            return SDL_SetRenderTarget(app.getRenderer(), nullptr);
        }
        BaseFluxElf::TextureObject* texObject = dynamic_cast<BaseFluxElf::TextureObject*>(Sim::findObject(texObjectID));
        if (!texObject) return false;
        return SDL_SetRenderTarget(app.getRenderer(),texObject->get());
    }
    // -----------------------------------------------------------------------------
    DefineEngineFunction(GetRendererName, String, (), ,"Get the current renderer name") {
        return SDL_GetRendererName(app.getRenderer());
    }
    // -----------------------------------------------------------------------------
    // Lights /*
    // SDL_Texture* CreatePointLightTexture(SDL_Renderer* renderer, int radius, SDL_Color color);
    DefineEngineFunction(CreatePointLightTexture, S32, (S32 radius, Color color, bool diffuse), (WHITE, true),
            "Create Point Light Texture object" ) {
        SDL_Texture* target_texture = BaseFlux::CreatePointLightTexture(app.getRenderer(), radius, color, diffuse);
        if (!target_texture) {
            Con::errorf("Failed to create Point Light Texture!");
            return 0;
        }
        BaseFluxElf::TextureObject* result = new BaseFluxElf::TextureObject();
        result->registerObject(); // before set because this calles add
        if (!result->set(target_texture, true)) {
            result->deleteObject();
            return 0;
        }
        result->mDefaultBlendMode = SDL_BLENDMODE_ADD;
        return result->getId();
    }

    // SDL_Texture* CreateRayLightTexture(SDL_Renderer* renderer, int length, int width, SDL_Color color, bool diffuse = true);
    DefineEngineFunction(CreateRayLightTexture, S32, ( S32 width, S32 height, Color color, bool diffuse), (WHITE, true),
            "Create Ray/Beam Light Texture object" ) {
        SDL_Texture* target_texture = BaseFlux::CreateRayLightTexture(app.getRenderer(), width, height, color, diffuse);
        if (!target_texture) {
            Con::errorf("Failed to create Ray Light Texture!");
            return 0;
        }
        BaseFluxElf::TextureObject* result = new BaseFluxElf::TextureObject();
        result->registerObject(); // before set because this calles add
        if (!result->set(target_texture, true)) {
            result->deleteObject();
            return 0;
        }
        result->mDefaultBlendMode = SDL_BLENDMODE_ADD;
        return result->getId();
    }

    // SDL_Texture* CreateSpotlightTexture(SDL_Renderer* renderer, int radius, float coneAngleDegrees, SDL_Color color);*/
    DefineEngineFunction(CreateSpotlightTexture, S32, (S32 radius, F32 coneAngleDegrees,  Color color, bool diffuse, bool damping)
        , (WHITE, true, false), "Create Spot Light Texture object. diffuse remove the hard ray in the middle, damping make it more foggy" ) {
        SDL_Texture* target_texture = BaseFlux::CreateSpotlightTexture(
            app.getRenderer(), radius, coneAngleDegrees,
            color, diffuse, damping
        );
        if (!target_texture) {
            Con::errorf("Failed to create Spot Light Texture!");
            return 0;
        }
        BaseFluxElf::TextureObject* result = new BaseFluxElf::TextureObject();
        result->registerObject(); // before set because this calles add
        if (!result->set(target_texture, true)) {
            result->deleteObject();
            return 0;
        }
        result->mDefaultBlendMode = SDL_BLENDMODE_ADD;
        return result->getId();
    }
    // -----------------------------------------------------------------------------
    // -----------------------------------------------------------------------------
    // this is ported from OmFlux/KorkTest to OmFlux/ElfTest to baseElf
    // since it was inital written for KorkTest it use old style ConsoleFunction
    // -----------------------------------------------------------------------------
    DefineEngineFunction(getFullScreen, bool, (),, "return true if in fullscreen mode") {
        Uint32 flags = SDL_GetWindowFlags(app.getWindow());
        return (flags & SDL_WINDOW_FULLSCREEN);
    }
    DefineEngineFunction(setFullScreen, bool,(bool value),, "bool value") {
        return SDL_SetWindowFullscreen(app.getWindow(),value);
    }

    DefineEngineFunction(getGameTime, F32, (), , "Get the game time (sec since start)") {
        return (F32) BaseFlux::getGameTime();
    }

    DefineEngineFunction(getFrameTime, F32,(),, "get the current frame time in seconds") {
        return (F32) BaseFlux::getFrameTime();
    }

    DefineEngineFunction(getRealTime, S32, (),, "get current time from script engine") {
        return Sim::getCurrentTime();
    }

    DefineEngineFunction(getFPS, S32,(),, "Get the current fps") {
        return (S32)BaseFlux::getFPS();
    }
    DefineEngineFunction(GetMousePosition, /*Point2I*/ ConsoleVector, (),, "") {
        return { (F32)gMousePos.x,(F32)gMousePos.y,0.f,0.f };
    }

    DefineEngineFunction(setWindowSize, bool, (S32 x, S32 y), , "") {
    return  SDL_SetWindowSize(app.getWindow(), x, y);
    }

    DefineEngineFunction(setScreenSize, bool, (S32 logicalWidth, S32 logicalHeight, S32 mode),((S32)SDL_LOGICAL_PRESENTATION_STRETCH) ,
                        "Set SDL_SetRenderLogicalPresentation which does scale the screen.\n"
                        "Warning: ImGui windows (like console) looks a bit strange than!") {
    return SDL_SetRenderLogicalPresentation(app.getRenderer(), logicalWidth, logicalHeight
                ,(SDL_RendererLogicalPresentation) mode);
    }
    DefineEngineFunction(unSetScreenSize, bool, (), ,
            "Unset SDL_SetRenderLogicalPresentation to use window size\n"
            "Same as setScreenSize(0,0,0);") {
        return SDL_SetRenderLogicalPresentation(app.getRenderer(), 0, 0, SDL_LOGICAL_PRESENTATION_DISABLED);
    }

    DefineEngineFunction(GetScreenSize, /*Point2I*/ ConsoleVector, (), , "Get the current scaled screen size (SDL_GetRenderLogicalPresentation)") {
        const Point2I& p= BaseFluxElf::GetScreenSize();
        return {(F32)p.x, (F32)p.y,0.f,0.f};
    }



    DefineEngineFunction(getWindowSize, /*Point2I*/ConsoleVector, (), , "") {
        int x, y;
        SDL_GetWindowSize(app.getWindow(), &x, &y);
        return {(F32)x,(F32)y,0.0,0.0};
    }

    DefineEngineFunction(setVSync, void, (bool value), , "bool value") {
        SDL_SetRenderVSync(app.getRenderer(), (int)value);
    }

    DefineEngineFunction(getScriptPath, String,(),, "get the current path from the script engine") {
        return Torque::FS::GetCwd().getFullPath();
    }

    DefineEngineFunction(getAppPath, String,(),, "Get the directory where the application was run from.") {
        return BaseFlux::Tools::getBasePath().c_str();
    }



    DefineEngineFunction(dumpPathes, void,(),, "print all known pathes on console output") {
        // "base:/ || assets:/ || sound:/ || texture:/ || pref:/ || script:/"

        Con::printf(" --- APP pathes: ---");
        Con::printf("base:/    = %s", BaseFluxElf::getFullPath("base:/").c_str());
        Con::printf("assets:/  = %s", BaseFluxElf::getFullPath("assets:/").c_str());
        Con::printf("sound:/   = %s", BaseFluxElf::getFullPath("sound:/").c_str());
        Con::printf("texture:/ = %s", BaseFluxElf::getFullPath("texture:/").c_str());
        Con::printf("pref:/    = %s", BaseFluxElf::getFullPath("pref:/").c_str());
        Con::printf("script:/  = %s", BaseFluxElf::getFullPath("script:/").c_str());

        Con::printf(" --- OS pathes: ---");
        Con::printf("home:/      = %s", BaseFluxElf::getFullPath("home:/").c_str());
        Con::printf("desktop:/   = %s", BaseFluxElf::getFullPath("desktop:/").c_str());
        Con::printf("documents:/ = %s", BaseFluxElf::getFullPath("documents:/").c_str());
        Con::printf("download:/  = %s", BaseFluxElf::getFullPath("download:/").c_str());
        Con::printf("music:/     = %s", BaseFluxElf::getFullPath("music:/").c_str());
        Con::printf("pictures:/  = %s", BaseFluxElf::getFullPath("pictures:/").c_str());
        Con::printf("videos:/    = %s", BaseFluxElf::getFullPath("videos:/").c_str());

    }

    DefineEngineFunction(getFullPath, String,(String pathIdent),("base:/"),
            "get the  path defined in settings.\n"
            "@param pathIdent:\n"
            "base:/ || assets:/ || sound:/ || texture:/ || pref:/ || script:/ \n"
            "|| home:/ || desktop:/ || documents:/ || download:/ || music:/ \n"
            "|| pictures || videos"
    ){
        return BaseFluxElf::getFullPath(pathIdent);
    }
    // ----------------- include = exec with nocalls ----------------------

    DefineEngineFunction( include,bool, (String fileName, bool noCalls),(true), "include(fileName)" "exec a file without calls " ){
        return Con::executeFile(fileName, noCalls);
    }
    // -------------------------------------------------------------------------
    // =============================================================================
    // Lazy sound playing - slower but fast coded
    // bool playSound(std::string fileName, float gain = 1.0f, bool loop = false);
    DefineEngineFunction(playSound, bool , (const char* fileName, F32 gain, bool loop),(0.9f, false)
                        ,"lazy way to play a sound by filename ") {
        return app.playSound(fileName, gain, loop);
    }
    DefineEngineFunction(stopSound, bool , (const char* fileName),
    ,"lazy way to stop a sound by filename ") {
        return app.stopSound(fileName);
    }

    DefineEngineFunction(SetClearBackground, void , (Color color),
                        ,"set Settings.clearColor if alpha  == 0 it's disabled") {
        app.getSettings().clearColor = color;
    }

    DefineEngineFunction(ClearBackground, void , (Color color),
                        ,"clear the background the color - see also SetClearBackground") {
    // app.getSettings().clearColor = color;

        SDL_SetRenderDrawColor(app.getRenderer()
        , color.r
        , color.g
        , color.b
        , color.a
        );
        SDL_RenderClear(app.getRenderer());

    }
    // -------------------------------------------------------------------------
    // Init/Shutdown functions
    // -------------------------------------------------------------------------
    // added at bottom
    void Init() {

        ElfSDL3::InitRenderer();
        registerColors();
        BaseFluxElf::gSettingsObject = new BaseFluxElf::SettingsObject();
        BaseFluxElf::gSettingsObject->registerObject(); //make available on Console
        Con::setIntVariable("$Settings", BaseFluxElf::gSettingsObject->getId());
        // -----
    }

    void PostInit() {
        ElfSDL3::WindowMap.add(app.getWindow());
        ElfSDL3::RendererMap.add(app.getRenderer());

    }
    void Shutdown() {
        ElfSDL3::ShutDownRenderer();
        Con::setIntVariable("$Settings", 0);
        BaseFluxElf::gSettingsObject->deleteObject();
    }

    // -------------------------------------------------------------------------
    // ~~~~ MAIN ~~~~
    // -------------------------------------------------------------------------
    //-----------------------------------------------------------------------------
    // console redirect ....
    void SDLCALL ConsoleLogFunction(void *userdata, int category, SDL_LogPriority priority, const char *message)
    {
        U32 count = StringUnit::getUnitCount(message, "\n");

        if (count < 2) {
            gConsole.AddLog("%s", message);
        } else {
            for (U32 i = 0; i < count; i++) {
                gConsole.AddLog("%s", StringUnit::getUnit(message, i, "\n"));
            }
        }


    }
    //------------------------------------------------------------------------------
    void MyLogger(U32 level, const char *consoleLine)
    {
        switch (level) {
            case 1: SDL_Log("[warn] %s",  consoleLine); break;
            case 2: SDL_Log("[error] %s",  consoleLine); break;
            default: SDL_Log("%s",  consoleLine); break;
        }

    }
    // ----------------------------------------------------------------------------
    void initConsole() {
        SDL_SetLogOutputFunction(ConsoleLogFunction, nullptr);

        gConsole.OnTabCompletion = [&](ImConsole* console, ImGuiInputTextCallbackData* data, bool forward) {
            char buffer[256] = {0};
            snprintf(buffer, sizeof(buffer), "%s", data->Buf);
            U32 newCursorPos = Con::tabComplete(buffer, data->CursorPos, sizeof(buffer) - 1, forward);
            // Log("TESTTAB: %s (%d)", buffer, newCursorPos);

            data->DeleteChars(0, data->BufTextLen);
            data->InsertChars(0, buffer);
            data->CursorPos = newCursorPos;
            data->SelectionStart = newCursorPos;
            data->SelectionEnd = newCursorPos;
            data->BufDirty = true;
        };

        gConsole.OnCommand = [&](ImConsole* console, const char* command_line) {
            Con::evalAutoComplete(command_line);
        };

    }
    // ----------------------------------------------------------------------------
    int argParser(int argc, char* argv[]) {

        // pass to script in TGE/OGE3D  it is called Game::!,
        Con::setIntVariable("Main::argc", argc);
        for (S32 i = 0; i < argc; i++)
            Con::setVariable(avar("Main::argv%d", i), argv[i]);

        String argStr;
        // argv[0] is program name
        for (S32 i = 1; i < argc; ++i) {
            if (!argv[i]) continue;
            argStr = argv[i];

            if (argStr.equal("--chdir")) {
                if (i + 1 < argc) {
                    gDirectory= argv[++i];
                    dPrintf("Custom Directory: %s\n", gDirectory.c_str());
                } else {
                    dPrintf("--chdir but no file parameter usage: --chdir /where/my/assets/live\n");
                    return 1;
                }
                continue;
            }

            // last one should be the script file
            if (i == argc - 1 ) {
                gScriptFile= argv[i];
                dPrintf("Custom Script File: %s\n", gScriptFile.c_str());
            }
            // if (argStr.equal("--script")) {
            //     if (i + 1 < argc) {
            //         gScriptFile= argv[++i];
            //         dPrintf("Custom Script File: %s\n", gScriptFile.c_str());
            //     } else {
            //         dPrintf("--script but no file parameter usage: --script myFile.cs\n");
            //         return 1;
            //     }
            //     continue;
            // }


        } //for ...
        return 0;
    }
    // ----------------------------------------------------------------------------
    void checkLoopFunc() {
        gDoUpdateCall = Con::isFunction("OnUpdate");
        gDoRenderCall = Con::isFunction("OnRender");
    }
    DefineEngineFunction(checkLoopFunc, void, (),,"recheck we want to enable onRender and onUpdate") {
        checkLoopFunc();
        Con::printf("checkLoopFunc: Update enable:%d, Render enable:%d", gDoUpdateCall, gDoRenderCall);
    }
    // ----------------------------------------------------------------------------
    int Main(int argc, char* argv[]) {
        initConsole();
        argParser(argc, argv);
        // engineGlue::init(MyLogger, (BaseFlux::Tools::getBasePath()+"/assets").c_str());
        if (gDirectory.isEmpty()) gDirectory = BaseFlux::Tools::getBasePath().c_str();
        if (!gDirectory.endsWith("/")) gDirectory += "/";
        app.mBasePath = gDirectory.c_str();
        engineGlue::init(MyLogger, (gDirectory + "assets"));
        BaseFluxElf::Init();
        InitBindings_ImGui();
        ElfSDL3::InitKeyCodes();
        ElfSDL3::RegisterFileSystemConstants();

        Con::executeFile(gScriptFile);

        checkLoopFunc();

        app.getSettings() = {
            .ScreenSize = { 800, 450},
            .Company = "Ohmtal",
            .Caption = "baseElf",
            .Version = "Version 0.1",

            // .sdlWindowFlagsOverwrite = SDL_WINDOW_BORDERLESS
        };
        // -------------------------------------------------------------------------
        if (Con::isFunction("OnLoad")) Con::executef("OnLoad");
        // -------------------------------------------------------------------------

        if ( !app.InitSDL() ) return 1;

        BaseFluxElf::PostInit();
        app.initImGui();


        // -------------------------------------------------------------------------
        if (Con::isFunction("OnInit")) Con::executef("OnInit");
        // -------------------------------------------------------------------------
        app.OnLoopBegin = []() {
            ElfSDL3::ClearInputFrameTicks();
        };
        app.OnRender = [&](SDL_Renderer* renderer) {

            if (gDoRenderCall) Con::executef("OnRender");


            if (ImGui::IsKeyPressed(ImGuiKey_GraveAccent)) gShowConsole = !gShowConsole;
            gConsole.Draw("Console",&gShowConsole);
        };

        // -------------------------------------------------------------------------
        app.OnUpdate = [&](const float dt) {
            if (gDoUpdateCall)Con::executef("OnUpdate", dt);
            engineGlue::process((SimTime)(dt * 1000.f));
        };
        // -------------------------------------------------------------------------
        app.OnEvent = [&](const SDL_Event& event) {
            if (app.getImGuiIO())  {
                if (app.getImGuiIO()->WantTextInput) {
                    if (event.type == SDL_EVENT_KEY_DOWN ||
                        event.type == SDL_EVENT_KEY_UP ||
                        event.type == SDL_EVENT_TEXT_INPUT) {
                        return;
                        }
                }
                if (app.getImGuiIO()-> WantCaptureMouse) {
                    if (event.type == SDL_EVENT_MOUSE_BUTTON_DOWN ||
                        event.type == SDL_EVENT_MOUSE_BUTTON_DOWN ||
                        event.type == SDL_EVENT_MOUSE_WHEEL
                    ) {
                        return;
                    }

                }
            }

            ElfSDL3::onEvent(event);
            switch (event.type) {
                case SDL_EVENT_MOUSE_MOTION:

                    gMousePos.x = event.motion.x;
                    gMousePos.y = event.motion.y;
                    break;

                case SDL_EVENT_KEY_UP:
                case SDL_EVENT_KEY_DOWN:
                {
                    // if ( Con::isFunction( "onInputEvent" ) ) {
                    //     const char* keyName = SDL_GetKeyName(event.key.key);
                    //
                    //     // onInputEvent_callback(
                    //     Con::executef("onInputEvent"
                    //     , "keyboard"
                    //     , keyName
                    //     , gMousePos.x
                    //     , gMousePos.y
                    //     , (event.type == SDL_EVENT_KEY_DOWN ) ? "1" : "0"
                    //     );
                    // }
                }
                break;
                case SDL_EVENT_MOUSE_BUTTON_DOWN:
                case SDL_EVENT_MOUSE_BUTTON_UP:
                {

                    // if ( Con::isFunction( "onInputEvent" ) ) {
                    //     char buttonNameBuf[32];
                    //     dSprintf( buttonNameBuf, sizeof(buttonNameBuf), "button%d", event.button.button );
                    //     // onInputEvent_callback(
                    //     Con::executef("onInputEvent"
                    //     , "mouse"
                    //     , buttonNameBuf
                    //     , gMousePos.x
                    //     , gMousePos.y
                    //     , (event.type == SDL_EVENT_MOUSE_BUTTON_DOWN ) ? "1" : "0"
                    //     );
                    //
                    // }
                }
                break;

            } //switch

        };

        app.OnShutDown = [&]() {
            BaseFluxElf::Shutdown();
            engineGlue::shutDown();
            if (Con::isFunction("OnShutDown")) Con::executef("OnShutDown");
        };

            app.Execute();



            return 0;
    }


} //namespace
