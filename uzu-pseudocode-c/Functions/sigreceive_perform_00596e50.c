// Function : sigreceive_perform
// Namespace: 
// Entry    : 00596e50
// Prototype: long sigreceive_perform(long param_1)
// Body     : 00596e50 - 0059705e


long sigreceive_perform(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *__s;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  
  __s = *(undefined4 **)(param_1 + 0x10);
  uVar12 = *(ulong *)(param_1 + 0x18);
  puVar7 = *(undefined4 **)(*(long *)(param_1 + 8) + 0x38);
  iVar15 = (int)uVar12;
  if (puVar7 == (undefined4 *)0x0) {
    if (iVar15 != 0) {
      memset(__s,0,(uVar12 & 0xffffffff) << 2);
    }
  }
  else if (iVar15 != 0) {
    if ((6 < iVar15 - 1U) &&
       ((puVar7 + (ulong)(iVar15 - 1) + 1 <= __s || (__s + (ulong)(iVar15 - 1) + 1 <= puVar7)))) {
      uVar14 = (ulong)(iVar15 - 1U) + 1;
      uVar13 = uVar14 & 0xfffffffffffffff8;
      uVar12 = (uVar13 - 8 >> 3) + 1;
      uVar17 = (ulong)((uint)uVar12 & 3);
      if (uVar13 - 8 < 0x18) {
        lVar10 = 0;
      }
      else {
        uVar12 = uVar12 & 0xfffffffffffffffc;
        lVar10 = 0;
        do {
          uVar4 = *(undefined8 *)((long)(puVar7 + lVar10) + 8);
          uVar5 = *(undefined8 *)(puVar7 + lVar10 + 4);
          uVar6 = *(undefined8 *)((long)(puVar7 + lVar10 + 4) + 8);
          *(undefined8 *)(__s + lVar10) = *(undefined8 *)(puVar7 + lVar10);
          *(undefined8 *)((long)(__s + lVar10) + 8) = uVar4;
          *(undefined8 *)(__s + lVar10 + 4) = uVar5;
          *(undefined8 *)((long)(__s + lVar10 + 4) + 8) = uVar6;
          uVar4 = *(undefined8 *)((long)(puVar7 + lVar10 + 8) + 8);
          uVar5 = *(undefined8 *)(puVar7 + lVar10 + 0xc);
          uVar6 = *(undefined8 *)((long)(puVar7 + lVar10 + 0xc) + 8);
          *(undefined8 *)(__s + lVar10 + 8) = *(undefined8 *)(puVar7 + lVar10 + 8);
          *(undefined8 *)((long)(__s + lVar10 + 8) + 8) = uVar4;
          *(undefined8 *)(__s + lVar10 + 0xc) = uVar5;
          *(undefined8 *)((long)(__s + lVar10 + 0xc) + 8) = uVar6;
          uVar4 = *(undefined8 *)((long)(puVar7 + lVar10 + 0x10) + 8);
          uVar5 = *(undefined8 *)(puVar7 + lVar10 + 0x14);
          uVar6 = *(undefined8 *)((long)(puVar7 + lVar10 + 0x14) + 8);
          *(undefined8 *)(__s + lVar10 + 0x10) = *(undefined8 *)(puVar7 + lVar10 + 0x10);
          *(undefined8 *)((long)(__s + lVar10 + 0x10) + 8) = uVar4;
          *(undefined8 *)(__s + lVar10 + 0x14) = uVar5;
          *(undefined8 *)((long)(__s + lVar10 + 0x14) + 8) = uVar6;
          uVar4 = *(undefined8 *)((long)(puVar7 + lVar10 + 0x18) + 8);
          uVar5 = *(undefined8 *)(puVar7 + lVar10 + 0x1c);
          uVar6 = *(undefined8 *)((long)(puVar7 + lVar10 + 0x1c) + 8);
          *(undefined8 *)(__s + lVar10 + 0x18) = *(undefined8 *)(puVar7 + lVar10 + 0x18);
          *(undefined8 *)((long)(__s + lVar10 + 0x18) + 8) = uVar4;
          *(undefined8 *)(__s + lVar10 + 0x1c) = uVar5;
          *(undefined8 *)((long)(__s + lVar10 + 0x1c) + 8) = uVar6;
          lVar10 = lVar10 + 0x20;
          uVar12 = uVar12 - 4;
        } while (uVar12 != 0);
      }
      if (uVar17 != 0) {
        lVar9 = 0;
        do {
          puVar2 = (undefined8 *)((long)puVar7 + lVar9 + lVar10 * 4);
          uVar4 = puVar2[1];
          puVar1 = (undefined8 *)((long)puVar7 + lVar9 + lVar10 * 4 + 0x10);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)((long)__s + lVar9 + lVar10 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar4;
          puVar1 = (undefined8 *)((long)__s + lVar9 + lVar10 * 4 + 0x10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          lVar9 = lVar9 + 0x20;
        } while (uVar17 * 0x20 != lVar9);
      }
      if (uVar14 == uVar13) goto LAB_00597056;
      puVar7 = puVar7 + uVar13;
      uVar12 = (ulong)(uint)(iVar15 - (int)uVar13);
      __s = __s + uVar13;
    }
    uVar16 = (uint)uVar12;
    uVar8 = uVar16 - 1;
    if ((uVar12 & 7) != 0) {
      uVar11 = 0;
      do {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *__s = uVar3;
        __s = __s + 1;
        uVar11 = uVar11 + 1;
      } while ((uVar16 & 7) != uVar11);
      uVar16 = uVar16 - uVar11;
    }
    if (6 < uVar8) {
      lVar10 = 0;
      do {
        __s[lVar10] = puVar7[lVar10];
        __s[lVar10 + 1] = puVar7[lVar10 + 1];
        __s[lVar10 + 2] = puVar7[lVar10 + 2];
        __s[lVar10 + 3] = puVar7[lVar10 + 3];
        __s[lVar10 + 4] = puVar7[lVar10 + 4];
        __s[lVar10 + 5] = puVar7[lVar10 + 5];
        __s[lVar10 + 6] = puVar7[lVar10 + 6];
        __s[lVar10 + 7] = puVar7[lVar10 + 7];
        lVar10 = lVar10 + 8;
      } while (uVar16 != (uint)lVar10);
    }
  }
LAB_00597056:
  return param_1 + 0x20;
}


