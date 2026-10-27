// Function : array_define_new
// Namespace: 
// Entry    : 0054a820
// Prototype: long * array_define_new(uint param_1, int * param_2, undefined8 param_3, undefined8 * param_4, char * param_5, undefined8 param_6)
// Body     : 0054a820 - 0054acd5


long * array_define_new(uint param_1,int *param_2,undefined8 param_3,undefined8 *param_4,
                       char *param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar10;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  bool bVar17;
  float fVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  ulong uVar19;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qa_06;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  undefined1 extraout_var [12];
  undefined1 auVar21 [16];
  undefined1 extraout_var_00 [12];
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double in_XMM3_Qa;
  double dVar28;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined1 in_stack_ffffffffffffff98;
  undefined7 in_stack_ffffffffffffff99;
  float local_5c;
  undefined1 local_58 [16];
  float local_40;
  
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar16 = (undefined8 *)(*plVar5 + 0x168);
  uVar15 = 100;
  bVar17 = true;
  fVar22 = DAT_00654498;
  if (param_1 == 0) {
    dVar25 = (double)(ulong)DAT_00653f04;
    uVar23 = 0;
    local_40 = DAT_005d9038;
    local_58 = ZEXT416(DAT_005d9054);
    uVar19 = (ulong)(uint)DAT_00654498;
    iVar14 = 0;
  }
  else {
    auVar21 = ZEXT416(DAT_005d9054);
    local_58._0_8_ = ZEXT48((uint)DAT_005d9038);
    uVar23 = 0;
    local_5c = DAT_00654498;
    dVar25 = (double)(ulong)DAT_00653f04;
    local_40 = DAT_005d9038;
    iVar14 = 0;
LAB_0054a8a0:
    do {
      iVar4 = *param_2;
      in_XMM3_Qa = (double)local_58._0_8_;
      local_58 = auVar21;
      if (iVar4 != 2) {
LAB_0054aa8a:
        uVar15 = 100;
        if (iVar4 == 1) {
          uVar15 = (uint)(float)param_2[2];
          param_1 = param_1 - 1;
          if (param_1 == 0) {
            bVar17 = false;
            uVar19 = (ulong)(uint)local_5c;
            goto LAB_0054aaf3;
          }
          param_2 = param_2 + 4;
        }
        bVar17 = iVar4 != 1;
        dVar28 = dVar25;
        post(auVar21._0_8_,CONCAT44(uVar23,fVar22),dVar25,local_58._0_8_,in_XMM4_Qa,in_XMM5_Qa,
             in_XMM6_Qa,in_XMM7_Qa,"warning: array define ignoring extra argument: ");
        postatom(extraout_XMM0_Qa_02,CONCAT44(uVar23,fVar22),dVar28,local_58._0_8_,in_XMM4_Qa,
                 in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,param_2,extraout_RDX_01,param_4,param_5,
                 param_6);
        endpost(extraout_XMM0_Qa_03,CONCAT44(uVar23,fVar22),dVar28,local_58._0_8_,in_XMM4_Qa,
                in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
        uVar19 = (ulong)(uint)local_5c;
        dVar25 = (double)((ulong)dVar25 & 0xffffffff);
        in_XMM3_Qa = (double)local_58._0_8_;
        goto LAB_0054aaf3;
      }
      param_4 = *(undefined8 **)(param_2 + 2);
      pcVar12 = (char *)*param_4;
      if (*pcVar12 != '-') {
        param_1 = param_1 - 1;
        if (param_1 != 0) {
          param_2 = param_2 + 4;
          iVar4 = *param_2;
          puVar16 = param_4;
          goto LAB_0054aa8a;
        }
        goto LAB_0054aad9;
      }
      dVar28 = dVar25;
      iVar4 = strcmp(pcVar12,"-k");
      if (iVar4 == 0) {
        iVar14 = 1;
LAB_0054aa2b:
        dVar25 = (double)((ulong)dVar25 & 0xffffffff);
        param_2 = param_2 + 4;
        param_1 = param_1 - 1;
        if (param_1 == 0) break;
        goto LAB_0054a8a0;
      }
      iVar4 = strcmp(pcVar12,"-yrange");
      if ((((iVar4 == 0) && (2 < (int)param_1)) && (param_2[4] == 1)) && (param_2[8] == 1)) {
        local_58._0_4_ = atom_getfloatarg(1,param_1,(long)param_2);
        local_58._4_4_ = extraout_XMM0_Db;
        fVar18 = (float)atom_getfloatarg(2,param_1,(long)param_2);
        local_40 = DAT_005d9038;
        if ((float)local_58._0_4_ != fVar18) {
          local_40 = fVar18;
        }
        param_2 = param_2 + 8;
        fVar22 = (float)(-(uint)(fVar18 == (float)local_58._0_4_) & DAT_005d9054);
        uVar23 = 0;
        auVar21._0_4_ = ~-(uint)(fVar18 == (float)local_58._0_4_) & local_58._0_4_;
        auVar21._4_4_ = ~extraout_var._0_4_ & extraout_XMM0_Db;
        auVar21._8_4_ = ~extraout_var._4_4_ & extraout_XMM0_Dc;
        auVar21._12_4_ = ~extraout_var._8_4_ & extraout_XMM0_Dd;
        auVar21 = auVar21 | ZEXT416((uint)fVar22);
        param_1 = param_1 - 2;
        goto LAB_0054aa2b;
      }
      iVar4 = strcmp(pcVar12,"-pix");
      if (((iVar4 != 0) || ((int)param_1 < 3)) || ((param_2[4] != 1 || (param_2[8] != 1)))) {
        pd_error(extraout_XMM0_Qa,CONCAT44(uVar23,fVar22),dVar28,local_58._0_8_,in_XMM4_Qa,
                 in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,0,"array define: unknown flag ...",extraout_RDX,
                 param_4,param_5,param_6);
        postatom(extraout_XMM0_Qa_00,CONCAT44(uVar23,fVar22),dVar28,local_58._0_8_,in_XMM4_Qa,
                 in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_1,param_2,extraout_RDX_00,param_4,param_5,
                 param_6);
        endpost(extraout_XMM0_Qa_01,CONCAT44(uVar23,fVar22),dVar28,local_58._0_8_,in_XMM4_Qa,
                in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
        goto LAB_0054aa2b;
      }
      local_5c = (float)atom_getfloatarg(1,param_1,(long)param_2);
      uVar23 = 0;
      if (local_5c <= DAT_0065260c) {
        local_5c = DAT_0065260c;
      }
      fVar22 = DAT_0065260c;
      fVar18 = (float)atom_getfloatarg(2,param_1,(long)param_2);
      if (fVar18 <= DAT_0065260c) {
        fVar18 = DAT_0065260c;
      }
      dVar25 = (double)CONCAT44(extraout_var_00._0_4_,fVar18);
      param_2 = param_2 + 0xc;
      param_1 = param_1 - 3;
    } while (param_1 != 0);
    param_4 = puVar16;
    in_XMM3_Qa = (double)local_58._0_8_;
    local_58 = auVar21;
LAB_0054aad9:
    uVar19 = (ulong)(uint)local_5c;
    uVar15 = 100;
    bVar17 = true;
    puVar16 = param_4;
  }
LAB_0054aaf3:
  bVar3 = iVar14 != 0 & bVar17;
  puVar9 = (undefined *)(ulong)bVar3;
  pcVar12 = (char *)(ulong)(uint)(int)(float)uVar19;
  uVar13 = (ulong)(uint)(int)SUB84(dVar25,0);
  uVar11 = (ulong)uVar15;
  plVar5 = table_donew(uVar19,CONCAT44(uVar23,fVar22),dVar25,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                       in_XMM6_Qa,in_XMM7_Qa,puVar16,uVar15,iVar14,(uint)bVar3,pcVar12,uVar13);
  *plVar5 = *(long *)PTR_array_define_class_00715eb0;
  uVar10 = extraout_RDX_02;
  uVar20 = extraout_XMM0_Qa_04;
  if ((long *)plVar5[6] != (long *)0x0) {
    plVar6 = pd_checkglist((long *)plVar5[6]);
    uVar10 = extraout_RDX_03;
    uVar20 = extraout_XMM0_Qa_05;
    if (plVar6 != (long *)0x0) {
      plVar1 = (long *)plVar6[6];
      if ((plVar1 != (long *)0x0) &&
         (puVar9 = PTR_garray_class_00715780, *plVar1 == *(long *)PTR_garray_class_00715780)) {
        piVar7 = (int *)garray_getarray(extraout_XMM0_Qa_05,CONCAT44(uVar23,fVar22),dVar25,
                                        in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
                                        (long)plVar1,uVar11,extraout_RDX_03,
                                        (int *)PTR_garray_class_00715780,pcVar12,uVar13);
        iVar14 = *piVar7;
        lVar2 = plVar5[6];
        puVar16 = gensym("bounds");
        iVar4 = iVar14;
        if (iVar14 != 1) {
          iVar4 = iVar14 + -1;
        }
        dVar25 = (double)local_40;
        dVar26 = (double)iVar4;
        dVar28 = (double)(float)local_58._0_4_;
        in_XMM3_Qa = dVar28;
        dVar27 = dVar25;
        pd_vmess(0,dVar25,dVar26,dVar28,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,lVar2,puVar16,
                 0x655b79,puVar9,pcVar12,uVar13,
                 (double)CONCAT71(in_stack_ffffffffffffff99,in_stack_ffffffffffffff98));
        lVar2 = plVar5[6];
        puVar8 = gensym("xlabel");
        fVar22 = glist_pixelstoy((ulong)DAT_005d9078,dVar27,dVar26,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                 in_XMM6_Qa,in_XMM7_Qa,(long)plVar6,puVar16,extraout_RDX_05,puVar9,
                                 pcVar12,uVar13);
        fVar18 = glist_pixelstoy(0,dVar27,dVar26,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                                 in_XMM7_Qa,(long)plVar6,puVar16,extraout_RDX_06,puVar9,pcVar12,
                                 uVar13);
        dVar27 = (double)(iVar14 + -1);
        uVar23 = 0;
        uVar24 = 0;
        pd_vmess((double)((fVar22 + (float)local_58._0_4_) - fVar18),0,dVar27,in_XMM3_Qa,in_XMM4_Qa,
                 in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,lVar2,puVar8,0x655b7a,puVar9,pcVar12,uVar13,
                 (double)CONCAT71(in_stack_ffffffffffffff99,in_stack_ffffffffffffff98));
        lVar2 = plVar5[6];
        puVar16 = gensym("ylabel");
        fVar22 = glist_pixelstox(0,CONCAT44(uVar24,uVar23),dVar27,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                                 in_XMM6_Qa,in_XMM7_Qa,(long)plVar6,puVar8,extraout_RDX_07,puVar9,
                                 pcVar12,uVar13);
        fVar18 = glist_pixelstox((ulong)DAT_00652628,CONCAT44(uVar24,uVar23),dVar27,in_XMM3_Qa,
                                 in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,(long)plVar6,puVar8,
                                 extraout_RDX_08,puVar9,pcVar12,uVar13);
        pd_vmess((double)(fVar22 - fVar18),dVar28,dVar25,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa
                 ,in_XMM7_Qa,lVar2,puVar16,0x655b7a,puVar9,pcVar12,uVar13,
                 (double)CONCAT71(in_stack_ffffffffffffff99,in_stack_ffffffffffffff98));
        goto LAB_0054ab63;
      }
    }
  }
  bug(uVar20,CONCAT44(uVar23,fVar22),dVar25,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,
      "array_define_yrange",uVar11,uVar10,puVar9,pcVar12,uVar13,in_stack_ffffffffffffff98);
  dVar28 = (double)CONCAT44(uVar23,fVar22);
LAB_0054ab63:
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_06,dVar28,dVar25,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
             in_XMM7_Qa,(long)plVar5,*plVar6 + 0x60,extraout_RDX_04,puVar9,pcVar12,uVar13);
  return plVar5;
}


