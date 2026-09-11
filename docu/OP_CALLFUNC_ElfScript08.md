# OP_CALLFUNC

ElfScript 0.8 : Targeting OP_CALLFUNC to optimize. 

1.)  switch (nsEntry->mType)

VM and switch is not the best idea, if i can change it ...
Idea an universal call which set the stack variable instead of returning one. 

2.)  if (callType == FuncCallExprNode::FunctionCall) ....

At Compiletype the callType is known so there should be different OP_CODES to 
kill this if. 
