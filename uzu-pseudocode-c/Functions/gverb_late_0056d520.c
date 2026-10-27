// Function : gverb_late
// Namespace: 
// Entry    : 0056d520
// Prototype: undefined gverb_late(float param_1, long param_2)
// Body     : 0056d520 - 0056d534


void gverb_late(float param_1,long param_2)

{
  float fVar1;
  
  if (DAT_005d9038 <= param_1) {
    param_1 = DAT_005d9038;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0x3c) = fVar1;
  return;
}


