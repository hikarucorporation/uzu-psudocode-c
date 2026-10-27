// Function : libpd_process_raw_double
// Namespace: 
// Entry    : 004d6600
// Prototype: undefined8 libpd_process_raw_double(long param_1, long param_2)
// Body     : 004d6600 - 004d67fc


undefined8 libpd_process_raw_double(long param_1,long param_2)

{
  double *pdVar1;
  double *pdVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  
  plVar16 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar6 = *(int *)(*(long *)(*plVar16 + 0x50) + 0x34);
  iVar7 = *(int *)(*(long *)(*plVar16 + 0x50) + 0x38);
  uVar26 = (long)iVar7 * 0x40;
  sys_lock();
  lVar23 = *(long *)(*plVar16 + 0x50);
  if (iVar6 != 0) {
    lVar17 = *(long *)(lVar23 + 0x48);
    uVar21 = iVar6 << 6;
    uVar15 = 1;
    if (1 < uVar21) {
      uVar15 = uVar21;
    }
    uVar18 = (ulong)(int)uVar15;
    if (uVar15 < 4) {
      uVar25 = 0;
      lVar20 = param_1;
      lVar19 = lVar17;
    }
    else {
      uVar25 = uVar18 & 0xffffffffffffffc0;
      lVar19 = lVar17 + uVar25 * 4;
      lVar20 = param_1 + uVar25 * 8;
      lVar24 = (uVar25 - 4 >> 2) + 1;
      lVar22 = 0x18;
      do {
        pdVar1 = (double *)(param_1 + -0x30 + lVar22 * 2);
        dVar10 = pdVar1[1];
        pdVar2 = (double *)(param_1 + -0x20 + lVar22 * 2);
        dVar13 = *pdVar2;
        dVar14 = pdVar2[1];
        pfVar3 = (float *)(lVar17 + -0x18 + lVar22);
        *pfVar3 = (float)*pdVar1;
        pfVar3[1] = (float)dVar10;
        pfVar3[2] = (float)dVar13;
        pfVar3[3] = (float)dVar14;
        pdVar2 = (double *)(param_1 + -0x10 + lVar22 * 2);
        dVar10 = pdVar2[1];
        pdVar1 = (double *)(param_1 + lVar22 * 2);
        dVar13 = *pdVar1;
        dVar14 = pdVar1[1];
        pfVar3 = (float *)(lVar17 + -8 + lVar22);
        *pfVar3 = (float)*pdVar2;
        pfVar3[1] = (float)dVar10;
        pfVar3[2] = (float)dVar13;
        pfVar3[3] = (float)dVar14;
        lVar22 = lVar22 + 0x20;
        lVar24 = lVar24 + -2;
      } while (lVar24 != 0);
      if (uVar25 == uVar18) goto LAB_004d6708;
    }
    lVar17 = 0;
    do {
      *(float *)(lVar19 + lVar17 * 4) = (float)*(double *)(lVar20 + lVar17 * 8);
      lVar17 = lVar17 + 1;
    } while (uVar18 - uVar25 != lVar17);
  }
LAB_004d6708:
  memset(*(void **)(lVar23 + 0x40),0,(long)iVar7 << 8);
  sched_tick();
  if (iVar7 != 0) {
    plVar16 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar23 = *(long *)(*(long *)(*plVar16 + 0x50) + 0x40);
    uVar18 = 1;
    if (1 < uVar26) {
      uVar18 = uVar26;
    }
    if (uVar18 < 4) {
      uVar26 = 0;
      lVar17 = lVar23;
      lVar19 = param_2;
    }
    else {
      uVar26 = uVar18 & 0xffffffffffffffc0;
      lVar17 = lVar23 + uVar26 * 4;
      lVar19 = param_2 + uVar26 * 8;
      lVar20 = (uVar26 - 4 >> 2) + 1;
      lVar22 = 0x18;
      do {
        uVar4 = *(undefined8 *)(lVar23 + -0x18 + lVar22);
        dVar10 = (double)(float)((ulong)uVar4 >> 0x20);
        uVar5 = *(undefined8 *)(lVar23 + -0x10 + lVar22);
        dVar13 = (double)(float)((ulong)uVar5 >> 0x20);
        auVar8._8_4_ = SUB84(dVar10,0);
        auVar8._0_8_ = (double)(float)uVar4;
        auVar8._12_4_ = (int)((ulong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(param_2 + -0x30 + lVar22 * 2) = auVar8;
        auVar11._8_4_ = SUB84(dVar13,0);
        auVar11._0_8_ = (double)(float)uVar5;
        auVar11._12_4_ = (int)((ulong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(param_2 + -0x20 + lVar22 * 2) = auVar11;
        uVar4 = *(undefined8 *)(lVar23 + -8 + lVar22);
        dVar10 = (double)(float)((ulong)uVar4 >> 0x20);
        uVar5 = *(undefined8 *)(lVar23 + lVar22);
        dVar13 = (double)(float)((ulong)uVar5 >> 0x20);
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = (double)(float)uVar4;
        auVar9._12_4_ = (int)((ulong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(param_2 + -0x10 + lVar22 * 2) = auVar9;
        auVar12._8_4_ = SUB84(dVar13,0);
        auVar12._0_8_ = (double)(float)uVar5;
        auVar12._12_4_ = (int)((ulong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(param_2 + lVar22 * 2) = auVar12;
        lVar22 = lVar22 + 0x20;
        lVar20 = lVar20 + -2;
      } while (lVar20 != 0);
      if (uVar18 == uVar26) goto LAB_004d67e7;
    }
    lVar23 = 0;
    do {
      *(double *)(lVar19 + lVar23 * 8) = (double)*(float *)(lVar17 + lVar23 * 4);
      lVar23 = lVar23 + 1;
    } while (uVar18 - uVar26 != lVar23);
  }
LAB_004d67e7:
  sys_unlock();
  return 0;
}


