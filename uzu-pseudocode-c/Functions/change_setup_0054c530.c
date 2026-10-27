// Function : change_setup
// Namespace: 
// Entry    : 0054c530
// Prototype: undefined change_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054c530 - 0054c5c5


void change_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  uint in_stack_fffffffffffffff0;
  
  piVar2 = (int *)gensym("change");
  uVar3 = 6;
  change_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,piVar2,0x54c5d0,0,0x38,(char *)0x0,6,0,
                           in_stack_fffffffffffffff0);
  class_addbang((long)change_class,change_bang);
  class_doaddfloat((long)change_class,change_float);
  plVar1 = change_class;
  piVar2 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x54c660,piVar2,6,(char *)0x0,uVar3,in_stack_00000008);
  return;
}


