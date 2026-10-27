// Function : d_ctl_setup
// Namespace: 
// Entry    : 0058ef40
// Prototype: undefined d_ctl_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0058ef40 - 0058f38b


void d_ctl_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  uint in_EAX;
  int *piVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  char *pcVar5;
  undefined8 uVar6;
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
  int in_stack_00000008;
  uint uVar7;
  
  uVar7 = 0x58ef54;
  piVar3 = (int *)gensym("sig~");
  uVar6 = 6;
  sig_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar3,0x58f610,0,0x38,(char *)0x0,6,0,uVar7);
  class_doaddfloat((long)sig_tilde_class,sig_tilde_float);
  plVar1 = sig_tilde_class;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x58f670,piVar3,0xb,(char *)0x0,uVar6,in_EAX);
  piVar3 = (int *)gensym("line~");
  uVar6 = 0;
  line_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x58f690,0,0x58,(char *)0x0,0,in_EAX,unaff_EBX);
  class_doaddfloat((long)line_tilde_class,line_tilde_float);
  plVar1 = line_tilde_class;
  piVar3 = (int *)gensym("dsp");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x58f720,piVar3,0xb,(char *)0x0,uVar6,in_EAX);
  plVar1 = line_tilde_class;
  piVar3 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x58f7a0,piVar3,0,pcVar5,uVar6,in_EAX);
  piVar3 = (int *)gensym("vline~");
  uVar6 = 0;
  vline_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x58fc30,vline_tilde_stop,0x88,(char *)0x0,0,in_EAX,
                 unaff_EBX);
  class_doaddfloat((long)vline_tilde_class,vline_tilde_float);
  plVar1 = vline_tilde_class;
  piVar3 = (int *)gensym("dsp");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x58ff70,piVar3,0xb,(char *)0x0,uVar6,in_EAX);
  plVar1 = vline_tilde_class;
  piVar3 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x58fcc0,piVar3,0,pcVar5,uVar6,in_EAX);
  piVar3 = (int *)gensym("snapshot~");
  uVar6 = 0;
  snapshot_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x590220,0,0x38,(char *)0x0,0,in_EAX,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)snapshot_tilde_class,0x34);
  plVar1 = snapshot_tilde_class;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x590270,piVar3,0xb,(char *)0x0,uVar6,in_EAX);
  plVar1 = snapshot_tilde_class;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5902a0,piVar3,6,(char *)0x0,uVar6,in_EAX);
  class_addbang((long)snapshot_tilde_class,snapshot_tilde_bang);
  piVar3 = (int *)gensym("vsnapshot~");
  uVar6 = 0;
  vsnapshot_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_11),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x5902f0,vsnapshot_tilde_ff,0x50,(char *)0x0,0,
                 in_EAX,unaff_EBX);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_12),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)vsnapshot_tilde_class,0x40);
  plVar1 = vsnapshot_tilde_class;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x590360,piVar3,0xb,(char *)0x0,uVar6,in_EAX);
  class_addbang((long)vsnapshot_tilde_class,vsnapshot_tilde_bang);
  piVar3 = (int *)gensym("env~");
  uVar6 = 6;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_14),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x58ea20,env_tilde_ff,0xe8,(char *)0x0,6
                     ,6,0);
  puVar2 = PTR_env_tilde_class_00715fa8;
  *(undefined8 **)PTR_env_tilde_class_00715fa8 = puVar4;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_15),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar4,0xdc);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x58ed80,piVar3,0xb,(char *)0x0,uVar6,in_EAX);
  piVar3 = (int *)gensym("threshold~");
  threshold_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_17),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x590600,threshold_tilde_ff,0x68,(char *)0x0,6,6,6);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_18),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)threshold_tilde_class,0x48);
  plVar1 = threshold_tilde_class;
  piVar3 = (int *)gensym("set");
  uVar6 = 1;
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x590710,piVar3,1,(char *)0x1,1,1);
  plVar1 = threshold_tilde_class;
  piVar3 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x590730,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = threshold_tilde_class;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_threshold_tilde_dsp_00715d28,piVar3,0xb,(char *)0x0,uVar6,
                  in_stack_00000008);
  return;
}


