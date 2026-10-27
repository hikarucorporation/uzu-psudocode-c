// Function : g_text_setup
// Namespace: 
// Entry    : 0052c8b0
// Prototype: undefined g_text_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0052c8b0 - 0052ccf7


void g_text_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint unaff_EBX;
  char *pcVar4;
  undefined8 uVar5;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  
  piVar2 = (int *)gensym("text");
  puVar3 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar2,0,0,0x30,(char *)0xb,0,unaff_EBX,unaff_R14D);
  *(undefined8 **)PTR_text_class_00715c88 = puVar3;
  class_addanything((long)puVar3,text_anything);
  piVar2 = (int *)gensym("message");
  message_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0,message_free,0x50,(char *)0x3,0,unaff_EBX,
                 unaff_R14D);
  class_addbang((long)message_class,message_bang);
  class_doaddfloat((long)message_class,message_float);
  class_addsymbol((long)message_class,message_symbol);
  class_addlist((long)message_class,message_list);
  class_addanything((long)message_class,message_list);
  plVar1 = message_class;
  piVar2 = (int *)gensym("click");
  uVar5 = 1;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52cdc0,piVar2,1,(char *)0x1,1,1);
  plVar1 = message_class;
  piVar2 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52ce90,piVar2,10,(char *)0x0,uVar5,unaff_EBX);
  plVar1 = message_class;
  piVar2 = (int *)gensym("add");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52ced0,piVar2,10,(char *)0x0,uVar5,unaff_EBX);
  plVar1 = message_class;
  piVar2 = (int *)gensym("add2");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52cf00,piVar2,10,(char *)0x0,uVar5,unaff_EBX);
  plVar1 = message_class;
  piVar2 = (int *)gensym("addcomma");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52cf20,piVar2,0,pcVar4,uVar5,unaff_EBX);
  plVar1 = message_class;
  piVar2 = (int *)gensym("addsemi");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52cf60,piVar2,0,pcVar4,uVar5,unaff_EBX);
  plVar1 = message_class;
  piVar2 = (int *)gensym("adddollar");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52cf90,piVar2,1,(char *)0x0,uVar5,unaff_EBX);
  plVar1 = message_class;
  piVar2 = (int *)gensym("adddollsym");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52cfe0,piVar2,2,(char *)0x0,uVar5,unaff_EBX);
  piVar2 = (int *)gensym("messresponder");
  messresponder_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0,0,0x30,(char *)0x1,0,unaff_EBX,unaff_R14D);
  class_addbang((long)messresponder_class,messresponder_bang);
  class_doaddfloat((long)messresponder_class,messresponder_float);
  class_addsymbol((long)messresponder_class,messresponder_symbol);
  class_addlist((long)messresponder_class,messresponder_list);
  class_addanything((long)messresponder_class,messresponder_anything);
  piVar2 = (int *)gensym("gatom");
  uVar5 = 0;
  gatom_class = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_10),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar2,0,gatom_free,0x88,(char *)0xb,0,
                          unaff_EBX,unaff_R14D);
  class_addbang((long)gatom_class,gatom_bang);
  class_doaddfloat((long)gatom_class,gatom_float);
  class_addsymbol((long)gatom_class,gatom_symbol);
  class_addlist((long)gatom_class,gatom_list);
  plVar1 = gatom_class;
  piVar2 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52d180,piVar2,10,(char *)0x0,uVar5,unaff_EBX);
  plVar1 = gatom_class;
  piVar2 = (int *)gensym("click");
  uVar5 = 1;
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52d350,piVar2,1,(char *)0x1,1,1);
  plVar1 = gatom_class;
  piVar2 = (int *)gensym("param");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x52d3b0,piVar2,10,(char *)0x0,uVar5,unaff_EBX);
  class_setwidget((long)gatom_class,&gatom_widgetbehavior);
  class_setpropertiesfn((long)gatom_class,gatom_properties);
  plVar1 = gatom_class;
  puVar3 = gensym("gui-boxes");
  class_sethelpsymbol((long)plVar1,puVar3);
  return;
}


