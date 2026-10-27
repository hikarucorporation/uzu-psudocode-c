// Function : sigsamphold_perform
// Namespace: 
// Entry    : 00595bd0
// Prototype: long sigsamphold_perform(long param_1)
// Body     : 00595bd0 - 00595cb4


long sigsamphold_perform(long param_1)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x28);
  fVar10 = *(float *)(lVar3 + 0x34);
  uVar9 = *(undefined4 *)(lVar3 + 0x38);
  if ((int)uVar2 < 1) {
    *(float *)(lVar3 + 0x34) = fVar10;
    *(undefined4 *)(lVar3 + 0x38) = uVar9;
    return param_1 + 0x30;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  puVar8 = *(undefined4 **)(param_1 + 8);
  pfVar7 = *(float **)(param_1 + 0x10);
  if (uVar2 != 1) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      fVar1 = pfVar7[lVar4];
      if (fVar1 < fVar10) {
        uVar9 = puVar8[lVar4];
      }
      puVar5[lVar4] = uVar9;
      fVar10 = pfVar7[lVar4 + 1];
      if (fVar10 < fVar1) {
        uVar9 = puVar8[lVar4 + 1];
      }
      puVar5[lVar4 + 1] = uVar9;
      lVar6 = lVar6 + -8;
      lVar4 = lVar4 + 2;
    } while ((uVar2 & 0xfffffffe) != (uint)lVar4);
    puVar8 = (undefined4 *)((long)puVar8 - lVar6);
    pfVar7 = (float *)((long)pfVar7 - lVar6);
    puVar5 = (undefined4 *)((long)puVar5 - lVar6);
    if ((uVar2 & 1) == 0) {
      *(float *)(lVar3 + 0x34) = fVar10;
      *(undefined4 *)(lVar3 + 0x38) = uVar9;
      return param_1 + 0x30;
    }
  }
  fVar1 = *pfVar7;
  if (fVar1 < fVar10) {
    uVar9 = *puVar8;
  }
  *puVar5 = uVar9;
  *(float *)(lVar3 + 0x34) = fVar1;
  *(undefined4 *)(lVar3 + 0x38) = uVar9;
  return param_1 + 0x30;
}


