// Function : pdint_setup
// Namespace: 
// Entry    : 0054b460
// Prototype: undefined pdint_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054b460 - 0054b51c


void pdint_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  uint unaff_EBX;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint uVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar2 = (int *)gensym("int");
  uVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 6;
  pdint_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar2,0x54b520,0,0x38,(char *)0x0,6,0,
                          in_stack_fffffffffffffff0);
  piVar2 = (int *)gensym("i");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x54b520,piVar2,6,0,pcVar3,uVar4,uVar5,
                   in_stack_fffffffffffffff0,unaff_EBX,unaff_retaddr,in_stack_00000008,
                   in_stack_00000010);
  plVar1 = pdint_class;
  piVar2 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x54b580,piVar2,2,(char *)0x0,uVar4,uVar5);
  class_addbang((long)pdint_class,pdint_bang);
  class_doaddfloat((long)pdint_class,pdint_float);
  return;
}


