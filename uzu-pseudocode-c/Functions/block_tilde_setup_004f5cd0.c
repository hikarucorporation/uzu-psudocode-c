// Function : block_tilde_setup
// Namespace: 
// Entry    : 004f5cd0
// Prototype: undefined block_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004f5cd0 - 004f5dd6


void block_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  uint in_EAX;
  int *piVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  undefined8 uVar5;
  uint unaff_R14D;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  
  piVar3 = (int *)gensym("block~");
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0x4f5de0,0,0x68,(char *)0x0,6,6,6);
  puVar2 = PTR_block_class_00715ae0;
  *(undefined8 **)PTR_block_class_00715ae0 = puVar4;
  piVar3 = (int *)gensym("switch~");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x4f5e50,piVar3,6,6,(char *)0x6,0,in_EAX,unaff_EBX,
                   unaff_R14D,unaff_retaddr,in_stack_00000008,in_stack_00000010);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("set");
  uVar5 = 6;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f5ec0,piVar3,6,(char *)0x6,6,0);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f6060,piVar3,0xb,(char *)0x0,uVar5,in_EAX);
  class_doaddfloat(*(long *)puVar2,block_float);
  class_addbang(*(long *)puVar2,block_bang);
  return;
}


