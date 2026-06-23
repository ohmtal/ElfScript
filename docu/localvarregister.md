# Local Variables to register 

Basically this is implemented but i need to check `U32 VarNode::compile` what the
type is used. 

```
function foo() { %bar = 0.0; %bar += 0.1; echo(%bar);} foo();
```
VarNode::compile looks good it set it to float. 
