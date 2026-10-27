// Function : x_gui_setup
// Namespace: 
// Entry    : 0054f2b0
// Prototype: undefined x_gui_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054f2b0 - 0054f703


void x_gui_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint in_EAX;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  int in_stack_00000008;
  uint uVar7;
  
  piVar2 = (int *)gensym("gfxstub");
  pcVar5 = (char *)0x1;
  uVar6 = 0;
  gfxstub_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0,gfxstub_free,0x28,(char *)0x1,0,in_EAX,unaff_EBX);
  class_addanything((long)gfxstub_class,gfxstub_anything);
  plVar4 = gfxstub_class;
  piVar2 = (int *)gensym("signoff");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x54f730,piVar2,0,pcVar5,uVar6,in_EAX);
  plVar4 = gfxstub_class;
  piVar2 = (int *)gensym("data");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x54f770,piVar2,10,(char *)0x0,uVar6,in_EAX);
  plVar4 = gfxstub_class;
  piVar2 = (int *)gensym("end");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x54f7b0,piVar2,0,pcVar5,uVar6,in_EAX);
  plVar4 = gfxstub_class;
  piVar2 = (int *)gensym("cancel");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x54f7f0,piVar2,0,pcVar5,uVar6,in_EAX);
  piVar2 = (int *)gensym("openpanel");
  uVar7 = 0;
  uVar6 = 6;
  openpanel_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x54f8d0,openpanel_free,0x48,(char *)0x0,6,0,
                 unaff_EBX);
  class_addbang((long)openpanel_class,openpanel_bang);
  class_addsymbol((long)openpanel_class,openpanel_symbol);
  plVar4 = openpanel_class;
  piVar2 = (int *)gensym("callback");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x54fa60,piVar2,10,(char *)0x0,uVar6,uVar7);
  piVar2 = (int *)gensym("savepanel");
  uVar6 = 0;
  savepanel_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x54faa0,savepanel_free,0x40,(char *)0x0,0,uVar7,
                 unaff_EBX);
  class_addbang((long)savepanel_class,savepanel_bang);
  class_addsymbol((long)savepanel_class,savepanel_symbol);
  plVar4 = savepanel_class;
  piVar2 = (int *)gensym("callback");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x54fc00,piVar2,2,(char *)0x0,uVar6,uVar7);
  piVar2 = (int *)gensym("key");
  key_class = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_08),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,piVar2,0x54fc10,key_free,0x30,&DAT_00000008,
                        0,uVar7,unaff_EBX);
  class_doaddfloat((long)key_class,key_float);
  puVar1 = key_class;
  puVar3 = gensym("key-input");
  class_sethelpsymbol((long)puVar1,puVar3);
  piVar2 = (int *)gensym("keyup");
  keyup_class = class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_09),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar2,0x54fc90,keyup_free,0x30,
                          &DAT_00000008,0,uVar7,unaff_EBX);
  class_doaddfloat((long)keyup_class,keyup_float);
  puVar1 = keyup_class;
  puVar3 = gensym("key-input");
  class_sethelpsymbol((long)puVar1,puVar3);
  piVar2 = (int *)gensym("keyname");
  keyname_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x54fd10,keyname_free,0x40,&DAT_00000008,0,uVar7,
                 unaff_EBX);
  class_addlist((long)keyname_class,keyname_list);
  puVar1 = keyname_class;
  puVar3 = gensym("key-input");
  class_sethelpsymbol((long)puVar1,puVar3);
  piVar2 = (int *)gensym("pdcontrol");
  plVar4 = class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_11),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar2,0x54fdf0,0,0x40,(char *)0x0,0,uVar7,
                     unaff_EBX);
  pdcontrol_class = plVar4;
  piVar2 = (int *)gensym("dir");
  uVar6 = 0;
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x54fe20,piVar2,6,(char *)0x7,0,uVar7);
  plVar4 = pdcontrol_class;
  piVar2 = (int *)gensym("args");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x54ff50,piVar2,6,(char *)0x0,uVar6,uVar7);
  plVar4 = pdcontrol_class;
  piVar2 = (int *)gensym("browse");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x550060,piVar2,2,(char *)0x0,uVar6,uVar7);
  plVar4 = pdcontrol_class;
  piVar2 = (int *)gensym("isvisible");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x550080,piVar2,0,pcVar5,uVar6,uVar7);
  plVar4 = pdcontrol_class;
  piVar2 = (int *)gensym("sendcanvas");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5500a0,piVar2,10,(char *)0x0,uVar6,in_stack_00000008);
  return;
}


