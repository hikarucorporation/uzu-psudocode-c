// Function : oscparse_setup
// Namespace: 
// Entry    : 0057ef30
// Prototype: undefined oscparse_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0057ef30 - 0057efa1


void oscparse_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 extraout_XMM0_Qa;
  uint in_stack_fffffffffffffff0;
  
  piVar2 = (int *)gensym("oscparse");
  oscparse_class =
       class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,
                 0x57efb0,0,0x40,(char *)0x0,10,0,in_stack_fffffffffffffff0);
  class_addlist((long)oscparse_class,oscparse_list);
  puVar1 = oscparse_class;
  puVar3 = gensym("osc-format-parse");
  class_sethelpsymbol((long)puVar1,puVar3);
  return;
}


