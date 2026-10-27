// Function : x_file_setup
// Namespace: 
// Entry    : 00579b90
// Prototype: undefined x_file_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00579b90 - 0057a6e0


void x_file_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  uint in_EAX;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint unaff_EBX;
  char *in_R8;
  char *pcVar7;
  undefined8 in_R9;
  undefined8 uVar8;
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
  int iVar9;
  
  piVar3 = (int *)gensym("file");
  class_addcreator(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8,0x57a6f0,piVar3,10,0,in_R8,in_R9,in_EAX,unaff_EBX,
                   unaff_R12D,unaff_R13D,unaff_R14D,unaff_R15D);
  piVar3 = (int *)gensym("file define");
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57ac40,file_define_free,0x68,
                     &DAT_00000008,10,0,unaff_EBX);
  puVar2 = PTR_file_define_class_00715550;
  *(undefined8 **)PTR_file_define_class_00715550 = puVar4;
  class_addanything((long)puVar4,file_define_ignore);
  lVar1 = *(long *)puVar2;
  puVar4 = gensym("file");
  class_sethelpsymbol(lVar1,puVar4);
  piVar3 = (int *)gensym("file handle");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57ad20,file_handle_free,0x68,
                     (char *)0x0,10,0,unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  piVar3 = (int *)gensym("creationmode");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3c0,piVar3,10,(char *)0x0,uVar8,iVar9);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  puVar2 = PTR_file_handle_class_00715dc8;
  *(long **)PTR_file_handle_class_00715dc8 = plVar5;
  piVar3 = (int *)gensym("open");
  pcVar7 = (char *)0x7;
  uVar8 = 0;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57adb0,piVar3,2,(char *)0x7,0,iVar9);
  plVar5 = *(long **)puVar2;
  piVar3 = (int *)gensym("close");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57afe0,piVar3,0,pcVar7,uVar8,iVar9);
  plVar5 = *(long **)puVar2;
  piVar3 = (int *)gensym("seek");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57b000,piVar3,10,(char *)0x0,uVar8,iVar9);
  plVar5 = *(long **)puVar2;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57b1e0,piVar3,7,(char *)0x0,uVar8,iVar9);
  class_addlist(*(long *)puVar2,file_handle_list);
  piVar3 = (int *)gensym("file which");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_08),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57b370,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_which_class_00715930 = plVar5;
  class_addlist((long)plVar5,file_which_list);
  piVar3 = (int *)gensym("file patchpath");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_10),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57b600,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_patchpath_class_00715dd8 = plVar5;
  class_addlist((long)plVar5,file_patchpath_list);
  piVar3 = (int *)gensym("file glob");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_12),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57b830,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_glob_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_glob_class_00715f30 = plVar5;
  piVar3 = (int *)gensym("file stat");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_14),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57bc30,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_stat_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_stat_class_00715998 = plVar5;
  piVar3 = (int *)gensym("file size");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_16),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c0b0,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_size_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_size_class_00715fd8 = plVar5;
  piVar3 = (int *)gensym("file isfile");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_18),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c170,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_isfile_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_isfile_class_00715400 = plVar5;
  piVar3 = (int *)gensym("file isdirectory");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_20),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c200,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_isdirectory_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_isdirectory_class_00715928 = plVar5;
  piVar3 = (int *)gensym("file mkdir");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_22),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c290,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  piVar3 = (int *)gensym("creationmode");
  class_addmethod(extraout_XMM0_Da_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3c0,piVar3,10,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_mkdir_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_mkdir_class_00715cb8 = plVar5;
  piVar3 = (int *)gensym("file delete");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_25),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c4c0,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_delete_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_delete_class_00715628 = plVar5;
  piVar3 = (int *)gensym("recursive");
  class_addmethod(extraout_XMM0_Da_27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57c590,piVar3,2,(char *)0x0,uVar8,iVar9);
  piVar3 = (int *)gensym("file copy");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_28),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c650,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  piVar3 = (int *)gensym("creationmode");
  class_addmethod(extraout_XMM0_Da_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3c0,piVar3,10,(char *)0x0,uVar8,iVar9);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_copy_class_00715658 = plVar5;
  class_addlist((long)plVar5,file_copy_list);
  piVar3 = (int *)gensym("file move");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_31),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c690,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_32,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  piVar3 = (int *)gensym("creationmode");
  class_addmethod(extraout_XMM0_Da_33,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3c0,piVar3,10,(char *)0x0,uVar8,iVar9);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_move_class_00715aa8 = plVar5;
  class_addlist((long)plVar5,file_move_list);
  piVar3 = (int *)gensym("file cwd");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_34),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c6d0,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_35,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_cwd_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_cwd_class_00715d90 = plVar5;
  class_addbang((long)plVar5,file_cwd_bang);
  piVar3 = (int *)gensym("file split");
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_36),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c810,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  class_addsymbol((long)puVar4,file_split_symbol);
  puVar6 = gensym("file");
  class_sethelpsymbol((long)puVar4,puVar6);
  *(undefined8 **)PTR_file_split_class_007156b0 = puVar4;
  piVar3 = (int *)gensym("file join");
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db_15,extraout_XMM0_Da_37),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c8c0,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  puVar6 = gensym("file");
  class_sethelpsymbol((long)puVar4,puVar6);
  *(undefined8 **)PTR_file_join_class_00715608 = puVar4;
  class_addlist((long)puVar4,file_join_list);
  piVar3 = (int *)gensym("file splitext");
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db_16,extraout_XMM0_Da_38),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57c900,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  class_addsymbol((long)puVar4,file_splitext_symbol);
  puVar6 = gensym("file");
  class_sethelpsymbol((long)puVar4,puVar6);
  *(undefined8 **)PTR_file_splitext_class_00715f88 = puVar4;
  piVar3 = (int *)gensym("file splitname");
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db_17,extraout_XMM0_Da_39),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57ca20,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  class_addsymbol((long)puVar4,file_splitname_symbol);
  puVar6 = gensym("file");
  class_sethelpsymbol((long)puVar4,puVar6);
  *(undefined8 **)PTR_file_splitname_class_00715be8 = puVar4;
  piVar3 = (int *)gensym("file isabsolute");
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db_18,extraout_XMM0_Da_40),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57cb10,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  class_addsymbol((long)puVar4,file_isabsolute_symbol);
  puVar6 = gensym("file");
  class_sethelpsymbol((long)puVar4,puVar6);
  *(undefined8 **)PTR_file_isabsolute_class_00715bd8 = puVar4;
  piVar3 = (int *)gensym("file normalize");
  iVar9 = 0;
  uVar8 = 10;
  plVar5 = class_new(CONCAT44(extraout_XMM0_Db_19,extraout_XMM0_Da_41),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x57cb90,0,0x68,(char *)0x0,10,0,
                     unaff_EBX);
  piVar3 = (int *)gensym("verbose");
  class_addmethod(extraout_XMM0_Da_42,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5
                  ,0x57d3b0,piVar3,1,(char *)0x0,uVar8,iVar9);
  class_addsymbol((long)plVar5,file_normalize_symbol);
  puVar4 = gensym("file");
  class_sethelpsymbol((long)plVar5,puVar4);
  *(long **)PTR_file_normalize_class_007156a0 = plVar5;
  return;
}


