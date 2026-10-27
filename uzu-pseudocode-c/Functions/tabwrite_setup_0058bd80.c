// Function : tabwrite_setup
// Namespace: 
// Entry    : 0058bd80
// Prototype: undefined tabwrite_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0058bd80 - 0058be02


void tabwrite_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  piVar2 = (int *)gensym("tabwrite");
  uVar3 = 7;
  tabwrite_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x58be10,0,0x40,(char *)0x0,7,0,in_stack_fffffffffffffff0);
  class_doaddfloat((long)tabwrite_class,tabwrite_float);
  plVar1 = tabwrite_class;
  piVar2 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x58bf10,piVar2,2,(char *)0x0,uVar3,in_stack_00000008);
  return;
}


