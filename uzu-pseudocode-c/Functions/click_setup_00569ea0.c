// Function : click_setup
// Namespace: 
// Entry    : 00569ea0
// Prototype: ulong click_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00569ea0 - 00569ee5


ulong click_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong in_RAX;
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("click");
  click_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          piVar1,0x569ef0,click_free,0x38,&DAT_00000008,6,0,unaff_retaddr);
  return in_RAX & 0xffffffff00000000;
}


