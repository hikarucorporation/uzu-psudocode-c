// Function : phasewrap_tilde_setup
// Namespace: 
// Entry    : 0055fb30
// Prototype: undefined phasewrap_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0055fb30 - 0055fbc8


void phasewrap_tilde_setup
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
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("phasewrap~");
  iVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x55fbd0,0,0x38,(char *)0x0,10,0,
                     in_stack_fffffffffffffff0);
  phasewrap_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = phasewrap_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55fc10,piVar1,0xb,(char *)0x0,uVar4,in_stack_00000008);
  return;
}


