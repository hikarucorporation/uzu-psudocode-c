// Function : x_list_setup
// Namespace: 
// Entry    : 005507d0
// Prototype: undefined x_list_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005507d0 - 00550cb2


void x_list_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  uint in_EAX;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint unaff_EBX;
  char *pcVar7;
  undefined8 uVar8;
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
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined8 uVar9;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  uint in_stack_00000028;
  uint in_stack_00000030;
  int iVar10;
  uint uVar11;
  
  piVar4 = (int *)gensym("list inlet");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar4,0,0,0x18,(char *)0x0,0,in_EAX,unaff_EBX);
  puVar3 = PTR_alist_class_00715f58;
  *(undefined8 **)PTR_alist_class_00715f58 = puVar5;
  class_addlist((long)puVar5,alist_list);
  class_addanything(*(long *)puVar3,alist_anything);
  piVar4 = (int *)gensym("list append");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x550470,list_append_free,0x48,
                     (char *)0x0,10,0,unaff_EBX);
  puVar3 = PTR_list_append_class_00715640;
  *(undefined8 **)PTR_list_append_class_00715640 = puVar5;
  class_addlist((long)puVar5,list_append_list);
  class_addanything(*(long *)puVar3,list_append_anything);
  lVar1 = *(long *)puVar3;
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  class_sethelpsymbol(lVar1,*plVar6 + 0xc0);
  piVar4 = (int *)gensym("list prepend");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x550500,list_prepend_free,0x48,
                     (char *)0x0,10,0,unaff_EBX);
  puVar3 = PTR_list_prepend_class_00715770;
  *(undefined8 **)PTR_list_prepend_class_00715770 = puVar5;
  class_addlist((long)puVar5,list_prepend_list);
  class_addanything(*(long *)puVar3,list_prepend_anything);
  class_sethelpsymbol(*(long *)puVar3,*plVar6 + 0xc0);
  piVar4 = (int *)gensym("list store");
  iVar10 = 0;
  uVar8 = 10;
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x550730,list_store_free,0x58,
                     (char *)0x0,10,0,unaff_EBX);
  puVar3 = PTR_list_store_class_007157c0;
  *(undefined8 **)PTR_list_store_class_007157c0 = puVar5;
  class_addlist((long)puVar5,list_store_list);
  plVar2 = *(long **)puVar3;
  piVar4 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x552180,piVar4,2,(char *)0x0,uVar8,iVar10);
  plVar2 = *(long **)puVar3;
  piVar4 = (int *)gensym("append");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x552460,piVar4,10,(char *)0x0,uVar8,iVar10);
  plVar2 = *(long **)puVar3;
  piVar4 = (int *)gensym("prepend");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x552470,piVar4,10,(char *)0x0,uVar8,iVar10);
  plVar2 = *(long **)puVar3;
  piVar4 = (int *)gensym("insert");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x552480,piVar4,10,(char *)0x0,uVar8,iVar10);
  plVar2 = *(long **)puVar3;
  piVar4 = (int *)gensym("delete");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5524e0,piVar4,1,(char *)0x6,0,iVar10);
  plVar2 = *(long **)puVar3;
  piVar4 = (int *)gensym("get");
  uVar8 = 0;
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5527f0,piVar4,1,(char *)0x6,0,iVar10);
  plVar2 = *(long **)puVar3;
  piVar4 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x552af0,piVar4,10,(char *)0x0,uVar8,iVar10);
  class_sethelpsymbol(*(long *)puVar3,*plVar6 + 0xc0);
  piVar4 = (int *)gensym("list split");
  uVar11 = 0;
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_10),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x550590,0,0x50,(char *)0x0,6,0,
                     unaff_EBX);
  puVar3 = PTR_list_split_class_00715c58;
  *(undefined8 **)PTR_list_split_class_00715c58 = puVar5;
  class_addlist((long)puVar5,list_split_list);
  class_addanything(*(long *)puVar3,list_split_anything);
  class_sethelpsymbol(*(long *)puVar3,*plVar6 + 0xc0);
  piVar4 = (int *)gensym("list trim");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_11),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x550630,0,0x30,(char *)0x0,0,uVar11,
                     unaff_EBX);
  puVar3 = PTR_list_trim_class_00715f90;
  *(undefined8 **)PTR_list_trim_class_00715f90 = puVar5;
  class_addlist((long)puVar5,list_trim_list);
  class_addanything(*(long *)puVar3,list_trim_anything);
  class_sethelpsymbol(*(long *)puVar3,*plVar6 + 0xc0);
  piVar4 = (int *)gensym("list length");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_12),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x550670,0,0x30,(char *)0x0,0,uVar11,
                     unaff_EBX);
  puVar3 = PTR_list_length_class_00715938;
  *(undefined8 **)PTR_list_length_class_00715938 = puVar5;
  class_addlist((long)puVar5,list_length_list);
  class_addanything(*(long *)puVar3,list_length_anything);
  class_sethelpsymbol(*(long *)puVar3,*plVar6 + 0xc0);
  piVar4 = (int *)gensym("list fromsymbol");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_13),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x5506b0,0,0x30,(char *)0x0,0,uVar11,
                     unaff_EBX);
  puVar3 = PTR_list_fromsymbol_class_00715fc8;
  *(undefined8 **)PTR_list_fromsymbol_class_00715fc8 = puVar5;
  class_addsymbol((long)puVar5,list_fromsymbol_symbol);
  class_sethelpsymbol(*(long *)puVar3,*plVar6 + 0xc0);
  piVar4 = (int *)gensym("list tosymbol");
  pcVar7 = (char *)0x0;
  uVar8 = 0;
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_14),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x5506f0,0,0x30,(char *)0x0,0,uVar11,
                     unaff_EBX);
  puVar3 = PTR_list_tosymbol_class_00715698;
  *(undefined8 **)PTR_list_tosymbol_class_00715698 = puVar5;
  class_addlist((long)puVar5,list_tosymbol_list);
  uVar9 = class_sethelpsymbol(*(long *)puVar3,*plVar6 + 0xc0);
  class_addcreator(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)PTR_list_new_00715598,(int *)(*plVar6 + 0xc0),10,0,pcVar7,uVar8,
                   in_stack_00000008,in_stack_00000010,in_stack_00000018,in_stack_00000020,
                   in_stack_00000028,in_stack_00000030);
  return;
}


