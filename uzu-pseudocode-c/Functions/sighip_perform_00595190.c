// Function : sighip_perform
// Namespace: 
// Entry    : 00595190
// Prototype: long sighip_perform(long param_1)
// Body     : 00595190 - 00595473


long sighip_perform(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  pfVar13 = *(float **)(param_1 + 8);
  pfVar10 = *(float **)(param_1 + 0x10);
  pfVar3 = *(float **)(param_1 + 0x18);
  uVar4 = *(ulong *)(param_1 + 0x20);
  fVar20 = pfVar3[1];
  uVar19 = (uint)uVar4;
  if (DAT_005d9038 <= fVar20) {
    fVar20 = 0.0;
    if (0 < (int)uVar19) {
      uVar16 = 0;
      if ((6 < uVar19 - 1) &&
         ((pfVar13 + (ulong)(uVar19 - 1) + 1 <= pfVar10 ||
          (pfVar10 + (ulong)(uVar19 - 1) + 1 <= pfVar13)))) {
        uVar17 = (ulong)(uVar19 - 1) + 1;
        uVar16 = uVar17 & 0xfffffffffffffff8;
        uVar9 = (uVar16 - 8 >> 3) + 1;
        uVar18 = (ulong)((uint)uVar9 & 3);
        if (uVar16 - 8 < 0x18) {
          lVar12 = 0;
        }
        else {
          uVar9 = uVar9 & 0xfffffffffffffffc;
          lVar12 = 0;
          do {
            uVar5 = *(undefined8 *)(pfVar13 + lVar12 + 2);
            uVar6 = *(undefined8 *)(pfVar13 + lVar12 + 4);
            uVar7 = *(undefined8 *)(pfVar13 + lVar12 + 4 + 2);
            *(undefined8 *)(pfVar10 + lVar12) = *(undefined8 *)(pfVar13 + lVar12);
            *(undefined8 *)(pfVar10 + lVar12 + 2) = uVar5;
            *(undefined8 *)(pfVar10 + lVar12 + 4) = uVar6;
            *(undefined8 *)(pfVar10 + lVar12 + 4 + 2) = uVar7;
            uVar5 = *(undefined8 *)(pfVar13 + lVar12 + 8 + 2);
            uVar6 = *(undefined8 *)(pfVar13 + lVar12 + 0xc);
            uVar7 = *(undefined8 *)(pfVar13 + lVar12 + 0xc + 2);
            *(undefined8 *)(pfVar10 + lVar12 + 8) = *(undefined8 *)(pfVar13 + lVar12 + 8);
            *(undefined8 *)(pfVar10 + lVar12 + 8 + 2) = uVar5;
            *(undefined8 *)(pfVar10 + lVar12 + 0xc) = uVar6;
            *(undefined8 *)(pfVar10 + lVar12 + 0xc + 2) = uVar7;
            uVar5 = *(undefined8 *)(pfVar13 + lVar12 + 0x10 + 2);
            uVar6 = *(undefined8 *)(pfVar13 + lVar12 + 0x14);
            uVar7 = *(undefined8 *)(pfVar13 + lVar12 + 0x14 + 2);
            *(undefined8 *)(pfVar10 + lVar12 + 0x10) = *(undefined8 *)(pfVar13 + lVar12 + 0x10);
            *(undefined8 *)(pfVar10 + lVar12 + 0x10 + 2) = uVar5;
            *(undefined8 *)(pfVar10 + lVar12 + 0x14) = uVar6;
            *(undefined8 *)(pfVar10 + lVar12 + 0x14 + 2) = uVar7;
            uVar5 = *(undefined8 *)(pfVar13 + lVar12 + 0x18 + 2);
            uVar6 = *(undefined8 *)(pfVar13 + lVar12 + 0x1c);
            uVar7 = *(undefined8 *)(pfVar13 + lVar12 + 0x1c + 2);
            *(undefined8 *)(pfVar10 + lVar12 + 0x18) = *(undefined8 *)(pfVar13 + lVar12 + 0x18);
            *(undefined8 *)(pfVar10 + lVar12 + 0x18 + 2) = uVar5;
            *(undefined8 *)(pfVar10 + lVar12 + 0x1c) = uVar6;
            *(undefined8 *)(pfVar10 + lVar12 + 0x1c + 2) = uVar7;
            lVar12 = lVar12 + 0x20;
            uVar9 = uVar9 - 4;
          } while (uVar9 != 0);
        }
        if (uVar18 != 0) {
          lVar14 = 0;
          do {
            puVar2 = (undefined8 *)((long)pfVar13 + lVar14 + lVar12 * 4);
            uVar5 = puVar2[1];
            puVar1 = (undefined8 *)((long)pfVar13 + lVar14 + lVar12 * 4 + 0x10);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            puVar1 = (undefined8 *)((long)pfVar10 + lVar14 + lVar12 * 4);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar1 = (undefined8 *)((long)pfVar10 + lVar14 + lVar12 * 4 + 0x10);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            lVar14 = lVar14 + 0x20;
          } while (uVar18 * 0x20 != lVar14);
        }
        if (uVar17 == uVar16) goto LAB_00595467;
        pfVar13 = pfVar13 + uVar16;
        pfVar10 = pfVar10 + uVar16;
      }
      uVar15 = (uint)uVar16;
      uVar8 = ~uVar15;
      if ((uVar4 & 7) != 0) {
        iVar11 = 0;
        do {
          fVar21 = *pfVar13;
          pfVar13 = pfVar13 + 1;
          *pfVar10 = fVar21;
          pfVar10 = pfVar10 + 1;
          iVar11 = iVar11 + -1;
        } while (-(uVar19 & 7) != iVar11);
        uVar15 = uVar15 - iVar11;
      }
      if (6 < uVar8 + uVar19) {
        lVar12 = 0;
        do {
          pfVar10[lVar12] = pfVar13[lVar12];
          pfVar10[lVar12 + 1] = pfVar13[lVar12 + 1];
          pfVar10[lVar12 + 2] = pfVar13[lVar12 + 2];
          pfVar10[lVar12 + 3] = pfVar13[lVar12 + 3];
          pfVar10[lVar12 + 4] = pfVar13[lVar12 + 4];
          pfVar10[lVar12 + 5] = pfVar13[lVar12 + 5];
          pfVar10[lVar12 + 6] = pfVar13[lVar12 + 6];
          pfVar10[lVar12 + 7] = pfVar13[lVar12 + 7];
          lVar12 = lVar12 + 8;
        } while (uVar19 - uVar15 != (int)lVar12);
      }
    }
  }
  else {
    fVar21 = *pfVar3;
    fVar23 = fVar21;
    if (0 < (int)uVar19) {
      fVar22 = fVar20 * DAT_005d9044 + DAT_005d9044;
      if (uVar19 != 1) {
        lVar14 = 0;
        lVar12 = 0;
        do {
          fVar23 = fVar21 * fVar20 + pfVar13[lVar14];
          pfVar10[lVar14] = (fVar23 - fVar21) * fVar22;
          fVar21 = fVar23 * fVar20 + pfVar13[lVar14 + 1];
          pfVar10[lVar14 + 1] = (fVar21 - fVar23) * fVar22;
          lVar12 = lVar12 + -8;
          lVar14 = lVar14 + 2;
        } while ((uVar19 & 0xfffffffe) != (uint)lVar14);
        pfVar13 = (float *)((long)pfVar13 - lVar12);
        pfVar10 = (float *)((long)pfVar10 - lVar12);
      }
      fVar23 = fVar21;
      if ((uVar4 & 1) != 0) {
        fVar23 = fVar20 * fVar21 + *pfVar13;
        *pfVar10 = (fVar23 - fVar21) * fVar22;
      }
    }
    fVar20 = 0.0;
    if ((((uint)fVar23 >> 0x1d ^ (uint)fVar23 >> 0x1e) & 1) != 0) {
      fVar20 = fVar23;
    }
  }
LAB_00595467:
  *pfVar3 = fVar20;
  return param_1 + 0x28;
}


