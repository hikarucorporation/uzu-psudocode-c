// Function : libpd_process_raw
// Namespace: 
// Entry    : 004d5fe0
// Prototype: undefined8 libpd_process_raw(undefined4 * param_1, undefined4 * param_2)
// Body     : 004d5fe0 - 004d637e


undefined8 libpd_process_raw(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  plVar10 = (long *)__tls_get_addr();
  iVar4 = *(int *)(*(long *)(*plVar10 + 0x50) + 0x34);
  iVar5 = *(int *)(*(long *)(*plVar10 + 0x50) + 0x38);
  uVar21 = (long)iVar5 * 0x40;
  sys_lock();
  lVar15 = *(long *)(*plVar10 + 0x50);
  if (iVar4 != 0) {
    puVar6 = *(undefined4 **)(lVar15 + 0x48);
    uVar16 = iVar4 << 6;
    uVar12 = 1;
    if (1 < uVar16) {
      uVar12 = uVar16;
    }
    uVar20 = (ulong)(int)uVar12;
    if ((uVar12 < 8) || ((puVar6 < param_1 + uVar20 && (param_1 < puVar6 + uVar20)))) {
      uVar19 = 0;
      puVar13 = puVar6;
      puVar14 = param_1;
    }
    else {
      uVar19 = uVar20 & 0xffffffffffffffc0;
      puVar13 = puVar6 + uVar19;
      puVar14 = param_1 + uVar19;
      lVar18 = (uVar19 - 8 >> 3) + 1;
      lVar17 = 0x70;
      do {
        puVar1 = (undefined8 *)((long)param_1 + lVar17 + -0x70);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)((long)param_1 + lVar17 + -0x60);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar17 + -0x70);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)((long)puVar6 + lVar17 + -0x60);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)((long)param_1 + lVar17 + -0x50);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)((long)param_1 + lVar17 + -0x40);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar17 + -0x50);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)((long)puVar6 + lVar17 + -0x40);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)((long)param_1 + lVar17 + -0x30);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)((long)param_1 + lVar17 + -0x20);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar17 + -0x30);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)((long)puVar6 + lVar17 + -0x20);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)((long)param_1 + lVar17 + -0x10);
        uVar7 = puVar1[1];
        uVar8 = *(undefined8 *)((long)param_1 + lVar17);
        uVar9 = ((undefined8 *)((long)param_1 + lVar17))[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar17 + -0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)((long)puVar6 + lVar17) = uVar8;
        ((undefined8 *)((long)puVar6 + lVar17))[1] = uVar9;
        lVar17 = lVar17 + 0x80;
        lVar18 = lVar18 + -4;
      } while (lVar18 != 0);
      if (uVar19 == uVar20) goto LAB_004d61b1;
    }
    uVar11 = ~uVar19;
    if ((uVar20 & 1) != 0) {
      lVar17 = 0;
      do {
        uVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        *puVar13 = uVar3;
        puVar13 = puVar13 + 1;
        lVar17 = lVar17 + -1;
      } while (-lVar17 != (uVar20 & 1));
      uVar19 = uVar19 - lVar17;
    }
    if (6 < uVar11 + uVar20) {
      lVar17 = 0;
      do {
        puVar13[lVar17] = puVar14[lVar17];
        puVar13[lVar17 + 1] = puVar14[lVar17 + 1];
        puVar13[lVar17 + 2] = puVar14[lVar17 + 2];
        puVar13[lVar17 + 3] = puVar14[lVar17 + 3];
        puVar13[lVar17 + 4] = puVar14[lVar17 + 4];
        puVar13[lVar17 + 5] = puVar14[lVar17 + 5];
        puVar13[lVar17 + 6] = puVar14[lVar17 + 6];
        puVar13[lVar17 + 7] = puVar14[lVar17 + 7];
        lVar17 = lVar17 + 8;
      } while (uVar20 - uVar19 != lVar17);
    }
  }
LAB_004d61b1:
  memset(*(void **)(lVar15 + 0x40),0,(long)iVar5 << 8);
  sched_tick();
  if (iVar5 != 0) {
    plVar10 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar6 = *(undefined4 **)(*(long *)(*plVar10 + 0x50) + 0x40);
    uVar20 = 1;
    if (1 < uVar21) {
      uVar20 = uVar21;
    }
    if ((uVar20 < 8) || ((param_2 < puVar6 + uVar20 && (puVar6 < param_2 + uVar20)))) {
      uVar21 = 0;
      puVar13 = puVar6;
      puVar14 = param_2;
    }
    else {
      uVar21 = uVar20 & 0xffffffffffffffc0;
      puVar13 = puVar6 + uVar21;
      puVar14 = param_2 + uVar21;
      lVar15 = (uVar21 - 8 >> 3) + 1;
      lVar17 = 0x70;
      do {
        puVar1 = (undefined8 *)((long)puVar6 + lVar17 + -0x70);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar17 + -0x60);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)((long)param_2 + lVar17 + -0x70);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)((long)param_2 + lVar17 + -0x60);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)((long)puVar6 + lVar17 + -0x50);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar17 + -0x40);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)((long)param_2 + lVar17 + -0x50);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)((long)param_2 + lVar17 + -0x40);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)((long)puVar6 + lVar17 + -0x30);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)((long)puVar6 + lVar17 + -0x20);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        puVar2 = (undefined8 *)((long)param_2 + lVar17 + -0x30);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)((long)param_2 + lVar17 + -0x20);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)((long)puVar6 + lVar17 + -0x10);
        uVar7 = puVar1[1];
        uVar8 = *(undefined8 *)((long)puVar6 + lVar17);
        uVar9 = ((undefined8 *)((long)puVar6 + lVar17))[1];
        puVar2 = (undefined8 *)((long)param_2 + lVar17 + -0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)((long)param_2 + lVar17) = uVar8;
        ((undefined8 *)((long)param_2 + lVar17))[1] = uVar9;
        lVar17 = lVar17 + 0x80;
        lVar15 = lVar15 + -4;
      } while (lVar15 != 0);
      if (uVar20 == uVar21) goto LAB_004d6369;
    }
    uVar19 = ~uVar21;
    if ((uVar20 & 1) != 0) {
      lVar15 = 0;
      do {
        uVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        *puVar14 = uVar3;
        puVar14 = puVar14 + 1;
        lVar15 = lVar15 + -1;
      } while (-lVar15 != (uVar20 & 1));
      uVar21 = uVar21 - lVar15;
    }
    if (6 < uVar19 + uVar20) {
      lVar15 = 0;
      do {
        puVar14[lVar15] = puVar13[lVar15];
        puVar14[lVar15 + 1] = puVar13[lVar15 + 1];
        puVar14[lVar15 + 2] = puVar13[lVar15 + 2];
        puVar14[lVar15 + 3] = puVar13[lVar15 + 3];
        puVar14[lVar15 + 4] = puVar13[lVar15 + 4];
        puVar14[lVar15 + 5] = puVar13[lVar15 + 5];
        puVar14[lVar15 + 6] = puVar13[lVar15 + 6];
        puVar14[lVar15 + 7] = puVar13[lVar15 + 7];
        lVar15 = lVar15 + 8;
      } while (uVar20 - uVar21 != lVar15);
    }
  }
LAB_004d6369:
  sys_unlock();
  return 0;
}


