//-----------------------------------------------------------------------------
// NOTE this is a placeholder stub for platform functions
// See also addons/SDL3/SDL3_PlatformProcess for a more complete implementation
//-----------------------------------------------------------------------------
// ElfScript 0.6 stripped down and cleaned a bit
//-----------------------------------------------------------------------------
#include <console/console.h>

namespace Platform
{

    // --------------------
    // Debug build type Macros:
    #ifdef TORQUE_DEBUG
    #define DEBUG_WARN(...)  Con::warnf(__VA_ARGS__)
    #define DEBUG_ERROR(...) Con::errorf(__VA_ARGS__)
    #define DEBUG_PRINT(...) Con::printf(__VA_ARGS__)
    #else
    #define DEBUG_WARN(...) ((void)0)
    #define DEBUG_ERROR(...) ((void)0)
    #define DEBUG_PRINT(...) ((void)0)
    #endif
    // -------------------

    //---------------------------------------------------------------------------
    void postQuitMessage(const S32 in_quitVal)
    {
       DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    }

    void forceShutdown(S32 returnValue)
    {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    }
    //---------------------------------------------------------------------------
    // init / process / shutdown - called from engineGlue only
    void init() { }
    void process() { }
    void shutdown() { }
    //---------------------------------------------------------------------------
    void getLocalTime(LocalTime &)
    {

        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    }
    U64 getRealMilliseconds( void )
    {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return 0;
    }

    #if defined(_WIN32) || defined(__WIN32__) || defined(MSC_VER)
    #include <windows.h>
    #define platform_sleep(ms) Sleep(ms)
    #elif defined(__linux__) || defined(__unix__) || defined(__APPLE__)
    #include <time.h>
    void sleep(unsigned int ms) {
        struct timespec ts;
        ts.tv_sec = ms / 1000;
        ts.tv_nsec = (ms % 1000) * 1000000;
        nanosleep(&ts, NULL);
    }
    #else
    #error "UNKNOWN OS"
    #endif
    //---------------------------------------------------------------------------
    /// Math.
    float getRandom()
    {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return 3;
    }
    //---------------------------------------------------------------------------
    bool isFile(const char *pFilePath) {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return false;
    }
    StringTableEntry getUserHomeDirectory()
    {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return StringTable->EmptyString();
    }

    StringTableEntry getExecutablePath()
    {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return StringTable->EmptyString();
    }
    //---------------------------------------------------------------------------
    bool setClipboard(const char* text)
    {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return false;
    }
    const char* getClipboard() {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return nullptr;
    }

    //---------------------------------------------------------------------------
    void debugBreak()
    {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    }
    //---------------------------------------------------------------------------
    void AlertOK(const char *windowTitle, const char *message) {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);

    }
    bool AlertOKCancel(const char *windowTitle, const char *message) {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return false;
    }
    bool AlertRetry(const char *windowTitle, const char *message) {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return false;
    }
    ALERT_ASSERT_RESULT AlertAssert(const char *windowTitle, const char *message)
    {
        DEBUG_WARN(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return ALERT_ASSERT_IGNORE;
    }

}
