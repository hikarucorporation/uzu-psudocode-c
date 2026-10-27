// Function : peak_tilde_setup
// Namespace: 
// Entry    : 00565c10
// Prototype: undefined peak_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00565c10 - 00565d09


void peak_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  uint unaff_EBX;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  int iVar6;
  
  piVar2 = (int *)gensym("peak~");
  iVar6 = 0;
  pcVar4 = (char *)0x0;
  uVar5 = 10;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar2,0x565d10,peak_tilde_free,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  puVar1 = PTR_peak_tilde_class_00715828;
  *(long **)PTR_peak_tilde_class_00715828 = plVar3;
  piVar2 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_nullfn_00715950,piVar2,0,pcVar4,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x565e90,piVar2,0xb,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("set");
  uVar5 = 0;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x565ee0,piVar2,6,(char *)0x6,0,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("lin");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x565f40,piVar2,6,(char *)0x0,uVar5,in_stack_00000008);
  return;
}


