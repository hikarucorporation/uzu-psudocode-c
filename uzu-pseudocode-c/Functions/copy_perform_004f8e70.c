// Function : copy_perform
// Namespace: 
// Entry    : 004f8e70
// Prototype: long copy_perform(long param_1)
// Body     : 004f8e70 - 004f9065


long copy_perform(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  
  uVar17 = (uint)*(ulong *)(param_1 + 0x18);
  if (uVar17 == 0) goto LAB_004f9040;
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar8 = *(undefined4 **)(param_1 + 0x10);
  if ((uVar17 - 1 < 7) ||
     ((puVar8 < puVar7 + (ulong)(uVar17 - 1) + 1 && (puVar7 < puVar8 + (ulong)(uVar17 - 1) + 1)))) {
    uVar14 = uVar17 - 1;
    uVar11 = uVar17 & 7;
    if ((*(ulong *)(param_1 + 0x18) & 7) != 0) {
LAB_004f8ecb:
      uVar10 = 0;
      do {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar8 = uVar3;
        puVar8 = puVar8 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar11 != uVar10);
      uVar17 = uVar17 - uVar10;
    }
  }
  else {
    uVar16 = (ulong)(uVar17 - 1) + 1;
    uVar15 = uVar16 & 0xfffffffffffffff8;
    uVar13 = (uVar15 - 8 >> 3) + 1;
    uVar18 = (ulong)((uint)uVar13 & 3);
    if (uVar15 - 8 < 0x18) {
      lVar12 = 0;
    }
    else {
      uVar13 = uVar13 & 0xfffffffffffffffc;
      lVar12 = 0;
      do {
        uVar4 = *(undefined8 *)((long)(puVar7 + lVar12) + 8);
        uVar5 = *(undefined8 *)(puVar7 + lVar12 + 4);
        uVar6 = *(undefined8 *)((long)(puVar7 + lVar12 + 4) + 8);
        *(undefined8 *)(puVar8 + lVar12) = *(undefined8 *)(puVar7 + lVar12);
        *(undefined8 *)((long)(puVar8 + lVar12) + 8) = uVar4;
        *(undefined8 *)(puVar8 + lVar12 + 4) = uVar5;
        *(undefined8 *)((long)(puVar8 + lVar12 + 4) + 8) = uVar6;
        uVar4 = *(undefined8 *)((long)(puVar7 + lVar12 + 8) + 8);
        uVar5 = *(undefined8 *)(puVar7 + lVar12 + 0xc);
        uVar6 = *(undefined8 *)((long)(puVar7 + lVar12 + 0xc) + 8);
        *(undefined8 *)(puVar8 + lVar12 + 8) = *(undefined8 *)(puVar7 + lVar12 + 8);
        *(undefined8 *)((long)(puVar8 + lVar12 + 8) + 8) = uVar4;
        *(undefined8 *)(puVar8 + lVar12 + 0xc) = uVar5;
        *(undefined8 *)((long)(puVar8 + lVar12 + 0xc) + 8) = uVar6;
        uVar4 = *(undefined8 *)((long)(puVar7 + lVar12 + 0x10) + 8);
        uVar5 = *(undefined8 *)(puVar7 + lVar12 + 0x14);
        uVar6 = *(undefined8 *)((long)(puVar7 + lVar12 + 0x14) + 8);
        *(undefined8 *)(puVar8 + lVar12 + 0x10) = *(undefined8 *)(puVar7 + lVar12 + 0x10);
        *(undefined8 *)((long)(puVar8 + lVar12 + 0x10) + 8) = uVar4;
        *(undefined8 *)(puVar8 + lVar12 + 0x14) = uVar5;
        *(undefined8 *)((long)(puVar8 + lVar12 + 0x14) + 8) = uVar6;
        uVar4 = *(undefined8 *)((long)(puVar7 + lVar12 + 0x18) + 8);
        uVar5 = *(undefined8 *)(puVar7 + lVar12 + 0x1c);
        uVar6 = *(undefined8 *)((long)(puVar7 + lVar12 + 0x1c) + 8);
        *(undefined8 *)(puVar8 + lVar12 + 0x18) = *(undefined8 *)(puVar7 + lVar12 + 0x18);
        *(undefined8 *)((long)(puVar8 + lVar12 + 0x18) + 8) = uVar4;
        *(undefined8 *)(puVar8 + lVar12 + 0x1c) = uVar5;
        *(undefined8 *)((long)(puVar8 + lVar12 + 0x1c) + 8) = uVar6;
        lVar12 = lVar12 + 0x20;
        uVar13 = uVar13 - 4;
      } while (uVar13 != 0);
    }
    if (uVar18 != 0) {
      lVar9 = 0;
      do {
        puVar2 = (undefined8 *)((long)puVar7 + lVar9 + lVar12 * 4);
        uVar4 = puVar2[1];
        puVar1 = (undefined8 *)((long)puVar7 + lVar9 + lVar12 * 4 + 0x10);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        puVar1 = (undefined8 *)((long)puVar8 + lVar9 + lVar12 * 4);
        *puVar1 = *puVar2;
        puVar1[1] = uVar4;
        puVar1 = (undefined8 *)((long)puVar8 + lVar9 + lVar12 * 4 + 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        lVar9 = lVar9 + 0x20;
      } while (uVar18 * 0x20 != lVar9);
    }
    if (uVar16 == uVar15) goto LAB_004f9040;
    uVar17 = uVar17 - (int)uVar15;
    puVar8 = puVar8 + uVar15;
    puVar7 = puVar7 + uVar15;
    uVar14 = uVar17 - 1;
    uVar11 = uVar17 & 7;
    if (uVar11 != 0) goto LAB_004f8ecb;
  }
  if (6 < uVar14) {
    lVar12 = 0;
    do {
      puVar8[lVar12] = puVar7[lVar12];
      puVar8[lVar12 + 1] = puVar7[lVar12 + 1];
      puVar8[lVar12 + 2] = puVar7[lVar12 + 2];
      puVar8[lVar12 + 3] = puVar7[lVar12 + 3];
      puVar8[lVar12 + 4] = puVar7[lVar12 + 4];
      puVar8[lVar12 + 5] = puVar7[lVar12 + 5];
      puVar8[lVar12 + 6] = puVar7[lVar12 + 6];
      puVar8[lVar12 + 7] = puVar7[lVar12 + 7];
      lVar12 = lVar12 + 8;
    } while (uVar17 != (uint)lVar12);
  }
LAB_004f9040:
  return param_1 + 0x20;
}


