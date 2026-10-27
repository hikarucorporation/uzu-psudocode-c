// Function : gverb_bw
// Namespace: 
// Entry    : 0056d490
// Prototype: undefined gverb_bw(float param_1, long param_2)
// Body     : 0056d490 - 0056d4b4


void gverb_bw(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_005d9038;
  if (DAT_005d9038 <= param_1) {
    param_1 = DAT_005d9038;
  }
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = param_1;
  }
  *(float *)(param_2 + 0x34) = fVar2;
  **(float **)(param_2 + 0x60) = fVar1 - fVar2;
  return;
}


