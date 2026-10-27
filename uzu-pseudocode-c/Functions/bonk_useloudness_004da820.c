// Function : bonk_useloudness
// Namespace: 
// Entry    : 004da820
// Prototype: undefined bonk_useloudness(float param_1, long param_2)
// Body     : 004da820 - 004da82e


void bonk_useloudness(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x78) = (uint)(param_1 != 0.0);
  return;
}


