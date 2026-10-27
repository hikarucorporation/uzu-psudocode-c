// Function : args_setup
// Namespace: 
// Entry    : 00569960
// Prototype: undefined args_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00569960 - 005699b0


void args_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("args");
  args_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         piVar1,0x5699c0,args_free,0x58,(char *)0x0,10,0,unaff_retaddr);
  class_addlist((long)args_class,args_list);
  return;
}


