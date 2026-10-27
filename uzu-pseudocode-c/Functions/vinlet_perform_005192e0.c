// Function : vinlet_perform
// Namespace: 
// Entry    : 005192e0
// Prototype: long vinlet_perform(long param_1)
// Body     : 005192e0 - 00519524


long vinlet_perform(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  
  lVar5 = *(long *)(param_1 + 8);
  iVar11 = *(int *)(param_1 + 0x20);
  iVar22 = *(int *)(lVar5 + 0x48);
  lVar23 = (long)iVar22;
  uVar19 = (uint)*(ulong *)(param_1 + 0x28);
  if (uVar19 == 0) goto LAB_005194e0;
  puVar17 = *(undefined4 **)(param_1 + 0x10);
  lVar6 = **(long **)(param_1 + 0x18);
  puVar16 = (undefined4 *)(lVar6 + lVar23 * 4);
  if ((uVar19 - 1 < 7) ||
     ((puVar17 < (undefined4 *)(lVar6 + ((ulong)(uVar19 - 1) + lVar23) * 4 + 4) &&
      (puVar16 < puVar17 + (ulong)(uVar19 - 1) + 1)))) {
    uVar10 = uVar19 - 1;
    uVar13 = uVar19 & 7;
    if ((*(ulong *)(param_1 + 0x28) & 7) != 0) {
LAB_0051935b:
      uVar14 = 0;
      do {
        uVar4 = *puVar16;
        puVar16 = puVar16 + 1;
        *puVar17 = uVar4;
        puVar17 = puVar17 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar13 != uVar14);
      uVar19 = uVar19 - uVar14;
    }
  }
  else {
    uVar18 = (ulong)(uVar19 - 1) + 1;
    uVar21 = uVar18 & 0xfffffffffffffff8;
    uVar15 = (uVar21 - 8 >> 3) + 1;
    uVar20 = (ulong)((uint)uVar15 & 3);
    if (uVar21 - 8 < 0x18) {
      lVar12 = 0;
    }
    else {
      uVar15 = uVar15 & 0xfffffffffffffffc;
      lVar1 = lVar6 + lVar23 * 4;
      lVar12 = 0;
      do {
        puVar2 = (undefined8 *)(lVar1 + lVar12 * 4);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)(lVar1 + 0x10 + lVar12 * 4);
        uVar8 = *puVar3;
        uVar9 = puVar3[1];
        *(undefined8 *)(puVar17 + lVar12) = *puVar2;
        *(undefined8 *)((long)(puVar17 + lVar12) + 8) = uVar7;
        *(undefined8 *)(puVar17 + lVar12 + 4) = uVar8;
        *(undefined8 *)((long)(puVar17 + lVar12 + 4) + 8) = uVar9;
        puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar12 * 4);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)(lVar1 + 0x30 + lVar12 * 4);
        uVar8 = *puVar3;
        uVar9 = puVar3[1];
        *(undefined8 *)(puVar17 + lVar12 + 8) = *puVar2;
        *(undefined8 *)((long)(puVar17 + lVar12 + 8) + 8) = uVar7;
        *(undefined8 *)(puVar17 + lVar12 + 0xc) = uVar8;
        *(undefined8 *)((long)(puVar17 + lVar12 + 0xc) + 8) = uVar9;
        puVar2 = (undefined8 *)(lVar1 + 0x40 + lVar12 * 4);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)(lVar1 + 0x50 + lVar12 * 4);
        uVar8 = *puVar3;
        uVar9 = puVar3[1];
        *(undefined8 *)(puVar17 + lVar12 + 0x10) = *puVar2;
        *(undefined8 *)((long)(puVar17 + lVar12 + 0x10) + 8) = uVar7;
        *(undefined8 *)(puVar17 + lVar12 + 0x14) = uVar8;
        *(undefined8 *)((long)(puVar17 + lVar12 + 0x14) + 8) = uVar9;
        puVar3 = (undefined8 *)(lVar1 + 0x60 + lVar12 * 4);
        uVar7 = puVar3[1];
        puVar2 = (undefined8 *)(lVar1 + 0x70 + lVar12 * 4);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        *(undefined8 *)(puVar17 + lVar12 + 0x18) = *puVar3;
        *(undefined8 *)((long)(puVar17 + lVar12 + 0x18) + 8) = uVar7;
        *(undefined8 *)(puVar17 + lVar12 + 0x1c) = uVar8;
        *(undefined8 *)((long)(puVar17 + lVar12 + 0x1c) + 8) = uVar9;
        lVar12 = lVar12 + 0x20;
        uVar15 = uVar15 - 4;
      } while (uVar15 != 0);
    }
    if (uVar20 != 0) {
      lVar6 = lVar6 + (lVar12 + lVar23) * 4;
      lVar23 = 0;
      do {
        puVar3 = (undefined8 *)(lVar6 + lVar23);
        uVar7 = puVar3[1];
        puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar23);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar17 + lVar23 + lVar12 * 4);
        *puVar2 = *puVar3;
        puVar2[1] = uVar7;
        puVar2 = (undefined8 *)((long)puVar17 + lVar23 + lVar12 * 4 + 0x10);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        lVar23 = lVar23 + 0x20;
      } while (uVar20 * 0x20 != lVar23);
    }
    if (uVar18 == uVar21) goto LAB_005194e0;
    puVar16 = puVar16 + uVar21;
    uVar19 = uVar19 - (int)uVar21;
    puVar17 = puVar17 + uVar21;
    uVar10 = uVar19 - 1;
    uVar13 = uVar19 & 7;
    if (uVar13 != 0) goto LAB_0051935b;
  }
  if (6 < uVar10) {
    lVar23 = 0;
    do {
      puVar17[lVar23] = puVar16[lVar23];
      puVar17[lVar23 + 1] = puVar16[lVar23 + 1];
      puVar17[lVar23 + 2] = puVar16[lVar23 + 2];
      puVar17[lVar23 + 3] = puVar16[lVar23 + 3];
      puVar17[lVar23 + 4] = puVar16[lVar23 + 4];
      puVar17[lVar23 + 5] = puVar16[lVar23 + 5];
      puVar17[lVar23 + 6] = puVar16[lVar23 + 6];
      puVar17[lVar23 + 7] = puVar16[lVar23 + 7];
      lVar23 = lVar23 + 8;
    } while (uVar19 != (uint)lVar23);
  }
LAB_005194e0:
  if (iVar11 != 0) {
    iVar22 = iVar22 + iVar11;
    iVar11 = 0;
    if (iVar22 != *(int *)(lVar5 + 0x40)) {
      iVar11 = iVar22;
    }
    *(int *)(lVar5 + 0x48) = iVar11;
  }
  return param_1 + 0x30;
}


