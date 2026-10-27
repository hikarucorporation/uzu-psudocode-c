// Function : d_osc_setup
// Namespace: 
// Entry    : 00598020
// Prototype: undefined d_osc_setup(undefined8 param_1, undefined8 param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00598020 - 0059891d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void d_osc_setup(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined *puVar9;
  long *plVar10;
  int *piVar11;
  void *pvVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar19;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar31;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  float fVar33;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar27 [16];
  float fVar35;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar28 [16];
  int iVar32;
  int iVar34;
  int iVar36;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar30 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int in_stack_00000008;
  int iVar41;
  uint uVar42;
  uint in_stack_ffffffffffffffa0;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double dStack_30;
  
  piVar11 = (int *)gensym("phasor~");
  iVar41 = 0;
  uVar18 = 6;
  phasor_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           piVar11,0x598920,0,0x40,(char *)0x0,6,0,in_stack_ffffffffffffffa0);
  class_domainsignalin
            (extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)phasor_class,0x3c);
  plVar15 = phasor_class;
  piVar11 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar15,
                  0x5989b0,piVar11,0xb,(char *)0x0,uVar18,iVar41);
  plVar15 = phasor_class;
  piVar11 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x5989f0,piVar11,1,(char *)0x0,uVar18,iVar41);
  piVar11 = (int *)gensym("cos~");
  iVar41 = 0;
  uVar18 = 6;
  cos_class = class_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        piVar11,0x598b40,0,0x38,(char *)0x10,6,0,in_stack_ffffffffffffffa0);
  uVar20 = class_setfreefn((long)cos_class,cos_cleanup);
  class_domainsignalin
            (uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)cos_class,0x30);
  plVar15 = cos_class;
  piVar11 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x598be0,piVar11,0xb,(char *)0x0,uVar18,iVar41);
  if (cos_newtable == (undefined4 *)0x0) {
    puVar13 = getbytes(0x2004);
    lVar16 = 0;
    iVar41 = juce::jpeglibNamespace::jpeg_zigzag_order2._0_4_;
    iVar32 = juce::jpeglibNamespace::jpeg_zigzag_order2._4_4_;
    iVar34 = juce::jpeglibNamespace::jpeg_zigzag_order2._8_4_;
    iVar36 = juce::jpeglibNamespace::jpeg_zigzag_order2._12_4_;
    cos_newtable = puVar13;
    do {
      dVar21 = (double)iVar41 * _DAT_0065d9c0;
      auVar2._8_4_ = SUB84((double)iVar32 * _UNK_0065d9c8,0);
      auVar2._0_8_ = dVar21;
      auVar2._12_4_ = (int)((ulong)((double)iVar32 * _UNK_0065d9c8) >> 0x20);
      dVar22 = (double)iVar34 * _DAT_0065d9c0;
      dVar24 = (double)iVar36 * _UNK_0065d9c8;
      param_4 = _DAT_0065d9c0;
      dVar23 = cos(dVar22);
      uStack_54 = (undefined4)((ulong)dVar22 >> 0x20);
      uStack_50 = SUB84(dVar24,0);
      uStack_4c = (undefined4)((ulong)dVar24 >> 0x20);
      auVar3._4_8_ = extraout_XMM0_Qb;
      auVar3._0_4_ = uStack_54;
      auVar25._0_8_ = auVar3._0_8_ << 0x20;
      auVar25._8_4_ = uStack_50;
      auVar25._12_4_ = uStack_4c;
      dVar22 = cos(auVar25._8_8_);
      dVar21 = cos(dVar21);
      dStack_30 = auVar2._8_8_;
      dVar24 = cos(dStack_30);
      param_2 = CONCAT44((float)dVar22,(float)dVar23);
      *(ulong *)(puVar13 + lVar16) = CONCAT44((float)dVar24,(float)dVar21);
      *(undefined8 *)((long)(puVar13 + lVar16) + 8) = param_2;
      lVar16 = lVar16 + 4;
      iVar41 = iVar41 + _DAT_00652d80;
      iVar32 = iVar32 + _UNK_00652d84;
      iVar34 = iVar34 + _UNK_00652d88;
      iVar36 = iVar36 + _UNK_00652d8c;
    } while (lVar16 != 0x800);
    puVar13[0x800] = 0x3f800000;
    *puVar13 = 0x3f800000;
    puVar13[0x600] = 0;
    puVar13[0x200] = 0;
    puVar13[0x400] = 0xbf800000;
    lVar16 = *(long *)PTR_cos_table_00715460;
    plVar15 = (long *)PTR_cos_table_00715460;
  }
  else {
    lVar16 = *(long *)PTR_cos_table_00715460;
    plVar15 = (long *)PTR_cos_table_00715460;
  }
  PTR_cos_table_00715460 = (undefined *)plVar15;
  if (lVar16 == 0) {
    pvVar12 = getbytes(0x804);
    *plVar15 = (long)pvVar12;
    lVar16 = 0;
    fVar19 = _DAT_0065d9d0;
    fVar31 = _UNK_0065d9d4;
    fVar33 = _UNK_0065d9d8;
    fVar35 = _UNK_0065d9dc;
    do {
      dVar21 = cos((double)fVar33);
      uStack_54 = (undefined4)((ulong)(double)fVar33 >> 0x20);
      uStack_50 = SUB84((double)fVar35,0);
      uStack_4c = (undefined4)((ulong)(double)fVar35 >> 0x20);
      auVar4._4_8_ = extraout_XMM0_Qb_00;
      auVar4._0_4_ = uStack_54;
      auVar26._0_8_ = auVar4._0_8_ << 0x20;
      auVar26._8_4_ = uStack_50;
      auVar26._12_4_ = uStack_4c;
      dVar22 = cos(auVar26._8_8_);
      dVar23 = cos((double)fVar19);
      dVar24 = cos((double)fVar31);
      fVar37 = fVar19 + _DAT_0065d9e0;
      fVar38 = fVar31 + _UNK_0065d9e4;
      fVar39 = fVar33 + _UNK_0065d9e8;
      fVar40 = fVar35 + _UNK_0065d9ec;
      puVar14 = (undefined8 *)((long)pvVar12 + lVar16 * 4);
      *puVar14 = CONCAT44((float)dVar24,(float)dVar23);
      puVar14[1] = CONCAT44((float)dVar22,(float)dVar21);
      param_3 = (double)fVar37;
      dVar21 = cos((double)fVar39);
      uStack_54 = (undefined4)((ulong)(double)fVar39 >> 0x20);
      uStack_50 = SUB84((double)fVar40,0);
      uStack_4c = (undefined4)((ulong)(double)fVar40 >> 0x20);
      auVar5._4_8_ = extraout_XMM0_Qb_01;
      auVar5._0_4_ = uStack_54;
      auVar27._0_8_ = auVar5._0_8_ << 0x20;
      auVar27._8_4_ = uStack_50;
      auVar27._12_4_ = uStack_4c;
      dVar22 = cos(auVar27._8_8_);
      dVar23 = cos((double)fVar37);
      dVar24 = cos((double)fVar38);
      param_2 = CONCAT44((float)dVar22,(float)dVar21);
      puVar14 = (undefined8 *)((long)pvVar12 + lVar16 * 4 + 0x10);
      *puVar14 = CONCAT44((float)dVar24,(float)dVar23);
      puVar14[1] = param_2;
      lVar16 = lVar16 + 8;
      fVar19 = fVar19 + _DAT_0065d9f0;
      fVar31 = fVar31 + _UNK_0065d9f4;
      fVar33 = fVar33 + _UNK_0065d9f8;
      fVar35 = fVar35 + _UNK_0065d9fc;
    } while (lVar16 != 0x200);
    *(undefined4 *)((long)pvVar12 + 0x800) = 0x3f800000;
  }
  piVar11 = (int *)gensym("osc~");
  iVar41 = 0;
  uVar18 = 6;
  osc_class = class_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        piVar11,0x598e60,0,0x40,(char *)0x0,6,0,in_stack_ffffffffffffffa0);
  class_domainsignalin
            (extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)osc_class,0x3c);
  plVar10 = osc_class;
  piVar11 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar10,0x598ef0,piVar11,0xb,(char *)0x0,uVar18,iVar41);
  plVar10 = osc_class;
  piVar11 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar10,0x598f60,piVar11,1,(char *)0x0,uVar18,iVar41);
  if (cos_newtable == (undefined4 *)0x0) {
    puVar13 = getbytes(0x2004);
    lVar16 = 0;
    iVar41 = juce::jpeglibNamespace::jpeg_zigzag_order2._0_4_;
    iVar32 = juce::jpeglibNamespace::jpeg_zigzag_order2._4_4_;
    iVar34 = juce::jpeglibNamespace::jpeg_zigzag_order2._8_4_;
    iVar36 = juce::jpeglibNamespace::jpeg_zigzag_order2._12_4_;
    cos_newtable = puVar13;
    do {
      dVar21 = (double)iVar41 * _DAT_0065d9c0;
      auVar1._8_4_ = SUB84((double)iVar32 * _UNK_0065d9c8,0);
      auVar1._0_8_ = dVar21;
      auVar1._12_4_ = (int)((ulong)((double)iVar32 * _UNK_0065d9c8) >> 0x20);
      dVar22 = (double)iVar34 * _DAT_0065d9c0;
      dVar24 = (double)iVar36 * _UNK_0065d9c8;
      param_4 = _DAT_0065d9c0;
      dVar23 = cos(dVar22);
      uStack_54 = (undefined4)((ulong)dVar22 >> 0x20);
      uStack_50 = SUB84(dVar24,0);
      uStack_4c = (undefined4)((ulong)dVar24 >> 0x20);
      auVar6._4_8_ = extraout_XMM0_Qb_02;
      auVar6._0_4_ = uStack_54;
      auVar28._0_8_ = auVar6._0_8_ << 0x20;
      auVar28._8_4_ = uStack_50;
      auVar28._12_4_ = uStack_4c;
      dVar22 = cos(auVar28._8_8_);
      dVar21 = cos(dVar21);
      dStack_30 = auVar1._8_8_;
      dVar24 = cos(dStack_30);
      param_2 = CONCAT44((float)dVar22,(float)dVar23);
      *(ulong *)(puVar13 + lVar16) = CONCAT44((float)dVar24,(float)dVar21);
      *(undefined8 *)((long)(puVar13 + lVar16) + 8) = param_2;
      lVar16 = lVar16 + 4;
      iVar41 = iVar41 + _DAT_00652d80;
      iVar32 = iVar32 + _UNK_00652d84;
      iVar34 = iVar34 + _UNK_00652d88;
      iVar36 = iVar36 + _UNK_00652d8c;
    } while (lVar16 != 0x800);
    puVar13[0x800] = 0x3f800000;
    *puVar13 = 0x3f800000;
    puVar13[0x600] = 0;
    puVar13[0x200] = 0;
    puVar13[0x400] = 0xbf800000;
    lVar16 = *plVar15;
  }
  else {
    lVar16 = *plVar15;
  }
  if (lVar16 == 0) {
    pvVar12 = getbytes(0x804);
    *plVar15 = (long)pvVar12;
    lVar16 = 0;
    fVar19 = _DAT_0065d9d0;
    fVar31 = _UNK_0065d9d4;
    fVar33 = _UNK_0065d9d8;
    fVar35 = _UNK_0065d9dc;
    do {
      dVar21 = cos((double)fVar33);
      uStack_54 = (undefined4)((ulong)(double)fVar33 >> 0x20);
      uStack_50 = SUB84((double)fVar35,0);
      uStack_4c = (undefined4)((ulong)(double)fVar35 >> 0x20);
      auVar7._4_8_ = extraout_XMM0_Qb_03;
      auVar7._0_4_ = uStack_54;
      auVar29._0_8_ = auVar7._0_8_ << 0x20;
      auVar29._8_4_ = uStack_50;
      auVar29._12_4_ = uStack_4c;
      dVar22 = cos(auVar29._8_8_);
      dVar23 = cos((double)fVar19);
      dVar24 = cos((double)fVar31);
      fVar37 = fVar19 + _DAT_0065d9e0;
      fVar38 = fVar31 + _UNK_0065d9e4;
      fVar39 = fVar33 + _UNK_0065d9e8;
      fVar40 = fVar35 + _UNK_0065d9ec;
      puVar14 = (undefined8 *)((long)pvVar12 + lVar16 * 4);
      *puVar14 = CONCAT44((float)dVar24,(float)dVar23);
      puVar14[1] = CONCAT44((float)dVar22,(float)dVar21);
      param_3 = (double)fVar37;
      dVar21 = cos((double)fVar39);
      uStack_54 = (undefined4)((ulong)(double)fVar39 >> 0x20);
      uStack_50 = SUB84((double)fVar40,0);
      uStack_4c = (undefined4)((ulong)(double)fVar40 >> 0x20);
      auVar8._4_8_ = extraout_XMM0_Qb_04;
      auVar8._0_4_ = uStack_54;
      auVar30._0_8_ = auVar8._0_8_ << 0x20;
      auVar30._8_4_ = uStack_50;
      auVar30._12_4_ = uStack_4c;
      dVar22 = cos(auVar30._8_8_);
      dVar23 = cos((double)fVar37);
      dVar24 = cos((double)fVar38);
      param_2 = CONCAT44((float)dVar22,(float)dVar21);
      puVar14 = (undefined8 *)((long)pvVar12 + lVar16 * 4 + 0x10);
      *puVar14 = CONCAT44((float)dVar24,(float)dVar23);
      puVar14[1] = param_2;
      lVar16 = lVar16 + 8;
      fVar19 = fVar19 + _DAT_0065d9f0;
      fVar31 = fVar31 + _UNK_0065d9f4;
      fVar33 = fVar33 + _UNK_0065d9f8;
      fVar35 = fVar35 + _UNK_0065d9fc;
    } while (lVar16 != 0x200);
    *(undefined4 *)((long)pvVar12 + 0x800) = 0x3f800000;
  }
  piVar11 = (int *)gensym("vcf~");
  uVar42 = 0;
  pcVar17 = (char *)0x0;
  uVar18 = 6;
  puVar14 = class_new(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      piVar11,0x599230,0,0x48,(char *)0x0,6,0,in_stack_ffffffffffffffa0);
  puVar9 = PTR_sigvcf_class_007155c8;
  *(undefined8 **)PTR_sigvcf_class_007155c8 = puVar14;
  class_domainsignalin
            (extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)puVar14,0x40);
  plVar15 = *(long **)puVar9;
  piVar11 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x599300,piVar11,0,pcVar17,uVar18,uVar42);
  plVar15 = *(long **)puVar9;
  piVar11 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x599310,piVar11,0xb,(char *)0x0,uVar18,uVar42);
  plVar15 = *(long **)puVar9;
  piVar11 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x599380,piVar11,1,(char *)0x0,uVar18,uVar42);
  piVar11 = (int *)gensym("noise~");
  uVar18 = 0;
  plVar15 = class_new(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      piVar11,0x599800,0,0x38,(char *)0x0,0,uVar42,in_stack_ffffffffffffffa0);
  noise_class = plVar15;
  piVar11 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x599840,piVar11,0xb,(char *)0x0,uVar18,uVar42);
  plVar15 = noise_class;
  piVar11 = (int *)gensym("seed");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x599870,piVar11,1,(char *)0x0,uVar18,uVar42);
  piVar11 = (int *)gensym("tabosc4~");
  iVar41 = 0;
  uVar18 = 7;
  tabosc4_tilde_class =
       class_new(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar11
                 ,0x599960,0,0x60,(char *)0x0,7,0,in_stack_ffffffffffffffa0);
  class_domainsignalin
            (extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)tabosc4_tilde_class,0x48);
  plVar15 = tabosc4_tilde_class;
  piVar11 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x5999f0,piVar11,0xb,(char *)0x0,uVar18,iVar41);
  plVar15 = tabosc4_tilde_class;
  piVar11 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x599a50,piVar11,2,(char *)0x0,uVar18,iVar41);
  plVar15 = tabosc4_tilde_class;
  piVar11 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  plVar15,0x599b50,piVar11,1,(char *)0x0,uVar18,in_stack_00000008);
  return;
}


