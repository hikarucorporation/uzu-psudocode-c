// Function : select_setup
// Namespace: 
// Entry    : 0054bb20
// Prototype: undefined select_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054bb20 - 0054bc04


void select_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint unaff_EBX;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  uint in_stack_00000028;
  uint in_stack_00000030;
  
  piVar1 = (int *)gensym("select");
  sel1_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         piVar1,0,0,0x50,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_doaddfloat((long)sel1_class,sel1_float);
  class_addsymbol((long)sel1_class,sel1_symbol);
  piVar1 = (int *)gensym("select");
  pcVar2 = (char *)0x0;
  uVar3 = 0;
  sel2_class = class_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar1,0,sel2_free,0x50,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_doaddfloat((long)sel2_class,sel2_float);
  class_addsymbol((long)sel2_class,sel2_symbol);
  piVar1 = (int *)gensym("select");
  class_addcreator(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   0x54bd10,piVar1,10,0,pcVar2,uVar3,unaff_EBX,unaff_retaddr,in_stack_00000008,
                   in_stack_00000010,in_stack_00000018,in_stack_00000020);
  piVar1 = (int *)gensym("sel");
  class_addcreator(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   0x54bd10,piVar1,10,0,pcVar2,uVar3,in_stack_00000008,in_stack_00000010,
                   in_stack_00000018,in_stack_00000020,in_stack_00000028,in_stack_00000030);
  return;
}


