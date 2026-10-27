// Function : libpd_process_raw_short
// Namespace: 
// Entry    : 004d6380
// Prototype: undefined8 libpd_process_raw_short(long param_1, long param_2)
// Body     : 004d6380 - 004d65ff


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 libpd_process_raw_short(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  undefined2 uVar36;
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  plVar16 = (long *)__tls_get_addr(&PTR_007159b0);
  iVar5 = *(int *)(*(long *)(*plVar16 + 0x50) + 0x34);
  iVar6 = *(int *)(*(long *)(*plVar16 + 0x50) + 0x38);
  uVar26 = (long)iVar6 * 0x40;
  sys_lock();
  fVar14 = _UNK_00651e2c;
  fVar13 = _UNK_00651e28;
  fVar12 = _UNK_00651e24;
  fVar11 = _DAT_00651e20;
  lVar23 = *(long *)(*plVar16 + 0x50);
  if (iVar5 != 0) {
    lVar17 = *(long *)(lVar23 + 0x48);
    uVar21 = iVar5 << 6;
    uVar15 = 1;
    if (1 < uVar21) {
      uVar15 = uVar21;
    }
    uVar18 = (ulong)(int)uVar15;
    if (uVar15 < 8) {
      uVar25 = 0;
      lVar20 = param_1;
      lVar19 = lVar17;
    }
    else {
      uVar25 = uVar18 & 0xffffffffffffffc0;
      lVar19 = lVar17 + uVar25 * 4;
      lVar20 = param_1 + uVar25 * 2;
      lVar24 = (uVar25 - 8 >> 3) + 1;
      lVar22 = 0x18;
      do {
        uVar3 = *(ulong *)(param_1 + -0x18 + lVar22);
        uVar36 = (undefined2)(uVar3 >> 0x30);
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar3;
        auVar28._12_2_ = uVar36;
        auVar28._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar3 >> 0x20);
        auVar34._12_4_ = auVar28._12_4_;
        auVar34._8_2_ = 0;
        auVar34._0_8_ = uVar3;
        auVar34._10_2_ = uVar36;
        auVar27._10_6_ = auVar34._10_6_;
        auVar27._8_2_ = uVar36;
        auVar27._0_8_ = uVar3;
        uVar36 = (undefined2)(uVar3 >> 0x10);
        auVar7._4_8_ = auVar27._8_8_;
        auVar7._2_2_ = uVar36;
        auVar7._0_2_ = uVar36;
        uVar4 = *(ulong *)(param_1 + -0x10 + lVar22);
        uVar36 = (undefined2)(uVar4 >> 0x30);
        auVar39._8_4_ = 0;
        auVar39._0_8_ = uVar4;
        auVar39._12_2_ = uVar36;
        auVar39._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar4 >> 0x20);
        auVar38._12_4_ = auVar39._12_4_;
        auVar38._8_2_ = 0;
        auVar38._0_8_ = uVar4;
        auVar38._10_2_ = uVar36;
        auVar37._10_6_ = auVar38._10_6_;
        auVar37._8_2_ = uVar36;
        auVar37._0_8_ = uVar4;
        uVar36 = (undefined2)(uVar4 >> 0x10);
        auVar8._4_8_ = auVar37._8_8_;
        auVar8._2_2_ = uVar36;
        auVar8._0_2_ = uVar36;
        pfVar1 = (float *)(lVar17 + -0x30 + lVar22 * 2);
        *pfVar1 = (float)(int)(short)uVar3 * fVar11;
        pfVar1[1] = (float)(auVar7._0_4_ >> 0x10) * fVar12;
        pfVar1[2] = (float)(auVar27._8_4_ >> 0x10) * fVar13;
        pfVar1[3] = (float)(auVar34._12_4_ >> 0x10) * fVar14;
        pfVar1 = (float *)(lVar17 + -0x20 + lVar22 * 2);
        *pfVar1 = (float)(int)(short)uVar4 * fVar11;
        pfVar1[1] = (float)(auVar8._0_4_ >> 0x10) * fVar12;
        pfVar1[2] = (float)(auVar37._8_4_ >> 0x10) * fVar13;
        pfVar1[3] = (float)(auVar38._12_4_ >> 0x10) * fVar14;
        uVar3 = *(ulong *)(param_1 + -8 + lVar22);
        uVar36 = (undefined2)(uVar3 >> 0x30);
        auVar31._8_4_ = 0;
        auVar31._0_8_ = uVar3;
        auVar31._12_2_ = uVar36;
        auVar31._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar3 >> 0x20);
        auVar30._12_4_ = auVar31._12_4_;
        auVar30._8_2_ = 0;
        auVar30._0_8_ = uVar3;
        auVar30._10_2_ = uVar36;
        auVar29._10_6_ = auVar30._10_6_;
        auVar29._8_2_ = uVar36;
        auVar29._0_8_ = uVar3;
        uVar36 = (undefined2)(uVar3 >> 0x10);
        auVar9._4_8_ = auVar29._8_8_;
        auVar9._2_2_ = uVar36;
        auVar9._0_2_ = uVar36;
        uVar4 = *(ulong *)(param_1 + lVar22);
        uVar36 = (undefined2)(uVar4 >> 0x30);
        auVar42._8_4_ = 0;
        auVar42._0_8_ = uVar4;
        auVar42._12_2_ = uVar36;
        auVar42._14_2_ = uVar36;
        uVar36 = (undefined2)(uVar4 >> 0x20);
        auVar41._12_4_ = auVar42._12_4_;
        auVar41._8_2_ = 0;
        auVar41._0_8_ = uVar4;
        auVar41._10_2_ = uVar36;
        auVar40._10_6_ = auVar41._10_6_;
        auVar40._8_2_ = uVar36;
        auVar40._0_8_ = uVar4;
        uVar36 = (undefined2)(uVar4 >> 0x10);
        auVar10._4_8_ = auVar40._8_8_;
        auVar10._2_2_ = uVar36;
        auVar10._0_2_ = uVar36;
        auVar32._0_4_ = (float)(int)(short)uVar3 * fVar11;
        auVar32._4_4_ = (float)(auVar9._0_4_ >> 0x10) * fVar12;
        auVar32._8_4_ = (float)(auVar29._8_4_ >> 0x10) * fVar13;
        auVar32._12_4_ = (float)(auVar30._12_4_ >> 0x10) * fVar14;
        *(undefined1 (*) [16])(lVar17 + -0x10 + lVar22 * 2) = auVar32;
        pfVar1 = (float *)(lVar17 + lVar22 * 2);
        *pfVar1 = (float)(int)(short)uVar4 * fVar11;
        pfVar1[1] = (float)(auVar10._0_4_ >> 0x10) * fVar12;
        pfVar1[2] = (float)(auVar40._8_4_ >> 0x10) * fVar13;
        pfVar1[3] = (float)(auVar41._12_4_ >> 0x10) * fVar14;
        lVar22 = lVar22 + 0x20;
        lVar24 = lVar24 + -2;
      } while (lVar24 != 0);
      if (uVar25 == uVar18) goto LAB_004d64ce;
    }
    fVar11 = DAT_00651e0c;
    lVar17 = 0;
    do {
      *(float *)(lVar19 + lVar17 * 4) = (float)(int)*(short *)(lVar20 + lVar17 * 2) * fVar11;
      lVar17 = lVar17 + 1;
    } while (uVar18 - uVar25 != lVar17);
  }
