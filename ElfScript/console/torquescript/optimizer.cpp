//-----------------------------------------------------------------------------
// Copyright (c) 2013 GarageGames, LLC
// Copyright (c) 2021 TGEMIT Authors & Contributors
// Copyright (c) 2026 Thomas Hühn (XXTH)
// SPDX-License-Identifier: MIT
//-----------------------------------------------------------------------------
#include "codeBlock.h"

static bool isLiteralNumber(ExprNode* node)
{
   ExprNodeName name = node->getExprNodeNameEnum();
   return name == NameFloatNode || name == NameIntNode;
}

static F64 getFloatValue(ExprNode* node)
{
   if (node->getExprNodeNameEnum() == NameFloatNode)
      return static_cast<FloatNode*>(node)->value;
   return (F64)static_cast<IntNode*>(node)->value;
}

static S32 getIntValue(ExprNode* node)
{
   if (node->getExprNodeNameEnum() == NameFloatNode)
      return (S32)static_cast<FloatNode*>(node)->value;
   return static_cast<IntNode*>(node)->value;
}

bool FloatBinaryExprNode::optimize()
{
   // Perform constant folding
   if (isLiteralNumber(right) && isLiteralNumber(left))
   {
      F64 rightValue = getFloatValue(right);
      F64 leftValue = getFloatValue(left);
      F64 result = 0.0;

      switch (op)
      {
      case '+':
         result = leftValue + rightValue;
         break;
      case '-':
         result = leftValue - rightValue;
         break;
      case '*':
         result = leftValue * rightValue;
         break;
      case '/':
         if (rightValue != 0.0)
            result = leftValue / rightValue;
         break;
      }

      optimizedNode = FloatNode::alloc(dbgLineNumber, result);
      return true;
   }

   return false;
}

bool IntBinaryExprNode::optimize()
{
   if (op == '%' && left->getExprNodeNameEnum() == NameVarNode && isLiteralNumber(right))
   {
      // %a % intconst
      S32 val = getIntValue(right);
      switch (val)
      {
      case 2:
         op = '&';
         optimizedNode = IntNode::alloc(dbgLineNumber, 1);
         return true;
      case 4:
         op = '&';
         optimizedNode = IntNode::alloc(dbgLineNumber, 3);
         return true;
      case 8:
         op = '&';
         optimizedNode = IntNode::alloc(dbgLineNumber, 7);
         return true;
      }
   }

   return false;
}
