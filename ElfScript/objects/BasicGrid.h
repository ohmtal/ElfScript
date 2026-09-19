//-----------------------------------------------------------------------------
// Copyright (c) 2009 Thomas Hühn (XXTH) 
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
// BasicGrid
// NOTE: created for Auteria in 2009 (TGE), ported to OGE(Torque2D) then ported
//       to OGE3D(Torque3D) then ported to OhmFlux and finally ported to
//       raylib-elfscript
//
//       ElfScript 0.8 and finally to ElfScript base
//-----------------------------------------------------------------------------

#pragma once
#ifndef _BASICGRID_H_
#define _BASICGRID_H_

#include <vector>
#include <cassert>
#include <platform/types.h>
#include <console/console.h>


//-------------------------------------------
namespace ElfScript {


const U32 BASIC_GRID_NODE_INTVALUES_COUNT = 10;



class BasicGridNode
{

private:
   ConsoleVector mPos;
   // Flag 0 = unwalkable!
   U32  mFlags;
   U8  mWeight;
   S32 mIntValues[BASIC_GRID_NODE_INTVALUES_COUNT];

public:
	//pathfinding stuff:
	bool mOpen;
	bool mClosed;
	F32 mFitness;
	F32 mLowestCostFromStart;
	F32 mHeuristicCostToGoal;
	BasicGridNode* mParent;


public:
   void setPos(const ConsoleVector& lPos) { mPos = lPos; }
   void setZ( F32 value ) { mPos.points[2] = value; }
   ConsoleVector getPos() { return mPos;}
   // ConsoleVector getPos2F() { return { mPos.x, mPos.y };} //COMPAT
   // ConsoleVector getPos3F() { return { mPos.x, mPos.y, mZ};}
   F32 getZ() { return mPos.points[2];}


   void setIntValue(S32 idx,S32 lValue)
   {
       assert(idx >= 0);
	   if ( idx < BASIC_GRID_NODE_INTVALUES_COUNT )
           mIntValues[idx] = lValue;
   }
   S32 getIntValue(S32 idx)
   {
      assert(idx >= 0);
	   if ( idx < BASIC_GRID_NODE_INTVALUES_COUNT )
		   return mIntValues[idx]; 
	   else 
		   return 0; 
   }

   void setWeight (S32 lValue) { mWeight = (U8)lValue; }
   S32 getWeight () { return (S32)mWeight; }

   void setFlags (U32 lFlags) { mFlags = lFlags; }
   U32 getFlags () { return mFlags; }

   bool isFlagOn(U8 lFlag)  { 
	   return (mFlags & BIT(lFlag)) == BIT(lFlag); 
   }
   void toggleFlag(U8 lFlag) { 
	   if (!isFlagOn(lFlag)) 
		   mFlags |= BIT(lFlag); 
	   else
		   mFlags ^= BIT(lFlag); 
   }

   void addFlag(U8 lFlag) { 
	   if (!isFlagOn(lFlag)) 
		   mFlags |= BIT(lFlag); 
   }
   void rmvFlag(U8 lFlag) { 
	   if (isFlagOn(lFlag))  
			mFlags ^= BIT(lFlag); 
   }



   U8 getPathWeight()
   {
	   if (isFlagOn(0))
		   return 255;
		return mWeight;
   }



   BasicGridNode() { 
	   mPos={ 0.f,0.f };
	   mFlags=0; 

	   mOpen    = false; 
	   mClosed  = false;
	   mFitness = 0.f;
	   mWeight = 0;
	   mLowestCostFromStart = 0.f;
	   mHeuristicCostToGoal = 0.f;
	   mParent = nullptr;
	   for (S32 i=0;i<10; i++)
		   mIntValues[i]=0; 
   }

   ~BasicGridNode() {
   }
};


class BasicGrid
{

public:
	BasicGrid();
	virtual ~BasicGrid();

private:
	F32 mSquareSize;

protected:
	ConsoleVector mArea;
	bool mInitDone;
	bool mDebugGrid;
    bool mClientGame;

	S32 mNodesX,mNodesY, mNodeCount;
	BasicGridNode* mNodes;
	

	void resetNodeVariables(std::vector<BasicGridNode*> &affectedList);
	F32 estimateCostToGoal(BasicGridNode* from, BasicGridNode* goal);


public:
   bool isInitialized() { return mInitDone; }

   bool generatePath(BasicGridNode* startNode,
                     BasicGridNode* goalNode,
                     std::vector<BasicGridNode*> &replyList,
                     const bool smoothPath);

   void smoothPath(std::vector<BasicGridNode*>& path);
   bool checkLineOfSight(ConsoleVector start, ConsoleVector end);
   std::vector<ConsoleVector> getPath(ConsoleVector start, ConsoleVector end, bool smoothPath);

   S32 getPathCosts(ConsoleVector start, ConsoleVector end);

   //this will hold a pre-calculated lookup table of the cost to travel from
	//one node to any other.

   std::vector<std::vector<U32> >  mPathCosts;
   std::vector<std::vector<U32> >  CreateAllPairsCostsTable();
   S32 getNodeToNodeCosts(ConsoleVector from, ConsoleVector to);


   S32  getNodeIndex(F32 x, F32 y);
   BasicGridNode* getNeighbour(BasicGridNode* startNode, U8 direction, S32 &nodeIndex);

   bool getNodesByRect(const ConsoleVector &lRect, std::vector<S32> &lList, bool lCanOverlap = false);

   bool getClientGame() { return mClientGame; }
   void setClientGame(bool lValue) { mClientGame= lValue; }

   F32 getSquareSize() { return mSquareSize; }
   F32 getHalfSquareSize() { return mSquareSize / 2.f; }

   ConsoleVector getArea() { return mArea; }

   bool getDebugGrid() { return mDebugGrid; }
   void setDebugGrid(bool lValue) { mDebugGrid = lValue; }
   BasicGridNode* findNode(F32 x, F32 y);
   BasicGridNode* findNode(F32 x, F32 y, S32 &nodeIndex);

   BasicGridNode* getNodeById(U32 lId) { 
	   if (lId >=0 && lId < getNodeCount())
			return &mNodes[lId]; 
	   else
		   return nullptr;
   }

   U32 getNodeCount() { return mNodeCount; }

   S32 getNodesX() const { return mNodesX; }
   S32 getNodesY() const { return mNodesY; }



   virtual void init(ConsoleVector lArea, F32 lSquareSize = 8);
   
};
} //ElfGrid
#endif //_BASICGRID_H_
