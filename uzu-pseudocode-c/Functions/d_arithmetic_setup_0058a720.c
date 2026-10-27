// Function : d_arithmetic_setup
// Namespace: 
// Entry    : 0058a720
// Prototype: undefined d_arithmetic_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0058a720 - 0058afc0


void d_arithmetic_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint unaff_EBX;
  undefined8 uVar4;
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
  undefined4 extraout_XMM0_Da_35;
  undefined4 extraout_XMM0_Da_36;
  undefined4 extraout_XMM0_Da_37;
  undefined4 extraout_XMM0_Da_38;
  undefined4 extraout_XMM0_Da_39;
  undefined4 extraout_XMM0_Da_40;
  undefined4 extraout_XMM0_Da_41;
  undefined4 extraout_XMM0_Da_42;
  undefined4 extraout_XMM0_Da_43;
  undefined4 extraout_XMM0_Da_44;
  undefined4 extraout_XMM0_Da_45;
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
  undefined4 extraout_XMM0_Db_23;
  undefined4 extraout_XMM0_Db_24;
  undefined4 extraout_XMM0_Db_25;
  undefined4 extraout_XMM0_Db_26;
  undefined4 extraout_XMM0_Db_27;
  undefined4 extraout_XMM0_Db_28;
  undefined4 extraout_XMM0_Db_29;
  uint uVar5;
  
  piVar1 = (int *)gensym("+~");
  uVar5 = 0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x58afd0,0,0x38,(char *)0x70,10,0,unaff_EBX);
  plus_class = plVar2;
  piVar1 = (int *)gensym("dsp");
  uVar4 = class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar2,0x58b090,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  class_domainsignalin
            (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plus_class,0x30);
  plVar2 = plus_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("+~");
  uVar4 = 0;
  scalarplus_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0,0,0x38,(char *)0x10,0,uVar5,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)scalarplus_class,0x30);
  plVar2 = scalarplus_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b0c0,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = scalarplus_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("-~");
  uVar5 = 0;
  uVar4 = 10;
  minus_class = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_04),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar1,0x58b3f0,0,0x38,(char *)0x70,10,0,
                          unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)minus_class,0x30);
  plVar2 = minus_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b4b0,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = minus_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("-~");
  uVar4 = 0;
  scalarminus_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0,0,0x38,(char *)0x10,0,uVar5,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)scalarminus_class,0x30);
  plVar2 = scalarminus_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b4f0,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = scalarminus_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("*~");
  uVar5 = 0;
  uVar4 = 10;
  times_class = class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_10),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar1,0x58b560,0,0x38,(char *)0x70,10,0,
                          unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_11),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)times_class,0x30);
  plVar2 = times_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b620,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = times_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("*~");
  uVar4 = 0;
  scalartimes_class =
       class_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_13),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0,0,0x38,(char *)0x10,0,uVar5,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_14),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)scalartimes_class,0x30);
  plVar2 = scalartimes_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b650,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = scalartimes_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("/~");
  uVar5 = 0;
  uVar4 = 10;
  over_class = class_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_16),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar1,0x58b6c0,0,0x38,(char *)0x70,10,0,
                         unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_17),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)over_class,0x30);
  plVar2 = over_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b780,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = over_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("/~");
  uVar4 = 0;
  scalarover_class =
       class_new(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_19),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0,0,0x38,(char *)0x10,0,uVar5,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_20),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)scalarover_class,0x30);
  plVar2 = scalarover_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b7c0,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = scalarover_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("max~");
  uVar5 = 0;
  uVar4 = 10;
  max_class = class_new(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_22),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,piVar1,0x58b830,0,0x38,(char *)0x70,10,0,
                        unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_23),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)max_class,0x30);
  plVar2 = max_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b8f0,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = max_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("max~");
  uVar4 = 0;
  scalarmax_class =
       class_new(CONCAT44(extraout_XMM0_Db_16,extraout_XMM0_Da_25),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0,0,0x38,(char *)0x10,0,uVar5,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_17,extraout_XMM0_Da_26),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)scalarmax_class,0x30);
  plVar2 = scalarmax_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58b920,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = scalarmax_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("min~");
  uVar5 = 0;
  uVar4 = 10;
  min_class = class_new(CONCAT44(extraout_XMM0_Db_18,extraout_XMM0_Da_28),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,piVar1,0x58b990,0,0x38,(char *)0x70,10,0,
                        unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_19,extraout_XMM0_Da_29),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)min_class,0x30);
  plVar2 = min_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58ba60,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = min_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("min~");
  uVar4 = 0;
  scalarmin_class =
       class_new(CONCAT44(extraout_XMM0_Db_20,extraout_XMM0_Da_31),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0,0,0x38,(char *)0x10,0,uVar5,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_21,extraout_XMM0_Da_32),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)scalarmin_class,0x34);
  plVar2 = scalarmin_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58ba90,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = scalarmin_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("log~");
  uVar5 = 0;
  uVar4 = 10;
  log_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_22,extraout_XMM0_Da_34),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x58bb00,0,0x38,(char *)0x70,10,0,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_23,extraout_XMM0_Da_35),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)log_tilde_class,0x30);
  plVar2 = log_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_36,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58bbc0,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = log_tilde_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("log~");
  uVar4 = 0;
  scalarlog_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_24,extraout_XMM0_Da_37),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0,0,0x38,(char *)0x10,0,uVar5,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_25,extraout_XMM0_Da_38),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)scalarlog_tilde_class,0x30);
  plVar2 = scalarlog_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58bbf0,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = scalarlog_tilde_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("pow~");
  uVar5 = 0;
  uVar4 = 10;
  pow_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_26,extraout_XMM0_Da_40),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x58bc40,0,0x38,(char *)0x70,10,0,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_27,extraout_XMM0_Da_41),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)pow_tilde_class,0x30);
  plVar2 = pow_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_42,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58bd00,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = pow_tilde_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("pow~");
  uVar4 = 0;
  scalarpow_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_28,extraout_XMM0_Da_43),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0,0,0x38,(char *)0x10,0,uVar5,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_29,extraout_XMM0_Da_44),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)scalarpow_tilde_class,0x30);
  plVar2 = scalarpow_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_45,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x58bd30,piVar1,0xb,(char *)0x0,uVar4,uVar5);
  plVar2 = scalarpow_tilde_class;
  puVar3 = gensym("binops-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  return;
}


