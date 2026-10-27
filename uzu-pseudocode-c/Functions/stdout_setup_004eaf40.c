// Function : stdout_setup
// Namespace: 
// Entry    : 004eaf40
// Prototype: undefined stdout_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004eaf40 - 004eaf90


void stdout_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("stdout");
  stdout_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           piVar1,0x4eafa0,stdout_free,0x38,(char *)0x0,10,0,unaff_retaddr);
  class_addanything((long)stdout_class,stdout_anything);
  return;
}


