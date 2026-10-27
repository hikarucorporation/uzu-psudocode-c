// Function : nyquist_tilde_setup
// Namespace: 
// Entry    : 005656a0
// Prototype: undefined nyquist_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005656a0 - 00565823


void nyquist_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

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
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Db;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("nyquist~");
  iVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x565830,nyquist_free,0x48,(char *)0x0,10,0,
                     in_stack_fffffffffffffff0);
  nyquist_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = nyquist_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x565930,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  plVar2 = nyquist_class;
  piVar1 = (int *)gensym("loadbang");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x565960,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = nyquist_class;
  piVar1 = (int *)gensym("hz");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5659c0,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = nyquist_class;
  piVar1 = (int *)gensym("khz");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x565a20,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = nyquist_class;
  piVar1 = (int *)gensym("ms");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x565a80,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = nyquist_class;
  piVar1 = (int *)gensym("sec");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x565ae0,piVar1,0,pcVar3,uVar4,iVar5);
  class_addbang((long)nyquist_class,nyquist_bang);
  return;
}


