// Function : fiddle_perform
// Namespace: 
// Entry    : 004e18f0
// Prototype: long fiddle_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004e18f0 - 004e1b5f


long fiddle_perform(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  undefined8 *puVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  uint *puVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  
  lVar6 = *(long *)(param_9 + 0x10);
  iVar4 = *(int *)(lVar6 + 0x68);
  if ((long)iVar4 == 0) goto LAB_004e1b4f;
  uVar7 = *(ulong *)(param_9 + 0x18);
  lVar8 = *(long *)(lVar6 + 0x38);
  iVar5 = *(int *)(lVar6 + 0x60);
  lVar22 = (long)iVar5;
  puVar20 = (uint *)(lVar8 + lVar22 * 4);
  uVar23 = (uint)uVar7;
  if (0 < (int)uVar23) {
    puVar19 = *(uint **)(param_9 + 8);
    uVar25 = 0;
    if ((6 < uVar23 - 1) &&
       ((puVar19 + (ulong)(uVar23 - 1) + 1 <= puVar20 ||
        ((uint *)(lVar8 + ((ulong)(uVar23 - 1) + lVar22) * 4 + 4) <= puVar19)))) {
      uVar21 = (ulong)(uVar23 - 1) + 1;
      uVar25 = uVar21 & 0xfffffffffffffff8;
      uVar17 = (uVar25 - 8 >> 3) + 1;
      uVar15 = (ulong)((uint)uVar17 & 3);
      if (uVar25 - 8 < 0x18) {
        lVar13 = 0;
      }
      else {
        uVar17 = uVar17 & 0xfffffffffffffffc;
        lVar18 = lVar8 + lVar22 * 4;
        lVar13 = 0;
        do {
          uVar10 = *(undefined8 *)(puVar19 + lVar13 + 2);
          uVar11 = *(undefined8 *)(puVar19 + lVar13 + 4);
          uVar12 = *(undefined8 *)(puVar19 + lVar13 + 4 + 2);
          puVar1 = (undefined8 *)(lVar18 + lVar13 * 4);
          *puVar1 = *(undefined8 *)(puVar19 + lVar13);
          puVar1[1] = uVar10;
          puVar1 = (undefined8 *)(lVar18 + 0x10 + lVar13 * 4);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          uVar10 = *(undefined8 *)(puVar19 + lVar13 + 8 + 2);
          uVar11 = *(undefined8 *)(puVar19 + lVar13 + 0xc);
          uVar12 = *(undefined8 *)(puVar19 + lVar13 + 0xc + 2);
          puVar1 = (undefined8 *)(lVar18 + 0x20 + lVar13 * 4);
          *puVar1 = *(undefined8 *)(puVar19 + lVar13 + 8);
          puVar1[1] = uVar10;
          puVar1 = (undefined8 *)(lVar18 + 0x30 + lVar13 * 4);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          uVar10 = *(undefined8 *)(puVar19 + lVar13 + 0x10 + 2);
          uVar11 = *(undefined8 *)(puVar19 + lVar13 + 0x14);
          uVar12 = *(undefined8 *)(puVar19 + lVar13 + 0x14 + 2);
          puVar1 = (undefined8 *)(lVar18 + 0x40 + lVar13 * 4);
          *puVar1 = *(undefined8 *)(puVar19 + lVar13 + 0x10);
          puVar1[1] = uVar10;
          puVar1 = (undefined8 *)(lVar18 + 0x50 + lVar13 * 4);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          param_1 = *(ulong *)(puVar19 + lVar13 + 0x18);
          uVar9 = *(ulong *)((long)(puVar19 + lVar13 + 0x18) + 8);
          param_2 = *(undefined8 *)(puVar19 + lVar13 + 0x1c);
          uVar10 = *(undefined8 *)(puVar19 + lVar13 + 0x1c + 2);
          puVar2 = (ulong *)(lVar18 + 0x60 + lVar13 * 4);
          *puVar2 = param_1;
          puVar2[1] = uVar9;
          puVar1 = (undefined8 *)(lVar18 + 0x70 + lVar13 * 4);
          *puVar1 = param_2;
          puVar1[1] = uVar10;
          lVar13 = lVar13 + 0x20;
          uVar17 = uVar17 - 4;
        } while (uVar17 != 0);
      }
      if (uVar15 != 0) {
        lVar22 = lVar8 + (lVar13 + lVar22) * 4;
        lVar18 = 0;
        do {
          puVar2 = (ulong *)((long)puVar19 + lVar18 + lVar13 * 4);
          param_1 = *puVar2;
          uVar17 = puVar2[1];
          puVar1 = (undefined8 *)((long)puVar19 + lVar18 + lVar13 * 4 + 0x10);
          param_2 = *puVar1;
          uVar10 = puVar1[1];
          puVar2 = (ulong *)(lVar22 + lVar18);
          *puVar2 = param_1;
          puVar2[1] = uVar17;
          puVar1 = (undefined8 *)(lVar22 + 0x10 + lVar18);
          *puVar1 = param_2;
          puVar1[1] = uVar10;
          lVar18 = lVar18 + 0x20;
        } while (uVar15 * 0x20 != lVar18);
      }
      puVar20 = puVar20 + uVar25;
      if (uVar21 == uVar25) goto LAB_004e1b02;
      puVar19 = puVar19 + uVar25;
    }
    uVar24 = (uint)uVar25;
    uVar16 = ~uVar24;
    if ((uVar7 & 7) != 0) {
      iVar14 = 0;
      do {
        uVar3 = *puVar19;
        param_1 = (ulong)uVar3;
        puVar19 = puVar19 + 1;
        *puVar20 = uVar3;
        puVar20 = puVar20 + 1;
        iVar14 = iVar14 + -1;
      } while (-(uVar23 & 7) != iVar14);
      uVar24 = uVar24 - iVar14;
    }
    if (6 < uVar16 + uVar23) {
      lVar22 = 0;
      do {
        *puVar20 = puVar19[lVar22];
        puVar20[1] = puVar19[lVar22 + 1];
        puVar20[2] = puVar19[lVar22 + 2];
        puVar20[3] = puVar19[lVar22 + 3];
        puVar20[4] = puVar19[lVar22 + 4];
        puVar20[5] = puVar19[lVar22 + 5];
        puVar20[6] = puVar19[lVar22 + 6];
        param_1 = (ulong)puVar19[lVar22 + 7];
        puVar20[7] = puVar19[lVar22 + 7];
        puVar20 = puVar20 + 8;
        lVar22 = lVar22 + 8;
      } while (uVar23 - uVar24 != (int)lVar22);
    }
  }
LAB_004e1b02:
  if (puVar20 == (uint *)(lVar8 + (long)iVar4 * 4)) {
    sigfiddle_doit(param_1,param_2,param_4,param_5,param_6,param_7,param_8,lVar6);
    *(undefined4 *)(lVar6 + 0x60) = 0;
    if (*(int *)(lVar6 + 0x310) != 0) {
      clock_delay(0.0,*(double **)(lVar6 + 0x30));
    }
    if (*(int *)(lVar6 + 0x2b0) != 0) {
      *(int *)(lVar6 + 0x2b0) = *(int *)(lVar6 + 0x2b0) + -1;
    }
  }
  else {
    *(uint *)(lVar6 + 0x60) = iVar5 + uVar23;
  }
LAB_004e1b4f:
  return param_9 + 0x20;
}


