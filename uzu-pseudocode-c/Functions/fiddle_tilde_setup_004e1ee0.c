// Function : fiddle_tilde_setup
// Namespace: 
// Entry    : 004e1ee0
// Prototype: undefined fiddle_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004e1ee0 - 004e2158


void fiddle_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  uint in_EAX;
  int *piVar2;
  long *plVar3;
  uint unaff_EBX;
  char *pcVar4;
  undefined8 uVar5;
  uint unaff_R14D;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint unaff_retaddr;
  uint uVar6;
  
  piVar2 = (int *)gensym("fiddle~");
  puVar1 = PTR_sigfiddle_new_007159d8;
  pcVar4 = (char *)0x0;
  uVar5 = 6;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar2,(long)PTR_sigfiddle_new_007159d8,
                     PTR_sigfiddle_ff_00715be0,0x360,(char *)0x0,6,6,6);
  sigfiddle_class = plVar3;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_dsp_00715428,piVar2,0,pcVar4,uVar5,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("debug");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_debug_00715aa0,piVar2,0,pcVar4,uVar5,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("npoints");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_setnpoints_00715750,piVar2,1,(char *)0x0,uVar5,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("amp-range");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_amprange_00715890,piVar2,1,(char *)0x1,0,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("reattack");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_reattack_00715fd0,piVar2,1,(char *)0x1,0,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("vibrato");
  uVar5 = 0;
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_vibrato_007158a8,piVar2,1,(char *)0x1,0,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("npartial");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_npartial_007154b8,piVar2,1,(char *)0x0,uVar5,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("auto");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_auto_00715c60,piVar2,1,(char *)0x0,uVar5,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_sigfiddle_print_00715668,piVar2,0,pcVar4,uVar5,in_EAX);
  plVar3 = sigfiddle_class;
  piVar2 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_nullfn_00715950,piVar2,0,pcVar4,uVar5,in_EAX);
  class_addbang((long)sigfiddle_class,PTR_sigfiddle_bang_00715ec8);
  uVar6 = 0x4e2117;
  piVar2 = (int *)gensym("fiddle");
  uVar5 = class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_10),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)puVar1,piVar2,6,6,(char *)0x6,6,0,
                           uVar6,in_EAX,unaff_EBX,unaff_R14D,unaff_retaddr);
  post(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,PTR_fiddle_version_007156b8);
  return;
}


