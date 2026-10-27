// Function : choice_setup
// Namespace: 
// Entry    : 004dc8b0
// Prototype: undefined choice_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004dc8b0 - 004dc989


void choice_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 extraout_XMM0_Db;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("choice");
  iVar5 = 0;
  uVar4 = 6;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x4dc990,choice_free,0x40,(char *)0x0,6,0,
                     in_stack_fffffffffffffff0);
  choice_class = plVar2;
  piVar1 = (int *)gensym("add");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4dca10,piVar1,10,(char *)0x0,uVar4,iVar5);
  plVar2 = choice_class;
  piVar1 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4dcc30,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = choice_class;
  piVar1 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4dcc60,piVar1,0,pcVar3,uVar4,iVar5);
  class_addlist((long)choice_class,choice_list);
  return;
}


