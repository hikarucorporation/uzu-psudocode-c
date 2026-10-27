// Function : rescale_setup
// Namespace: 
// Entry    : 0056e000
// Prototype: undefined rescale_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0056e000 - 0056e144


void rescale_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  int iVar4;
  uint in_stack_fffffffffffffff0;
  
  piVar2 = (int *)gensym("rescale");
  iVar4 = 0;
  rescale_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x56e150,0,0x58,(char *)0x0,10,0,in_stack_fffffffffffffff0)
  ;
  class_addlist((long)rescale_class,rescale_list);
  plVar1 = rescale_class;
  piVar2 = (int *)gensym("in");
  uVar3 = 0;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x56e4c0,piVar2,1,(char *)0x1,0,iVar4);
  plVar1 = rescale_class;
  piVar2 = (int *)gensym("exp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x56e4d0,piVar2,1,(char *)0x0,uVar3,iVar4);
  plVar1 = rescale_class;
  piVar2 = (int *)gensym("log");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x56e4e0,piVar2,1,(char *)0x0,uVar3,iVar4);
  plVar1 = rescale_class;
  piVar2 = (int *)gensym("rlog");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x56e4f0,piVar2,1,(char *)0x0,uVar3,iVar4);
  plVar1 = rescale_class;
  piVar2 = (int *)gensym("clip");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x56e500,piVar2,1,(char *)0x0,uVar3,in_stack_00000008);
  return;
}


