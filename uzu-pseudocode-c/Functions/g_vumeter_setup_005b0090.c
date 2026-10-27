// Function : g_vumeter_setup
// Namespace: 
// Entry    : 005b0090
// Prototype: undefined g_vumeter_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005b0090 - 005b03ae


void g_vumeter_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long *plVar2;
  int *piVar3;
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
  undefined4 extraout_XMM0_Db;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar3 = (int *)gensym("vu");
  iVar5 = 0;
  uVar4 = 10;
  vu_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8,piVar3,0x5b03b0,PTR_iemgui_free_00715d00,0x4c0,
                       (char *)0x0,10,0,in_stack_fffffffffffffff0);
  class_addbang((long)vu_class,vu_bang);
  class_doaddfloat((long)vu_class,vu_float);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b09b0,piVar3,1,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("dialog");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0a80,piVar3,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("size");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0c40,piVar3,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("scale");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0ce0,piVar3,6,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("delta");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0d20,piVar3,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("pos");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0d30,piVar3,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("color");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0d40,piVar3,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("receive");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0d50,piVar3,7,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("label");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0d60,piVar3,7,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("label_pos");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0d70,piVar3,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("label_font");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5b0d80,piVar3,10,(char *)0x0,uVar4,iVar5);
  plVar2 = vu_class;
  piVar3 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_iemgui_zoom_00715f80,piVar3,0xb,(char *)0x0,uVar4,iVar5);
  puVar1 = PTR_vu_widgetbehavior_007159e0;
  *(code **)PTR_vu_widgetbehavior_007159e0 = vu_getrect;
  *(undefined **)(puVar1 + 8) = PTR_iemgui_displace_007155b8;
  *(undefined **)(puVar1 + 0x10) = PTR_iemgui_select_007156c8;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = PTR_iemgui_delete_00715718;
  *(undefined **)(puVar1 + 0x28) = PTR_iemgui_vis_00715f50;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  class_setwidget((long)vu_class,puVar1);
  class_setsavefn((long)vu_class,vu_save);
  class_setpropertiesfn((long)vu_class,vu_properties);
  return;
}


