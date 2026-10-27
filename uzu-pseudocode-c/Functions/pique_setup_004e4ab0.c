// Function : pique_setup
// Namespace: 
// Entry    : 004e4ab0
// Prototype: undefined pique_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004e4ab0 - 004e4b45


void pique_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  int iVar4;
  uint in_stack_fffffffffffffff0;
  
  piVar2 = (int *)gensym("pique");
  iVar4 = 0;
  uVar3 = 6;
  pique_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar2,0x4e4b50,pique_free,0x58,
                          (char *)0x0,6,0,in_stack_fffffffffffffff0);
  class_addlist((long)pique_class,pique_list);
  plVar1 = pique_class;
  piVar2 = (int *)gensym("errthresh");
  uVar3 = class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar1,0x4e5660,piVar2,1,(char *)0x0,uVar3,iVar4);
  post(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"pique 0.1 for PD version 23");
  return;
}


