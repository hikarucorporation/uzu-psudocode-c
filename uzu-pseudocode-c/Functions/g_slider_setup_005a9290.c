// Function : g_slider_setup
// Namespace: 
// Entry    : 005a9290
// Prototype: undefined g_slider_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005a9290 - 005a9801


void g_slider_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  char *pcVar5;
  undefined8 uVar6;
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
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Da_23;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  uint unaff_retaddr;
  uint uVar7;
  int iVar8;
  uint in_stack_ffffffffffffffe0;
  uint in_stack_ffffffffffffffe8;
  uint in_stack_fffffffffffffff0;
  
  piVar3 = (int *)gensym("hsl");
  uVar7 = 0;
  pcVar5 = (char *)0x0;
  uVar6 = 10;
  slider_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,piVar3,0x5a9810,PTR_iemgui_free_00715d00,
                           0x4c0,(char *)0x0,10,0,in_stack_ffffffffffffffe0);
  piVar3 = (int *)gensym("vsl");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a9810,piVar3,10,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,in_stack_ffffffffffffffe8,in_stack_fffffffffffffff0,
                   unaff_EBX,unaff_retaddr);
  piVar3 = (int *)gensym("hslider");
  class_addcreator(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a9810,piVar3,10,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,in_stack_ffffffffffffffe8,in_stack_fffffffffffffff0,
                   unaff_EBX,unaff_retaddr);
  piVar3 = (int *)gensym("vslider");
  class_addcreator(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a9810,piVar3,10,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,in_stack_ffffffffffffffe8,in_stack_fffffffffffffff0,
                   unaff_EBX,unaff_retaddr);
  class_addbang((long)slider_class,slider_bang);
  class_doaddfloat((long)slider_class,slider_float);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("click");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5aa2c0,piVar3,1,(char *)0x1,1,1);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("motion");
  iVar8 = 0;
  uVar6 = 6;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5aa4b0,piVar3,1,(char *)0x1,6,0);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("dialog");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5aa6d0,piVar3,10,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5aaca0,piVar3,6,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5aacd0,piVar3,1,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("size");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5aadf0,piVar3,10,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("delta");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab090,piVar3,10,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("pos");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab0a0,piVar3,10,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("range");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab0b0,piVar3,10,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("color");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab310,piVar3,10,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab320,piVar3,7,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("receive");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab330,piVar3,7,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("label");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab340,piVar3,7,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("label_pos");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab350,piVar3,10,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("label_font");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab360,piVar3,10,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("log");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab370,piVar3,0,pcVar5,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("lin");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab580,piVar3,0,pcVar5,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("init");
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab6c0,piVar3,1,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("steady");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab6e0,piVar3,1,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("orientation");
  class_addmethod(extraout_XMM0_Da_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab700,piVar3,1,(char *)0x0,uVar6,iVar8);
  plVar2 = slider_class;
  piVar3 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ab750,piVar3,0xb,(char *)0x0,uVar6,iVar8);
  puVar1 = PTR_slider_widgetbehavior_00715538;
  *(code **)PTR_slider_widgetbehavior_00715538 = slider_getrect;
  *(undefined **)(puVar1 + 8) = PTR_iemgui_displace_007155b8;
  *(undefined **)(puVar1 + 0x10) = PTR_iemgui_select_007156c8;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = PTR_iemgui_delete_00715718;
  *(undefined **)(puVar1 + 0x28) = PTR_iemgui_vis_00715f50;
  *(code **)(puVar1 + 0x30) = slider_newclick;
  class_setwidget((long)slider_class,puVar1);
  plVar2 = slider_class;
  puVar4 = gensym("sliders");
  class_sethelpsymbol((long)plVar2,puVar4);
  class_setsavefn((long)slider_class,slider_save);
  class_setpropertiesfn((long)slider_class,slider_properties);
  return;
}


