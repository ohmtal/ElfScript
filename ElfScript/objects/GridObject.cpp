//-----------------------------------------------------------------------------
// Copyright (c) 2009/2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#include "GridObject.h"
#include "console/engineAPI.h"
#include <math/mMathConsoleVector.h>
#include "Array.h"

namespace ElfGrid {

IMPLEMENT_CONOBJECT(GridObject);


bool GridObject::onAdd()
{
    if (!Parent::onAdd()) return false;
    return true;
}
void GridObject::onRemove()
{
    Parent::onRemove();
}

Array* GridObject::createPath(ConsoleVector start, ConsoleVector end, const bool smoothPath )
{
    if (!mGrid.isInitialized()) return nullptr;
    bool result = false;
    std::vector<ElfScript::BasicGridNode*> replyList;

    ElfScript::BasicGridNode* startNode = mGrid.findNode(start.points[0], start.points[1]);
    ElfScript::BasicGridNode* goalNode = mGrid.findNode(end.points[0], end.points[1]);
    if (startNode && goalNode) {
        result = mGrid.generatePath(startNode, goalNode, replyList, smoothPath);
    }

    if (result)
    {

        Array* pathObject = new Array();
        pathObject->registerObject();

        // garbage collection is done be RootGroup :D
        SimGroup* grp = Sim::getGarbageCollectionGroup();
        if (grp) grp->addObject(pathObject);


        F32 halfSquareSize = mGrid.getHalfSquareSize();

        ConsoleValue donkey;
        donkey.type = cvVector;

        for (U32 i = 0; i < replyList.size(); i++)
        {
            donkey.v = ElfMath::Vec4Add( replyList[i]->getPos(),{halfSquareSize,halfSquareSize,0.f,0.f });
            pathObject->mValues.push_back(donkey);
        }
        return pathObject;
    }

    return nullptr;
}
// ----------------------------------------------------------------
// ------------------------ Console -------------------------------
// ----------------------------------------------------------------
// DefineEngineMethod(Grid, init, bool, (Rectangle area, F32 squareSize), , "param: area: x y w h, F32 SquareSize")
DefineEngineMethod(GridObject, init, bool, (ConsoleVector area, F32 squareSize), , "param: area: x y w h, F32 SquareSize")
{
    if (!ElfMath::isValidRect(area)) return false;
    object->mGrid.init(area, squareSize);

    return true;
}


DefineEngineMethod(GridObject, getNodeCount, S32, (), , "get count of nodes")
{
    return object->mGrid.getNodeCount();
}

DefineEngineMethod(GridObject, getNodeCountX, S32, (), , "get count of horizontal nodes ")
{
    return object->mGrid.getNodesX();
}
DefineEngineMethod(GridObject, getNodeCountY, S32, (), , "get count of vertical nodes ")
{
    return object->mGrid.getNodesY();
}


// DefineEngineMethod(Grid, getPos, Vector2, (F32 x, F32 y),
DefineEngineMethod(GridObject, getPos, ConsoleVector, (F32 x, F32 y),
                   , "x,y; return top left pos of a node by the world values ")
{
    ElfScript::BasicGridNode *lNode = object->mGrid.findNode(x,y);

    if (lNode) return lNode->getPos();

    return {0};
}

DefineEngineMethod(GridObject, getFlags, S32, (F32 x, F32 y), , "x,y; return flags ") {

    ElfScript::BasicGridNode* lNode = object->mGrid.findNode(x, y);
    U32 lResult = 0;

    if (lNode)
    {
        lResult = (U32)lNode->getFlags();
    }

    return lResult;
}

DefineEngineMethod(GridObject, getNodeByPos, const char*, (F32 x, F32 y), , "x,y; return nodeidx x y flags ")
{
    char* rbuf = Con::getReturnBuffer(256);
    ElfScript::BasicGridNode *lNode;
    S32 lNodeIndex = object->mGrid.getNodeIndex(x,y);
    if (lNodeIndex >= 0)
        lNode = object->mGrid.getNodeById(lNodeIndex);
    else
        return "";

    // getNodeIndex
    if (lNode)
    {
        dSprintf(rbuf, 256, "%d %f %f %d", lNodeIndex, lNode->getPos().points[0], lNode->getPos().points[1],  (U32)lNode->getFlags());
        return rbuf;
    }

    return "";
}

DefineEngineMethod(GridObject, getNodeIdByPos, S32, (F32 x, F32 y), ,  "x,y; return S32 nodeidx ")
{
    ElfScript::BasicGridNode* lNode;
    S32 lNodeIndex = object->mGrid.getNodeIndex(x,y);
    if (lNodeIndex >= 0)
        lNode = object->mGrid.getNodeById(lNodeIndex);
    else
        return -1;

    // getNodeIndex
    if (lNode)
    {
        return  lNodeIndex;
    }

    return -1;
}

DefineEngineMethod(GridObject, getNode, const char*, (S32 nodeIndex), , "S32 NodeIndex,  return nodeidx x y z flags ")
{
    char* rbuf = Con::getReturnBuffer(256);
    ElfScript::BasicGridNode *lNode;
    S32 lNodeIndex = nodeIndex;
    if (lNodeIndex >= 0)
        lNode = object->mGrid.getNodeById(lNodeIndex);
    else
        return "";

    // getNodeIndex
    if (lNode)
    {
        dSprintf(rbuf, 256, "%d %f %f %d", lNodeIndex, lNode->getPos().points[0], lNode->getPos().points[1], (U32)lNode->getFlags());
        return rbuf;
    }

    return "";
}

// DefineEngineMethod(Grid, getNodesByRect, const char*, (Rectangle area), , "x y w h,  return nodeidx nodeidx .. ")
DefineEngineMethod(GridObject, getNodesByRect, const char*, (ConsoleVector area), , "x y w h,  return nodeidx nodeidx .. ")
{
    std::vector<S32> lVisRadiusList;

    object->mGrid.getNodesByRect(area,lVisRadiusList,true);

    if (lVisRadiusList.size() == 0)
        return "";

    char* rbuf = Con::getReturnBuffer(1024);
    for (S32 i = 0; i < lVisRadiusList.size() ; i++)
    {
        if (i == 0)
            dSprintf(rbuf, 1024, "%d",lVisRadiusList[i]);
        else
            dSprintf(rbuf, 1024, "%s %d", rbuf,lVisRadiusList[i]);
    }

    return rbuf;

}

DefineEngineMethod(GridObject, getNeighbour, const char*, (S32 nodeIndex, S32 direction), , "S32 NodeIndex, S32 Direction,  return nodeidx x y flags "
"Directions:"
"1  2  3"
"4  X  5"
"6  7  8"
)
{
    char* rbuf = Con::getReturnBuffer(256);
    ElfScript::BasicGridNode* lstartNode;
    ElfScript::BasicGridNode* lNode;
    S32 lNodeIndex = 0;
    S32 lStartNodeIndex = nodeIndex;
    S32 lDirection = direction;
    if (lNodeIndex >= 0 && (lDirection > 0 && lDirection < 9))
    {
        lstartNode = object->mGrid.getNodeById(lStartNodeIndex);
        lNode = object->mGrid.getNeighbour(lstartNode, lDirection, lNodeIndex);
    }
    else
        return "";

    // getNodeIndex
    if (lNode)
    {
        dSprintf(rbuf, 256, "%d %f %f %d", lNodeIndex, lNode->getPos().points[0], lNode->getPos().points[1],  (U32)lNode->getFlags());
        return rbuf;
    }

    return "";
}

DefineEngineMethod(GridObject, setFlags, bool, (F32 x, F32 y, U32 flags), , "x,y; set flags ")
{
    ElfScript::BasicGridNode *lNode = object->mGrid.findNode(x,y);

    if (lNode)
    {
        //done at the node object->mGrid.setDirty();
        lNode->setFlags(flags);
        return true;
    }

    return false;
}

DefineEngineMethod(GridObject, setIntValue, bool, (F32 x, F32 y, S32 idx, S32 value), , "x,y, idx[0..9], Value; set int value ")
{
    if (idx > 9 || idx < 0)
        return false;
    ElfScript::BasicGridNode *lNode = object->mGrid.findNode(x,y);

    if (lNode)
    {
        //done at the node ..not atm but when used it will ...object->mGrid.setDirty();
        lNode->setIntValue(idx,value);
        return true;
    }

    return false;
}

DefineEngineMethod(GridObject, setWeight, bool, (F32 x, F32 y, S32 weigth), , "x,y, U8 weight")
{
    ElfScript::BasicGridNode *lNode = object->mGrid.findNode(x,y);

    if (lNode)
    {
        //done at the node ..not atm but when used it will ...object->mGrid.setDirty();
        lNode->setWeight(weigth);
        return true;
    }

    return false;
}

DefineEngineMethod(GridObject, getIntValue,S32, (F32 x,F32 y,S32 idx), , "x,y, idx[0..9]")
{
    if (idx > 9 || idx < 0)
        return 0;
    ElfScript::BasicGridNode *lNode = object->mGrid.findNode(x,y);

    if (lNode)
    {
        return lNode->getIntValue(idx);

    }

    return 0;
}

DefineEngineMethod(GridObject, setIntValueByNodeId, bool, (S32 nodeId, S32 idx, S32 value), , "x,y, U8 value")
{
    if (idx > 9)
        return false;
    ElfScript::BasicGridNode* lNode = object->mGrid.getNodeById(nodeId);

    if (lNode)
    {
        //done at the node ..not atm but when used it will ...object->mGrid.setDirty();
        lNode->setIntValue(idx, value);
        return true;
    }

    return false;
}

DefineEngineMethod(GridObject, getIntValueByNodeId, S32, (S32 nodeId, S32 idx), , "nodeId, idx[0..9]")
{
    if (idx > 9)
        return 0;
    ElfScript::BasicGridNode* lNode = object->mGrid.getNodeById(nodeId);

    if (lNode)
    {
        return lNode->getIntValue(idx);

    }

    return 0;
}

DefineEngineMethod(GridObject, getinfo, void, (bool listNodes), (false), "Display Infos on Console")
{

    Con::printf("Grid - id:%d, Area: %d,%d %d,%d NodeCount:%d SquareSize:%f",
                object->getId(),
                object->mGrid.getArea().points[0], object->mGrid.getArea().points[1],
                object->mGrid.getArea().points[2], object->mGrid.getArea().points[3],
                object->mGrid.getNodeCount(),
                object->mGrid.getSquareSize());


    if (listNodes)
    {
        ElfScript::BasicGridNode* curNode;
        for (U32 i = 0; i < object->mGrid.getNodeCount(); ++i)
        {
            curNode = object->mGrid.getNodeById(i);
            Con::printf("node %d at %f,%f", i,
                        curNode->getPos().points[0], curNode->getPos().points[1]
            );
        }
    }

}

DefineEngineMethod(GridObject, findPath, Array*, (ConsoleVector start, ConsoleVector goal, bool smoothPath), ( false)
, "findPath (Vector2 start, Vector2 goal, bool smoothPath = false) - Create a path between the two points."
  "Warning smoothPath use line of sight and ignore the weight !!!!!"
)
{
    return object->createPath(start,goal, smoothPath);
}



DefineEngineMethod(GridObject, getWeightByNodeId, S32, (S32 nodeId), , "")
{
    ElfScript::BasicGridNode* lNode = object->mGrid.getNodeById(nodeId);
    if (lNode)
    {
        return lNode->getWeight();
    }
    return -1;
}


DefineEngineMethod(GridObject, setWeightByNodeId, bool, (S32 nodeId, S32 weight), , "nodeId, U8 weight")
{
    ElfScript::BasicGridNode* lNode = object->mGrid.getNodeById(nodeId);
    if (lNode)
    {
        lNode->setWeight(weight);
        return true;
    }
    return false;
}



DefineEngineMethod(GridObject, getNodeRectbyId, ConsoleVector, (S32 nodeId), , "return centered rectI pos / extent ")
{
    ElfScript::BasicGridNode* lNode = object->mGrid.getNodeById(nodeId);
    if (lNode)
    {
        return {
            (lNode->getPos().points[0]),
            (lNode->getPos().points[1]),
            (object->mGrid.getSquareSize()),
            (object->mGrid.getSquareSize())
        };
    }

    return {0};
}

// ----------------------------------------------------------------------------
DefineEngineMethod(GridObject, getPathCost, S32, (ConsoleVector start, ConsoleVector goal, bool smoothPath), ( true)
, "getPathCost (Vector2 start, Vector2 goal) - Create a path between the two points and Return the lenth of the path")
{
    return object->mGrid.getPathCosts(start, goal);
}
//------------------------------------------------------------------------------------------------------------------
DefineEngineMethod(GridObject, compilePathCosts, void,() , , "Fill the table with all path costs - expensive!")
{
    object->mGrid.mPathCosts = object->mGrid.CreateAllPairsCostsTable();
}

DefineEngineMethod(GridObject, getNodeToNodeCosts, S32, (ConsoleVector start, ConsoleVector goal, bool smoothPath), ( true)
, "(param Vector2 from,  Vector2 to;	return F32 distance)"
  "return nodecount of to points to calculated closed path it -1 then it failed") {
    return object->mGrid.getNodeToNodeCosts(start, goal);
}


} //namespace
