// Function : sigmund_printnext
// Namespace: 
// Entry    : 004e7420
// Prototype: undefined sigmund_printnext(float param_1, long param_2)
// Body     : 004e7420 - 004e7427


void sigmund_printnext(float param_1,long param_2)

{
  *(int *)(param_2 + 0x5c) = (int)param_1;
  return;
}


