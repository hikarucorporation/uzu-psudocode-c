// Function : g_radio_setup
// Namespace: 
// Entry    : 005a6f20
// Prototype: undefined g_radio_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005a6f20 - 005a747c


void g_radio_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 extraout_XMM0_Da_24;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  uint uVar7;
  
  uVar7 = 0x5a6f2d;
  piVar3 = (int *)gensym("hradio");
  pcVar5 = (char *)0x0;
  uVar6 = 10;
  radio_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar3,0x5a7480,PTR_iemgui_free_00715d00,
                          0x4b0,(char *)0x0,10,0,uVar7);
  piVar3 = (int *)gensym("vradio");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a7480,piVar3,10,0,pcVar5,uVar6,unaff_EBX,
                   unaff_retaddr,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                   in_stack_00000020);
  piVar3 = (int *)gensym("rdb");
  class_addcreator(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a7480,piVar3,10,0,pcVar5,uVar6,unaff_EBX,
                   unaff_retaddr,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                   in_stack_00000020);
  piVar3 = (int *)gensym("radiobut");
  class_addcreator(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a7480,piVar3,10,0,pcVar5,uVar6,unaff_EBX,
                   unaff_retaddr,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                   in_stack_00000020);
  piVar3 = (int *)gensym("radiobutton");
  class_addcreator(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a7480,piVar3,10,0,pcVar5,uVar6,unaff_EBX,
                   unaff_retaddr,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                   in_stack_00000020);
  class_addbang((long)radio_class,radio_bang);
  class_doaddfloat((long)radio_class,radio_float);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("click");
  uVar6 = 1;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a78d0,piVar3,1,(char *)0x1,1,1);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("dialog");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7b60,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7d50,piVar3,6,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7d70,piVar3,1,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("size");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7df0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("delta");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7e30,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("pos");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7e40,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("color");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7e50,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7e60,piVar3,7,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("receive");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7e70,piVar3,7,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("label");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7e80,piVar3,7,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("label_pos");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7e90,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("label_font");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7ea0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("init");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7eb0,piVar3,1,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("number");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7ed0,piVar3,1,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("orientation");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a7f80,piVar3,1,(char *)0x0,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("zoom");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_iemgui_zoom_00715f80,piVar3,0xb,(char *)0x0,uVar6,unaff_EBX);
  puVar1 = PTR_radio_widgetbehavior_00715508;
  *(code **)PTR_radio_widgetbehavior_00715508 = radio_getrect;
  *(undefined **)(puVar1 + 8) = PTR_iemgui_displace_007155b8;
  *(undefined **)(puVar1 + 0x10) = PTR_iemgui_select_007156c8;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = PTR_iemgui_delete_00715718;
  *(undefined **)(puVar1 + 0x28) = PTR_iemgui_vis_00715f50;
  *(code **)(puVar1 + 0x30) = radio_newclick;
  class_setwidget((long)radio_class,puVar1);
  plVar2 = radio_class;
  puVar4 = gensym("radio");
  class_sethelpsymbol((long)plVar2,puVar4);
  class_setsavefn((long)radio_class,radio_save);
  class_setpropertiesfn((long)radio_class,radio_properties);
  piVar3 = (int *)gensym("hdl");
  class_addcreator(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_21),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a82d0,piVar3,10,0,pcVar5,uVar6,unaff_EBX,
                   unaff_retaddr,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                   in_stack_00000020);
  piVar3 = (int *)gensym("vdl");
  class_addcreator(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_22),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a82d0,piVar3,10,0,pcVar5,uVar6,unaff_EBX,
                   unaff_retaddr,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                   in_stack_00000020);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("single_change");
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a82e0,piVar3,0,pcVar5,uVar6,unaff_EBX);
  plVar2 = radio_class;
  piVar3 = (int *)gensym("double_change");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a8310,piVar3,0,pcVar5,uVar6,in_stack_00000008);
  return;
}


