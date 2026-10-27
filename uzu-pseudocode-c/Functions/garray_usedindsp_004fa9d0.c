// Function : garray_usedindsp
// Namespace: 
// Entry    : 004fa9d0
// Prototype: undefined garray_usedindsp(long param_1)
// Body     : 004fa9d0 - 004fa9d4


void garray_usedindsp(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
  return;
}


