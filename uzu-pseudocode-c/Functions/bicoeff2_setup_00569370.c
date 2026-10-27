// Function : bicoeff2_setup
// Namespace: 
// Entry    : 00569370
// Prototype: undefined bicoeff2_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00569370 - 005695c8


void bicoeff2_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
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
  int in_stack_00000008;
  int iVar4;
  uint in_stack_fffffffffffffff0;
  
  piVar2 = (int *)gensym("bicoeff2");
  iVar4 = 0;
  uVar3 = 10;
  bicoeff2_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x5695d0,0,0x40,(char *)0x0,10,0,in_stack_fffffffffffffff0)
  ;
  class_addlist((long)bicoeff2_class,bicoeff2_list);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("qs");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x569940,piVar2,1,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("gain");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x569950,piVar2,1,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("lowpass");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_lowpass_00715ad0,piVar2,10,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("highpass");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_highpass_00715cc8,piVar2,10,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("bandpass");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_bandpass_007157c8,piVar2,10,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("bandstop");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_bandstop_007159f8,piVar2,10,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("resonant");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_resonant_00715c38,piVar2,10,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("eq");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_eq_007159a8,piVar2,10,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("lowshelf");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_lowshelf_007155f8,piVar2,10,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("highshelf");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_highshelf_00715c40,piVar2,10,(char *)0x0,uVar3,iVar4);
  plVar1 = bicoeff2_class;
  piVar2 = (int *)gensym("allpass");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_bicoeff2_allpass_00715920,piVar2,10,(char *)0x0,uVar3,in_stack_00000008
                 );
  return;
}


