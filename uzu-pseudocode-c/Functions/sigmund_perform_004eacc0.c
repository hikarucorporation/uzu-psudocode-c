// Function : sigmund_perform
// Namespace: 
// Entry    : 004eacc0
// Prototype: long sigmund_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004eacc0 - 004eaf3f


long sigmund_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 unaff_BL;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  
  lVar5 = *(long *)(param_9 + 8);
  uVar6 = *(ulong *)(param_9 + 0x18);
  uVar23 = (uint)uVar6;
  uVar21 = (long)*(int *)(lVar5 + 0x78) % (long)(int)uVar23;
  if ((int)uVar21 != 0) goto LAB_004eaf2f;
  if (0 < *(int *)(lVar5 + 0x74)) {
    *(uint *)(lVar5 + 0x74) = *(int *)(lVar5 + 0x74) - uVar23;
    goto LAB_004eaf2f;
  }
  puVar15 = *(undefined4 **)(param_9 + 0x10);
  iVar22 = *(int *)(lVar5 + 0x70);
  if (*(int *)(lVar5 + 0x54) < (int)(uVar23 + iVar22)) {
    iVar22 = 0;
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"sigmund_perform",param_10,
        uVar21 & 0xffffffff,param_12,param_13,param_14,unaff_BL);
  }
  if (0 < (int)uVar23) {
    lVar14 = *(long *)(lVar5 + 0x60);
    lVar19 = (long)iVar22;
    puVar10 = (undefined4 *)(lVar14 + lVar19 * 4);
    uVar21 = 0;
    if ((6 < uVar23 - 1) &&
       ((puVar15 + (ulong)(uVar23 - 1) + 1 <= puVar10 ||
        ((undefined4 *)(lVar14 + ((ulong)(uVar23 - 1) + lVar19) * 4 + 4) <= puVar15)))) {
      uVar18 = (ulong)(uVar23 - 1) + 1;
      uVar21 = uVar18 & 0xfffffffffffffff8;
      uVar16 = (uVar21 - 8 >> 3) + 1;
      uVar13 = (ulong)((uint)uVar16 & 3);
      if (uVar21 - 8 < 0x18) {
        lVar17 = 0;
      }
      else {
        uVar16 = uVar16 & 0xfffffffffffffffc;
        lVar1 = lVar14 + lVar19 * 4;
        lVar17 = 0;
        do {
          uVar7 = *(undefined8 *)((long)(puVar15 + lVar17) + 8);
          uVar8 = *(undefined8 *)(puVar15 + lVar17 + 4);
          uVar9 = *(undefined8 *)((long)(puVar15 + lVar17 + 4) + 8);
          puVar2 = (undefined8 *)(lVar1 + lVar17 * 4);
          *puVar2 = *(undefined8 *)(puVar15 + lVar17);
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar17 * 4);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          uVar7 = *(undefined8 *)((long)(puVar15 + lVar17 + 8) + 8);
          uVar8 = *(undefined8 *)(puVar15 + lVar17 + 0xc);
          uVar9 = *(undefined8 *)((long)(puVar15 + lVar17 + 0xc) + 8);
          puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar17 * 4);
          *puVar2 = *(undefined8 *)(puVar15 + lVar17 + 8);
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar17 * 4);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          uVar7 = *(undefined8 *)((long)(puVar15 + lVar17 + 0x10) + 8);
          uVar8 = *(undefined8 *)(puVar15 + lVar17 + 0x14);
          uVar9 = *(undefined8 *)((long)(puVar15 + lVar17 + 0x14) + 8);
          puVar2 = (undefined8 *)(lVar1 + 0x40 + lVar17 * 4);
          *puVar2 = *(undefined8 *)(puVar15 + lVar17 + 0x10);
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(lVar1 + 0x50 + lVar17 * 4);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          uVar7 = *(undefined8 *)((long)(puVar15 + lVar17 + 0x18) + 8);
          uVar8 = *(undefined8 *)(puVar15 + lVar17 + 0x1c);
          uVar9 = *(undefined8 *)((long)(puVar15 + lVar17 + 0x1c) + 8);
          puVar2 = (undefined8 *)(lVar1 + 0x60 + lVar17 * 4);
          *puVar2 = *(undefined8 *)(puVar15 + lVar17 + 0x18);
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(lVar1 + 0x70 + lVar17 * 4);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          lVar17 = lVar17 + 0x20;
          uVar16 = uVar16 - 4;
        } while (uVar16 != 0);
      }
      if (uVar13 != 0) {
        lVar14 = lVar14 + (lVar19 + lVar17) * 4;
        lVar19 = 0;
        do {
          puVar3 = (undefined8 *)((long)puVar15 + lVar19 + lVar17 * 4);
          uVar7 = puVar3[1];
          puVar2 = (undefined8 *)((long)puVar15 + lVar19 + lVar17 * 4 + 0x10);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          puVar2 = (undefined8 *)(lVar14 + lVar19);
          *puVar2 = *puVar3;
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar19);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          lVar19 = lVar19 + 0x20;
        } while (uVar13 * 0x20 != lVar19);
      }
      if (uVar18 == uVar21) goto LAB_004eaf16;
      puVar10 = puVar10 + uVar21;
      puVar15 = puVar15 + uVar21;
    }
    uVar20 = (uint)uVar21;
    uVar12 = ~uVar20;
    if ((uVar6 & 7) != 0) {
      iVar11 = 0;
      do {
        uVar4 = *puVar15;
        puVar15 = puVar15 + 1;
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
        iVar11 = iVar11 + -1;
      } while (-(uVar23 & 7) != iVar11);
      uVar20 = uVar20 - iVar11;
    }
    if (6 < uVar12 + uVar23) {
      lVar14 = 0;
      do {
        puVar10[lVar14] = puVar15[lVar14];
        puVar10[lVar14 + 1] = puVar15[lVar14 + 1];
        puVar10[lVar14 + 2] = puVar15[lVar14 + 2];
        puVar10[lVar14 + 3] = puVar15[lVar14 + 3];
        puVar10[lVar14 + 4] = puVar15[lVar14 + 4];
        puVar10[lVar14 + 5] = puVar15[lVar14 + 5];
        puVar10[lVar14 + 6] = puVar15[lVar14 + 6];
        puVar10[lVar14 + 7] = puVar15[lVar14 + 7];
        lVar14 = lVar14 + 8;
      } while (uVar23 - uVar20 != (int)lVar14);
    }
  }
LAB_004eaf16:
  *(uint *)(lVar5 + 0x70) = iVar22 + uVar23;
  if (iVar22 + uVar23 == *(int *)(lVar5 + 0x54)) {
    clock_delay(0.0,*(double **)(lVar5 + 0x30));
  }
LAB_004eaf2f:
  return param_9 + 0x20;
}


