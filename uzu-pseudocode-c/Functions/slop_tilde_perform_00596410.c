// Function : slop_tilde_perform
// Namespace: 
// Entry    : 00596410
// Prototype: long slop_tilde_perform(long param_1)
// Body     : 00596410 - 0059656f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long slop_tilde_perform(long param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar10 = _DAT_006524b0;
  fVar14 = DAT_005d9038;
  lVar2 = *(long *)(param_1 + 8);
  fVar13 = *(float *)(lVar2 + 0x38);
  iVar12 = (int)*(undefined8 *)(param_1 + 0x48);
  if (0 < iVar12) {
    fVar1 = *(float *)(lVar2 + 0x34);
    lVar3 = *(long *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar5 = *(long *)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar7 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x18);
    lVar11 = 0;
    do {
      fVar15 = *(float *)(lVar9 + lVar11 * 4) * fVar1;
      fVar19 = 0.0;
      if ((0.0 <= fVar15) && (fVar19 = fVar15, fVar14 < fVar15)) {
        fVar19 = fVar14;
      }
      fVar16 = *(float *)(lVar4 + lVar11 * 4) * fVar1;
      fVar15 = 0.0;
      if ((0.0 <= fVar16) && (fVar15 = fVar16, fVar14 < fVar16)) {
        fVar15 = fVar14;
      }
      fVar17 = *(float *)(lVar6 + lVar11 * 4) * fVar1;
      fVar16 = 0.0;
      if ((0.0 <= fVar17) && (fVar16 = fVar17, fVar14 < fVar17)) {
        fVar16 = fVar14;
      }
      fVar18 = *(float *)(lVar8 + lVar11 * 4) - fVar13;
      fVar17 = *(float *)(lVar5 + lVar11 * 4);
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if (fVar17 < fVar18) {
        fVar19 = fVar19 * fVar17 + fVar15 * (fVar18 - fVar17);
      }
      else {
        fVar15 = *(float *)(lVar7 + lVar11 * 4);
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
        if ((float)((uint)fVar15 ^ uVar10) <= fVar18) {
          fVar19 = fVar19 * fVar18;
        }
        else {
          fVar19 = fVar16 * (fVar18 + fVar15) - fVar19 * fVar15;
        }
      }
      fVar13 = fVar13 + fVar19;
      *(float *)(lVar3 + lVar11 * 4) = fVar13;
      lVar11 = lVar11 + 1;
    } while (iVar12 != (int)lVar11);
  }
  fVar14 = 0.0;
  if ((((uint)fVar13 >> 0x1d ^ (uint)fVar13 >> 0x1e) & 1) != 0) {
    fVar14 = fVar13;
  }
  *(float *)(lVar2 + 0x38) = fVar14;
  return param_1 + 0x50;
}


