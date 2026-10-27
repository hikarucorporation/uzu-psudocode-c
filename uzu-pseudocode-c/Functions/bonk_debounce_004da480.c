// Function : bonk_debounce
// Namespace: 
// Entry    : 004da480
// Prototype: undefined bonk_debounce(float param_1, long param_2)
// Body     : 004da480 - 004da4a1


void bonk_debounce(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_1) && (fVar1 = param_1, DAT_005d9038 < param_1)) {
    fVar1 = DAT_005d9038;
  }
  *(float *)(param_2 + 0x7c) = fVar1;
  return;
}


