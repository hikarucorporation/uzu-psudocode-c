// Function : poltocar_tilde_setup
// Namespace: 
// Entry    : 0055f350
// Prototype: undefined poltocar_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0055f350 - 0055f3d6


void poltocar_tilde_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  uint unaff_EBX;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  uint unaff_retaddr;
  int in_stack_00000008;
  
  piVar1 = (int *)gensym("poltocar~");
  pcVar3 = (char *)0x0;
  uVar4 = 0;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x55f3e0,0,0x58,(char *)0x0,0,unaff_EBX,
                     unaff_retaddr);
  poltocar_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,unaff_EBX);
  plVar2 = poltocar_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55f470,piVar1,0xb,(char *)0x0,uVar4,in_stack_00000008);
  return;
}


