// Function : g_canvas_setup
// Namespace: 
// Entry    : 005014f0
// Prototype: undefined g_canvas_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005014f0 - 00501c44


void g_canvas_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  char *pcVar5;
  undefined8 uVar6;
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
  undefined4 extraout_XMM0_Da_25;
  undefined4 extraout_XMM0_Da_26;
  undefined4 extraout_XMM0_Da_27;
  undefined4 extraout_XMM0_Da_28;
  undefined4 extraout_XMM0_Da_29;
  undefined4 extraout_XMM0_Da_30;
  undefined4 extraout_XMM0_Da_31;
  undefined4 extraout_XMM0_Da_32;
  undefined4 extraout_XMM0_Da_33;
  undefined4 extraout_XMM0_Da_34;
  undefined4 extraout_XMM0_Da_35;
  undefined4 extraout_XMM0_Da_36;
  undefined4 extraout_XMM0_Da_37;
  undefined4 extraout_XMM0_Da_38;
  undefined4 extraout_XMM0_Da_39;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  uint unaff_retaddr;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint uVar7;
  
  piVar3 = (int *)gensym("canvas");
  uVar6 = 0;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0,PTR_canvas_free_00715480,0xf8,(char *)0x18,0,
                     unaff_EBX,unaff_R14D);
  puVar2 = PTR_canvas_class_00715918;
  *(undefined8 **)PTR_canvas_class_00715918 = puVar4;
  plVar1 = *(long **)PTR_pd_canvasmaker_00715c00;
  piVar3 = (int *)gensym("canvas");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_new_00715bf0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("restore");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_restore_007154f8,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("coords");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x501c50,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("obj");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_obj_00715e68,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("msg");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_msg_007158a0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("floatatom");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_floatatom_00715fe8,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("listbox");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_listbox_00715d98,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("symbolatom");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_symbolatom_00715458,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("text");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_glist_text_00715ee8,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("graph");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_glist_glist_00715d80,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("scalar");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_glist_scalar_007155b0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("connect");
  uVar6 = 1;
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_connect_00715410,piVar3,1,(char *)0x1,1,1);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("bng");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_bng_00715b70,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("toggle");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_toggle_00715a38,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("vslider");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_vslider_007154b0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("hslider");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_hslider_00715d18,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("hdial");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_hdial_00715838,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("vdial");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_vdial_00715bf8,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("hradio");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_hradio_007159c8,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("vradio");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_vradio_007155d0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("vumeter");
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_vumeter_00715ff8,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("mycnv");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_mycnv_007158c0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("numbox");
  class_addmethod(extraout_XMM0_Da_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_numbox_007157e0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("pop");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fd990,piVar3,6,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_loadbang_00715f20,piVar3,0,pcVar5,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("setbounds");
  class_addmethod(extraout_XMM0_Da_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x501d80,piVar3,1,(char *)0x1,1,1);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("relocate");
  uVar6 = 0;
  class_addmethod(extraout_XMM0_Da_26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x501da0,piVar3,2,(char *)0x2,0,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("vis");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_vis_00715600,piVar3,1,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("menu-open");
  class_addmethod(extraout_XMM0_Da_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_glist_menu_open_00715da8,piVar3,0,pcVar5,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("map");
  class_addmethod(extraout_XMM0_Da_29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_map_00715560,piVar3,1,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dirty");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_dirty_00715d70,piVar3,1,(char *)0x0,uVar6,unaff_EBX);
  class_setpropertiesfn(*(long *)puVar2,PTR_canvas_properties_00715f28);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_31,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_glist_clear_00715de8,piVar3,0,pcVar5,uVar6,unaff_EBX);
  piVar3 = (int *)gensym("pd");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_32),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x501e40,piVar3,7,0,pcVar5,uVar6,unaff_EBX,unaff_R14D,
                   unaff_R15D,unaff_retaddr,in_stack_00000008,in_stack_00000010);
  piVar3 = (int *)gensym("page");
  class_addcreator(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_33),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x501e40,piVar3,7,0,pcVar5,uVar6,unaff_EBX,unaff_R14D,
                   unaff_R15D,unaff_retaddr,in_stack_00000008,in_stack_00000010);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("click");
  uVar6 = 1;
  class_addmethod(extraout_XMM0_Da_34,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x502120,piVar3,1,(char *)0x1,1,1);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_35,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x502130,piVar3,0xb,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("rename");
  class_addmethod(extraout_XMM0_Da_36,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x502140,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  uVar7 = 0x501ba5;
  piVar3 = (int *)gensym("declare");
  uVar6 = 10;
  declare_class =
       class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_37),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x502230,declare_free,0x40,&DAT_00000008,10,0,uVar7)
  ;
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("declare");
  class_addmethod(extraout_XMM0_Da_38,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_declare_00715710,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("f");
  uVar6 = class_addmethod(extraout_XMM0_Da_39,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar1,0x5022b0,piVar3,10,(char *)0x0,uVar6,unaff_EBX);
  uVar6 = g_graph_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = g_editor_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  g_readwrite_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