LAB_004d64ce:
  memset(*(void **)(lVar23 + 0x40),0,(long)iVar6 << 8);
  sched_tick();
  if (iVar6 != 0) {
    plVar16 = (long *)__tls_get_addr(&PTR_007159b0);
    fVar14 = _UNK_00651e3c;
    fVar13 = _UNK_00651e38;
    fVar12 = _UNK_00651e34;
    fVar11 = _DAT_00651e30;
    lVar23 = *(long *)(*(long *)(*plVar16 + 0x50) + 0x40);
    uVar18 = 1;
    if (1 < uVar26) {
      uVar18 = uVar26;
    }
    if (uVar18 < 8) {
      uVar26 = 0;
      lVar17 = lVar23;
      lVar19 = param_2;
    }
    else {
      uVar26 = uVar18 & 0xffffffffffffffc0;
      lVar17 = lVar23 + uVar26 * 4;
      lVar19 = param_2 + uVar26 * 2;
      lVar20 = (uVar26 - 8 >> 3) + 1;
      lVar22 = 0x18;
      do {
        pfVar1 = (float *)(lVar23 + -0x30 + lVar22 * 2);
        pfVar2 = (float *)(lVar23 + -0x20 + lVar22 * 2);
        auVar33._0_4_ = (int)(*pfVar1 * fVar11);
        auVar33._4_4_ = (int)(pfVar1[1] * fVar12);
        auVar33._8_4_ = (int)(pfVar1[2] * fVar13);
        auVar33._12_4_ = (int)(pfVar1[3] * fVar14);
        auVar43._0_4_ = (int)(*pfVar2 * fVar11);
        auVar43._4_4_ = (int)(pfVar2[1] * fVar12);
        auVar43._8_4_ = (int)(pfVar2[2] * fVar13);
        auVar43._12_4_ = (int)(pfVar2[3] * fVar14);
        auVar34 = packssdw(auVar33,auVar43);
        *(undefined1 (*) [16])(param_2 + -0x18 + lVar22) = auVar34;
        pfVar2 = (float *)(lVar23 + -0x10 + lVar22 * 2);
        pfVar1 = (float *)(lVar23 + lVar22 * 2);
        auVar35._0_4_ = (int)(*pfVar2 * fVar11);
        auVar35._4_4_ = (int)(pfVar2[1] * fVar12);
        auVar35._8_4_ = (int)(pfVar2[2] * fVar13);
        auVar35._12_4_ = (int)(pfVar2[3] * fVar14);
        auVar44._0_4_ = (int)(*pfVar1 * fVar11);
        auVar44._4_4_ = (int)(pfVar1[1] * fVar12);
        auVar44._8_4_ = (int)(pfVar1[2] * fVar13);
        auVar44._12_4_ = (int)(pfVar1[3] * fVar14);
        auVar34 = packssdw(auVar35,auVar44);
        *(undefined1 (*) [16])(param_2 + -8 + lVar22) = auVar34;
        lVar22 = lVar22 + 0x20;
        lVar20 = lVar20 + -2;
      } while (lVar20 != 0);
      if (uVar18 == uVar26) goto LAB_004d65ea;
    }
    fVar11 = DAT_00651e10;
    lVar23 = 0;
    do {
      *(short *)(lVar19 + lVar23 * 2) = (short)(int)(*(float *)(lVar17 + lVar23 * 4) * fVar11);
      lVar23 = lVar23 + 1;
    } while (uVar18 - uVar26 != lVar23);
  }
LAB_004d65ea:
  sys_unlock();
  return 0;
}


