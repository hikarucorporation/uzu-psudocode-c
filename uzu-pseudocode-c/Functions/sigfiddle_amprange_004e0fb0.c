// Function : sigfiddle_amprange
// Namespace: 
// Entry    : 004e0fb0
// Prototype: undefined sigfiddle_amprange(float param_1, float param_2, long param_3)
// Body     : 004e0fb0 - 004e0fe4


void sigfiddle_amprange(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = param_1;
  }
  fVar1 = DAT_005d9038 + fVar2;
  *(float *)(param_3 + 0x314) = fVar2;
  *(uint *)(param_3 + 0x318) =
       ~-(uint)(param_2 < fVar2) & (uint)param_2 | (uint)fVar1 & -(uint)(param_2 < fVar2);
  return;
}


