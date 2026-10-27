// Function : bob_tilde_setup
// Namespace: 
// Entry    : 004d7c10
// Prototype: undefined bob_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004d7c10 - 004d7d57


void bob_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  uint unaff_EBX;
  char *pcVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar4;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("bob~");
  uVar4 = 0;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x4d7d60,0,0xb0,(char *)0x0,0,unaff_EBX,
                     unaff_retaddr);
  bob_class = plVar2;
  piVar1 = (int *)gensym("saturation");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4d7e20,piVar1,1,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bob_class;
  piVar1 = (int *)gensym("oversample");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4d7e50,piVar1,1,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bob_class;
  piVar1 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4d7e70,piVar1,0,pcVar3,uVar4,unaff_EBX);
  plVar2 = bob_class;
  piVar1 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4d7e90,piVar1,0,pcVar3,uVar4,unaff_EBX);
  plVar2 = bob_class;
  piVar1 = (int *)gensym("error");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4d7f30,piVar1,0,pcVar3,uVar4,unaff_EBX);
  plVar2 = bob_class;
  piVar1 = (int *)gensym("dsp");
  uVar4 = class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar2,0x4d7f40,piVar1,0xb,(char *)0x0,uVar4,unaff_EBX);
  class_domainsignalin
            (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)bob_class,0x30);
  return;
}


