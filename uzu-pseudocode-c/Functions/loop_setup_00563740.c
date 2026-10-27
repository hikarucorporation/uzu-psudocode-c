// Function : loop_setup
// Namespace: 
// Entry    : 00563740
// Prototype: undefined loop_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00563740 - 005638a1


void loop_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
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
  
  piVar2 = (int *)gensym("loop");
  iVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  loop_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5
                         ,param_6,param_7,param_8,piVar2,0x5638b0,0,0x70,(char *)0x0,10,0,
                         in_stack_fffffffffffffff0);
  class_addlist((long)loop_class,loop_list);
  plVar1 = loop_class;
  piVar2 = (int *)gensym("pause");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x563c80,piVar2,0,pcVar3,uVar4,iVar5);
  plVar1 = loop_class;
  piVar2 = (int *)gensym("continue");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x563c90,piVar2,0,pcVar3,uVar4,iVar5);
  plVar1 = loop_class;
  piVar2 = (int *)gensym("offset");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x563ca0,piVar2,6,(char *)0x0,uVar4,iVar5);
  plVar1 = loop_class;
  piVar2 = (int *)gensym("step");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x563cb0,piVar2,6,(char *)0x0,uVar4,iVar5);
  plVar1 = loop_class;
  piVar2 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x563cd0,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar1 = loop_class;
  piVar2 = (int *)gensym("range");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x563db0,piVar2,10,(char *)0x0,uVar4,in_stack_00000008);
  return;
}


