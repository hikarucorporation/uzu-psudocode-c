// Function : socket_set_boolopt
// Namespace: 
// Entry    : 005463f0
// Prototype: undefined socket_set_boolopt(int param_1, int param_2, int param_3)
// Body     : 005463f0 - 00546406


void socket_set_boolopt(int param_1,int param_2,int param_3)

{
  undefined1 local_4 [4];
  
  setsockopt(param_1,param_2,param_3,local_4,4);
  return;
}


