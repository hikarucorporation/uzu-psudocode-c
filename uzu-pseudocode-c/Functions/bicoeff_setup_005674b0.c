// Function : bicoeff_setup
// Namespace: 
// Entry    : 005674b0
// Prototype: undefined bicoeff_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005674b0 - 00567799


void bicoeff_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  uint unaff_EBX;
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
  undefined4 extraout_XMM0_Db;
  undefined8 uVar4;
  int iVar5;
  
  piVar2 = (int *)gensym("bicoeff");
  iVar5 = 0;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar2,0x5677a0,bicoeff_free,0xc10,(char *)0x0,10,0,
                     unaff_EBX);
  puVar1 = PTR_bicoeff_class_00715af8;
  *(long **)PTR_bicoeff_class_00715af8 = plVar3;
  piVar2 = (int *)gensym("dim");
  uVar4 = 0;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567a90,piVar2,1,(char *)0x1,0,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("allpass");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567b90,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("bandpass");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567bf0,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("highpass");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567c50,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("highshelf");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567cb0,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("lowpass");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567d10,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("lowshelf");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567d70,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("bandstop");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567dd0,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("eq");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567e30,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("resonant");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567e90,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("biquad");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567ef0,piVar2,10,(char *)0x0,uVar4,iVar5);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x567f30,piVar2,0xb,(char *)0x0,uVar4,iVar5);
  bicoeff_widgetbehavior._0_8_ = bicoeff_getrect;
  bicoeff_widgetbehavior._8_8_ = bicoeff_displace;
  bicoeff_widgetbehavior._16_8_ = bicoeff_select;
  bicoeff_widgetbehavior._24_8_ = 0;
  bicoeff_widgetbehavior._32_8_ = PTR_bicoeff_delete_00715db0;
  bicoeff_widgetbehavior._40_8_ = bicoeff_vis;
  bicoeff_widgetbehavior._48_8_ = 0;
  class_setwidget(*(long *)puVar1,bicoeff_widgetbehavior);
  uVar4 = class_setsavefn(*(long *)puVar1,bicoeff_save);
  sys_vgui(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           "eval [read [open {%s/bicoeff.tcl}]]\n");
  return;
}


