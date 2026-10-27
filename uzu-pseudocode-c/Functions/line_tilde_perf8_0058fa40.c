// Function : line_tilde_perf8
// Namespace: 
// Entry    : 0058fa40
// Prototype: long line_tilde_perf8(long param_1)
// Body     : 0058fa40 - 0058fc23


long line_tilde_perf8(long param_1)

{
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  lVar6 = *(long *)(param_1 + 8);
  pfVar3 = *(float **)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  fVar11 = *(float *)(lVar6 + 0x34);
  uVar9 = (uint)uVar2;
  if ((((uint)fVar11 >> 0x1d ^ (uint)fVar11 >> 0x1e) & 1) == 0) {
    *(undefined4 *)(lVar6 + 0x34) = 0;
    fVar11 = 0.0;
    iVar10 = *(int *)(lVar6 + 0x54);
  }
  else {
    iVar10 = *(int *)(lVar6 + 0x54);
  }
  if (iVar10 == 0) {
    iVar10 = *(int *)(lVar6 + 0x50);
    if (iVar10 == 0) {
      fVar11 = *(float *)(lVar6 + 0x30);
      *(float *)(lVar6 + 0x34) = fVar11;
      if (uVar9 != 0) {
        uVar5 = uVar9 - 8;
        uVar8 = uVar5 >> 3;
        if ((uVar8 + 1 & 3) != 0) {
          iVar10 = 0;
          do {
            *pfVar3 = fVar11;
            pfVar3[1] = fVar11;
            pfVar3[2] = fVar11;
            pfVar3[3] = fVar11;
            pfVar3[4] = fVar11;
            pfVar3[5] = fVar11;
            pfVar3[6] = fVar11;
            pfVar3[7] = fVar11;
            pfVar3 = pfVar3 + 8;
            iVar10 = iVar10 + 8;
          } while (((byte)((char)uVar8 + 1) & 3) * 8 != iVar10);
          uVar9 = uVar9 - iVar10;
        }
        if (0x17 < uVar5) {
          lVar6 = 0;
          do {
            pfVar1 = pfVar3 + lVar6;
            *pfVar1 = fVar11;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar11;
            pfVar1[3] = fVar11;
            pfVar1 = pfVar3 + lVar6 + 4;
            *pfVar1 = fVar11;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar11;
            pfVar1[3] = fVar11;
            pfVar1 = pfVar3 + lVar6 + 8;
            *pfVar1 = fVar11;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar11;
            pfVar1[3] = fVar11;
            pfVar1 = pfVar3 + lVar6 + 0xc;
            *pfVar1 = fVar11;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar11;
            pfVar1[3] = fVar11;
            pfVar1 = pfVar3 + lVar6 + 0x10;
            *pfVar1 = fVar11;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar11;
            pfVar1[3] = fVar11;
            pfVar1 = pfVar3 + lVar6 + 0x14;
            *pfVar1 = fVar11;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar11;
            pfVar1[3] = fVar11;
            pfVar1 = pfVar3 + lVar6 + 0x18;
            *pfVar1 = fVar11;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar11;
            pfVar1[3] = fVar11;
            pfVar1 = pfVar3 + lVar6 + 0x1c;
            *pfVar1 = fVar11;
            pfVar1[1] = fVar11;
            pfVar1[2] = fVar11;
            pfVar1[3] = fVar11;
            lVar6 = lVar6 + 0x20;
          } while (uVar9 != (uint)lVar6);
        }
      }
      return param_1 + 0x20;
    }
  }
  else {
    iVar4 = (int)(*(float *)(lVar6 + 0x44) * *(float *)(lVar6 + 0x4c));
    iVar10 = 1;
    if (iVar4 != 0) {
      iVar10 = iVar4;
    }
    fVar12 = (*(float *)(lVar6 + 0x30) - fVar11) / (float)iVar10;
    *(float *)(lVar6 + 0x38) = fVar12;
    *(float *)(lVar6 + 0x3c) = fVar12 * *(float *)(lVar6 + 0x40);
    *(undefined4 *)(lVar6 + 0x54) = 0;
  }
  if (uVar9 != 0) {
    uVar8 = uVar9 - 1;
    if ((uVar2 & 3) != 0) {
      uVar5 = 0;
      do {
        *pfVar3 = fVar11;
        pfVar3 = pfVar3 + 1;
        fVar11 = fVar11 + *(float *)(lVar6 + 0x3c);
        uVar5 = uVar5 + 1;
      } while ((uVar9 & 3) != uVar5);
      uVar9 = uVar9 - uVar5;
    }
    if (2 < uVar8) {
      lVar7 = 0;
      do {
        pfVar3[lVar7] = fVar11;
        fVar11 = fVar11 + *(float *)(lVar6 + 0x3c);
        pfVar3[lVar7 + 1] = fVar11;
        fVar11 = fVar11 + *(float *)(lVar6 + 0x3c);
        pfVar3[lVar7 + 2] = fVar11;
        fVar11 = fVar11 + *(float *)(lVar6 + 0x3c);
        pfVar3[lVar7 + 3] = fVar11;
        fVar11 = fVar11 + *(float *)(lVar6 + 0x3c);
        lVar7 = lVar7 + 4;
      } while (uVar9 != (uint)lVar7);
    }
    fVar11 = *(float *)(lVar6 + 0x34);
  }
  *(float *)(lVar6 + 0x34) = fVar11 + *(float *)(lVar6 + 0x38);
  *(int *)(lVar6 + 0x50) = iVar10 + -1;
  return param_1 + 0x20;
}


