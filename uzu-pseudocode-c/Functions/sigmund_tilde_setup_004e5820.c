// Function : sigmund_tilde_setup
// Namespace: 
// Entry    : 004e5820
// Prototype: undefined sigmund_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004e5820 - 004e5c00


void sigmund_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  long *plVar1;
  int *piVar2;
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
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar5;
  int in_stack_00000008;
  int iVar6;
  uint in_stack_fffffffffffffff0;
  
  piVar2 = (int *)gensym("sigmund~");
  iVar6 = 0;
  uVar4 = 10;
  sigmund_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x4e5c10,sigmund_free,0x430,(char *)0x0,10,0,
                 in_stack_fffffffffffffff0);
  class_addlist((long)sigmund_class,sigmund_list);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("dsp");
  uVar5 = class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar1,0x4e6a10,piVar2,0xb,(char *)0x0,uVar4,iVar6);
  class_domainsignalin
            (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigmund_class,0x38)
  ;
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("param1");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6af0,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("param2");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6b00,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("param3");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6b10,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("npts");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6b20,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("hop");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6cb0,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("maxfreq");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6d30,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("npeak");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6d40,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("vibrato");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6d50,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("stabletime");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6d60,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("growth");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6d70,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("minpower");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6d80,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("nharmonics");
  uVar4 = 0;
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6d90,piVar2,1,(char *)0x6,0,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("harmonicweights");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e6f50,piVar2,10,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("amppowerlaw");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e70e0,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("quality");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e7120,piVar2,1,(char *)0x0,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e7150,piVar2,0,pcVar3,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e7180,piVar2,0,pcVar3,uVar4,iVar6);
  plVar1 = sigmund_class;
  piVar2 = (int *)gensym("printnext");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e7420,piVar2,1,(char *)0x0,uVar4,in_stack_00000008);
  return;
}


