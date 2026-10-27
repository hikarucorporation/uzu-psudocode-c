// Function : voutlet_perform
// Namespace: 
// Entry    : 00519e80
// Prototype: long voutlet_perform(long param_1)
// Body     : 00519e80 - 00519f5f


long voutlet_perform(long param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  
  lVar4 = *(long *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x20);
  uVar2 = *(uint *)(param_1 + 0x28);
  iVar12 = *(int *)(lVar4 + 0x48);
  iVar3 = *(int *)(lVar4 + 0x40);
  if (uVar2 != 0) {
    pfVar5 = *(float **)(param_1 + 0x18);
    pfVar13 = pfVar5 + iVar3;
    pfVar9 = pfVar5 + iVar12;
    pfVar8 = *(float **)(param_1 + 0x10);
    uVar6 = uVar2;
    if ((uVar2 & 1) != 0) {
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      *pfVar9 = *pfVar9 + fVar1;
      pfVar9 = pfVar9 + 1;
      uVar6 = uVar2 - 1;
      if (pfVar9 == pfVar13) {
        pfVar9 = pfVar5;
      }
    }
    if (uVar2 != 1) {
      lVar10 = 0;
      do {
        *pfVar9 = *pfVar9 + pfVar8[lVar10];
        pfVar11 = pfVar9 + 1;
        if (pfVar9 + 1 == pfVar13) {
          pfVar11 = pfVar5;
        }
        *pfVar11 = *pfVar11 + pfVar8[lVar10 + 1];
        pfVar9 = pfVar5;
        if (pfVar11 + 1 != pfVar13) {
          pfVar9 = pfVar11 + 1;
        }
        lVar10 = lVar10 + 2;
      } while (uVar6 != (uint)lVar10);
    }
  }
  if (iVar7 != 0) {
    iVar12 = iVar12 + *(int *)(lVar4 + 0x4c);
    iVar7 = 0;
    if (iVar12 < iVar3) {
      iVar7 = iVar12;
    }
    *(int *)(lVar4 + 0x48) = iVar7;
  }
  return param_1 + 0x30;
}


