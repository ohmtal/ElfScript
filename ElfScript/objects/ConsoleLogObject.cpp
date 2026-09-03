//-----------------------------------------------------------------------------
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// ElfScript ConsoleLogObject
// can be used to work with the console log inside a script
// NOTE WiP
//-----------------------------------------------------------------------------

#include "console/engineAPI.h"

class ConsoleLogObject: public SimObject
{
    typedef SimObject Parent;

public:
    DECLARE_CONOBJECT(ConsoleLogObject);
    DECLARE_CALLBACK(void, onLog, (const char* text, U32 level));


    bool onAdd() override ;
    void onRemove() override;
};
// -----------------------------------------------------------------------------
namespace ConsoleLogParty{
    Vector<ConsoleLogObject*> LoggerList;

    void Logger(U32 level, const char *consoleLine) {
        for(S32 i =0 ; i < LoggerList.size(); i++) {
             LoggerList[i]->onLog_callback(consoleLine, level);
        }
    }
}
// -----------------------------------------------------------------------------

IMPLEMENT_CONOBJECT(ConsoleLogObject);
IMPLEMENT_CALLBACK( ConsoleLogObject, onLog, void, ( const char* text, U32 level), (  text,level),
                    "Called when a log line is pushed\n"
);

bool ConsoleLogObject::onAdd() {
    if (!Parent::onAdd()) return false;
    if (ConsoleLogParty::LoggerList.size() == 0) {
        Con::addConsumer(ConsoleLogParty::Logger);
    }
    ConsoleLogParty::LoggerList.push_back(this);
    return true;
}
void ConsoleLogObject::onRemove() {
    if (ConsoleLogParty::LoggerList.size() == 1) {
        Con::removeConsumer(ConsoleLogParty::Logger);
    }
    ConsoleLogParty::LoggerList.remove(this);
    Parent::onRemove();
}
