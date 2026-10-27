// Function : env_tilde_new
// Namespace: 
// Entry    : 0058ea20
// Prototype: long * env_tilde_new(float param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058ea20 - 0058ed4b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * env_tilde_new(float param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  void *pvVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  undefined8 extraout_XMM0_Qa;
  double dVar18;
  double dVar19;
  int iVar22;
  double dVar20;
  undefined8 extraout_XMM0_Qa_00;
  int iVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  int iVar24;
  double dVar25;
  double dVar26;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double dStack_60;
  double dStack_50;
  
  uVar9 = (uint)(float)param_2;
  uVar10 = (ulong)uVar9;
  uVar12 = 0x400;
  if (0 < (int)param_1) {
    uVar12 = (ulong)(uint)(int)param_1;
  }
  uVar11 = (uint)uVar12;
  uVar14 = (uint)(uVar12 >> 1);
  if (0 < (int)uVar9) {
    uVar14 = uVar9;
  }
  pvVar4 = getbytes(uVar12 * 4 + 0x100);
  if (pvVar4 == (void *)0x0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "env: couldn\'t allocate buffer",extraout_RDX,uVar10,param_13,param_14);
    return (long *)0x0;
  }
  uVar9 = (uint)(uVar12 >> 5);
  uVar16 = uVar9 + 1;
  if (uVar9 < uVar14) {
    uVar16 = uVar14;
  }
  plVar5 = pd_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_env_tilde_class_00715fa8,param_10,extraout_RDX,uVar10,param_13,
                  param_14);
  plVar5[8] = (long)pvVar4;
  *(uint *)((long)plVar5 + 0x54) = uVar11;
  *(undefined4 *)(plVar5 + 9) = 0;
  *(uint *)((long)plVar5 + 0x4c) = uVar16;
  *(undefined8 *)((long)plVar5 + 0x5c) = 0;
  *(undefined8 *)((long)plVar5 + 100) = 0;
  *(undefined8 *)((long)plVar5 + 0x6c) = 0;
  *(undefined8 *)((long)plVar5 + 0x74) = 0;
  *(undefined8 *)((long)plVar5 + 0x7c) = 0;
  *(undefined8 *)((long)plVar5 + 0x84) = 0;
  *(undefined8 *)((long)plVar5 + 0x8c) = 0;
  *(undefined8 *)((long)plVar5 + 0x94) = 0;
  *(undefined8 *)((long)plVar5 + 0x9c) = 0;
  *(undefined8 *)((long)plVar5 + 0xa4) = 0;
  *(undefined8 *)((long)plVar5 + 0xac) = 0;
  *(undefined8 *)((long)plVar5 + 0xb4) = 0;
  *(undefined8 *)((long)plVar5 + 0xbc) = 0;
  *(undefined8 *)((long)plVar5 + 0xc4) = 0;
  *(undefined8 *)((long)plVar5 + 0xcc) = 0;
  *(undefined8 *)((long)plVar5 + 0xd4) = 0;
  if (uVar11 < 4) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulong)(uVar11 & 0xfffffffc);
    param_3 = _DAT_005d9000 / (double)(int)uVar11;
    auVar1._8_4_ = SUB84(param_3,0);
    auVar1._0_8_ = param_3;
    auVar1._12_4_ = (int)((ulong)param_3 >> 0x20);
    uVar15 = 0;
    iVar17 = juce::jpeglibNamespace::jpeg_zigzag_order2._0_4_;
    iVar22 = juce::jpeglibNamespace::jpeg_zigzag_order2._4_4_;
    iVar23 = juce::jpeglibNamespace::jpeg_zigzag_order2._8_4_;
    iVar24 = juce::jpeglibNamespace::jpeg_zigzag_order2._12_4_;
    do {
      dStack_60 = auVar1._8_8_;
      dVar20 = (double)iVar17 * _DAT_0065d510 * param_3;
      dVar18 = (double)iVar22 * _UNK_0065d518 * dStack_60;
      auVar2._8_4_ = SUB84(dVar18,0);
      auVar2._0_8_ = dVar20;
      auVar2._12_4_ = (int)((ulong)dVar18 >> 0x20);
      dVar25 = (double)iVar23 * _DAT_0065d510 * param_3;
      dVar26 = (double)iVar24 * _UNK_0065d518 * dStack_60;
      dVar18 = cos(dVar25);
      uStack_84 = (undefined4)((ulong)dVar25 >> 0x20);
      uStack_80 = SUB84(dVar26,0);
      uStack_7c = (undefined4)((ulong)dVar26 >> 0x20);
      auVar3._4_8_ = extraout_XMM0_Qb;
      auVar3._0_4_ = uStack_84;
      auVar21._0_8_ = auVar3._0_8_ << 0x20;
      auVar21._8_4_ = uStack_80;
      auVar21._12_4_ = uStack_7c;
      dVar25 = cos(auVar21._8_8_);
      dVar26 = cos(dVar20);
      dStack_50 = auVar2._8_8_;
      dVar19 = cos(dStack_50);
      dVar20 = (double)CONCAT44((float)((_UNK_00651e88 - dVar25) * dStack_60),
                                (float)((_DAT_00651e80 - dVar18) * param_3));
      *(undefined8 *)((long)pvVar4 + uVar15) =
           CONCAT44((float)((_UNK_00651e88 - dVar19) * dStack_60),
                    (float)((_DAT_00651e80 - dVar26) * param_3));
      ((undefined8 *)((long)pvVar4 + uVar15))[1] = dVar20;
      iVar17 = iVar17 + _DAT_00652d80;
      iVar22 = iVar22 + _UNK_00652d84;
      iVar23 = iVar23 + _UNK_00652d88;
      iVar24 = iVar24 + _UNK_00652d8c;
      uVar15 = uVar15 + 0x10;
    } while ((uVar12 * 4 & 0xfffffffffffffff0) != uVar15);
    if (uVar13 == uVar12) goto LAB_0058ec70;
  }
  dVar18 = _DAT_005d9000 / (double)(int)uVar11;
  do {
    dVar20 = cos((double)(int)uVar13 * DAT_0065d508 * dVar18);
    dVar20 = (_DAT_005d9000 - dVar20) * dVar18;
    *(float *)((long)pvVar4 + uVar13 * 4) = (float)dVar20;
    uVar13 = uVar13 + 1;
  } while (uVar12 != uVar13);
LAB_0058ec70:
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0xf0);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0xe0);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0xd0);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0xc0);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0xb0);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0xa0);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x90);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x80);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x70);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x60);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x50);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x40);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x30);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x20);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4 + 0x10);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7 = (undefined8 *)((long)pvVar4 + uVar12 * 4);
  *puVar7 = 0;
  puVar7[1] = 0;
  lVar6 = clock_new(plVar5,env_tilde_tick);
  plVar5[7] = lVar6;
  puVar7 = gensym("float");
  plVar8 = outlet_new(extraout_XMM0_Qa_00,dVar20,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar5,(long)puVar7,extraout_RDX_00,uVar10,param_13,param_14);
  plVar5[6] = (long)plVar8;
  *(undefined8 *)((long)plVar5 + 0xdc) = 0x4000000000;
  return plVar5;
}


