// Function : white_tilde_setup
// Namespace: 
// Entry    : 00571f20
// Prototype: undefined white_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00571f20 - 0057201f


void white_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  int iVar4;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("white~");
  iVar4 = 0;
  uVar3 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x572020,0,0x50,(char *)0x10,10,0,
                     in_stack_fffffffffffffff0);
  white_class = plVar2;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5721e0,piVar1,0xb,(char *)0x0,uVar3,iVar4);
  plVar2 = white_class;
  piVar1 = (int *)gensym("seed");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x572230,piVar1,10,(char *)0x0,uVar3,iVar4);
  plVar2 = white_class;
  piVar1 = (int *)gensym("ch");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x572260,piVar1,1,(char *)0x0,uVar3,iVar4);
  plVar2 = white_class;
  piVar1 = (int *)gensym("clip");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x572280,piVar1,1,(char *)0x0,uVar3,in_stack_00000008);
  return;
}


