// Function : fielddesc_cvtfromcoord
// Namespace: 
// Entry    : 00521550
// Prototype: ulong fielddesc_cvtfromcoord(ulong param_1, long param_2)
// Body     : 00521550 - 005215c3


ulong fielddesc_cvtfromcoord(ulong param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x18);
  if (*(float *)(param_2 + 0x1c) == fVar4) {
    return param_1;
  }
  fVar3 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = (((float)param_1 - fVar4) * (fVar1 - fVar3)) / (*(float *)(param_2 + 0x1c) - fVar4) +
          fVar3;
  fVar4 = *(float *)(param_2 + 0x20);
  if (fVar4 != 0.0) {
    fVar2 = (float)(int)((double)(fVar2 / fVar4) + DAT_005db338) * fVar4;
  }
  fVar4 = fVar3;
  if (fVar1 <= fVar3) {
    fVar4 = fVar1;
  }
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  if (fVar3 <= fVar1) {
    fVar3 = fVar1;
  }
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  return (ulong)(uint)fVar3;
}


