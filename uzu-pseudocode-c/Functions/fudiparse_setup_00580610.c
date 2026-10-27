// Function : fudiparse_setup
// Namespace: 
// Entry    : 00580610
// Prototype: undefined fudiparse_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00580610 - 00580674


void fudiparse_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint unaff_EBX;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  piVar2 = (int *)gensym("fudiparse");
  fudiparse_class =
       class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,
                 0x580680,fudiparse_free,0x48,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_addlist((long)fudiparse_class,fudiparse_list);
  puVar1 = fudiparse_class;
  puVar3 = gensym("fudi-format-parse");
  class_sethelpsymbol((long)puVar1,puVar3);
  return;
}


