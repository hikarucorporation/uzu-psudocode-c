// Function : bonk_spew
// Namespace: 
// Entry    : 004da800
// Prototype: undefined bonk_spew(float param_1, long param_2)
// Body     : 004da800 - 004da811


void bonk_spew(float param_1,long param_2)

{
  *(uint *)(param_2 + 0x2654) = (uint)(param_1 != 0.0);
  return;
}


