// Function : x_qlist_setup
// Namespace: 
// Entry    : 00555fe0
// Prototype: undefined x_qlist_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00555fe0 - 00556cb3


void x_qlist_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint unaff_EBX;
  char *pcVar6;
  undefined8 uVar7;
  uint unaff_R12D;
  uint unaff_R13D;
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
  undefined4 extraout_XMM0_Da_40;
  undefined4 extraout_XMM0_Da_41;
  undefined4 extraout_XMM0_Da_42;
  undefined4 extraout_XMM0_Da_43;
  undefined4 extraout_XMM0_Da_44;
  undefined4 extraout_XMM0_Da_45;
  undefined4 extraout_XMM0_Da_46;
  undefined4 extraout_XMM0_Da_47;
  undefined4 extraout_XMM0_Da_48;
  undefined4 extraout_XMM0_Da_49;
  undefined4 extraout_XMM0_Da_50;
  undefined4 extraout_XMM0_Da_51;
  undefined4 extraout_XMM0_Da_52;
  undefined4 extraout_XMM0_Da_53;
  undefined4 extraout_XMM0_Da_54;
  undefined4 extraout_XMM0_Da_55;
  undefined4 extraout_XMM0_Da_56;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  uint uVar8;
  int iVar9;
  
  text_template_init(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar3 = (int *)gensym("text define");
  uVar8 = 0;
  pcVar6 = (char *)0x0;
  uVar7 = 10;
  plVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0x556cc0,text_define_free,0x98,(char *)0x0,10,0,
                     unaff_EBX);
  text_define_class = plVar4;
  piVar3 = (int *)gensym("click");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x556f10,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("close");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5570a0,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("addline");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5570e0,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("notify");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x557140,piVar3,0,(char *)0x0,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("set");
  pcVar6 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,(long)PTR_text_define_set_007156f8,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5571e0,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("write");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x557270,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("read");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5573b0,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x557540,piVar3,2,(char *)0x0,uVar7,uVar8);
  plVar4 = text_define_class;
  piVar3 = (int *)gensym("sort");
  pcVar6 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x557590,piVar3,10,(char *)0x0,uVar7,uVar8);
  class_setsavefn((long)text_define_class,text_define_save);
  class_addbang((long)text_define_class,PTR_text_define_bang_00715b80);
  plVar4 = text_define_class;
  puVar5 = gensym("text-object");
  class_sethelpsymbol((long)plVar4,puVar5);
  piVar3 = (int *)gensym("text");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x557bd0,piVar3,10,0,pcVar6,uVar7,uVar8,unaff_EBX,
                   unaff_R12D,unaff_R13D,unaff_R14D,unaff_R15D);
  piVar3 = (int *)gensym("text get");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_11),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x557e40,text_client_free,0x78,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_get_class_007153f8;
  *(undefined8 **)PTR_text_get_class_007153f8 = puVar5;
  class_doaddfloat((long)puVar5,text_get_float);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("text set");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_12),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x558430,text_client_free,0x68,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_set_class_00715960;
  *(undefined8 **)PTR_text_set_class_00715960 = puVar5;
  class_addlist((long)puVar5,text_set_list);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("text insert");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_13),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x558970,text_client_free,0x68,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_insert_class_00715870;
  *(undefined8 **)PTR_text_insert_class_00715870 = puVar5;
  class_addlist((long)puVar5,text_insert_list);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("text delete");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_14),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x558ce0,text_client_free,0x60,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_delete_class_00715e30;
  *(undefined8 **)PTR_text_delete_class_00715e30 = puVar5;
  class_doaddfloat((long)puVar5,text_delete_float);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("text size");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_15),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x558f30,text_client_free,0x68,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_size_class_00715678;
  *(undefined8 **)PTR_text_size_class_00715678 = puVar5;
  class_addbang((long)puVar5,text_size_bang);
  class_doaddfloat(*(long *)puVar2,text_size_float);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("text tolist");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_16),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x5592c0,text_client_free,0x60,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_tolist_class_00715b20;
  *(undefined8 **)PTR_text_tolist_class_00715b20 = puVar5;
  class_addbang((long)puVar5,text_tolist_bang);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("text fromlist");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_17),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x559490,text_client_free,0x60,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_fromlist_class_00715fb8;
  *(undefined8 **)PTR_text_fromlist_class_00715fb8 = puVar5;
  class_addlist((long)puVar5,text_fromlist_list);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("text search");
  iVar9 = 0;
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_18),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x559600,text_client_free,0x80,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_search_class_00715908;
  *(undefined8 **)PTR_text_search_class_00715908 = puVar5;
  class_addlist((long)puVar5,text_search_list);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("range");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x559ef0,piVar3,1,(char *)0x1,0,iVar9);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("text sequence");
  uVar8 = 0;
  pcVar6 = (char *)0x0;
  uVar7 = 10;
  plVar4 = class_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_20),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x559f40,text_sequence_free,0xb8,
                     (char *)0x0,10,0,unaff_EBX);
  puVar2 = PTR_text_sequence_class_00715ce8;
  *(long **)PTR_text_sequence_class_00715ce8 = plVar4;
  piVar3 = (int *)gensym("step");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a340,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("line");
  pcVar6 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a380,piVar3,1,(char *)0x0,uVar7,uVar8);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("auto");
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a420,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a4c0,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("args");
  class_addmethod(extraout_XMM0_Da_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a4f0,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("tempo");
  class_addmethod(extraout_XMM0_Da_26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a5d0,piVar3,1,(char *)0x2,0,uVar8);
  class_addlist(*(long *)puVar2,text_sequence_list);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("text-object");
  class_sethelpsymbol(lVar1,puVar5);
  piVar3 = (int *)gensym("qlist");
  pcVar6 = (char *)0x0;
  uVar7 = 0;
  plVar4 = class_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_27),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x55a670,qlist_free,0x88,(char *)0x0,0,
                     uVar8,unaff_EBX);
  qlist_class = plVar4;
  piVar3 = (int *)gensym("rewind");
  class_addmethod(extraout_XMM0_Da_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a740,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("next");
  class_addmethod(extraout_XMM0_Da_29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a770,piVar3,6,(char *)0x0,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("set");
  pcVar6 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a790,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_31,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a810,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("add");
  class_addmethod(extraout_XMM0_Da_32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a850,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("add2");
  class_addmethod(extraout_XMM0_Da_33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a890,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("append");
  class_addmethod(extraout_XMM0_Da_34,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a850,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("read");
  class_addmethod(extraout_XMM0_Da_35,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a8a0,piVar3,2,(char *)0x7,0,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("write");
  pcVar6 = (char *)0x7;
  uVar7 = 0;
  class_addmethod(extraout_XMM0_Da_36,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a940,piVar3,2,(char *)0x7,0,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("click");
  class_addmethod(extraout_XMM0_Da_37,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x556f10,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("close");
  class_addmethod(extraout_XMM0_Da_38,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5570a0,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("addline");
  class_addmethod(extraout_XMM0_Da_39,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5570e0,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("notify");
  class_addmethod(extraout_XMM0_Da_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x555e90,piVar3,0,(char *)0x0,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_41,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a9f0,piVar3,7,(char *)0x0,uVar7,uVar8);
  plVar4 = qlist_class;
  piVar3 = (int *)gensym("tempo");
  class_addmethod(extraout_XMM0_Da_42,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55aa10,piVar3,1,(char *)0x0,uVar7,uVar8);
  class_addbang((long)qlist_class,qlist_bang);
  piVar3 = (int *)gensym("textfile");
  pcVar6 = (char *)0x0;
  uVar7 = 0;
  plVar4 = class_new(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_43),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x55ab10,textbuf_free,0x88,(char *)0x0,0
                     ,uVar8,unaff_EBX);
  textfile_class = plVar4;
  piVar3 = (int *)gensym("rewind");
  class_addmethod(extraout_XMM0_Da_44,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55ac60,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("set");
  pcVar6 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_45,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a790,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_46,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a810,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("add");
  class_addmethod(extraout_XMM0_Da_47,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a850,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("add2");
  class_addmethod(extraout_XMM0_Da_48,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a890,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("append");
  class_addmethod(extraout_XMM0_Da_49,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a850,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("read");
  class_addmethod(extraout_XMM0_Da_50,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a8a0,piVar3,2,(char *)0x7,0,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("write");
  pcVar6 = (char *)0x7;
  uVar7 = 0;
  class_addmethod(extraout_XMM0_Da_51,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a940,piVar3,2,(char *)0x7,0,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("click");
  class_addmethod(extraout_XMM0_Da_52,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x556f10,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("close");
  class_addmethod(extraout_XMM0_Da_53,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5570a0,piVar3,0,pcVar6,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("addline");
  class_addmethod(extraout_XMM0_Da_54,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5570e0,piVar3,10,(char *)0x0,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("notify");
  class_addmethod(extraout_XMM0_Da_55,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x555e90,piVar3,0,(char *)0x0,uVar7,uVar8);
  plVar4 = textfile_class;
  piVar3 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_56,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x55a9f0,piVar3,7,(char *)0x0,uVar7,uVar8);
  class_addbang((long)textfile_class,textfile_bang);
  return;
}


