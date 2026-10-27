// Function : pd_tilde_setup
// Namespace: 
// Entry    : 004e2b20
// Prototype: undefined pd_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004e2b20 - 004e2c0d


void pd_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  int iVar5;
  
  piVar1 = (int *)gensym("pd~");
  iVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x4e2c10,pd_tilde_free,0xa0,(char *)0x0,10,0,
                     unaff_EBX);
  pd_tilde_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = pd_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4e3070,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  plVar2 = pd_tilde_class;
  piVar1 = (int *)gensym("pd~");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4e3210,piVar1,10,(char *)0x0,uVar4,iVar5);
  uVar4 = class_addanything((long)pd_tilde_class,pd_tilde_anything);
  post(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"pd~ version 0.54");
  return;
}


