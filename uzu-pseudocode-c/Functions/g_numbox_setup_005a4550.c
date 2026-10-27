// Function : g_numbox_setup
// Namespace: 
// Entry    : 005a4550
// Prototype: undefined g_numbox_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005a4550 - 005a4a47


void g_numbox_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint unaff_retaddr;
  uint uVar6;
  int iVar7;
  uint in_stack_ffffffffffffffe0;
  uint in_stack_ffffffffffffffe8;
  uint in_stack_fffffffffffffff0;
  
  piVar3 = (int *)gensym("nbx");
  uVar6 = 0;
  pcVar4 = (char *)0x0;
  uVar5 = 10;
  my_numbox_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar3,0x5a4a50,my_numbox_free,0x4f0,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  piVar3 = (int *)gensym("my_numbox");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5a4a50,piVar3,10,0,pcVar4,uVar5,uVar6,
                   in_stack_ffffffffffffffe0,in_stack_ffffffffffffffe8,in_stack_fffffffffffffff0,
                   unaff_EBX,unaff_retaddr);
  class_addbang((long)my_numbox_class,my_numbox_bang);
  class_doaddfloat((long)my_numbox_class,my_numbox_float);
  class_addlist((long)my_numbox_class,my_numbox_list);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("click");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5350,piVar3,1,(char *)0x1,1,1);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("motion");
  iVar7 = 0;
  uVar5 = 6;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5380,piVar3,1,(char *)0x1,6,0);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("dialog");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a54a0,piVar3,10,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5820,piVar3,6,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5890,piVar3,1,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("size");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5910,piVar3,10,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("delta");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5a00,piVar3,10,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("pos");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5a10,piVar3,10,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("range");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5a20,piVar3,10,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("color");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5bc0,piVar3,10,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5bd0,piVar3,7,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("receive");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5be0,piVar3,7,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("label");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5bf0,piVar3,7,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("label_pos");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5c00,piVar3,10,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("label_font");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5c10,piVar3,10,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("log");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5d00,piVar3,0,pcVar4,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("lin");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5e30,piVar3,0,pcVar4,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("init");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5e40,piVar3,1,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("log_height");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a5e60,piVar3,1,(char *)0x0,uVar5,iVar7);
  plVar2 = my_numbox_class;
  piVar3 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_iemgui_zoom_00715f80,piVar3,0xb,(char *)0x0,uVar5,iVar7);
  puVar1 = PTR_my_numbox_widgetbehavior_00715bc0;
  *(code **)PTR_my_numbox_widgetbehavior_00715bc0 = my_numbox_getrect;
  *(undefined **)(puVar1 + 8) = PTR_iemgui_displace_007155b8;
  *(undefined **)(puVar1 + 0x10) = PTR_iemgui_select_007156c8;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = PTR_iemgui_delete_00715718;
  *(undefined **)(puVar1 + 0x28) = PTR_iemgui_vis_00715f50;
  *(code **)(puVar1 + 0x30) = my_numbox_newclick;
  class_setwidget((long)my_numbox_class,puVar1);
  class_setsavefn((long)my_numbox_class,my_numbox_save);
  class_setpropertiesfn((long)my_numbox_class,my_numbox_properties);
  return;
}


