// Function : expr_stop
// Namespace: 
// Entry    : 00584ba0
// Prototype: undefined expr_stop(long param_1)
// Body     : 00584ba0 - 00584ba4


void expr_stop(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 8;
  return;
}


