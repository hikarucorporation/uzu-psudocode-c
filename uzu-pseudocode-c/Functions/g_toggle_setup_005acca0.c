// Function : g_toggle_setup
// Namespace: 
// Entry    : 005acca0
// Prototype: undefined g_toggle_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005acca0 - 005ad0dc


void g_toggle_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long *plVar2;
  uint in_EAX;
  int *piVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  char *pcVar5;
  undefined8 uVar6;
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
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint uVar7;
  
  uVar7 = 0x5accb0;
  piVar3 = (int *)gensym("tgl");
  pcVar5 = (char *)0x0;
  uVar6 = 10;
  toggle_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,piVar3,0x5ad0e0,PTR_iemgui_free_00715d00,
                           0x498,(char *)0x0,10,0,uVar7);
  piVar3 = (int *)gensym("toggle");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5ad0e0,piVar3,10,0,pcVar5,uVar6,in_EAX,unaff_EBX,
                   unaff_R14D,unaff_retaddr,in_stack_00000008,in_stack_00000010);
  class_addbang((long)toggle_class,toggle_bang);
  class_doaddfloat((long)toggle_class,toggle_float);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("click");
  uVar6 = 1;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad610,piVar3,1,(char *)0x1,1,1);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("dialog");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad680,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad7c0,piVar3,6,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad850,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("size");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad8a0,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("delta");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad8e0,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("pos");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad8f0,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("color");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad900,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad910,piVar3,7,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("receive");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad920,piVar3,7,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("label");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad930,piVar3,7,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("label_pos");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad940,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("label_font");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad950,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("init");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad960,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("nonzero");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ad980,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar2 = toggle_class;
  piVar3 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_iemgui_zoom_00715f80,piVar3,0xb,(char *)0x0,uVar6,in_EAX);
  puVar1 = PTR_toggle_widgetbehavior_00715a58;
  *(code **)PTR_toggle_widgetbehavior_00715a58 = toggle_getrect;
  *(undefined **)(puVar1 + 8) = PTR_iemgui_displace_007155b8;
  *(undefined **)(puVar1 + 0x10) = PTR_iemgui_select_007156c8;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = PTR_iemgui_delete_00715718;
  *(undefined **)(puVar1 + 0x28) = PTR_iemgui_vis_00715f50;
  *(code **)(puVar1 + 0x30) = toggle_newclick;
  class_setwidget((long)toggle_class,puVar1);
  plVar2 = toggle_class;
  puVar4 = gensym("toggle");
  class_sethelpsymbol((long)plVar2,puVar4);
  class_setsavefn((long)toggle_class,toggle_save);
  class_setpropertiesfn((long)toggle_class,toggle_properties);
  return;
}


