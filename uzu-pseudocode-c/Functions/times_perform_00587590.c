// Function : times_perform
// Namespace: 
// Entry    : 00587590
// Prototype: long times_perform(long param_1)
// Body     : 00587590 - 0058777e


/* WARNING: Removing unreachable block (ram,0x0058777d) */

long times_perform(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  
  uVar25 = *(ulong *)(param_1 + 0x20);
  iVar27 = (int)uVar25;
  if (iVar27 == 0) goto LAB_0058775b;
  pfVar18 = *(float **)(param_1 + 0x18);
  pfVar19 = *(float **)(param_1 + 8);
  pfVar22 = *(float **)(param_1 + 0x10);
  if (6 < iVar27 - 1U) {
    uVar26 = (ulong)(iVar27 - 1);
    if ((pfVar19 + uVar26 + 1 <= pfVar18 || pfVar18 + uVar26 + 1 <= pfVar19) &&
       (pfVar22 + uVar26 + 1 <= pfVar18 || pfVar18 + uVar26 + 1 <= pfVar22)) {
      uVar25 = (ulong)(iVar27 - 1U) + 1;
      uVar26 = uVar25 & 0xfffffffffffffff8;
      uVar29 = (uVar26 - 8 >> 3) + 1;
      if (uVar26 - 8 == 0) {
        lVar20 = 0;
LAB_00587735:
        pfVar1 = pfVar19 + lVar20;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        pfVar2 = pfVar19 + lVar20 + 4;
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar10 = pfVar2[3];
        pfVar2 = pfVar22 + lVar20;
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar13 = pfVar2[3];
        pfVar3 = pfVar22 + lVar20 + 4;
        fVar14 = *pfVar3;
        fVar15 = pfVar3[1];
        fVar16 = pfVar3[2];
        fVar17 = pfVar3[3];
        pfVar3 = pfVar18 + lVar20;
        *pfVar3 = *pfVar2 * *pfVar1;
        pfVar3[1] = fVar11 * fVar4;
        pfVar3[2] = fVar12 * fVar5;
        pfVar3[3] = fVar13 * fVar6;
        pfVar1 = pfVar18 + lVar20 + 4;
        *pfVar1 = fVar14 * fVar7;
        pfVar1[1] = fVar15 * fVar8;
        pfVar1[2] = fVar16 * fVar9;
        pfVar1[3] = fVar17 * fVar10;
      }
      else {
        uVar21 = uVar29 & 0xfffffffffffffffe;
        lVar20 = 0;
        do {
          pfVar1 = pfVar19 + lVar20;
          fVar4 = pfVar1[1];
          fVar5 = pfVar1[2];
          fVar6 = pfVar1[3];
          pfVar2 = pfVar19 + lVar20 + 4;
          fVar7 = *pfVar2;
          fVar8 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar10 = pfVar2[3];
          pfVar2 = pfVar22 + lVar20;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = pfVar22 + lVar20 + 4;
          fVar14 = *pfVar3;
          fVar15 = pfVar3[1];
          fVar16 = pfVar3[2];
          fVar17 = pfVar3[3];
          pfVar3 = pfVar18 + lVar20;
          *pfVar3 = *pfVar2 * *pfVar1;
          pfVar3[1] = fVar11 * fVar4;
          pfVar3[2] = fVar12 * fVar5;
          pfVar3[3] = fVar13 * fVar6;
          pfVar1 = pfVar18 + lVar20 + 4;
          *pfVar1 = fVar14 * fVar7;
          pfVar1[1] = fVar15 * fVar8;
          pfVar1[2] = fVar16 * fVar9;
          pfVar1[3] = fVar17 * fVar10;
          pfVar1 = pfVar19 + lVar20 + 8;
          fVar4 = pfVar1[1];
          fVar5 = pfVar1[2];
          fVar6 = pfVar1[3];
          pfVar2 = pfVar19 + lVar20 + 0xc;
          fVar7 = *pfVar2;
          fVar8 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar10 = pfVar2[3];
          pfVar2 = pfVar22 + lVar20 + 8;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar3 = pfVar22 + lVar20 + 0xc;
          fVar14 = *pfVar3;
          fVar15 = pfVar3[1];
          fVar16 = pfVar3[2];
          fVar17 = pfVar3[3];
          pfVar3 = pfVar18 + lVar20 + 8;
          *pfVar3 = *pfVar2 * *pfVar1;
          pfVar3[1] = fVar11 * fVar4;
          pfVar3[2] = fVar12 * fVar5;
          pfVar3[3] = fVar13 * fVar6;
          pfVar1 = pfVar18 + lVar20 + 0xc;
          *pfVar1 = fVar14 * fVar7;
          pfVar1[1] = fVar15 * fVar8;
          pfVar1[2] = fVar16 * fVar9;
          pfVar1[3] = fVar17 * fVar10;
          lVar20 = lVar20 + 0x10;
          uVar21 = uVar21 - 2;
        } while (uVar21 != 0);
        if ((uVar29 & 1) != 0) goto LAB_00587735;
      }
      if (uVar25 == uVar26) goto LAB_0058775b;
      uVar25 = (ulong)(uint)(iVar27 - (int)uVar26);
      pfVar18 = pfVar18 + uVar26;
      pfVar22 = pfVar22 + uVar26;
      pfVar19 = pfVar19 + uVar26;
    }
  }
  uVar28 = (uint)uVar25;
  uVar24 = uVar28 - 1;
  if ((uVar25 & 3) != 0) {
    uVar23 = 0;
    do {
      fVar4 = *pfVar22;
      pfVar22 = pfVar22 + 1;
      fVar5 = *pfVar19;
      pfVar19 = pfVar19 + 1;
      *pfVar18 = fVar4 * fVar5;
      pfVar18 = pfVar18 + 1;
      uVar23 = uVar23 + 1;
    } while ((uVar28 & 3) != uVar23);
    uVar28 = uVar28 - uVar23;
  }
  if (2 < uVar24) {
    lVar20 = 0;
    do {
      pfVar18[lVar20] = pfVar22[lVar20] * pfVar19[lVar20];
      pfVar18[lVar20 + 1] = pfVar22[lVar20 + 1] * pfVar19[lVar20 + 1];
      pfVar18[lVar20 + 2] = pfVar22[lVar20 + 2] * pfVar19[lVar20 + 2];
      pfVar18[lVar20 + 3] = pfVar22[lVar20 + 3] * pfVar19[lVar20 + 3];
      lVar20 = lVar20 + 4;
    } while (uVar28 != (uint)lVar20);
  }
LAB_0058775b:
  return param_1 + 0x28;
}


