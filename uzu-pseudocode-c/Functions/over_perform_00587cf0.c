// Function : over_perform
// Namespace: 
// Entry    : 00587cf0
// Prototype: long over_perform(long param_1)
// Body     : 00587cf0 - 00587d94


long over_perform(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    pfVar5 = *(float **)(param_1 + 0x18);
    pfVar6 = *(float **)(param_1 + 8);
    pfVar4 = *(float **)(param_1 + 0x10);
    uVar2 = uVar1;
    if ((uVar1 & 1) != 0) {
      fVar7 = 0.0;
      if (*pfVar4 != 0.0) {
        fVar7 = *pfVar6 / *pfVar4;
      }
      pfVar6 = pfVar6 + 1;
      pfVar4 = pfVar4 + 1;
      *pfVar5 = fVar7;
      pfVar5 = pfVar5 + 1;
      uVar2 = uVar1 - 1;
    }
    if (uVar1 != 1) {
      lVar3 = 0;
      do {
        fVar7 = 0.0;
        fVar8 = 0.0;
        if (pfVar4[lVar3] != 0.0) {
          fVar8 = pfVar6[lVar3] / pfVar4[lVar3];
        }
        pfVar5[lVar3] = fVar8;
        if (pfVar4[lVar3 + 1] != 0.0) {
          fVar7 = pfVar6[lVar3 + 1] / pfVar4[lVar3 + 1];
        }
        pfVar5[lVar3 + 1] = fVar7;
        lVar3 = lVar3 + 2;
      } while (uVar2 != (uint)lVar3);
    }
  }
  return param_1 + 0x28;
}


