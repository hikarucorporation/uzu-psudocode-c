// Function : siglop_perf_scalar
// Namespace: 
// Entry    : 00595870
// Prototype: long siglop_perf_scalar(long param_1)
// Body     : 00595870 - 005959c2


long siglop_perf_scalar(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  fVar9 = **(float **)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  fVar10 = *(float *)(lVar1 + 0x34);
  uVar7 = (uint)uVar2;
  if (fVar9 == *(float *)(lVar1 + 0x38)) {
    fVar8 = *(float *)(lVar1 + 0x3c);
  }
  else {
    *(float *)(lVar1 + 0x38) = fVar9;
    fVar9 = fVar9 * *(float *)(lVar1 + 0x30);
    fVar8 = DAT_005d9038;
    if ((fVar9 <= DAT_005d9038) && (fVar8 = fVar9, fVar9 < 0.0)) {
      fVar8 = 0.0;
    }
    *(float *)(lVar1 + 0x3c) = fVar8;
  }
  if (0 < (int)uVar7) {
    if (2 < uVar7 - 1) {
      lVar6 = 0;
      lVar3 = 0;
      do {
        fVar10 = (*(float *)(lVar4 + lVar6 * 4) - fVar10) * fVar8 + fVar10;
        *(float *)(lVar5 + lVar6 * 4) = fVar10;
        fVar10 = (*(float *)(lVar4 + 4 + lVar6 * 4) - fVar10) * fVar8 + fVar10;
        *(float *)(lVar5 + 4 + lVar6 * 4) = fVar10;
        fVar10 = (*(float *)(lVar4 + 8 + lVar6 * 4) - fVar10) * fVar8 + fVar10;
        *(float *)(lVar5 + 8 + lVar6 * 4) = fVar10;
        fVar10 = (*(float *)(lVar4 + 0xc + lVar6 * 4) - fVar10) * fVar8 + fVar10;
        *(float *)(lVar5 + 0xc + lVar6 * 4) = fVar10;
        lVar3 = lVar3 + -0x10;
        lVar6 = lVar6 + 4;
      } while ((uVar7 & 0xfffffffc) != (uint)lVar6);
      lVar4 = lVar4 - lVar3;
      lVar5 = lVar5 - lVar3;
    }
    if ((uVar2 & 3) != 0) {
      lVar3 = 0;
      do {
        fVar10 = fVar10 + (*(float *)(lVar4 + lVar3 * 4) - fVar10) * fVar8;
        *(float *)(lVar5 + lVar3 * 4) = fVar10;
        lVar3 = lVar3 + 1;
      } while ((uVar7 & 3) != (uint)lVar3);
    }
  }
  fVar9 = 0.0;
  if ((((uint)fVar10 >> 0x1d ^ (uint)fVar10 >> 0x1e) & 1) != 0) {
    fVar9 = fVar10;
  }
  *(float *)(lVar1 + 0x34) = fVar9;
  return param_1 + 0x30;
}


