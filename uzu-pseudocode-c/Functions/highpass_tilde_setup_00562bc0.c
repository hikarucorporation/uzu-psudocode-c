// Function : highpass_tilde_setup
// Namespace: 
// Entry    : 00562bc0
// Prototype: undefined highpass_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00562bc0 - 00562d02


void highpass_tilde_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("highpass~");
  iVar5 = 0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x562d10,0,0xb0,(char *)0x0,10,0,
                     in_stack_fffffffffffffff0);
  highpass_class = plVar2;
  piVar1 = (int *)gensym("dsp");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x563000,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  plVar2 = highpass_class;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = highpass_class;
  piVar1 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5631b0,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = highpass_class;
  piVar1 = (int *)gensym("bypass");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5631c0,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = highpass_class;
  piVar1 = (int *)gensym("bw");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5631d0,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = highpass_class;
  piVar1 = (int *)gensym("q");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x563310,piVar1,0,pcVar3,uVar4,in_stack_00000008);
  return;
}


