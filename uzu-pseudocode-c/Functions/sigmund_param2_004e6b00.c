// Function : sigmund_param2
// Namespace: 
// Entry    : 004e6b00
// Prototype: undefined sigmund_param2(undefined4 param_1, long param_2)
// Body     : 004e6b00 - 004e6b08


void sigmund_param2(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xe4) = param_1;
  return;
}


