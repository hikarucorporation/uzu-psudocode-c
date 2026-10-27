// Function : sighip_perform_old
// Namespace: 
// Entry    : 00595480
// Prototype: long sighip_perform_old(long param_1)
// Body     : 00595480 - 005957b3


long sighip_perform_old(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  float *pfVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  puVar11 = *(undefined4 **)(param_1 + 8);
  puVar13 = *(undefined4 **)(param_1 + 0x10);
  pfVar4 = *(float **)(param_1 + 0x18);
  uVar5 = *(ulong *)(param_1 + 0x20);
  fVar21 = pfVar4[1];
  uVar19 = (uint)uVar5;
  if (DAT_005d9038 <= fVar21) {
    fVar21 = 0.0;
    if (0 < (int)uVar19) {
      uVar18 = 0;
      if ((6 < uVar19 - 1) &&
         ((puVar11 + (ulong)(uVar19 - 1) + 1 <= puVar13 ||
          (puVar13 + (ulong)(uVar19 - 1) + 1 <= puVar11)))) {
        uVar16 = (ulong)(uVar19 - 1) + 1;
        uVar18 = uVar16 & 0xfffffffffffffff8;
        uVar15 = (uVar18 - 8 >> 3) + 1;
        uVar20 = (ulong)((uint)uVar15 & 3);
        if (uVar18 - 8 < 0x18) {
          lVar10 = 0;
        }
        else {
          uVar15 = uVar15 & 0xfffffffffffffffc;
          lVar10 = 0;
          do {
            uVar6 = *(undefined8 *)((long)(puVar11 + lVar10) + 8);
            uVar7 = *(undefined8 *)(puVar11 + lVar10 + 4);
            uVar8 = *(undefined8 *)((long)(puVar11 + lVar10 + 4) + 8);
            *(undefined8 *)(puVar13 + lVar10) = *(undefined8 *)(puVar11 + lVar10);
            *(undefined8 *)((long)(puVar13 + lVar10) + 8) = uVar6;
            *(undefined8 *)(puVar13 + lVar10 + 4) = uVar7;
            *(undefined8 *)((long)(puVar13 + lVar10 + 4) + 8) = uVar8;
            uVar6 = *(undefined8 *)((long)(puVar11 + lVar10 + 8) + 8);
            uVar7 = *(undefined8 *)(puVar11 + lVar10 + 0xc);
            uVar8 = *(undefined8 *)((long)(puVar11 + lVar10 + 0xc) + 8);
            *(undefined8 *)(puVar13 + lVar10 + 8) = *(undefined8 *)(puVar11 + lVar10 + 8);
            *(undefined8 *)((long)(puVar13 + lVar10 + 8) + 8) = uVar6;
            *(undefined8 *)(puVar13 + lVar10 + 0xc) = uVar7;
            *(undefined8 *)((long)(puVar13 + lVar10 + 0xc) + 8) = uVar8;
            uVar6 = *(undefined8 *)((long)(puVar11 + lVar10 + 0x10) + 8);
            uVar7 = *(undefined8 *)(puVar11 + lVar10 + 0x14);
            uVar8 = *(undefined8 *)((long)(puVar11 + lVar10 + 0x14) + 8);
            *(undefined8 *)(puVar13 + lVar10 + 0x10) = *(undefined8 *)(puVar11 + lVar10 + 0x10);
            *(undefined8 *)((long)(puVar13 + lVar10 + 0x10) + 8) = uVar6;
            *(undefined8 *)(puVar13 + lVar10 + 0x14) = uVar7;
            *(undefined8 *)((long)(puVar13 + lVar10 + 0x14) + 8) = uVar8;
            uVar6 = *(undefined8 *)((long)(puVar11 + lVar10 + 0x18) + 8);
            uVar7 = *(undefined8 *)(puVar11 + lVar10 + 0x1c);
            uVar8 = *(undefined8 *)((long)(puVar11 + lVar10 + 0x1c) + 8);
            *(undefined8 *)(puVar13 + lVar10 + 0x18) = *(undefined8 *)(puVar11 + lVar10 + 0x18);
            *(undefined8 *)((long)(puVar13 + lVar10 + 0x18) + 8) = uVar6;
            *(undefined8 *)(puVar13 + lVar10 + 0x1c) = uVar7;
            *(undefined8 *)((long)(puVar13 + lVar10 + 0x1c) + 8) = uVar8;
            lVar10 = lVar10 + 0x20;
            uVar15 = uVar15 - 4;
          } while (uVar15 != 0);
        }
        if (uVar20 != 0) {
          lVar14 = 0;
          do {
            puVar2 = (undefined8 *)((long)puVar11 + lVar14 + lVar10 * 4);
            uVar6 = puVar2[1];
            puVar1 = (undefined8 *)((long)puVar11 + lVar14 + lVar10 * 4 + 0x10);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            puVar1 = (undefined8 *)((long)puVar13 + lVar14 + lVar10 * 4);
            *puVar1 = *puVar2;
            puVar1[1] = uVar6;
            puVar1 = (undefined8 *)((long)puVar13 + lVar14 + lVar10 * 4 + 0x10);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            lVar14 = lVar14 + 0x20;
          } while (uVar20 * 0x20 != lVar14);
        }
        if (uVar16 == uVar18) goto LAB_005957a7;
        puVar11 = puVar11 + uVar18;
        puVar13 = puVar13 + uVar18;
      }
      uVar17 = (uint)uVar18;
      uVar9 = ~uVar17;
      if ((uVar5 & 7) != 0) {
        iVar12 = 0;
        do {
          uVar3 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar13 = uVar3;
          puVar13 = puVar13 + 1;
          iVar12 = iVar12 + -1;
        } while (-(uVar19 & 7) != iVar12);
        uVar17 = uVar17 - iVar12;
      }
      if (6 < uVar9 + uVar19) {
        lVar10 = 0;
        do {
          puVar13[lVar10] = puVar11[lVar10];
          puVar13[lVar10 + 1] = puVar11[lVar10 + 1];
          puVar13[lVar10 + 2] = puVar11[lVar10 + 2];
          puVar13[lVar10 + 3] = puVar11[lVar10 + 3];
          puVar13[lVar10 + 4] = puVar11[lVar10 + 4];
          puVar13[lVar10 + 5] = puVar11[lVar10 + 5];
          puVar13[lVar10 + 6] = puVar11[lVar10 + 6];
          puVar13[lVar10 + 7] = puVar11[lVar10 + 7];
          lVar10 = lVar10 + 8;
        } while (uVar19 - uVar17 != (int)lVar10);
      }
    }
  }
  else {
    fVar22 = *pfVar4;
    if (0 < (int)uVar19) {
      if (2 < uVar19 - 1) {
        lVar10 = 0;
        lVar14 = 0;
        do {
          fVar23 = fVar22 * fVar21 + (float)puVar11[lVar10];
          puVar13[lVar10] = fVar23 - fVar22;
          fVar22 = fVar23 * fVar21 + (float)puVar11[lVar10 + 1];
          puVar13[lVar10 + 1] = fVar22 - fVar23;
          fVar23 = fVar22 * fVar21 + (float)puVar11[lVar10 + 2];
          puVar13[lVar10 + 2] = fVar23 - fVar22;
          fVar22 = fVar23 * fVar21 + (float)puVar11[lVar10 + 3];
          puVar13[lVar10 + 3] = fVar22 - fVar23;
          lVar14 = lVar14 + -0x10;
          lVar10 = lVar10 + 4;
        } while ((uVar19 & 0xfffffffc) != (uint)lVar10);
        puVar11 = (undefined4 *)((long)puVar11 - lVar14);
        puVar13 = (undefined4 *)((long)puVar13 - lVar14);
      }
      if ((uVar5 & 3) != 0) {
        lVar10 = 0;
        fVar23 = fVar22;
        do {
          fVar22 = fVar23 * fVar21 + (float)puVar11[lVar10];
          puVar13[lVar10] = fVar22 - fVar23;
          lVar10 = lVar10 + 1;
          fVar23 = fVar22;
        } while ((uVar19 & 3) != (uint)lVar10);
      }
    }
    fVar21 = 0.0;
    if ((((uint)fVar22 >> 0x1d ^ (uint)fVar22 >> 0x1e) & 1) != 0) {
      fVar21 = fVar22;
    }
  }
LAB_005957a7:
  *pfVar4 = fVar21;
  return param_1 + 0x28;
}


