// Function : expr_start
// Namespace: 
// Entry    : 00584b90
// Prototype: undefined expr_start(long param_1)
// Body     : 00584b90 - 00584b94


void expr_start(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf7;
  return;
}


