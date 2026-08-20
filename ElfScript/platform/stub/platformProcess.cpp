//-----------------------------------------------------------------------------
// NOTE this is a placeholder stub for platform functions
// See also addons/SDL3/SDL3_PlatformProcess for a more complete implementation
//-----------------------------------------------------------------------------
// ElfScript 0.6 stripped down and cleaned a bit
//-----------------------------------------------------------------------------
#include <console/console.h>

namespace Platform
{
    //---------------------------------------------------------------------------
    void postQuitMessage(const S32 in_quitVal)
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    }

    void forceShutdown(S32 returnValue)
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    }
    //---------------------------------------------------------------------------
    // init / process / shutdown - called from engineGlue only
    void init() { }
    void process() { }
    void shutdown() { }
    //---------------------------------------------------------------------------
    void getLocalTime(LocalTime &)
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    }
    U64 getRealMilliseconds( void )
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
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
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return 3;
    }
    //---------------------------------------------------------------------------
    bool isFile(const char *pFilePath) {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return false;
    }
    StringTableEntry getUserHomeDirectory()
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return StringTable->EmptyString();
    }

    StringTableEntry getExecutablePath()
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return StringTable->EmptyString();
    }
    //---------------------------------------------------------------------------
    bool setClipboard(const char* text)
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return false;
    }
    const char* getClipboard() {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return nullptr;
    }

    //---------------------------------------------------------------------------
    void debugBreak()
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
    }
    //---------------------------------------------------------------------------
    void AlertOK(const char *windowTitle, const char *message) {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);

    }
    bool AlertOKCancel(const char *windowTitle, const char *message) {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return false;
    }
    bool AlertRetry(const char *windowTitle, const char *message) {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return false;
    }
    ALERT_ASSERT_RESULT AlertAssert(const char *windowTitle, const char *message)
    {
        Con::warnf(" %s not implemented (%s:%d)", __func__, __FILE__, __LINE__);
        return ALERT_ASSERT_IGNORE;
    }

}
