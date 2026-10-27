// Function : square_soft
// Namespace: 
// Entry    : 005718a0
// Prototype: undefined square_soft(float param_1, long param_2)
// Body     : 005718a0 - 005718b2


void square_soft(float param_1,long param_2)

{
  *(ulong *)(param_2 + 0x80) = (ulong)(param_1 != 0.0);
  return;
}


