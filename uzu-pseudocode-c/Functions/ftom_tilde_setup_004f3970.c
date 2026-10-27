// Function : ftom_tilde_setup
// Namespace: 
// Entry    : 004f3970
// Prototype: undefined ftom_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004f3970 - 004f39e0


void ftom_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint unaff_retaddr;
  int in_stack_00000008;
  
  piVar3 = (int *)gensym("ftom~");
  uVar5 = 0;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0x4f39f0,0,0x38,(char *)0x10,0,unaff_EBX,
                     unaff_retaddr);
  puVar2 = PTR_ftom_tilde_class_00715830;
  *(undefined8 **)PTR_ftom_tilde_class_00715830 = puVar4;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar4,0x30);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4f3a30,piVar3,0xb,(char *)0x0,uVar5,in_stack_00000008);
  return;
}


