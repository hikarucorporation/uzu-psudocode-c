// Function : delay_tilde_setup
// Namespace: 
// Entry    : 0055e8b0
// Prototype: undefined delay_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0055e8b0 - 0055e9cd


void delay_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  int unaff_EBX;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  
  piVar1 = (int *)gensym("delay~");
  pcVar3 = (char *)0x0;
  uVar4 = 6;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x55e9d0,delay_free,0x8b0,(char *)0x0,6,6,0);
  delay_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,unaff_EBX);
  plVar2 = delay_class;
  piVar1 = (int *)gensym("dsp");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55eae0,piVar1,0xb,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = delay_class;
  piVar1 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55ebc0,piVar1,0,pcVar3,uVar4,unaff_EBX);
  plVar2 = delay_class;
  piVar1 = (int *)gensym("ramp");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55ebe0,piVar1,1,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = delay_class;
  piVar1 = (int *)gensym("maxsize");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55ebf0,piVar1,6,(char *)0x0,uVar4,in_stack_00000008);
  return;
}


