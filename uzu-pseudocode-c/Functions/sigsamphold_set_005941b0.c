// Function : sigsamphold_set
// Namespace: 
// Entry    : 005941b0
// Prototype: undefined sigsamphold_set(undefined4 param_1, long param_2)
// Body     : 005941b0 - 005941b5


void sigsamphold_set(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x38) = param_1;
  return;
}


