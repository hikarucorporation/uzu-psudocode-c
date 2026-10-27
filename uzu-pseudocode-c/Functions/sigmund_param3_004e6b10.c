// Function : sigmund_param3
// Namespace: 
// Entry    : 004e6b10
// Prototype: undefined sigmund_param3(undefined4 param_1, long param_2)
// Body     : 004e6b10 - 004e6b18


void sigmund_param3(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xe8) = param_1;
  return;
}


