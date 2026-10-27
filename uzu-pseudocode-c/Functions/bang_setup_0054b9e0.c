// Function : bang_setup
// Namespace: 
// Entry    : 0054b9e0
// Prototype: undefined bang_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054b9e0 - 0054ba8f


void bang_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  uint unaff_EBX;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  
  piVar1 = (int *)gensym("bang");
  uVar2 = 0x30;
  pcVar3 = (char *)0x0;
  uVar4 = 0;
  bang_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         piVar1,(long)PTR_bang_new_007155a8,0,0x30,(char *)0x0,0,unaff_EBX,
                         unaff_retaddr);
  piVar1 = (int *)gensym("b");
  class_addcreator(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   0x54ba90,piVar1,0,uVar2,pcVar3,uVar4,unaff_EBX,unaff_retaddr,in_stack_00000008,
                   in_stack_00000010,in_stack_00000018,in_stack_00000020);
  class_addbang((long)bang_class,bang_bang);
  class_doaddfloat((long)bang_class,bang_float);
  class_addsymbol((long)bang_class,bang_symbol);
  class_addlist((long)bang_class,bang_gimme);
  class_addanything((long)bang_class,bang_gimme);
  return;
}


