// Function : sigrzero_perform
// Namespace: 
// Entry    : 00595db0
// Prototype: long sigrzero_perform(long param_1)
// Body     : 00595db0 - 00595fac


long sigrzero_perform(long param_1)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  ulong uVar4;
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
  float *pfVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  lVar3 = *(long *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x28);
  fVar28 = *(float *)(lVar3 + 0x34);
  uVar25 = (uint)uVar4;
  if (0 < (int)uVar25) {
    pfVar17 = *(float **)(param_1 + 0x18);
    pfVar21 = *(float **)(param_1 + 8);
    pfVar22 = *(float **)(param_1 + 0x10);
    uVar24 = 0;
    if (6 < uVar25 - 1) {
      uVar19 = (ulong)(uVar25 - 1);
      if ((!(pfVar17 < pfVar21 + uVar19 + 1 && pfVar21 < pfVar17 + uVar19 + 1)) &&
         (!(pfVar17 < pfVar22 + uVar19 + 1 && pfVar22 < pfVar17 + uVar19 + 1))) {
        uVar27 = (ulong)(uVar25 - 1) + 1;
        uVar24 = uVar27 & 0xfffffffffffffff8;
        uVar19 = 0;
        do {
          pfVar1 = (float *)((long)pfVar21 + uVar19);
          fVar29 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar5 = pfVar1[2];
          fVar6 = pfVar1[3];
          pfVar1 = (float *)((long)pfVar22 + uVar19);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          fVar30 = *pfVar1 * fVar28;
          pfVar1 = (float *)((long)pfVar21 + uVar19 + 0x10);
          fVar10 = *pfVar1;
          fVar11 = pfVar1[1];
          fVar12 = pfVar1[2];
          fVar28 = pfVar1[3];
          pfVar1 = (float *)((long)pfVar22 + uVar19 + 0x10);
          fVar13 = *pfVar1;
          fVar14 = pfVar1[1];
          fVar15 = pfVar1[2];
          fVar16 = pfVar1[3];
          pfVar1 = (float *)((long)pfVar17 + uVar19);
          *pfVar1 = fVar29 - fVar30;
          pfVar1[1] = fVar2 - fVar7 * fVar29;
          pfVar1[2] = fVar5 - fVar8 * fVar2;
          pfVar1[3] = fVar6 - fVar9 * fVar5;
          pfVar1 = (float *)((long)pfVar17 + uVar19 + 0x10);
          *pfVar1 = fVar10 - fVar13 * fVar6;
          pfVar1[1] = fVar11 - fVar14 * fVar10;
          pfVar1[2] = fVar12 - fVar15 * fVar11;
          pfVar1[3] = fVar28 - fVar16 * fVar12;
          uVar19 = uVar19 + 0x20;
        } while ((uVar27 * 4 & 0xffffffffffffffe0) != uVar19);
        pfVar17 = pfVar17 + uVar24;
        pfVar21 = pfVar21 + uVar24;
        pfVar22 = pfVar22 + uVar24;
        if (uVar27 == uVar24) goto LAB_00595f9a;
      }
    }
    uVar23 = (uint)uVar24;
    uVar26 = ~uVar23;
    if ((uVar4 & 3) != 0) {
      iVar18 = 0;
      fVar29 = fVar28;
      do {
        fVar28 = *pfVar21;
        pfVar21 = pfVar21 + 1;
        fVar2 = *pfVar22;
        pfVar22 = pfVar22 + 1;
        *pfVar17 = fVar28 - fVar29 * fVar2;
        pfVar17 = pfVar17 + 1;
        iVar18 = iVar18 + -1;
        fVar29 = fVar28;
      } while (-(uVar25 & 3) != iVar18);
      uVar23 = uVar23 - iVar18;
    }
    if (2 < uVar26 + uVar25) {
      lVar20 = 0;
      do {
        fVar29 = pfVar21[lVar20];
        pfVar17[lVar20] = fVar29 - fVar28 * pfVar22[lVar20];
        fVar28 = pfVar21[lVar20 + 1];
        pfVar17[lVar20 + 1] = fVar28 - fVar29 * pfVar22[lVar20 + 1];
        fVar29 = pfVar21[lVar20 + 2];
        pfVar17[lVar20 + 2] = fVar29 - fVar28 * pfVar22[lVar20 + 2];
        fVar28 = pfVar21[lVar20 + 3];
        pfVar17[lVar20 + 3] = fVar28 - fVar29 * pfVar22[lVar20 + 3];
        lVar20 = lVar20 + 4;
      } while (uVar25 - uVar23 != (int)lVar20);
    }
  }
LAB_00595f9a:
  *(float *)(lVar3 + 0x34) = fVar28;
  return param_1 + 0x30;
}


