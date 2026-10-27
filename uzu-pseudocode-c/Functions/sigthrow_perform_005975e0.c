// Function : sigthrow_perform
// Namespace: 
// Entry    : 005975e0
// Prototype: long sigthrow_perform(long param_1)
// Body     : 005975e0 - 005977a2


/* WARNING: Removing unreachable block (ram,0x0059779e) */

long sigthrow_perform(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float *pfVar27;
  float *pfVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  
  pfVar27 = *(float **)(*(long *)(param_1 + 8) + 0x38);
  if (pfVar27 == (float *)0x0) goto LAB_0059778d;
  uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x44);
  uVar35 = *(uint *)(param_1 + 0x18);
  if ((int)uVar4 < (int)*(uint *)(param_1 + 0x18)) {
    uVar35 = uVar4;
  }
  if (uVar35 == 0) goto LAB_0059778d;
  pfVar28 = *(float **)(param_1 + 0x10);
  uVar33 = (ulong)(uVar35 - 1);
  if ((6 < uVar35 - 1) && ((pfVar28 + uVar33 + 1 <= pfVar27 || (pfVar27 + uVar33 + 1 <= pfVar28))))
  {
    uVar32 = uVar33 + 1 & 0xfffffffffffffff8;
    uVar34 = (uVar32 - 8 >> 3) + 1;
    if (uVar32 - 8 == 0) {
      lVar31 = 0;
LAB_005976c5:
      pfVar1 = pfVar28 + lVar31;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = pfVar28 + lVar31 + 4;
      fVar8 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar2 = pfVar27 + lVar31;
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = pfVar27 + lVar31 + 4;
      fVar15 = *pfVar3;
      fVar16 = pfVar3[1];
      fVar17 = pfVar3[2];
      fVar18 = pfVar3[3];
      pfVar3 = pfVar27 + lVar31;
      *pfVar3 = *pfVar2 + *pfVar1;
      pfVar3[1] = fVar12 + fVar5;
      pfVar3[2] = fVar13 + fVar6;
      pfVar3[3] = fVar14 + fVar7;
      pfVar1 = pfVar27 + lVar31 + 4;
      *pfVar1 = fVar15 + fVar8;
      pfVar1[1] = fVar16 + fVar9;
      pfVar1[2] = fVar17 + fVar10;
      pfVar1[3] = fVar18 + fVar11;
    }
    else {
      uVar29 = uVar34 & 0xfffffffffffffffe;
      lVar31 = 0;
      do {
        pfVar1 = pfVar28 + lVar31;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        pfVar2 = pfVar28 + lVar31 + 4;
        fVar8 = *pfVar2;
        fVar9 = pfVar2[1];
        fVar10 = pfVar2[2];
        fVar11 = pfVar2[3];
        pfVar2 = pfVar27 + lVar31;
        fVar12 = pfVar2[1];
        fVar13 = pfVar2[2];
        fVar14 = pfVar2[3];
        pfVar3 = pfVar27 + lVar31 + 4;
        fVar15 = *pfVar3;
        fVar16 = pfVar3[1];
        fVar17 = pfVar3[2];
        fVar18 = pfVar3[3];
        pfVar3 = pfVar27 + lVar31 + 8;
        fVar19 = *pfVar3;
        fVar20 = pfVar3[1];
        fVar21 = pfVar3[2];
        fVar22 = pfVar3[3];
        pfVar3 = pfVar27 + lVar31 + 0xc;
        fVar23 = *pfVar3;
        fVar24 = pfVar3[1];
        fVar25 = pfVar3[2];
        fVar26 = pfVar3[3];
        pfVar3 = pfVar27 + lVar31;
        *pfVar3 = *pfVar2 + *pfVar1;
        pfVar3[1] = fVar12 + fVar5;
        pfVar3[2] = fVar13 + fVar6;
        pfVar3[3] = fVar14 + fVar7;
        pfVar1 = pfVar27 + lVar31 + 4;
        *pfVar1 = fVar15 + fVar8;
        pfVar1[1] = fVar16 + fVar9;
        pfVar1[2] = fVar17 + fVar10;
        pfVar1[3] = fVar18 + fVar11;
        pfVar1 = pfVar28 + lVar31 + 8;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        pfVar2 = pfVar28 + lVar31 + 0xc;
        fVar8 = *pfVar2;
        fVar9 = pfVar2[1];
        fVar10 = pfVar2[2];
        fVar11 = pfVar2[3];
        pfVar2 = pfVar27 + lVar31 + 8;
        *pfVar2 = *pfVar1 + fVar19;
        pfVar2[1] = fVar5 + fVar20;
        pfVar2[2] = fVar6 + fVar21;
        pfVar2[3] = fVar7 + fVar22;
        pfVar1 = pfVar27 + lVar31 + 0xc;
        *pfVar1 = fVar8 + fVar23;
        pfVar1[1] = fVar9 + fVar24;
        pfVar1[2] = fVar10 + fVar25;
        pfVar1[3] = fVar11 + fVar26;
        lVar31 = lVar31 + 0x10;
        uVar29 = uVar29 - 2;
      } while (uVar29 != 0);
      if ((uVar34 & 1) != 0) goto LAB_005976c5;
    }
    if (uVar33 + 1 == uVar32) goto LAB_0059778d;
    pfVar27 = pfVar27 + uVar32;
    uVar35 = uVar35 - (int)uVar32;
    pfVar28 = pfVar28 + uVar32;
  }
  uVar4 = uVar35 - 1;
  if ((uVar35 & 3) != 0) {
    uVar30 = 0;
    do {
      *pfVar27 = *pfVar27 + *pfVar28;
      pfVar27 = pfVar27 + 1;
      pfVar28 = pfVar28 + 1;
      uVar30 = uVar30 + 1;
    } while ((uVar35 & 3) != uVar30);
    uVar35 = uVar35 - uVar30;
  }
  if (2 < uVar4) {
    lVar31 = 0;
    do {
      pfVar27[lVar31] = pfVar27[lVar31] + pfVar28[lVar31];
      pfVar27[lVar31 + 1] = pfVar27[lVar31 + 1] + pfVar28[lVar31 + 1];
      pfVar27[lVar31 + 2] = pfVar27[lVar31 + 2] + pfVar28[lVar31 + 2];
      pfVar27[lVar31 + 3] = pfVar27[lVar31 + 3] + pfVar28[lVar31 + 3];
      lVar31 = lVar31 + 4;
    } while (uVar35 != (uint)lVar31);
  }
LAB_0059778d:
  return param_1 + 0x20;
}


