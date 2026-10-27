// Function : vectral_tilde_setup
// Namespace: 
// Entry    : 00560c60
// Prototype: undefined vectral_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00560c60 - 00560de2


void vectral_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
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
  int in_stack_00000008;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("vectral~");
  iVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 6;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x560df0,vectral_free,0x90,(char *)0x0,6,0,
                     in_stack_fffffffffffffff0);
  vectral_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = vectral_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x560f50,piVar1,0xb,(char *)0x0,uVar4,iVar5);
  plVar2 = vectral_class;
  piVar1 = (int *)gensym("size");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x561000,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = vectral_class;
  piVar1 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x561020,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = vectral_class;
  piVar1 = (int *)gensym("rampsmooth");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x561040,piVar1,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vectral_class;
  piVar1 = (int *)gensym("slide");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5610c0,piVar1,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vectral_class;
  piVar1 = (int *)gensym("deltaclip");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x561140,piVar1,10,(char *)0x0,uVar4,in_stack_00000008);
  return;
}


