// Function : sigmund_param1
// Namespace: 
// Entry    : 004e6af0
// Prototype: undefined sigmund_param1(undefined4 param_1, long param_2)
// Body     : 004e6af0 - 004e6af8


void sigmund_param1(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xe0) = param_1;
  return;
}


