// NOTE NOT GOOD for anything ;) it's fro testing: TEST_STRUCT_FAST_PATH
#include "console/engineAPI.h"
#include "console/consoleTypes.h"

#include "addons/SDL3/ConsoleTypes.h"

/*
 new Point2FObject(p); p.point= { 5.1, 6.2, 7.3 };


*/

class PoDObject: public SimObject
{
    typedef SimObject Parent;
public:

    Point2I m2I;
    Point2F m2F;
    // Point3F m3F;
    Color   mColor;
    Color4F mColorF;

    DECLARE_CONOBJECT(PoDObject);
    static void initPersistFields()
    {
        Parent::initPersistFields();
        addField("p2F",     TypePoint2F,     Offset(m2F, PoDObject));
        // addField("p3F",     TypePoint3F,     Offset(m3F, PoDObject));
        addField("p2I",     TypePoint2I,     Offset(m2I, PoDObject));
        addField("color",   TypeColor,       Offset(mColor, PoDObject));
        addField("colorF",  TypeColorF,      Offset(mColorF, PoDObject));
    };
};

IMPLEMENT_CONOBJECT(PoDObject);


