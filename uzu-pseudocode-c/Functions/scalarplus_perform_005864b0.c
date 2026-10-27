// Function : scalarplus_perform
// Namespace: 
// Entry    : 005864b0
// Prototype: long scalarplus_perform(long param_1)
// Body     : 005864b0 - 0058665d


/* WARNING: Removing unreachable block (ram,0x0058665c) */

long scalarplus_perform(long param_1)

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
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  
  uVar21 = (uint)*(ulong *)(param_1 + 0x20);
  if (uVar21 == 0) goto LAB_0058662f;
  fVar3 = **(float **)(param_1 + 0x10);
  pfVar11 = *(float **)(param_1 + 8);
  pfVar12 = *(float **)(param_1 + 0x18);
  if ((uVar21 - 1 < 7) ||
     ((pfVar12 < pfVar11 + (ulong)(uVar21 - 1) + 1 && (pfVar11 < pfVar12 + (ulong)(uVar21 - 1) + 1))
     )) {
    uVar17 = uVar21 - 1;
    uVar13 = uVar21 & 3;
    if ((*(ulong *)(param_1 + 0x20) & 3) != 0) {
LAB_00586512:
      uVar15 = 0;
      do {
        fVar4 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        *pfVar12 = fVar4 + fVar3;
        pfVar12 = pfVar12 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar13 != uVar15);
      uVar21 = uVar21 - uVar15;
    }
  }
  else {
    uVar19 = (ulong)(uVar21 - 1) + 1;
    uVar18 = uVar19 & 0xfffffffffffffff8;
    uVar20 = (uVar18 - 8 >> 3) + 1;
    if (uVar18 - 8 == 0) {
      lVar16 = 0;
LAB_00586612:
      pfVar1 = pfVar11 + lVar16;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = pfVar11 + lVar16 + 4;
      fVar7 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar2 = pfVar12 + lVar16;
      *pfVar2 = *pfVar1 + fVar3;
      pfVar2[1] = fVar4 + fVar3;
      pfVar2[2] = fVar5 + fVar3;
      pfVar2[3] = fVar6 + fVar3;
      pfVar1 = pfVar12 + lVar16 + 4;
      *pfVar1 = fVar7 + fVar3;
      pfVar1[1] = fVar8 + fVar3;
      pfVar1[2] = fVar9 + fVar3;
      pfVar1[3] = fVar10 + fVar3;
    }
    else {
      uVar14 = uVar20 & 0xfffffffffffffffe;
      lVar16 = 0;
      do {
        pfVar1 = pfVar11 + lVar16;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar2 = pfVar11 + lVar16 + 4;
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar10 = pfVar2[3];
        pfVar2 = pfVar12 + lVar16;
        *pfVar2 = *pfVar1 + fVar3;
        pfVar2[1] = fVar4 + fVar3;
        pfVar2[2] = fVar5 + fVar3;
        pfVar2[3] = fVar6 + fVar3;
        pfVar1 = pfVar12 + lVar16 + 4;
        *pfVar1 = fVar7 + fVar3;
        pfVar1[1] = fVar8 + fVar3;
        pfVar1[2] = fVar9 + fVar3;
        pfVar1[3] = fVar10 + fVar3;
        pfVar1 = pfVar11 + lVar16 + 8;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar2 = pfVar11 + lVar16 + 0xc;
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar10 = pfVar2[3];
        pfVar2 = pfVar12 + lVar16 + 8;
        *pfVar2 = *pfVar1 + fVar3;
        pfVar2[1] = fVar4 + fVar3;
        pfVar2[2] = fVar5 + fVar3;
        pfVar2[3] = fVar6 + fVar3;
        pfVar1 = pfVar12 + lVar16 + 0xc;
        *pfVar1 = fVar7 + fVar3;
        pfVar1[1] = fVar8 + fVar3;
        pfVar1[2] = fVar9 + fVar3;
        pfVar1[3] = fVar10 + fVar3;
        lVar16 = lVar16 + 0x10;
        uVar14 = uVar14 - 2;
      } while (uVar14 != 0);
      if ((uVar20 & 1) != 0) goto LAB_00586612;
    }
    if (uVar19 == uVar18) goto LAB_0058662f;
    uVar21 = uVar21 - (int)uVar18;
    pfVar12 = pfVar12 + uVar18;
    pfVar11 = pfVar11 + uVar18;
    uVar17 = uVar21 - 1;
    uVar13 = uVar21 & 3;
    if (uVar13 != 0) goto LAB_00586512;
  }
  if (2 < uVar17) {
    lVar16 = 0;
    do {
      pfVar12[lVar16] = pfVar11[lVar16] + fVar3;
      pfVar12[lVar16 + 1] = pfVar11[lVar16 + 1] + fVar3;
      pfVar12[lVar16 + 2] = pfVar11[lVar16 + 2] + fVar3;
      pfVar12[lVar16 + 3] = pfVar11[lVar16 + 3] + fVar3;
      lVar16 = lVar16 + 4;
    } while (uVar21 != (uint)lVar16);
  }
LAB_0058662f:
  return param_1 + 0x28;
}


