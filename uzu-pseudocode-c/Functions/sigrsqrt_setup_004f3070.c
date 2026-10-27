// Function : sigrsqrt_setup
// Namespace: 
// Entry    : 004f3070
// Prototype: undefined sigrsqrt_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004f3070 - 004f3103


void sigrsqrt_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  piVar2 = (int *)gensym("rsqrt~");
  uVar3 = 0x38;
  pcVar4 = (char *)0x10;
  uVar5 = 0;
  sigrsqrt_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x4f3110,0,0x38,(char *)0x10,0,unaff_EBX,unaff_retaddr);
  piVar2 = (int *)gensym("q8_rsqrt~");
  uVar3 = class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,0x4f3110,piVar2,0,uVar3,pcVar4,uVar5,
                           unaff_EBX,unaff_retaddr,in_stack_00000008,in_stack_00000010,
                           in_stack_00000018,in_stack_00000020);
  class_domainsignalin
            (uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigrsqrt_class,0x30
            );
  plVar1 = sigrsqrt_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3260,piVar2,0xb,(char *)0x0,uVar5,in_stack_00000008);
  return;
}


