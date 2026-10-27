// Function : blocksize_tilde_setup
// Namespace: 
// Entry    : 00562110
// Prototype: undefined blocksize_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00562110 - 0056223b


void blocksize_tilde_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("blocksize~");
  iVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x562240,blocksize_free,0x50,(char *)0x0,10,0,
                     in_stack_fffffffffffffff0);
  blocksize_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = blocksize_class;
  piVar1 = (int *)gensym("dsp");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x562320,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  plVar2 = blocksize_class;
  piVar1 = (int *)gensym("ms");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x562350,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = blocksize_class;
  piVar1 = (int *)gensym("hz");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5623a0,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = blocksize_class;
  piVar1 = (int *)gensym("samps");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5623d0,piVar1,0,pcVar3,uVar4,iVar5);
  class_addbang((long)blocksize_class,blocksize_bang);
  return;
}


