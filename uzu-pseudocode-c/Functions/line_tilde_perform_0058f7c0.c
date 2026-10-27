// Function : line_tilde_perform
// Namespace: 
// Entry    : 0058f7c0
// Prototype: long line_tilde_perform(long param_1)
// Body     : 0058f7c0 - 0058fa31


long line_tilde_perform(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  lVar5 = *(long *)(param_1 + 8);
  pfVar2 = *(float **)(param_1 + 0x10);
  uVar7 = *(ulong *)(param_1 + 0x18);
  fVar14 = *(float *)(lVar5 + 0x34);
  uVar13 = (uint)uVar7;
  if ((((uint)fVar14 >> 0x1d ^ (uint)fVar14 >> 0x1e) & 1) == 0) {
    *(undefined4 *)(lVar5 + 0x34) = 0;
    fVar14 = 0.0;
    iVar10 = *(int *)(lVar5 + 0x54);
  }
  else {
    iVar10 = *(int *)(lVar5 + 0x54);
  }
  if (iVar10 == 0) {
    iVar10 = *(int *)(lVar5 + 0x50);
    if (iVar10 == 0) {
      fVar14 = *(float *)(lVar5 + 0x30);
      *(float *)(lVar5 + 0x34) = fVar14;
      if (uVar13 != 0) {
        if (6 < uVar13 - 1) {
          uVar11 = (ulong)(uVar13 - 1) + 1;
          uVar9 = uVar11 & 0xfffffffffffffff8;
          uVar7 = (uVar9 - 8 >> 3) + 1;
          uVar12 = (ulong)((uint)uVar7 & 7);
          if (uVar9 - 8 < 0x38) {
            lVar5 = 0;
          }
          else {
            uVar7 = uVar7 & 0xfffffffffffffff8;
            lVar5 = 0;
            do {
              pfVar1 = pfVar2 + lVar5;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 4;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 8;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0xc;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x10;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x14;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x18;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x1c;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x20;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x24;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x28;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x2c;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x30;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x34;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x38;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = pfVar2 + lVar5 + 0x3c;
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              lVar5 = lVar5 + 0x40;
              uVar7 = uVar7 - 8;
            } while (uVar7 != 0);
          }
          if (uVar12 != 0) {
            lVar6 = 0;
            do {
              pfVar1 = (float *)((long)pfVar2 + lVar6 + lVar5 * 4);
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              pfVar1 = (float *)((long)pfVar2 + lVar6 + lVar5 * 4 + 0x10);
              *pfVar1 = fVar14;
              pfVar1[1] = fVar14;
              pfVar1[2] = fVar14;
              pfVar1[3] = fVar14;
              lVar6 = lVar6 + 0x20;
            } while (uVar12 * 0x20 != lVar6);
          }
          if (uVar11 == uVar9) goto LAB_0058fa2d;
          pfVar2 = pfVar2 + uVar9;
          uVar13 = uVar13 - (int)uVar9;
        }
        lVar5 = 0;
        do {
          pfVar2[lVar5] = fVar14;
          lVar5 = lVar5 + 1;
        } while (uVar13 != (uint)lVar5);
      }
LAB_0058fa2d:
      return param_1 + 0x20;
    }
  }
  else {
    iVar3 = (int)(*(float *)(lVar5 + 0x44) * *(float *)(lVar5 + 0x4c));
    iVar10 = 1;
    if (iVar3 != 0) {
      iVar10 = iVar3;
    }
    fVar15 = (*(float *)(lVar5 + 0x30) - fVar14) / (float)iVar10;
    *(float *)(lVar5 + 0x38) = fVar15;
    *(float *)(lVar5 + 0x3c) = fVar15 * *(float *)(lVar5 + 0x40);
    *(undefined4 *)(lVar5 + 0x54) = 0;
  }
  if (uVar13 != 0) {
    uVar8 = uVar13 - 1;
    if ((uVar7 & 3) != 0) {
      uVar4 = 0;
      do {
        *pfVar2 = fVar14;
        pfVar2 = pfVar2 + 1;
        fVar14 = fVar14 + *(float *)(lVar5 + 0x3c);
        uVar4 = uVar4 + 1;
      } while ((uVar13 & 3) != uVar4);
      uVar13 = uVar13 - uVar4;
    }
    if (2 < uVar8) {
      lVar6 = 0;
      do {
        pfVar2[lVar6] = fVar14;
        fVar14 = fVar14 + *(float *)(lVar5 + 0x3c);
        pfVar2[lVar6 + 1] = fVar14;
        fVar14 = fVar14 + *(float *)(lVar5 + 0x3c);
        pfVar2[lVar6 + 2] = fVar14;
        fVar14 = fVar14 + *(float *)(lVar5 + 0x3c);
        pfVar2[lVar6 + 3] = fVar14;
        fVar14 = fVar14 + *(float *)(lVar5 + 0x3c);
        lVar6 = lVar6 + 4;
      } while (uVar13 != (uint)lVar6);
    }
    fVar14 = *(float *)(lVar5 + 0x34);
  }
  *(float *)(lVar5 + 0x34) = fVar14 + *(float *)(lVar5 + 0x38);
  *(int *)(lVar5 + 0x50) = iVar10 + -1;
  return param_1 + 0x20;
}


