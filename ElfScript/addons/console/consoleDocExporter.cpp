//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// ConsoleDocExporter for:
//      Namespace::dumpClasses( dumpScript, dumpEngine );
//       Namespace::dumpFunctions( dumpScript, dumpEngine );
//-----------------------------------------------------------------------------
#include "platform/platform.h"
#include "console/console.h"

#include "core/tAlgorithm.h"

#include "core/strings/findMatch.h"
#include "console/consoleInternal.h"
#include "console/consoleObject.h"
#include "core/frameAllocator.h"
#include "console/engineAPI.h"
#include "core/stream/fileStream.h"

namespace ConsoleExporter {

Vector<String> gConsoleLines;
// Buffer for expanding script filenames.
static char buffer[1024];

//-----------------------------------------------------------------------------
void ConsoleExportLogger(U32 level, const char *consoleLine) {
    if (!consoleLine || consoleLine[0] == '\0') return;
    gConsoleLines.push_back(consoleLine);
}

//-----------------------------------------------------------------------------
void BeginConsoleLines() {

    gConsoleLines.setSize(4000); // enough ?
    gConsoleLines.clear();
    Con::addConsumer(ConsoleExportLogger);
}

//-----------------------------------------------------------------------------
void EndConsoleLines() {
    Con::removeConsumer(ConsoleExportLogger);
    gConsoleLines.clear();
    // remove the memory from begin ....
    gConsoleLines.setSize(0);
}

//-----------------------------------------------------------------------------
bool ExportConsoleLines(const char* fileName, bool append = false) {
    if (gConsoleLines.size() == 0) return false;
    if(Con::expandScriptFilename(buffer, sizeof(buffer), fileName))
        fileName = buffer;

    FileStream *strm = NULL;

    if (fileName)
    {
        if ((strm = FileStream::createAndOpen(fileName, append ? Torque::FS::File::ReadWrite : Torque::FS::File::Write)) == NULL)
        {
            Con::errorf(ConsoleLogEntry::General, "Unable to open file '%s for writing.", fileName);
            return false;
        }
        if (append)
            strm->setPosition(strm->getStreamSize());
    }
    // sanity ...
    if (!strm) return false;

    for (S32 i = 0; i < gConsoleLines.size(); i++) {
        // if (!forDoxyGen) {
        //      gConsoleLines[i].replace("((", "(");
        //      gConsoleLines[i].replace("))", ")");
        //      gConsoleLines[i].replace("virtual ", "");
        // }
        gConsoleLines[i] += "\n";
        strm->writeText(gConsoleLines[i].c_str());
    }
    strm->close();
    delete strm;

    return true;
}
//-----------------------------------------------------------------------------
DefineEngineFunction( ConsoleDocForStub, void, (bool value),,
        "@brief Set Con::ConsoleDocForStub - human readable output- exportConsoleDocu overwrites it."){
    Con::ConsoleDocForStub  = value;
}
//-----------------------------------------------------------------------------
DefineEngineFunction( exportConsoleDocu, bool, ( String fileName, bool humanreadable, bool append, bool dumpScript, bool dumpEngine), ( false,false, true, true ),
                      "@brief Export all declared console classes to the console.\n\n"
                      "@param dumpScript Optional parameter specifying whether or not classes defined in script should be dumped.\n"
                      "@param dumpEngine Optional parameter specifying whether or not classes defined in the engine should be dumped.\n"
                      "@ingroup Docu")
{
    Con::ConsoleDocForStub = !humanreadable;
    BeginConsoleLines();
    Con::printf("//------------------------------------------------------------------");
    Con::printf("//                    C L A S S E S  ");
    Con::printf("//------------------------------------------------------------------");
    Namespace::dumpClasses( dumpScript, dumpEngine );
    Con::printf("//------------------------------------------------------------------");
    Con::printf("//                  F U N C T I O N S ");
    Con::printf("//------------------------------------------------------------------");
    Namespace::dumpFunctions( dumpScript, dumpEngine );
    Con::printf("//------------------------------------------------------------------");
    Con::printf("//                  C O N S T A N T S ");
    Con::printf("//------------------------------------------------------------------");
    Con::printf("/*");
    Con::executef("dumpScriptConstants");
    Con::printf("*/");

    Con::printf("//------------------------------------------------------------------");
    Con::printf("//                  Inline Functions ");
    Con::printf("//------------------------------------------------------------------");
    Con::printf("/*");
    Con::printf("void print(..);");
    Con::printf("void printf(fmt,..);");
    Con::printf("const char* sprintf(fmt, ..);");
    Con::printf(
    "double math.randomf()\n"
    "double math.randomf(double limit )\n"
    "double math.randomf(double from. double to )\n"
    "double math.floor(double value)\n"
    "double math.ceil(double  value)\n"
    "double math.fabs(double value)\n"
    "double math.sin(double value)\n"
    "double math.cos(double value)\n"
    "double math.atan(double value)\n"
    "double math.tanh(double value)\n"
    "double math.sqrt(double value)\n"
    "bool math.iszero(double value)\n"

    "double math.fmod(double value1, double value2)\n"
    "double math.min(double value1, double value2)\n"
    "double math.max(double value1, double value2)\n"
    "double math.atan2(double value1, double value2)\n"
    "double math.pow(double value1, double value2)\n"

    "double math.clamp(double value1, double value2, double value2)\n"
    "double math.clampf(double value1, double value2, double value2)\n"
    "double math.lerp(double value1, double value2, double value2)\n"
    "double math.smoothstep(double value1, double value2, double value2)\n"
         );
    Con::printf("*/");


    bool ok = ExportConsoleLines(fileName,  append);
    EndConsoleLines();
    Con::ConsoleDocForStub = false;
    return ok;
}



} //namespace


