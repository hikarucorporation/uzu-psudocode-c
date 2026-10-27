// Function : scalarover_perform
// Namespace: 
// Entry    : 00587ec0
// Prototype: long scalarover_perform(long param_1)
// Body     : 00587ec0 - 0058807d


/* WARNING: Removing unreachable block (ram,0x0058807c) */

long scalarover_perform(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  float fVar21;
  
  uVar20 = (uint)*(ulong *)(param_1 + 0x20);
  fVar21 = **(float **)(param_1 + 0x10);
  if (fVar21 != 0.0) {
    fVar21 = DAT_005d9038 / fVar21;
  }
  if (uVar20 == 0) goto LAB_0058804f;
  pfVar10 = *(float **)(param_1 + 8);
  pfVar11 = *(float **)(param_1 + 0x18);
  if ((uVar20 - 1 < 7) ||
     ((pfVar11 < pfVar10 + (ulong)(uVar20 - 1) + 1 && (pfVar10 < pfVar11 + (ulong)(uVar20 - 1) + 1))
     )) {
    uVar16 = uVar20 - 1;
    uVar12 = uVar20 & 3;
    if ((*(ulong *)(param_1 + 0x20) & 3) != 0) {
LAB_00587f39:
      uVar14 = 0;
      do {
        fVar3 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        *pfVar11 = fVar3 * fVar21;
        pfVar11 = pfVar11 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar12 != uVar14);
      uVar20 = uVar20 - uVar14;
    }
  }
  else {
    uVar18 = (ulong)(uVar20 - 1) + 1;
    uVar17 = uVar18 & 0xfffffffffffffff8;
    uVar19 = (uVar17 - 8 >> 3) + 1;
    if (uVar17 - 8 == 0) {
      lVar15 = 0;
LAB_00588032:
      pfVar1 = pfVar10 + lVar15;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar2 = pfVar10 + lVar15 + 4;
      fVar6 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar2 = pfVar11 + lVar15;
      *pfVar2 = *pfVar1 * fVar21;
      pfVar2[1] = fVar3 * fVar21;
      pfVar2[2] = fVar4 * fVar21;
      pfVar2[3] = fVar5 * fVar21;
      pfVar1 = pfVar11 + lVar15 + 4;
      *pfVar1 = fVar6 * fVar21;
      pfVar1[1] = fVar7 * fVar21;
      pfVar1[2] = fVar8 * fVar21;
      pfVar1[3] = fVar9 * fVar21;
    }
    else {
      uVar13 = uVar19 & 0xfffffffffffffffe;
      lVar15 = 0;
      do {
        pfVar1 = pfVar10 + lVar15;
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = pfVar10 + lVar15 + 4;
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar2 = pfVar11 + lVar15;
        *pfVar2 = *pfVar1 * fVar21;
        pfVar2[1] = fVar3 * fVar21;
        pfVar2[2] = fVar4 * fVar21;
        pfVar2[3] = fVar5 * fVar21;
        pfVar1 = pfVar11 + lVar15 + 4;
        *pfVar1 = fVar6 * fVar21;
        pfVar1[1] = fVar7 * fVar21;
        pfVar1[2] = fVar8 * fVar21;
        pfVar1[3] = fVar9 * fVar21;
        pfVar1 = pfVar10 + lVar15 + 8;
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = pfVar10 + lVar15 + 0xc;
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar2 = pfVar11 + lVar15 + 8;
        *pfVar2 = *pfVar1 * fVar21;
        pfVar2[1] = fVar3 * fVar21;
        pfVar2[2] = fVar4 * fVar21;
        pfVar2[3] = fVar5 * fVar21;
        pfVar1 = pfVar11 + lVar15 + 0xc;
        *pfVar1 = fVar6 * fVar21;
        pfVar1[1] = fVar7 * fVar21;
        pfVar1[2] = fVar8 * fVar21;
        pfVar1[3] = fVar9 * fVar21;
        lVar15 = lVar15 + 0x10;
        uVar13 = uVar13 - 2;
      } while (uVar13 != 0);
      if ((uVar19 & 1) != 0) goto LAB_00588032;
    }
    if (uVar18 == uVar17) goto LAB_0058804f;
    uVar20 = uVar20 - (int)uVar17;
    pfVar11 = pfVar11 + uVar17;
    pfVar10 = pfVar10 + uVar17;
    uVar16 = uVar20 - 1;
    uVar12 = uVar20 & 3;
    if (uVar12 != 0) goto LAB_00587f39;
  }
  if (2 < uVar16) {
    lVar15 = 0;
    do {
      pfVar11[lVar15] = pfVar10[lVar15] * fVar21;
      pfVar11[lVar15 + 1] = pfVar10[lVar15 + 1] * fVar21;
      pfVar11[lVar15 + 2] = pfVar10[lVar15 + 2] * fVar21;
      pfVar11[lVar15 + 3] = pfVar10[lVar15 + 3] * fVar21;
      lVar15 = lVar15 + 4;
    } while (uVar20 != (uint)lVar15);
  }
LAB_0058804f:
  return param_1 + 0x28;
}


