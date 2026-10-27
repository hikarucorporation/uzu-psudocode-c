// Function : sigrzero_rev_perform
// Namespace: 
// Entry    : 00595fb0
// Prototype: long sigrzero_rev_perform(long param_1)
// Body     : 00595fb0 - 005961b0


long sigrzero_rev_perform(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  long lVar4;
  ulong uVar5;
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
  int iVar20;
  ulong uVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  
  lVar4 = *(long *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x28);
  fVar30 = *(float *)(lVar4 + 0x34);
  uVar27 = (uint)uVar5;
  if (0 < (int)uVar27) {
    pfVar19 = *(float **)(param_1 + 0x18);
    pfVar23 = *(float **)(param_1 + 8);
    pfVar24 = *(float **)(param_1 + 0x10);
    uVar26 = 0;
    if (6 < uVar27 - 1) {
      uVar21 = (ulong)(uVar27 - 1);
      if ((!(pfVar19 < pfVar23 + uVar21 + 1 && pfVar23 < pfVar19 + uVar21 + 1)) &&
         (!(pfVar19 < pfVar24 + uVar21 + 1 && pfVar24 < pfVar19 + uVar21 + 1))) {
        uVar29 = (ulong)(uVar27 - 1) + 1;
        uVar26 = uVar29 & 0xfffffffffffffff8;
        uVar21 = 0;
        fVar31 = fVar30;
        do {
          pfVar1 = (float *)((long)pfVar23 + uVar21);
          fVar3 = *pfVar1;
          fVar6 = pfVar1[1];
          fVar7 = pfVar1[2];
          fVar8 = pfVar1[3];
          pfVar1 = (float *)((long)pfVar23 + uVar21 + 0x10);
          fVar9 = *pfVar1;
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar30 = pfVar1[3];
          pfVar1 = (float *)((long)pfVar24 + uVar21);
          fVar12 = pfVar1[1];
          fVar13 = pfVar1[2];
          fVar14 = pfVar1[3];
          pfVar2 = (float *)((long)pfVar24 + uVar21 + 0x10);
          fVar15 = *pfVar2;
          fVar16 = pfVar2[1];
          fVar17 = pfVar2[2];
          fVar18 = pfVar2[3];
          pfVar2 = (float *)((long)pfVar19 + uVar21);
          *pfVar2 = fVar31 - *pfVar1 * fVar3;
          pfVar2[1] = fVar3 - fVar12 * fVar6;
          pfVar2[2] = fVar6 - fVar13 * fVar7;
          pfVar2[3] = fVar7 - fVar14 * fVar8;
          pfVar1 = (float *)((long)pfVar19 + uVar21 + 0x10);
          *pfVar1 = fVar8 - fVar15 * fVar9;
          pfVar1[1] = fVar9 - fVar16 * fVar10;
          pfVar1[2] = fVar10 - fVar17 * fVar11;
          pfVar1[3] = fVar11 - fVar18 * fVar30;
          uVar21 = uVar21 + 0x20;
          fVar31 = fVar30;
        } while ((uVar29 * 4 & 0xffffffffffffffe0) != uVar21);
        pfVar19 = pfVar19 + uVar26;
        pfVar23 = pfVar23 + uVar26;
        pfVar24 = pfVar24 + uVar26;
        if (uVar29 == uVar26) goto LAB_0059619e;
      }
    }
    uVar25 = (uint)uVar26;
    uVar28 = ~uVar25;
    if ((uVar5 & 3) != 0) {
      iVar20 = 0;
      fVar31 = fVar30;
      do {
        fVar30 = *pfVar23;
        pfVar23 = pfVar23 + 1;
        fVar3 = *pfVar24;
        pfVar24 = pfVar24 + 1;
        *pfVar19 = fVar31 - fVar3 * fVar30;
        pfVar19 = pfVar19 + 1;
        iVar20 = iVar20 + -1;
        fVar31 = fVar30;
      } while (-(uVar27 & 3) != iVar20);
      uVar25 = uVar25 - iVar20;
    }
    if (2 < uVar28 + uVar27) {
      lVar22 = 0;
      do {
        fVar31 = pfVar23[lVar22];
        pfVar19[lVar22] = fVar30 - pfVar24[lVar22] * fVar31;
        fVar30 = pfVar23[lVar22 + 1];
        pfVar19[lVar22 + 1] = fVar31 - pfVar24[lVar22 + 1] * fVar30;
        fVar31 = pfVar23[lVar22 + 2];
        pfVar19[lVar22 + 2] = fVar30 - pfVar24[lVar22 + 2] * fVar31;
        fVar30 = pfVar23[lVar22 + 3];
        pfVar19[lVar22 + 3] = fVar31 - pfVar24[lVar22 + 3] * fVar30;
        lVar22 = lVar22 + 4;
      } while (uVar27 - uVar25 != (int)lVar22);
    }
  }
LAB_0059619e:
  *(float *)(lVar4 + 0x34) = fVar30;
  return param_1 + 0x30;
}


