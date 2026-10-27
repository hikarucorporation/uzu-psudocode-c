// Function : bonk_debug
// Namespace: 
// Entry    : 004da7e0
// Prototype: undefined bonk_debug(float param_1, long param_2)
// Body     : 004da7e0 - 004da7f1


void bonk_debug(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x2648) = (uint)(param_1 != 0.0);
  return;
}


