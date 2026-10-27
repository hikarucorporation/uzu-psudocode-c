// Function : clas_scaling
// Namespace: 
// Entry    : 0055e230
// Prototype: float clas_scaling(float param_1, long param_2)
// Body     : 0055e230 - 0055e2f0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float clas_scaling(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  fVar1 = *(float *)(param_2 + 0x40);
  fVar2 = *(float *)(param_2 + 0x48);
  fVar3 = *(float *)(param_2 + 0x44);
  fVar6 = *(float *)(param_2 + 0x4c) - fVar2;
  dVar4 = log((double)*(float *)(param_2 + 0x50));
  dVar5 = exp((double)(fVar1 - fVar3) * dVar4);
  dVar4 = exp((double)param_1 * dVar4);
  dVar7 = (double)fVar6;
  dVar4 = dVar7 * dVar7 * dVar4 * dVar5 + (double)fVar2;
  if (fVar6 < 0.0) {
    dVar4 = (double)((ulong)dVar4 ^ _DAT_00652d10);
  }
  return (float)dVar4;
}


