// Function : swap_setup
// Namespace: 
// Entry    : 0054c3b0
// Prototype: undefined swap_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054c3b0 - 0054c43d


void swap_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint unaff_EBX;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint uVar4;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("swap");
  uVar4 = 0;
  pcVar2 = (char *)0x0;
  uVar3 = 6;
  swap_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         piVar1,0x54c440,0,0x40,(char *)0x0,6,0,in_stack_fffffffffffffff0);
  piVar1 = (int *)gensym("fswap");
  class_addcreator(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   0x54c440,piVar1,6,0,pcVar2,uVar3,uVar4,in_stack_fffffffffffffff0,unaff_EBX,
                   unaff_retaddr,in_stack_00000008,in_stack_00000010);
  class_addbang((long)swap_class,swap_bang);
  class_doaddfloat((long)swap_class,swap_float);
  return;
}


