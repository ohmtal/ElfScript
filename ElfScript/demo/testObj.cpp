#include "console/engineAPI.h"

class TestObject: public SimObject
{
    typedef Parent SimObject;
public:
    DECLARE_CONOBJECT(TestObject);
    F32 mX, mY, mZ;
    StringTableEntry mName;

    TestObject() {
        mX = mY = mZ = 0.f;
        mName = StringTable->insert("NoName");
    }

    static void initPersistFields()
    {
        Parent::initPersistFields();
        addField("x",     TypeF32,     Offset(mX, TestObject));
        addField("y",     TypeF32,     Offset(mY, TestObject));
        addField("z",     TypeF32,     Offset(mZ, TestObject));
        addField("testFloat",     TypeF32,     Offset(mX, TestObject));
        addField("testName", TypeString, Offset(mName, TestObject));
    }

    void setPos(F32 x, F32 y, F32 z) {
        mX = x;
        mY = y;
        mZ = z;
    }
};

IMPLEMENT_CONOBJECT(TestObject);

DefineEngineMethod(TestObject, getPos, String, (), , "get the position") {
    // we do nothing special here
    StringBuilder str;
    str.format("%g %g %g", object->mX, object->mY, object->mZ);
    return Con::getStringArg(str.end());
}

DefineEngineMethod(TestObject, getX, F32, (), , "") {
  return object->mX;
}
DefineEngineMethod(TestObject, getY, F32, (), , "") {
    return object->mY;
}
DefineEngineMethod(TestObject, getZ, F32, (), , "") {
    return object->mZ;
}

DefineEngineMethod(TestObject, walk, void, (F32 x, F32 y, F32 z), , "Set point where to walk to") {
    // we do nothing special here
    object->setPos(x,y,z);
}
