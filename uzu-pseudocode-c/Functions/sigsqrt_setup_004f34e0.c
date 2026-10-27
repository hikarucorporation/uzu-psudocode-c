// Function : sigsqrt_setup
// Namespace: 
// Entry    : 004f34e0
// Prototype: undefined sigsqrt_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004f34e0 - 004f3573


void sigsqrt_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  uint unaff_EBX;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  
  piVar2 = (int *)gensym("sqrt~");
  uVar3 = 0x38;
  pcVar4 = (char *)0x10;
  uVar5 = 0;
  sigsqrt_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x4f3580,0,0x38,(char *)0x10,0,unaff_EBX,unaff_retaddr);
  piVar2 = (int *)gensym("q8_sqrt~");
  uVar3 = class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,0x4f3580,piVar2,0,uVar3,pcVar4,uVar5,
                           unaff_EBX,unaff_retaddr,in_stack_00000008,in_stack_00000010,
                           in_stack_00000018,in_stack_00000020);
  class_domainsignalin
            (uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigsqrt_class,0x30)
  ;
  plVar1 = sigsqrt_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f36d0,piVar2,0xb,(char *)0x0,uVar5,in_stack_00000008);
  return;
}


