// Function : x_array_setup
// Namespace: 
// Entry    : 00548b80
// Prototype: undefined x_array_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00548b80 - 005490c6


void x_array_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint unaff_EBX;
  char *pcVar7;
  undefined8 uVar8;
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
  uint unaff_retaddr;
  uint in_stack_ffffffffffffffd8;
  uint uVar9;
  int iVar10;
  uint in_stack_ffffffffffffffe0;
  
  piVar3 = (int *)gensym("array define");
  uVar8 = 0;
  plVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0,PTR_canvas_free_00715480,0xf8,(char *)0x0,0,
                     in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0);
  puVar2 = PTR_array_define_class_00715eb0;
  *(long **)PTR_array_define_class_00715eb0 = plVar4;
  canvas_add_for_class
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,plVar4);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5490d0,piVar3,2,(char *)0x0,uVar8,in_stack_ffffffffffffffd8);
  class_addbang(*(long *)puVar2,array_define_bang);
  class_addanything(*(long *)puVar2,array_define_anything);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("array-object");
  class_sethelpsymbol(lVar1,puVar5);
  class_setsavefn(*(long *)puVar2,PTR_array_define_save_00715f18);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("done-popup");
  uVar9 = 0;
  uVar8 = 1;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x5492a0,piVar3,1,(char *)0x1,1,0);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("editmode");
  pcVar7 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x549340,piVar3,10,(char *)0x0,uVar8,uVar9);
  piVar3 = (int *)gensym("array");
  class_addcreator(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x549350,piVar3,10,0,pcVar7,uVar8,uVar9,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  piVar3 = (int *)gensym("table");
  class_addcreator(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x549600,piVar3,7,6,(char *)0x0,uVar8,uVar9,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  piVar3 = (int *)gensym("array size");
  array_size_class =
       class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x549620,array_client_free,0x68,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  class_addbang((long)array_size_class,array_size_bang);
  class_doaddfloat((long)array_size_class,array_size_float);
  puVar5 = array_size_class;
  puVar6 = gensym("array-object");
  class_sethelpsymbol((long)puVar5,puVar6);
  piVar3 = (int *)gensym("array sum");
  array_sum_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x5498d0,array_client_free,0x80,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  class_addbang((long)array_sum_class,array_sum_bang);
  class_doaddfloat((long)array_sum_class,array_sum_float);
  puVar5 = array_sum_class;
  puVar6 = gensym("array-object");
  class_sethelpsymbol((long)puVar5,puVar6);
  piVar3 = (int *)gensym("array get");
  array_get_class =
       class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x549b10,array_client_free,0x80,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  class_addbang((long)array_get_class,array_get_bang);
  class_doaddfloat((long)array_get_class,array_get_float);
  puVar5 = array_get_class;
  puVar6 = gensym("array-object");
  class_sethelpsymbol((long)puVar5,puVar6);
  piVar3 = (int *)gensym("array set");
  array_set_class =
       class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x549cb0,array_client_free,0x80,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  class_addlist((long)array_set_class,array_set_list);
  puVar5 = array_set_class;
  puVar6 = gensym("array-object");
  class_sethelpsymbol((long)puVar5,puVar6);
  piVar3 = (int *)gensym("array quantile");
  array_quantile_class =
       class_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x549da0,array_client_free,0x80,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  class_doaddfloat((long)array_quantile_class,array_quantile_float);
  puVar5 = array_quantile_class;
  puVar6 = gensym("array-object");
  class_sethelpsymbol((long)puVar5,puVar6);
  piVar3 = (int *)gensym("array random");
  iVar10 = 0;
  uVar8 = 10;
  plVar4 = class_new(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_11),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x549f60,array_client_free,0x88,
                     (char *)0x0,10,0,in_stack_ffffffffffffffe0);
  array_random_class = plVar4;
  piVar3 = (int *)gensym("seed");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x549fe0,piVar3,1,(char *)0x0,uVar8,iVar10);
  class_doaddfloat((long)array_random_class,array_random_float);
  class_addbang((long)array_random_class,array_random_bang);
  plVar4 = array_random_class;
  puVar5 = gensym("array-object");
  class_sethelpsymbol((long)plVar4,puVar5);
  piVar3 = (int *)gensym("array max");
  array_max_class =
       class_new(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_13),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x54a1a0,array_client_free,0x90,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  class_doaddfloat((long)array_max_class,array_max_float);
  class_addbang((long)array_max_class,array_max_bang);
  puVar5 = array_max_class;
  puVar6 = gensym("array-object");
  class_sethelpsymbol((long)puVar5,puVar6);
  piVar3 = (int *)gensym("array min");
  array_min_class =
       class_new(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_14),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar3,0x54a4e0,array_client_free,0x90,(char *)0x0,10,0,
                 in_stack_ffffffffffffffe0);
  class_doaddfloat((long)array_min_class,array_min_float);
  class_addbang((long)array_min_class,array_min_bang);
  puVar5 = array_min_class;
  puVar6 = gensym("array-object");
  class_sethelpsymbol((long)puVar5,puVar6);
  return;
}


