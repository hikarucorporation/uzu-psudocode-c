// Function : bonk_tilde_setup
// Namespace: 
// Entry    : 004d8ab0
// Prototype: undefined bonk_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004d8ab0 - 004d8e06


void bonk_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  uint unaff_EBX;
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
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Db;
  int iVar5;
  
  piVar1 = (int *)gensym("bonk~");
  iVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x4d8e10,bonk_free,0x2668,(char *)0x0,10,0,
                     unaff_EBX);
  bonk_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da0e0,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  class_addbang((long)bonk_class,bonk_bang);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("learn");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da320,piVar1,1,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("forget");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da380,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("thresh");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da3e0,piVar1,1,(char *)0x1,0,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("mask");
  uVar4 = 0;
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da450,piVar1,1,(char *)0x1,0,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("debounce");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da480,piVar1,1,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("minvel");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da4b0,piVar1,1,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da4c0,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("debug");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da7e0,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("spew");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da800,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("useloudness");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da820,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("attack-bins");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da830,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("attack-frames");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da830,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("read");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4da860,piVar1,2,(char *)0x0,uVar4,iVar5);
  plVar2 = bonk_class;
  piVar1 = (int *)gensym("write");
  uVar4 = class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar2,0x4dac30,piVar1,2,(char *)0x0,uVar4,iVar5);
  post(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"bonk version 1.5");
  return;
}


