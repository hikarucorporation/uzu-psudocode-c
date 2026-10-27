// Function : bonk_minvel
// Namespace: 
// Entry    : 004da4b0
// Prototype: undefined bonk_minvel(float param_1, long param_2)
// Body     : 004da4b0 - 004da4bc


void bonk_minvel(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x6c) = fVar1;
  return;
}


