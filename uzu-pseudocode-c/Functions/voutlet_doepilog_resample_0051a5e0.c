// Function : voutlet_doepilog_resample
// Namespace: 
// Entry    : 0051a5e0
// Prototype: long voutlet_doepilog_resample(long param_1)
// Body     : 0051a5e0 - 0051a7dd


/* WARNING: Removing unreachable block (ram,0x0051a7dc) */

long voutlet_doepilog_resample(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  
  lVar13 = *(long *)(param_1 + 8);
  puVar6 = *(undefined4 **)(*(long *)(param_1 + 0x10) + 0x10);
  lVar14 = *(long *)(param_1 + 0x18);
  uVar15 = *(ulong *)(param_1 + 0x28);
  uVar18 = (uint)uVar15;
  iVar10 = 0;
  if (*(int *)(lVar13 + 0x44) != *(int *)(lVar13 + 0x40)) {
    iVar10 = *(int *)(lVar13 + 0x44);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(uint *)(lVar13 + 0x44) = iVar10 + uVar18;
  }
  if (uVar18 == 0) goto LAB_0051a7ac;
  lVar13 = (long)iVar10;
  puVar7 = (undefined4 *)(lVar14 + lVar13 * 4);
  if ((uVar18 - 1 < 7) ||
     ((puVar6 < (undefined4 *)(lVar14 + ((ulong)(uVar18 - 1) + lVar13) * 4 + 4) &&
      (puVar7 < puVar6 + (ulong)(uVar18 - 1) + 1)))) {
    uVar12 = uVar18 - 1;
    uVar11 = uVar18 & 3;
    if ((uVar15 & 3) != 0) {
LAB_0051a668:
      uVar8 = 0;
      do {
        *puVar6 = *puVar7;
        puVar6 = puVar6 + 1;
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar11 != uVar8);
      uVar18 = uVar18 - uVar8;
    }
  }
  else {
    uVar16 = (ulong)(uVar18 - 1) + 1;
    uVar15 = uVar16 & 0xfffffffffffffff8;
    uVar17 = (uVar15 - 8 >> 3) + 1;
    if (uVar15 - 8 == 0) {
      lVar13 = 0;
LAB_0051a789:
      uVar3 = *(undefined8 *)((long)(puVar7 + lVar13) + 8);
      uVar4 = *(undefined8 *)(puVar7 + lVar13 + 4);
      uVar5 = *(undefined8 *)((long)(puVar7 + lVar13 + 4) + 8);
      *(undefined8 *)(puVar6 + lVar13) = *(undefined8 *)(puVar7 + lVar13);
      *(undefined8 *)((long)(puVar6 + lVar13) + 8) = uVar3;
      *(undefined8 *)(puVar6 + lVar13 + 4) = uVar4;
      *(undefined8 *)((long)(puVar6 + lVar13 + 4) + 8) = uVar5;
      *(undefined8 *)(puVar7 + lVar13) = 0;
      *(undefined8 *)((long)(puVar7 + lVar13) + 8) = 0;
      *(undefined8 *)(puVar7 + lVar13 + 4) = 0;
      *(undefined8 *)((long)(puVar7 + lVar13 + 4) + 8) = 0;
    }
    else {
      uVar9 = uVar17 & 0xfffffffffffffffe;
      lVar14 = lVar14 + lVar13 * 4;
      lVar13 = 0;
      do {
        puVar1 = (undefined8 *)(lVar14 + lVar13 * 4);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar13 * 4);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        *(undefined8 *)(puVar6 + lVar13) = *puVar1;
        *(undefined8 *)((long)(puVar6 + lVar13) + 8) = uVar3;
        *(undefined8 *)(puVar6 + lVar13 + 4) = uVar4;
        *(undefined8 *)((long)(puVar6 + lVar13 + 4) + 8) = uVar5;
        puVar1 = (undefined8 *)(lVar14 + lVar13 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar13 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar2 = (undefined8 *)(lVar14 + 0x20 + lVar13 * 4);
        uVar3 = puVar2[1];
        puVar1 = (undefined8 *)(lVar14 + 0x30 + lVar13 * 4);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        *(undefined8 *)(puVar6 + lVar13 + 8) = *puVar2;
        *(undefined8 *)((long)(puVar6 + lVar13 + 8) + 8) = uVar3;
        *(undefined8 *)(puVar6 + lVar13 + 0xc) = uVar4;
        *(undefined8 *)((long)(puVar6 + lVar13 + 0xc) + 8) = uVar5;
        puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar13 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar14 + 0x30 + lVar13 * 4);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar13 = lVar13 + 0x10;
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
      if ((uVar17 & 1) != 0) goto LAB_0051a789;
    }
    if (uVar16 == uVar15) goto LAB_0051a7ac;
    uVar18 = uVar18 - (int)uVar15;
    puVar7 = puVar7 + uVar15;
    puVar6 = puVar6 + uVar15;
    uVar12 = uVar18 - 1;
    uVar11 = uVar18 & 3;
    if (uVar11 != 0) goto LAB_0051a668;
  }
  if (2 < uVar12) {
    lVar14 = 0;
    do {
      puVar6[lVar14] = puVar7[lVar14];
      puVar7[lVar14] = 0;
      puVar6[lVar14 + 1] = puVar7[lVar14 + 1];
      puVar7[lVar14 + 1] = 0;
      puVar6[lVar14 + 2] = puVar7[lVar14 + 2];
      puVar7[lVar14 + 2] = 0;
      puVar6[lVar14 + 3] = puVar7[lVar14 + 3];
      puVar7[lVar14 + 3] = 0;
      lVar14 = lVar14 + 4;
    } while (uVar18 != (uint)lVar14);
  }
LAB_0051a7ac:
  return param_1 + 0x30;
}


