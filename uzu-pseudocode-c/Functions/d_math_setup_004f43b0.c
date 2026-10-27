// Function : d_math_setup
// Namespace: 
// Entry    : 004f43b0
// Prototype: undefined d_math_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004f43b0 - 004f49ec


void d_math_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint in_EAX;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint unaff_EBX;
  char *pcVar9;
  undefined8 uVar10;
  uint unaff_R12D;
  uint unaff_R13D;
  uint unaff_R14D;
  uint unaff_R15D;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
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
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Da_23;
  undefined4 extraout_XMM0_Da_24;
  undefined4 extraout_XMM0_Da_25;
  undefined4 extraout_XMM0_Da_26;
  undefined4 extraout_XMM0_Da_27;
  undefined4 extraout_XMM0_Da_28;
  undefined4 extraout_XMM0_Da_29;
  undefined4 extraout_XMM0_Da_30;
  undefined4 extraout_XMM0_Da_31;
  undefined4 extraout_XMM0_Da_32;
  undefined4 extraout_XMM0_Da_33;
  undefined4 extraout_XMM0_Da_34;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined4 extraout_XMM0_Db_17;
  undefined4 extraout_XMM0_Db_18;
  undefined4 extraout_XMM0_Db_19;
  undefined4 extraout_XMM0_Db_20;
  undefined4 extraout_XMM0_Db_21;
  undefined4 extraout_XMM0_Db_22;
  
  piVar6 = (int *)gensym("dbtorms~");
  uVar8 = 0;
  puVar7 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar6,0x4f3b00,0,0x38,(char *)0x10,0,in_EAX,unaff_EBX)
  ;
  puVar2 = PTR_dbtorms_tilde_class_00715820;
  *(undefined8 **)PTR_dbtorms_tilde_class_00715820 = puVar7;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar7,0x30);
  plVar1 = *(long **)puVar2;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3b40,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("rmstodb~");
  uVar8 = 0;
  puVar7 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_02),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar6,0x4f3c10,0,0x38,(char *)0x10,0,in_EAX,
                     unaff_EBX);
  puVar2 = PTR_rmstodb_tilde_class_00715910;
  *(undefined8 **)PTR_rmstodb_tilde_class_00715910 = puVar7;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar7,0x30);
  plVar1 = *(long **)puVar2;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3c50,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("dbtopow~");
  uVar8 = 0;
  puVar7 = class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_05),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar6,0x4f3d20,0,0x38,(char *)0x10,0,in_EAX,
                     unaff_EBX);
  puVar2 = PTR_dbtopow_tilde_class_00715df0;
  *(undefined8 **)PTR_dbtopow_tilde_class_00715df0 = puVar7;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar7,0x30);
  plVar1 = *(long **)puVar2;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3d60,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("powtodb~");
  uVar8 = 0;
  puVar7 = class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_08),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar6,0x4f3e30,0,0x38,(char *)0x10,0,in_EAX,
                     unaff_EBX);
  puVar5 = PTR_powtodb_tilde_class_00715ff0;
  *(undefined8 **)PTR_powtodb_tilde_class_00715ff0 = puVar7;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar7,0x30);
  plVar1 = *(long **)puVar5;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3e70,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("mtof~");
  uVar8 = 0;
  puVar7 = class_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_11),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar6,0x4f38e0,0,0x38,(char *)0x10,0,in_EAX,
                     unaff_EBX);
  puVar2 = PTR_mtof_tilde_class_00715438;
  *(undefined8 **)PTR_mtof_tilde_class_00715438 = puVar7;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_12),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar7,0x30);
  plVar1 = *(long **)puVar2;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3920,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("ftom~");
  uVar8 = 0;
  puVar7 = class_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_14),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar6,0x4f39f0,0,0x38,(char *)0x10,0,in_EAX,
                     unaff_EBX);
  puVar3 = PTR_ftom_tilde_class_00715830;
  *(undefined8 **)PTR_ftom_tilde_class_00715830 = puVar7;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_15),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar7,0x30);
  plVar1 = *(long **)puVar3;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3a30,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("rsqrt~");
  uVar8 = 0x38;
  pcVar9 = (char *)0x10;
  uVar10 = 0;
  sigrsqrt_class =
       class_new(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_17),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar6,0x4f3110,0,0x38,(char *)0x10,0,in_EAX,unaff_EBX);
  piVar6 = (int *)gensym("q8_rsqrt~");
  uVar8 = class_addcreator(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_18),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,0x4f3110,piVar6,0,uVar8,pcVar9,uVar10,
                           in_EAX,unaff_EBX,unaff_R12D,unaff_R13D,unaff_R14D,unaff_R15D);
  class_domainsignalin
            (uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigrsqrt_class,0x30
            );
  plVar1 = sigrsqrt_class;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3260,piVar6,0xb,(char *)0x0,uVar10,in_EAX);
  piVar6 = (int *)gensym("sqrt~");
  uVar8 = 0x38;
  pcVar9 = (char *)0x10;
  uVar10 = 0;
  sigsqrt_class =
       class_new(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_20),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar6,0x4f3580,0,0x38,(char *)0x10,0,in_EAX,unaff_EBX);
  piVar6 = (int *)gensym("q8_sqrt~");
  uVar8 = class_addcreator(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_21),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,0x4f3580,piVar6,0,uVar8,pcVar9,uVar10,
                           in_EAX,unaff_EBX,unaff_R12D,unaff_R13D,unaff_R14D,unaff_R15D);
  class_domainsignalin
            (uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigsqrt_class,0x30)
  ;
  plVar1 = sigsqrt_class;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f36d0,piVar6,0xb,(char *)0x0,uVar10,in_EAX);
  piVar6 = (int *)gensym("wrap~");
  uVar8 = 0;
  puVar7 = class_new(CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_23),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar6,0x4f37c0,0,0x38,(char *)0x10,0,in_EAX,
                     unaff_EBX);
  puVar4 = PTR_sigwrap_class_00715b40;
  *(undefined8 **)PTR_sigwrap_class_00715b40 = puVar7;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_16,extraout_XMM0_Da_24),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar7,0x30);
  plVar1 = *(long **)puVar4;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3800,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("exp~");
  uVar8 = 0;
  exp_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_17,extraout_XMM0_Da_26),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar6,0x4f5570,0,0x38,(char *)0x10,0,in_EAX,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_18,extraout_XMM0_Da_27),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)exp_tilde_class,0x30);
  plVar1 = exp_tilde_class;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f55b0,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("abs~");
  uVar8 = 0;
  abs_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_19,extraout_XMM0_Da_29),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar6,0x4f5600,0,0x38,(char *)0x10,0,in_EAX,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_20,extraout_XMM0_Da_30),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)abs_tilde_class,0x30);
  plVar1 = abs_tilde_class;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_31,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f5640,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  piVar6 = (int *)gensym("clip~");
  uVar8 = 6;
  clip_class = class_new(CONCAT44(extraout_XMM0_Db_21,extraout_XMM0_Da_32),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar6,0x4f5690,0,0x40,(char *)0x10,6,6,0);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_22,extraout_XMM0_Da_33),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)clip_class,0x30);
  plVar1 = clip_class;
  piVar6 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_34,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f5720,piVar6,0xb,(char *)0x0,uVar8,in_EAX);
  puVar7 = gensym("acoustics-tilde.pd");
  class_sethelpsymbol(*(long *)puVar2,puVar7);
  class_sethelpsymbol(*(long *)puVar3,puVar7);
  class_sethelpsymbol(*(long *)PTR_dbtorms_tilde_class_00715820,puVar7);
  class_sethelpsymbol(*(long *)PTR_rmstodb_tilde_class_00715910,puVar7);
  class_sethelpsymbol(*(long *)PTR_dbtopow_tilde_class_00715df0,puVar7);
  class_sethelpsymbol(*(long *)puVar5,puVar7);
  puVar7 = gensym("unops-tilde.pd");
  class_sethelpsymbol((long)sigrsqrt_class,puVar7);
  class_sethelpsymbol((long)sigsqrt_class,puVar7);
  class_sethelpsymbol(*(long *)puVar4,puVar7);
  class_sethelpsymbol((long)exp_tilde_class,puVar7);
  class_sethelpsymbol((long)abs_tilde_class,puVar7);
  return;
}


