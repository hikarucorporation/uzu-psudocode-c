// Function : g_mycanvas_setup
// Namespace: 
// Entry    : 005a3260
// Prototype: undefined g_mycanvas_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005a3260 - 005a35ab


void g_mycanvas_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long *plVar2;
  int *piVar3;
  uint unaff_EBX;
  char *pcVar4;
  undefined8 uVar5;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint uVar6;
  uint in_stack_fffffffffffffff0;
  
  piVar3 = (int *)gensym("cnv");
  uVar6 = 0;
  pcVar4 = &DAT_00000008;
  uVar5 = 10;
  my_canvas_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar3,0x5a35b0,PTR_iemgui_free_00715d00,0x4c8,&DAT_00000008,10,0,
                 in_stack_fffffffffffffff0);
  piVar3 = (int *)gensym("my_canvas");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a35b0,piVar3,10,0,pcVar4,uVar5,uVar6,
                   in_stack_fffffffffffffff0,unaff_EBX,unaff_retaddr,in_stack_00000008,
                   in_stack_00000010);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("dialog");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3a70,piVar3,10,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("size");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3bf0,piVar3,10,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("delta");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3c30,piVar3,10,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("pos");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3c40,piVar3,10,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("vis_size");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3c50,piVar3,10,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("color");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3cc0,piVar3,10,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3cd0,piVar3,7,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("receive");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3ce0,piVar3,7,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("label");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3cf0,piVar3,7,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("label_pos");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3d00,piVar3,10,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("label_font");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3d10,piVar3,10,(char *)0x0,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("get_pos");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a3d20,piVar3,0,pcVar4,uVar5,uVar6);
  plVar2 = my_canvas_class;
  piVar3 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_iemgui_zoom_00715f80,piVar3,0xb,(char *)0x0,uVar5,uVar6);
  puVar1 = PTR_my_canvas_widgetbehavior_00715f48;
  *(code **)PTR_my_canvas_widgetbehavior_00715f48 = my_canvas_getrect;
  *(undefined **)(puVar1 + 8) = PTR_iemgui_displace_007155b8;
  *(undefined **)(puVar1 + 0x10) = PTR_iemgui_select_007156c8;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = PTR_iemgui_delete_00715718;
  *(undefined **)(puVar1 + 0x28) = PTR_iemgui_vis_00715f50;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  class_setwidget((long)my_canvas_class,puVar1);
  class_setsavefn((long)my_canvas_class,my_canvas_save);
  class_setpropertiesfn((long)my_canvas_class,my_canvas_properties);
  return;
}


