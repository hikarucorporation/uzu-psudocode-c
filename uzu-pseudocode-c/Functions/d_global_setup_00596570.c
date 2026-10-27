// Function : d_global_setup
// Namespace: 
// Entry    : 00596570
// Prototype: undefined d_global_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00596570 - 005968d4


void d_global_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint unaff_EBX;
  char *pcVar4;
  undefined8 uVar5;
  uint unaff_R12D;
  uint unaff_R13D;
  uint unaff_R14D;
  uint unaff_R15D;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  uint unaff_retaddr;
  uint uVar7;
  
  piVar1 = (int *)gensym("send~");
  uVar5 = 7;
  sigsend_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar1,0x5968e0,sigsend_free,0x58,(char *)0x10,7,6,0);
  piVar1 = (int *)gensym("s~");
  uVar6 = class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,0x5968e0,piVar1,7,6,(char *)0x0,uVar5,
                           unaff_EBX,unaff_R12D,unaff_R13D,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_domainsignalin
            (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigsend_class,0x4c)
  ;
  plVar3 = sigsend_class;
  piVar1 = (int *)gensym("channels");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x596990,piVar1,1,(char *)0x0,uVar5,unaff_EBX);
  plVar3 = sigsend_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5969b0,piVar1,0xb,(char *)0x0,uVar5,unaff_EBX);
  plVar3 = sigsend_class;
  puVar2 = gensym("send-receive-tilde");
  class_sethelpsymbol((long)plVar3,puVar2);
  uVar7 = 0x596688;
  piVar1 = (int *)gensym("receive~");
  pcVar4 = (char *)0x10;
  uVar5 = 7;
  sigreceive_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x596c40,0,0x48,(char *)0x10,7,0,uVar7);
  piVar1 = (int *)gensym("r~");
  class_addcreator(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x596c40,piVar1,7,0,pcVar4,uVar5,unaff_EBX,unaff_R12D,
                   unaff_R13D,unaff_R14D,unaff_R15D,unaff_retaddr);
  plVar3 = sigreceive_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x596ca0,piVar1,7,(char *)0x0,uVar5,unaff_EBX);
  plVar3 = sigreceive_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x596de0,piVar1,0xb,(char *)0x0,uVar5,unaff_EBX);
  plVar3 = sigreceive_class;
  puVar2 = gensym("send-receive-tilde");
  class_sethelpsymbol((long)plVar3,puVar2);
  piVar1 = (int *)gensym("catch~");
  uVar5 = 7;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_07),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x597120,sigcatch_free,0x58,(char *)0x10
                     ,7,6,0);
  sigcatch_class = plVar3;
  piVar1 = (int *)gensym("channels");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5971f0,piVar1,1,(char *)0x0,uVar5,unaff_EBX);
  plVar3 = sigcatch_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x597210,piVar1,0xb,(char *)0x0,uVar5,unaff_EBX);
  plVar3 = sigcatch_class;
  puVar2 = gensym("throw~-catch~");
  class_sethelpsymbol((long)plVar3,puVar2);
  uVar7 = 0x59681a;
  piVar1 = (int *)gensym("throw~");
  uVar5 = 7;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_10),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x597490,0,0x50,(char *)0x10,7,0,uVar7);
  sigthrow_class = plVar3;
  piVar1 = (int *)gensym("set");
  uVar6 = class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar3,0x5974c0,piVar1,7,(char *)0x0,uVar5,unaff_EBX);
  class_domainsignalin
            (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigthrow_class,0x48
            );
  plVar3 = sigthrow_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x597590,piVar1,0xb,(char *)0x0,uVar5,unaff_EBX);
  plVar3 = sigthrow_class;
  puVar2 = gensym("throw~-catch~");
  class_sethelpsymbol((long)plVar3,puVar2);
  return;
}


