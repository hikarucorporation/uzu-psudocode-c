// Function : adsr_tilde_setup
// Namespace: 
// Entry    : 0056e780
// Prototype: undefined adsr_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0056e780 - 0056e94e


void adsr_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  char *pcVar3;
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
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("adsr~");
  iVar5 = 0;
  pcVar3 = (char *)0x10;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x56e950,adsr_free,0xf0,(char *)0x10,10,0,
                     in_stack_fffffffffffffff0);
  adsr_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = adsr_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56ef00,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  class_addbang((long)adsr_class,adsr_bang);
  class_doaddfloat((long)adsr_class,adsr_float);
  plVar2 = adsr_class;
  piVar1 = (int *)gensym("gate");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56f250,piVar1,1,(char *)0x0,uVar4,iVar5);
  plVar2 = adsr_class;
  piVar1 = (int *)gensym("retrigger");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56f2a0,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = adsr_class;
  piVar1 = (int *)gensym("lin");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56f2c0,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = adsr_class;
  piVar1 = (int *)gensym("lag");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56f2e0,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = adsr_class;
  piVar1 = (int *)gensym("rel");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56f2f0,piVar1,1,(char *)0x0,uVar4,iVar5);
  plVar2 = adsr_class;
  piVar1 = (int *)gensym("curve");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56f300,piVar1,1,(char *)0x0,uVar4,in_stack_00000008);
  return;
}


