// Function : rightshift_perform
// Namespace: 
// Entry    : 004e26b0
// Prototype: long rightshift_perform(long param_1)
// Body     : 004e26b0 - 004e28df


/* WARNING: Removing unreachable block (ram,0x004e28de) */

long rightshift_perform(long param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  
  uVar18 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x20);
  iVar9 = (int)*(undefined8 *)(param_1 + 0x18);
  uVar21 = (uint)uVar4;
  uVar12 = iVar9 - uVar21;
  if (uVar12 == 0) goto LAB_004e287a;
  lVar10 = *(long *)(param_1 + 8);
  uVar15 = (ulong)(int)uVar21;
  uVar13 = lVar10 + uVar15 * -4;
  if ((6 < ~uVar21 + iVar9) &&
     ((uVar13 <= uVar18 + ~(ulong)(iVar9 + ~uVar21) * 4 ||
      (uVar18 <= lVar10 + (~uVar15 - (ulong)(iVar9 + ~uVar21)) * 4)))) {
    uVar22 = (ulong)(~uVar21 + iVar9) + 1;
    uVar19 = uVar22 & 0xfffffffffffffff8;
    uVar20 = (uVar19 - 8 >> 3) + 1;
    if (uVar19 - 8 == 0) {
      lVar16 = 0;
LAB_004e2852:
      lVar17 = uVar18 + lVar16 * -4;
      lVar10 = uVar13 + lVar16 * -4;
      uVar5 = *(undefined8 *)(lVar10 + -0x20);
      uVar6 = *(undefined8 *)(lVar10 + -0x18);
      uVar7 = *(undefined8 *)(lVar10 + -8);
      *(undefined8 *)(lVar17 + -0x10) = *(undefined8 *)(lVar10 + -0x10);
      *(undefined8 *)(lVar17 + -8) = uVar7;
      *(undefined8 *)(lVar17 + -0x20) = uVar5;
      *(undefined8 *)(lVar17 + -0x18) = uVar6;
    }
    else {
      uVar11 = uVar20 & 0xfffffffffffffffe;
      lVar10 = lVar10 + (-4 - uVar15) * 4;
      lVar16 = 0;
      do {
        puVar2 = (undefined8 *)(lVar10 + -0x10 + lVar16 * 4);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar10 + lVar16 * 4);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)((uVar18 - 0x10) + lVar16 * 4);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar2 = (undefined8 *)((uVar18 - 0x20) + lVar16 * 4);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2 = (undefined8 *)(lVar10 + -0x30 + lVar16 * 4);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar10 + -0x20 + lVar16 * 4);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)((uVar18 - 0x30) + lVar16 * 4);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar2 = (undefined8 *)((uVar18 - 0x40) + lVar16 * 4);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        lVar16 = lVar16 + -0x10;
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
      lVar16 = -lVar16;
      if ((uVar20 & 1) != 0) goto LAB_004e2852;
    }
    uVar18 = uVar18 + uVar19 * -4;
    if (uVar22 == uVar19) goto LAB_004e287a;
    uVar12 = uVar12 - (int)uVar19;
    uVar13 = uVar13 + uVar19 * -4;
  }
  uVar8 = uVar12 - 1;
  if ((uVar12 & 7) != 0) {
    uVar14 = 0;
    do {
      puVar1 = (undefined4 *)(uVar13 - 4);
      uVar13 = uVar13 - 4;
      *(undefined4 *)(uVar18 - 4) = *puVar1;
      uVar18 = uVar18 - 4;
      uVar14 = uVar14 + 1;
    } while ((uVar12 & 7) != uVar14);
    uVar12 = uVar12 - uVar14;
  }
  if (6 < uVar8) {
    lVar10 = 0;
    do {
      *(undefined4 *)(uVar18 - 4) = *(undefined4 *)((uVar13 - 4) + lVar10 * 4);
      *(undefined4 *)(uVar18 - 8) = *(undefined4 *)((uVar13 - 8) + lVar10 * 4);
      *(undefined4 *)(uVar18 - 0xc) = *(undefined4 *)((uVar13 - 0xc) + lVar10 * 4);
      *(undefined4 *)(uVar18 - 0x10) = *(undefined4 *)((uVar13 - 0x10) + lVar10 * 4);
      *(undefined4 *)(uVar18 - 0x14) = *(undefined4 *)((uVar13 - 0x14) + lVar10 * 4);
      *(undefined4 *)(uVar18 - 0x18) = *(undefined4 *)((uVar13 - 0x18) + lVar10 * 4);
      *(undefined4 *)(uVar18 - 0x1c) = *(undefined4 *)((uVar13 - 0x1c) + lVar10 * 4);
      *(undefined4 *)(uVar18 - 0x20) = *(undefined4 *)((uVar13 - 0x20) + lVar10 * 4);
      uVar18 = uVar18 - 0x20;
      lVar10 = lVar10 + -8;
    } while (-uVar12 != (int)lVar10);
  }
LAB_004e287a:
  if (uVar21 != 0) {
    memset((void *)(uVar18 + ((ulong)-uVar21 << 2 | 0xfffffffc00000000)),0,(uVar4 & 0xffffffff) << 2
          );
  }
  return param_1 + 0x28;
}


