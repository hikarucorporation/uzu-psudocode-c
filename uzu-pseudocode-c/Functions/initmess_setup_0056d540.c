// Function : initmess_setup
// Namespace: 
// Entry    : 0056d540
// Prototype: undefined initmess_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0056d540 - 0056d5f0


void initmess_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  int in_stack_00000008;
  int iVar5;
  
  piVar1 = (int *)gensym("initmess");
  iVar5 = 0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x56d600,initmess_free,0x60,(char *)0x0,10,0,
                     unaff_EBX);
  initmess_class = plVar2;
  piVar1 = (int *)gensym("loadbang");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56d7c0,piVar1,6,(char *)0x0,uVar4,iVar5);
  class_addbang((long)initmess_class,initmess_output);
  plVar2 = initmess_class;
  piVar1 = (int *)gensym("click");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x56d880,piVar1,0,pcVar3,uVar4,in_stack_00000008);
  return;
}


