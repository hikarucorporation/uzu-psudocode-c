// Function : times_perf8
// Namespace: 
// Entry    : 00587780
// Prototype: long times_perf8(long param_1)
// Body     : 00587780 - 00587832


long times_perf8(long param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  uint uVar22;
  long lVar23;
  
  uVar22 = *(uint *)(param_1 + 0x20);
  if (uVar22 != 0) {
    pfVar19 = *(float **)(param_1 + 0x18);
    pfVar20 = *(float **)(param_1 + 8);
    pfVar21 = *(float **)(param_1 + 0x10);
    uVar1 = uVar22 - 8;
    if ((uVar1 & 8) == 0) {
      fVar5 = pfVar20[1];
      fVar6 = pfVar20[2];
      fVar7 = pfVar20[3];
      fVar8 = pfVar20[4];
      fVar9 = pfVar20[5];
      fVar10 = pfVar20[6];
      fVar11 = pfVar20[7];
      fVar12 = pfVar21[1];
      fVar13 = pfVar21[2];
      fVar14 = pfVar21[3];
      fVar15 = pfVar21[4];
      fVar16 = pfVar21[5];
      fVar17 = pfVar21[6];
      fVar18 = pfVar21[7];
      *pfVar19 = *pfVar21 * *pfVar20;
      pfVar19[1] = fVar12 * fVar5;
      pfVar19[2] = fVar13 * fVar6;
      pfVar19[3] = fVar14 * fVar7;
      pfVar19[4] = fVar15 * fVar8;
      pfVar19[5] = fVar16 * fVar9;
      pfVar19[6] = fVar17 * fVar10;
      pfVar19[7] = fVar18 * fVar11;
      pfVar20 = pfVar20 + 8;
      pfVar21 = pfVar21 + 8;
      pfVar19 = pfVar19 + 8;
      uVar22 = uVar1;
    }
    if (7 < uVar1) {
      lVar23 = 0;
      do {
        pfVar2 = pfVar20 + lVar23;
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
        fVar7 = pfVar2[3];
        pfVar3 = pfVar20 + lVar23 + 4;
        fVar8 = *pfVar3;
        fVar9 = pfVar3[1];
        fVar10 = pfVar3[2];
        fVar11 = pfVar3[3];
        pfVar3 = pfVar21 + lVar23;
        fVar12 = pfVar3[1];
        fVar13 = pfVar3[2];
        fVar14 = pfVar3[3];
        pfVar4 = pfVar21 + lVar23 + 4;
        fVar15 = *pfVar4;
        fVar16 = pfVar4[1];
        fVar17 = pfVar4[2];
        fVar18 = pfVar4[3];
        pfVar4 = pfVar19 + lVar23;
        *pfVar4 = *pfVar3 * *pfVar2;
        pfVar4[1] = fVar12 * fVar5;
        pfVar4[2] = fVar13 * fVar6;
        pfVar4[3] = fVar14 * fVar7;
        pfVar2 = pfVar19 + lVar23 + 4;
        *pfVar2 = fVar15 * fVar8;
        pfVar2[1] = fVar16 * fVar9;
        pfVar2[2] = fVar17 * fVar10;
        pfVar2[3] = fVar18 * fVar11;
        pfVar2 = pfVar20 + lVar23 + 8;
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
        fVar7 = pfVar2[3];
        pfVar3 = pfVar20 + lVar23 + 0xc;
        fVar8 = *pfVar3;
        fVar9 = pfVar3[1];
        fVar10 = pfVar3[2];
        fVar11 = pfVar3[3];
        pfVar3 = pfVar21 + lVar23 + 8;
        fVar12 = pfVar3[1];
        fVar13 = pfVar3[2];
        fVar14 = pfVar3[3];
        pfVar4 = pfVar21 + lVar23 + 0xc;
        fVar15 = *pfVar4;
        fVar16 = pfVar4[1];
        fVar17 = pfVar4[2];
        fVar18 = pfVar4[3];
        pfVar4 = pfVar19 + lVar23 + 8;
        *pfVar4 = *pfVar3 * *pfVar2;
        pfVar4[1] = fVar12 * fVar5;
        pfVar4[2] = fVar13 * fVar6;
        pfVar4[3] = fVar14 * fVar7;
        pfVar2 = pfVar19 + lVar23 + 0xc;
        *pfVar2 = fVar15 * fVar8;
        pfVar2[1] = fVar16 * fVar9;
        pfVar2[2] = fVar17 * fVar10;
        pfVar2[3] = fVar18 * fVar11;
        lVar23 = lVar23 + 0x10;
      } while (uVar22 != (uint)lVar23);
    }
  }
  return param_1 + 0x28;
}


