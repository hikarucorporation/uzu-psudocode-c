// Function : g_bang_setup
// Namespace: 
// Entry    : 005a1a90
// Prototype: undefined g_bang_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005a1a90 - 005a1e9c


void g_bang_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long *plVar2;
  int *piVar3;
  int unaff_EBX;
  undefined8 uVar4;
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
  undefined4 extraout_XMM0_Db;
  uint uVar5;
  
  uVar5 = 0x5a1a9d;
  piVar3 = (int *)gensym("bng");
  bng_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,piVar3,0x5a1ea0,bng_free,0x4c0,(char *)0x0,10,0,
                        uVar5);
  class_addbang((long)bng_class,bng_bang);
  class_doaddfloat((long)bng_class,bng_float);
  class_addsymbol((long)bng_class,bng_symbol);
  class_addpointer((long)bng_class,bng_pointer);
  class_addlist((long)bng_class,bng_list);
  class_addanything((long)bng_class,bng_anything);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("click");
  uVar4 = 1;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2440,piVar3,1,(char *)0x1,1,1);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("dialog");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2510,piVar3,10,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2670,piVar3,6,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("size");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2760,piVar3,10,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("delta");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a27a0,piVar3,10,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("pos");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a27b0,piVar3,10,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("flashtime");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a27c0,piVar3,10,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("color");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2830,piVar3,10,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2840,piVar3,7,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("receive");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2850,piVar3,7,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("label");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2860,piVar3,7,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("label_pos");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2870,piVar3,10,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("label_font");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2880,piVar3,10,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("init");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5a2890,piVar3,1,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = bng_class;
  piVar3 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_iemgui_zoom_00715f80,piVar3,0xb,(char *)0x0,uVar4,unaff_EBX);
  puVar1 = PTR_bng_widgetbehavior_00715f40;
  *(code **)PTR_bng_widgetbehavior_00715f40 = bng_getrect;
  *(undefined **)(puVar1 + 8) = PTR_iemgui_displace_007155b8;
  *(undefined **)(puVar1 + 0x10) = PTR_iemgui_select_007156c8;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = PTR_iemgui_delete_00715718;
  *(undefined **)(puVar1 + 0x28) = PTR_iemgui_vis_00715f50;
  *(code **)(puVar1 + 0x30) = bng_newclick;
  class_setwidget((long)bng_class,puVar1);
  class_setsavefn((long)bng_class,bng_save);
  class_setpropertiesfn((long)bng_class,bng_properties);
  return;
}


