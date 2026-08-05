// TEST TEST_STRUCT_FAST_PATH
#include "console/engineAPI.h"
#include "console/consoleTypes.h"

#include "addons/SDL3/ConsoleTypes.h"

/*
 new Point2FObject(p); p.point= { 5.1, 6.2, 7.3 };


*/

class Point2FObject: public SimObject
{
    typedef SimObject Parent;
public:
    Point2F mPoint;
    DECLARE_CONOBJECT(Point2FObject);
    static void initPersistFields()
    {
        Parent::initPersistFields();
        addField("point",     TypePoint2F,     Offset(mPoint, Point2FObject));
    };
};

IMPLEMENT_CONOBJECT(Point2FObject);
