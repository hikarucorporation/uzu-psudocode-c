// Function : fielddesc_cvttocoord
// Namespace: 
// Entry    : 005213c0
// Prototype: ulong fielddesc_cvttocoord(ulong param_1, long param_2)
// Body     : 005213c0 - 0052140b


ulong fielddesc_cvttocoord(ulong param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_2 + 0x10);
  if (*(float *)(param_2 + 0x14) == fVar3) {
    return param_1;
  }
  fVar4 = *(float *)(param_2 + 0x18);
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar2 = (((float)param_1 - fVar3) * (fVar1 - fVar4)) / (*(float *)(param_2 + 0x14) - fVar3) +
          fVar4;
  fVar3 = fVar4;
  if (fVar1 <= fVar4) {
    fVar3 = fVar1;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  if (fVar3 <= fVar4) {
    fVar4 = fVar3;
  }
  return (ulong)(uint)fVar4;
}


