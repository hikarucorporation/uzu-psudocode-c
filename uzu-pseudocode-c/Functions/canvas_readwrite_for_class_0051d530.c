// Function : canvas_readwrite_for_class
// Namespace: 
// Entry    : 0051d530
// Prototype: undefined canvas_readwrite_for_class(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 0051d530 - 0051d584


void canvas_readwrite_for_class
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  int *piVar1;
  int unaff_EBX;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  int in_stack_00000008;
  
  piVar1 = (int *)gensym("menusave");
  class_addmethod(extraout_XMM0_Da,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  0x51d3d0,piVar1,6,(char *)0x0,in_R9,unaff_EBX);
  piVar1 = (int *)gensym("menusaveas");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x51d4d0,piVar1,6,(char *)0x0,in_R9,in_stack_00000008);
  return;
}


