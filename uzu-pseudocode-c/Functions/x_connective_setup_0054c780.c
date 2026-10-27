// Function : x_connective_setup
// Namespace: 
// Entry    : 0054c780
// Prototype: undefined x_connective_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054c780 - 0054d129


void x_connective_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
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
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  undefined4 extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined4 extraout_XMM0_Db_17;
  undefined4 extraout_XMM0_Db_18;
  undefined4 extraout_XMM0_Db_19;
  undefined4 extraout_XMM0_Db_20;
  uint unaff_retaddr;
  uint uVar7;
  int iVar8;
  uint in_stack_ffffffffffffffe0;
  
  piVar3 = (int *)gensym("int");
  uVar7 = 0;
  pcVar5 = (char *)0x0;
  uVar6 = 6;
  pdint_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar3,0x54b520,0,0x38,(char *)0x0,6,0,
                          in_stack_ffffffffffffffe0);
  piVar3 = (int *)gensym("i");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x54b520,piVar3,6,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  plVar1 = pdint_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x54b580,piVar3,2,(char *)0x0,uVar6,uVar7);
  class_addbang((long)pdint_class,pdint_bang);
  uVar6 = class_doaddfloat((long)pdint_class,pdint_float);
  pdfloat_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar3 = (int *)gensym("symbol");
  pdsymbol_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,(long)PTR_pdsymbol_new_00715578,0,0x38,(char *)0x0,2
                 ,0,in_stack_ffffffffffffffe0);
  class_addbang((long)pdsymbol_class,pdsymbol_bang);
  class_addsymbol((long)pdsymbol_class,pdsymbol_symbol);
  uVar6 = class_addanything((long)pdsymbol_class,pdsymbol_anything);
  bang_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar3 = (int *)gensym("send");
  uVar7 = 0;
  pcVar5 = (char *)0x0;
  uVar6 = 7;
  send_class = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_03),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar3,0x54d130,0,0x38,(char *)0x0,7,0,
                         in_stack_ffffffffffffffe0);
  piVar3 = (int *)gensym("s");
  class_addcreator(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x54d130,piVar3,7,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_addbang((long)send_class,send_bang);
  class_doaddfloat((long)send_class,send_float);
  class_addsymbol((long)send_class,send_symbol);
  class_addpointer((long)send_class,send_pointer);
  class_addlist((long)send_class,send_list);
  class_addanything((long)send_class,send_anything);
  puVar2 = send_class;
  puVar4 = gensym("send-receive");
  class_sethelpsymbol((long)puVar2,puVar4);
  piVar3 = (int *)gensym("receive");
  uVar7 = 0;
  pcVar5 = &DAT_00000008;
  uVar6 = 7;
  receive_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x54d230,receive_free,0x38,&DAT_00000008,7,0,
                 in_stack_ffffffffffffffe0);
  piVar3 = (int *)gensym("r");
  class_addcreator(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x54d230,piVar3,7,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_addbang((long)receive_class,receive_bang);
  class_doaddfloat((long)receive_class,receive_float);
  class_addsymbol((long)receive_class,receive_symbol);
  class_addpointer((long)receive_class,receive_pointer);
  class_addlist((long)receive_class,receive_list);
  class_addanything((long)receive_class,receive_anything);
  puVar2 = receive_class;
  puVar4 = gensym("send-receive");
  uVar6 = class_sethelpsymbol((long)puVar2,puVar4);
  select_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar3 = (int *)gensym("route");
  route_class = class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_07),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar3,0x54bf10,route_free,0x48,
                          (char *)0x0,10,0,in_stack_ffffffffffffffe0);
  class_addlist((long)route_class,route_list);
  class_addanything((long)route_class,route_anything);
  piVar3 = (int *)gensym("pack");
  pack_class = class_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_08),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar3,0x54d2e0,pack_free,0x48,(char *)0x0,
                         10,0,in_stack_ffffffffffffffe0);
  class_addbang((long)pack_class,pack_bang);
  class_addpointer((long)pack_class,pack_pointer);
  class_doaddfloat((long)pack_class,pack_float);
  class_addsymbol((long)pack_class,pack_symbol);
  class_addlist((long)pack_class,pack_list);
  class_addanything((long)pack_class,pack_anything);
  piVar3 = (int *)gensym("unpack");
  unpack_class = class_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_09),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar3,0x54d900,unpack_free,0x40,
                           (char *)0x0,10,0,in_stack_ffffffffffffffe0);
  class_addlist((long)unpack_class,unpack_list);
  class_addanything((long)unpack_class,unpack_anything);
  piVar3 = (int *)gensym("trigger");
  uVar7 = 0;
  pcVar5 = (char *)0x0;
  uVar6 = 10;
  trigger_class =
       class_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x54dbf0,trigger_free,0x40,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  piVar3 = (int *)gensym("t");
  class_addcreator(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_11),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x54dbf0,piVar3,10,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_addlist((long)trigger_class,trigger_list);
  class_addbang((long)trigger_class,trigger_bang);
  class_addpointer((long)trigger_class,trigger_pointer);
  class_doaddfloat((long)trigger_class,trigger_float);
  class_addsymbol((long)trigger_class,trigger_symbol);
  class_addanything((long)trigger_class,trigger_anything);
  piVar3 = (int *)gensym("spigot");
  spigot_class = class_new(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_12),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar3,0x54e1a0,0,0x38,(char *)0x0,6,0,
                           in_stack_ffffffffffffffe0);
  class_addbang((long)spigot_class,spigot_bang);
  class_addpointer((long)spigot_class,spigot_pointer);
  class_doaddfloat((long)spigot_class,spigot_float);
  class_addsymbol((long)spigot_class,spigot_symbol);
  class_addlist((long)spigot_class,spigot_list);
  class_addanything((long)spigot_class,spigot_anything);
  piVar3 = (int *)gensym("moses");
  uVar7 = 0;
  moses_class = class_new(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_13),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar3,0x54e2b0,0,0x40,(char *)0x0,6,0,
                          in_stack_ffffffffffffffe0);
  class_doaddfloat((long)moses_class,moses_float);
  piVar3 = (int *)gensym("until");
  pcVar5 = (char *)0x0;
  uVar6 = 0;
  until_class = class_new(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_14),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar3,0x54e340,0,0x38,(char *)0x0,0,uVar7
                          ,in_stack_ffffffffffffffe0);
  class_addbang((long)until_class,until_bang);
  class_doaddfloat((long)until_class,until_float);
  plVar1 = until_class;
  piVar3 = (int *)gensym("bang2");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x54e440,piVar3,0,pcVar5,uVar6,uVar7);
  piVar3 = (int *)gensym("makefilename");
  iVar8 = 0;
  uVar6 = 7;
  makefilename_class =
       class_new(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_16),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x54e450,0,0x40,(char *)0x0,7,0,
                 in_stack_ffffffffffffffe0);
  class_doaddfloat((long)makefilename_class,makefilename_float);
  class_addsymbol((long)makefilename_class,makefilename_symbol);
  class_addbang((long)makefilename_class,makefilename_bang);
  plVar1 = makefilename_class;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x54e720,piVar3,2,(char *)0x0,uVar6,iVar8);
  piVar3 = (int *)gensym("swap");
  uVar7 = 0;
  pcVar5 = (char *)0x0;
  uVar6 = 6;
  swap_class = class_new(CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_18),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar3,0x54c440,0,0x40,(char *)0x0,6,0,
                         in_stack_ffffffffffffffe0);
  piVar3 = (int *)gensym("fswap");
  class_addcreator(CONCAT44(extraout_XMM0_Db_16,extraout_XMM0_Da_19),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x54c440,piVar3,6,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_addbang((long)swap_class,swap_bang);
  class_doaddfloat((long)swap_class,swap_float);
  piVar3 = (int *)gensym("change");
  iVar8 = 0;
  uVar6 = 6;
  change_class = class_new(CONCAT44(extraout_XMM0_Db_17,extraout_XMM0_Da_20),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar3,0x54c5d0,0,0x38,(char *)0x0,6,0,
                           in_stack_ffffffffffffffe0);
  class_addbang((long)change_class,change_bang);
  class_doaddfloat((long)change_class,change_float);
  plVar1 = change_class;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x54c660,piVar3,6,(char *)0x0,uVar6,iVar8);
  piVar3 = (int *)gensym("value");
  uVar7 = 0;
  pcVar5 = (char *)0x0;
  uVar6 = 7;
  value_class = class_new(CONCAT44(extraout_XMM0_Db_18,extraout_XMM0_Da_22),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar3,0x54e930,value_ff,0x40,(char *)0x0,
                          7,0,in_stack_ffffffffffffffe0);
  piVar3 = (int *)gensym("v");
  class_addcreator(CONCAT44(extraout_XMM0_Db_19,extraout_XMM0_Da_23),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x54e930,piVar3,7,0,pcVar5,uVar6,uVar7,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_addbang((long)value_class,value_bang);
  class_doaddfloat((long)value_class,value_float);
  plVar1 = value_class;
  piVar3 = (int *)gensym("symbol2");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x54ea80,piVar3,7,(char *)0x0,uVar6,uVar7);
  plVar1 = value_class;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x54eb30,piVar3,2,(char *)0x0,uVar6,uVar7);
  piVar3 = (int *)gensym("value");
  vcommon_class =
       class_new(CONCAT44(extraout_XMM0_Db_20,extraout_XMM0_Da_26),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0,0,0x10,(char *)0x1,0,uVar7,
                 in_stack_ffffffffffffffe0);
  class_doaddfloat((long)vcommon_class,vcommon_float);
  return;
}


