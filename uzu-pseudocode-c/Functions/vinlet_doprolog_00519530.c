// Function : vinlet_doprolog
// Namespace: 
// Entry    : 00519530
// Prototype: long vinlet_doprolog(long param_1)
// Body     : 00519530 - 00519981


long vinlet_doprolog(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  
  lVar23 = *(long *)(param_1 + 8);
  puVar9 = *(undefined4 **)(param_1 + 0x10);
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x20);
  uVar12 = *(ulong *)(param_1 + 0x28);
  uVar22 = (uint)uVar12;
  uVar10 = *(uint *)(lVar23 + 0x44);
  uVar20 = uVar10;
  if (uVar10 == *(uint *)(lVar23 + 0x40)) {
    uVar15 = *(uint *)(lVar23 + 0x4c);
    lVar24 = (long)(int)uVar15;
    uVar20 = uVar10 - uVar15;
    if (uVar20 == 0) {
      uVar20 = 0;
    }
    else {
      puVar11 = puVar5 + lVar24;
      puVar17 = puVar5;
      uVar13 = uVar20;
      if ((6 < ~uVar15 + uVar10) &&
         ((puVar5 + (ulong)(uVar10 + ~uVar15) + lVar24 + 1 <= puVar5 ||
          (puVar5 + (ulong)(uVar10 + ~uVar15) + 1 <= puVar11)))) {
        uVar25 = (ulong)(~uVar15 + uVar10) + 1;
        uVar21 = uVar25 & 0xfffffffffffffff8;
        uVar16 = (uVar21 - 8 >> 3) + 1;
        uVar19 = (ulong)((uint)uVar16 & 3);
        if (uVar21 - 8 < 0x18) {
          lVar14 = 0;
        }
        else {
          uVar16 = uVar16 & 0xfffffffffffffffc;
          lVar14 = 0;
          do {
            uVar6 = *(undefined8 *)((long)(puVar5 + lVar24 + lVar14) + 8);
            uVar7 = *(undefined8 *)(puVar5 + lVar24 + lVar14 + 4);
            uVar8 = *(undefined8 *)((long)(puVar5 + lVar24 + lVar14 + 4) + 8);
            *(undefined8 *)(puVar5 + lVar14) = *(undefined8 *)(puVar5 + lVar24 + lVar14);
            *(undefined8 *)((long)(puVar5 + lVar14) + 8) = uVar6;
            *(undefined8 *)(puVar5 + lVar14 + 4) = uVar7;
            *(undefined8 *)((long)(puVar5 + lVar14 + 4) + 8) = uVar8;
            uVar6 = *(undefined8 *)((long)(puVar5 + lVar24 + lVar14 + 8) + 8);
            uVar7 = *(undefined8 *)(puVar5 + lVar24 + lVar14 + 0xc);
            uVar8 = *(undefined8 *)((long)(puVar5 + lVar24 + lVar14 + 0xc) + 8);
            *(undefined8 *)(puVar5 + lVar14 + 8) = *(undefined8 *)(puVar5 + lVar24 + lVar14 + 8);
            *(undefined8 *)((long)(puVar5 + lVar14 + 8) + 8) = uVar6;
            *(undefined8 *)(puVar5 + lVar14 + 0xc) = uVar7;
            *(undefined8 *)((long)(puVar5 + lVar14 + 0xc) + 8) = uVar8;
            uVar6 = *(undefined8 *)((long)(puVar5 + lVar24 + lVar14 + 0x10) + 8);
            uVar7 = *(undefined8 *)(puVar5 + lVar24 + lVar14 + 0x14);
            uVar8 = *(undefined8 *)((long)(puVar5 + lVar24 + lVar14 + 0x14) + 8);
            *(undefined8 *)(puVar5 + lVar14 + 0x10) =
                 *(undefined8 *)(puVar5 + lVar24 + lVar14 + 0x10);
            *(undefined8 *)((long)(puVar5 + lVar14 + 0x10) + 8) = uVar6;
            *(undefined8 *)(puVar5 + lVar14 + 0x14) = uVar7;
            *(undefined8 *)((long)(puVar5 + lVar14 + 0x14) + 8) = uVar8;
            uVar6 = *(undefined8 *)((long)(puVar5 + lVar24 + lVar14 + 0x18) + 8);
            uVar7 = *(undefined8 *)(puVar5 + lVar24 + lVar14 + 0x1c);
            uVar8 = *(undefined8 *)((long)(puVar5 + lVar24 + lVar14 + 0x1c) + 8);
            *(undefined8 *)(puVar5 + lVar14 + 0x18) =
                 *(undefined8 *)(puVar5 + lVar24 + lVar14 + 0x18);
            *(undefined8 *)((long)(puVar5 + lVar14 + 0x18) + 8) = uVar6;
            *(undefined8 *)(puVar5 + lVar14 + 0x1c) = uVar7;
            *(undefined8 *)((long)(puVar5 + lVar14 + 0x1c) + 8) = uVar8;
            lVar14 = lVar14 + 0x20;
            uVar16 = uVar16 - 4;
          } while (uVar16 != 0);
        }
        if (uVar19 != 0) {
          puVar18 = (undefined8 *)(puVar5 + lVar14 + 4);
          do {
            puVar1 = (undefined8 *)((long)puVar18 + lVar24 * 4 + -0x10);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)((long)puVar18 + lVar24 * 4);
            uVar7 = *puVar2;
            uVar8 = puVar2[1];
            puVar18[-2] = *puVar1;
            puVar18[-1] = uVar6;
            *puVar18 = uVar7;
            puVar18[1] = uVar8;
            puVar18 = puVar18 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if (uVar25 == uVar21) goto LAB_00519748;
        puVar11 = puVar11 + uVar21;
        puVar17 = puVar5 + uVar21;
        uVar13 = uVar20 - (int)uVar21;
      }
      uVar10 = uVar13 - 1;
      if ((uVar13 & 7) != 0) {
        uVar15 = 0;
        do {
          uVar3 = *puVar11;
          puVar11 = puVar11 + 1;
          *puVar17 = uVar3;
          puVar17 = puVar17 + 1;
          uVar15 = uVar15 + 1;
        } while ((uVar13 & 7) != uVar15);
        uVar13 = uVar13 - uVar15;
      }
      if (6 < uVar10) {
        lVar24 = 0;
        do {
          puVar17[lVar24] = puVar11[lVar24];
          puVar17[lVar24 + 1] = puVar11[lVar24 + 1];
          puVar17[lVar24 + 2] = puVar11[lVar24 + 2];
          puVar17[lVar24 + 3] = puVar11[lVar24 + 3];
          puVar17[lVar24 + 4] = puVar11[lVar24 + 4];
          puVar17[lVar24 + 5] = puVar11[lVar24 + 5];
          puVar17[lVar24 + 6] = puVar11[lVar24 + 6];
          puVar17[lVar24 + 7] = puVar11[lVar24 + 7];
          lVar24 = lVar24 + 8;
        } while (uVar13 != (uint)lVar24);
      }
    }
  }
LAB_00519748:
  if (iVar4 != 0) {
    *(uint *)(lVar23 + 0x44) = uVar20 + uVar22;
  }
  if (uVar22 == 0) goto LAB_00519931;
  lVar23 = (long)(int)uVar20;
  puVar11 = puVar5 + lVar23;
  if ((uVar22 - 1 < 7) ||
     ((puVar11 < puVar9 + (ulong)(uVar22 - 1) + 1 &&
      (puVar9 < puVar5 + (ulong)(uVar22 - 1) + lVar23 + 1)))) {
    uVar10 = uVar22 - 1;
    uVar20 = uVar22 & 7;
    if ((uVar12 & 7) != 0) {
LAB_005197aa:
      uVar15 = 0;
      do {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar11 = uVar3;
        puVar11 = puVar11 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar20 != uVar15);
      uVar22 = uVar22 - uVar15;
    }
  }
  else {
    uVar21 = (ulong)(uVar22 - 1) + 1;
    uVar19 = uVar21 & 0xfffffffffffffff8;
    uVar16 = (uVar19 - 8 >> 3) + 1;
    uVar12 = (ulong)((uint)uVar16 & 3);
    if (uVar19 - 8 < 0x18) {
      lVar24 = 0;
    }
    else {
      uVar16 = uVar16 & 0xfffffffffffffffc;
      lVar24 = 0;
      do {
        uVar6 = *(undefined8 *)((long)(puVar9 + lVar24) + 8);
        uVar7 = *(undefined8 *)(puVar9 + lVar24 + 4);
        uVar8 = *(undefined8 *)((long)(puVar9 + lVar24 + 4) + 8);
        *(undefined8 *)(puVar5 + lVar23 + lVar24) = *(undefined8 *)(puVar9 + lVar24);
        *(undefined8 *)((long)(puVar5 + lVar23 + lVar24) + 8) = uVar6;
        *(undefined8 *)(puVar5 + lVar23 + lVar24 + 4) = uVar7;
        *(undefined8 *)((long)(puVar5 + lVar23 + lVar24 + 4) + 8) = uVar8;
        uVar6 = *(undefined8 *)((long)(puVar9 + lVar24 + 8) + 8);
        uVar7 = *(undefined8 *)(puVar9 + lVar24 + 0xc);
        uVar8 = *(undefined8 *)((long)(puVar9 + lVar24 + 0xc) + 8);
        *(undefined8 *)(puVar5 + lVar23 + lVar24 + 8) = *(undefined8 *)(puVar9 + lVar24 + 8);
        *(undefined8 *)((long)(puVar5 + lVar23 + lVar24 + 8) + 8) = uVar6;
        *(undefined8 *)(puVar5 + lVar23 + lVar24 + 0xc) = uVar7;
        *(undefined8 *)((long)(puVar5 + lVar23 + lVar24 + 0xc) + 8) = uVar8;
        uVar6 = *(undefined8 *)((long)(puVar9 + lVar24 + 0x10) + 8);
        uVar7 = *(undefined8 *)(puVar9 + lVar24 + 0x14);
        uVar8 = *(undefined8 *)((long)(puVar9 + lVar24 + 0x14) + 8);
        *(undefined8 *)(puVar5 + lVar23 + lVar24 + 0x10) = *(undefined8 *)(puVar9 + lVar24 + 0x10);
        *(undefined8 *)((long)(puVar5 + lVar23 + lVar24 + 0x10) + 8) = uVar6;
        *(undefined8 *)(puVar5 + lVar23 + lVar24 + 0x14) = uVar7;
        *(undefined8 *)((long)(puVar5 + lVar23 + lVar24 + 0x14) + 8) = uVar8;
        uVar6 = *(undefined8 *)((long)(puVar9 + lVar24 + 0x18) + 8);
        uVar7 = *(undefined8 *)(puVar9 + lVar24 + 0x1c);
        uVar8 = *(undefined8 *)((long)(puVar9 + lVar24 + 0x1c) + 8);
        *(undefined8 *)(puVar5 + lVar23 + lVar24 + 0x18) = *(undefined8 *)(puVar9 + lVar24 + 0x18);
        *(undefined8 *)((long)(puVar5 + lVar23 + lVar24 + 0x18) + 8) = uVar6;
        *(undefined8 *)(puVar5 + lVar23 + lVar24 + 0x1c) = uVar7;
        *(undefined8 *)((long)(puVar5 + lVar23 + lVar24 + 0x1c) + 8) = uVar8;
        lVar24 = lVar24 + 0x20;
        uVar16 = uVar16 - 4;
      } while (uVar16 != 0);
    }
    if (uVar12 != 0) {
      lVar14 = 0;
      do {
        puVar18 = (undefined8 *)((long)puVar9 + lVar14 + lVar24 * 4);
        uVar6 = puVar18[1];
        puVar2 = (undefined8 *)((long)puVar9 + lVar14 + lVar24 * 4 + 0x10);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar5 + lVar14 + (lVar23 + lVar24) * 4);
        *puVar2 = *puVar18;
        puVar2[1] = uVar6;
        puVar18 = (undefined8 *)((long)puVar5 + lVar14 + (lVar23 + lVar24) * 4 + 0x10);
        *puVar18 = uVar7;
        puVar18[1] = uVar8;
        lVar14 = lVar14 + 0x20;
      } while (uVar12 * 0x20 != lVar14);
    }
    if (uVar21 == uVar19) goto LAB_00519931;
    uVar22 = uVar22 - (int)uVar19;
    puVar9 = puVar9 + uVar19;
    puVar11 = puVar11 + uVar19;
    uVar10 = uVar22 - 1;
    uVar20 = uVar22 & 7;
    if (uVar20 != 0) goto LAB_005197aa;
  }
  if (6 < uVar10) {
    lVar23 = 0;
    do {
      puVar11[lVar23] = puVar9[lVar23];
      puVar11[lVar23 + 1] = puVar9[lVar23 + 1];
      puVar11[lVar23 + 2] = puVar9[lVar23 + 2];
      puVar11[lVar23 + 3] = puVar9[lVar23 + 3];
      puVar11[lVar23 + 4] = puVar9[lVar23 + 4];
      puVar11[lVar23 + 5] = puVar9[lVar23 + 5];
      puVar11[lVar23 + 6] = puVar9[lVar23 + 6];
      puVar11[lVar23 + 7] = puVar9[lVar23 + 7];
      lVar23 = lVar23 + 8;
    } while (uVar22 != (uint)lVar23);
  }
LAB_00519931:
  return param_1 + 0x30;
}


