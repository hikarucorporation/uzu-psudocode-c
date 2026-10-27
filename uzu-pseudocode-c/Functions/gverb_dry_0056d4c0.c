// Function : gverb_dry
// Namespace: 
// Entry    : 0056d4c0
// Prototype: undefined gverb_dry(float param_1, long param_2)
// Body     : 0056d4c0 - 0056d4d4


void gverb_dry(float param_1,long param_2)

{
  float fVar1;
  
  if (DAT_005d9038 <= param_1) {
    param_1 = DAT_005d9038;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x38) = fVar1;
  return;
}


