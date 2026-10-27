// Function : leftshift_perform
// Namespace: 
// Entry    : 004e28e0
// Prototype: long leftshift_perform(long param_1)
// Body     : 004e28e0 - 004e2b15


long leftshift_perform(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined4 *__s;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  
  __s = *(undefined4 **)(param_1 + 0x10);
  uVar5 = *(ulong *)(param_1 + 0x20);
  iVar10 = (int)*(undefined8 *)(param_1 + 0x18);
  uVar17 = (uint)uVar5;
  uVar21 = iVar10 - uVar17;
  if (uVar21 != 0) {
    lVar13 = *(long *)(param_1 + 8);
    lVar19 = (long)(int)uVar17;
    puVar12 = (undefined4 *)(lVar13 + lVar19 * 4);
    if ((6 < ~uVar17 + iVar10) &&
       (((undefined4 *)(lVar13 + (lVar19 + (ulong)(iVar10 + ~uVar17)) * 4 + 4) <= __s ||
        (__s + (ulong)(iVar10 + ~uVar17) + 1 <= puVar12)))) {
      uVar20 = (ulong)(~uVar17 + iVar10) + 1;
      uVar18 = uVar20 & 0xfffffffffffffff8;
      uVar11 = (uVar18 - 8 >> 3) + 1;
      uVar14 = (ulong)((uint)uVar11 & 3);
      if (uVar18 - 8 < 0x18) {
        lVar15 = 0;
      }
      else {
        uVar11 = uVar11 & 0xfffffffffffffffc;
        lVar1 = lVar13 + lVar19 * 4;
        lVar15 = 0;
        do {
          puVar2 = (undefined8 *)(lVar1 + lVar15 * 4);
          uVar6 = puVar2[1];
          puVar3 = (undefined8 *)(lVar1 + 0x10 + lVar15 * 4);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          *(undefined8 *)(__s + lVar15) = *puVar2;
          *(undefined8 *)((long)(__s + lVar15) + 8) = uVar6;
          *(undefined8 *)(__s + lVar15 + 4) = uVar7;
          *(undefined8 *)((long)(__s + lVar15 + 4) + 8) = uVar8;
          puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar15 * 4);
          uVar6 = puVar2[1];
          puVar3 = (undefined8 *)(lVar1 + 0x30 + lVar15 * 4);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          *(undefined8 *)(__s + lVar15 + 8) = *puVar2;
          *(undefined8 *)((long)(__s + lVar15 + 8) + 8) = uVar6;
          *(undefined8 *)(__s + lVar15 + 0xc) = uVar7;
          *(undefined8 *)((long)(__s + lVar15 + 0xc) + 8) = uVar8;
          puVar2 = (undefined8 *)(lVar1 + 0x40 + lVar15 * 4);
          uVar6 = puVar2[1];
          puVar3 = (undefined8 *)(lVar1 + 0x50 + lVar15 * 4);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          *(undefined8 *)(__s + lVar15 + 0x10) = *puVar2;
          *(undefined8 *)((long)(__s + lVar15 + 0x10) + 8) = uVar6;
          *(undefined8 *)(__s + lVar15 + 0x14) = uVar7;
          *(undefined8 *)((long)(__s + lVar15 + 0x14) + 8) = uVar8;
          puVar3 = (undefined8 *)(lVar1 + 0x60 + lVar15 * 4);
          uVar6 = puVar3[1];
          puVar2 = (undefined8 *)(lVar1 + 0x70 + lVar15 * 4);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          *(undefined8 *)(__s + lVar15 + 0x18) = *puVar3;
          *(undefined8 *)((long)(__s + lVar15 + 0x18) + 8) = uVar6;
          *(undefined8 *)(__s + lVar15 + 0x1c) = uVar7;
          *(undefined8 *)((long)(__s + lVar15 + 0x1c) + 8) = uVar8;
          lVar15 = lVar15 + 0x20;
          uVar11 = uVar11 - 4;
        } while (uVar11 != 0);
      }
      if (uVar14 != 0) {
        lVar13 = lVar13 + (lVar19 + lVar15) * 4;
        lVar19 = 0;
        do {
          puVar3 = (undefined8 *)(lVar13 + lVar19);
          uVar6 = puVar3[1];
          puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar19);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          puVar2 = (undefined8 *)((long)__s + lVar19 + lVar15 * 4);
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)((long)__s + lVar19 + lVar15 * 4 + 0x10);
          *puVar2 = uVar7;
          puVar2[1] = uVar8;
          lVar19 = lVar19 + 0x20;
        } while (uVar14 * 0x20 != lVar19);
      }
      __s = __s + uVar18;
      if (uVar20 == uVar18) goto LAB_004e2ad4;
      uVar21 = uVar21 - (int)uVar18;
      puVar12 = puVar12 + uVar18;
    }
    uVar9 = uVar21 - 1;
    if ((uVar21 & 7) != 0) {
      uVar16 = 0;
      do {
        uVar4 = *puVar12;
        puVar12 = puVar12 + 1;
        *__s = uVar4;
        __s = __s + 1;
        uVar16 = uVar16 + 1;
      } while ((uVar21 & 7) != uVar16);
      uVar21 = uVar21 - uVar16;
    }
    if (6 < uVar9) {
      lVar13 = 0;
      do {
        *__s = puVar12[lVar13];
        __s[1] = puVar12[lVar13 + 1];
        __s[2] = puVar12[lVar13 + 2];
        __s[3] = puVar12[lVar13 + 3];
        __s[4] = puVar12[lVar13 + 4];
        __s[5] = puVar12[lVar13 + 5];
        __s[6] = puVar12[lVar13 + 6];
        __s[7] = puVar12[lVar13 + 7];
        __s = __s + 8;
        lVar13 = lVar13 + 8;
      } while (uVar21 != (uint)lVar13);
    }
  }
LAB_004e2ad4:
  if (uVar17 != 0) {
    memset(__s,0,(uVar5 & 0xffffffff) << 2);
  }
  return param_1 + 0x28;
}


