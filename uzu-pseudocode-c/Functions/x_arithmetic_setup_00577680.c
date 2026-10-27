// Function : x_arithmetic_setup
// Namespace: 
// Entry    : 00577680
// Prototype: undefined x_arithmetic_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00577680 - 005783c4


void x_arithmetic_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qa_30;
  undefined8 extraout_XMM0_Qa_31;
  uint uVar6;
  uint in_stack_ffffffffffffffd0;
  
  puVar1 = gensym("binops");
  puVar2 = gensym("binops-other");
  puVar3 = gensym("trigonometric");
  puVar4 = gensym("unops");
  piVar5 = (int *)gensym("+");
  binop1_plus_class =
       class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x5783d0,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop1_plus_class,binop1_plus_bang);
  class_doaddfloat((long)binop1_plus_class,binop1_plus_float);
  class_sethelpsymbol((long)binop1_plus_class,puVar1);
  piVar5 = (int *)gensym("-");
  binop1_minus_class =
       class_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578470,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop1_minus_class,binop1_minus_bang);
  class_doaddfloat((long)binop1_minus_class,binop1_minus_float);
  class_sethelpsymbol((long)binop1_minus_class,puVar1);
  piVar5 = (int *)gensym("*");
  binop1_times_class =
       class_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578510,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop1_times_class,binop1_times_bang);
  class_doaddfloat((long)binop1_times_class,binop1_times_float);
  class_sethelpsymbol((long)binop1_times_class,puVar1);
  piVar5 = (int *)gensym("/");
  binop1_div_class =
       class_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x5785b0,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop1_div_class,binop1_div_bang);
  class_doaddfloat((long)binop1_div_class,binop1_div_float);
  class_sethelpsymbol((long)binop1_div_class,puVar1);
  piVar5 = (int *)gensym("pow");
  binop1_pow_class =
       class_new(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578670,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop1_pow_class,binop1_pow_bang);
  class_doaddfloat((long)binop1_pow_class,binop1_pow_float);
  class_sethelpsymbol((long)binop1_pow_class,puVar1);
  piVar5 = (int *)gensym("max");
  binop1_max_class =
       class_new(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578790,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop1_max_class,binop1_max_bang);
  class_doaddfloat((long)binop1_max_class,binop1_max_float);
  class_sethelpsymbol((long)binop1_max_class,puVar1);
  piVar5 = (int *)gensym("min");
  binop1_min_class =
       class_new(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578830,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop1_min_class,binop1_min_bang);
  class_doaddfloat((long)binop1_min_class,binop1_min_float);
  class_sethelpsymbol((long)binop1_min_class,puVar1);
  piVar5 = (int *)gensym("log");
  binop1_log_class =
       class_new(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x5788d0,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop1_log_class,binop1_log_bang);
  class_doaddfloat((long)binop1_log_class,binop1_log_float);
  class_sethelpsymbol((long)binop1_log_class,puVar1);
  piVar5 = (int *)gensym("==");
  binop2_ee_class =
       class_new(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578a30,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop2_ee_class,binop2_ee_bang);
  class_doaddfloat((long)binop2_ee_class,binop2_ee_float);
  class_sethelpsymbol((long)binop2_ee_class,puVar2);
  piVar5 = (int *)gensym("!=");
  binop2_ne_class =
       class_new(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578af0,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop2_ne_class,binop2_ne_bang);
  class_doaddfloat((long)binop2_ne_class,binop2_ne_float);
  class_sethelpsymbol((long)binop2_ne_class,puVar2);
  piVar5 = (int *)gensym(">");
  binop2_gt_class =
       class_new(extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578bb0,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop2_gt_class,binop2_gt_bang);
  class_doaddfloat((long)binop2_gt_class,binop2_gt_float);
  class_sethelpsymbol((long)binop2_gt_class,puVar2);
  piVar5 = (int *)gensym("<");
  binop2_lt_class =
       class_new(extraout_XMM0_Qa_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578c70,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop2_lt_class,binop2_lt_bang);
  class_doaddfloat((long)binop2_lt_class,binop2_lt_float);
  class_sethelpsymbol((long)binop2_lt_class,puVar2);
  piVar5 = (int *)gensym(">=");
  binop2_ge_class =
       class_new(extraout_XMM0_Qa_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578d30,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop2_ge_class,binop2_ge_bang);
  class_doaddfloat((long)binop2_ge_class,binop2_ge_float);
  class_sethelpsymbol((long)binop2_ge_class,puVar2);
  piVar5 = (int *)gensym("<=");
  binop2_le_class =
       class_new(extraout_XMM0_Qa_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578df0,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop2_le_class,binop2_le_bang);
  class_doaddfloat((long)binop2_le_class,binop2_le_float);
  class_sethelpsymbol((long)binop2_le_class,puVar2);
  piVar5 = (int *)gensym("&");
  binop3_ba_class =
       class_new(extraout_XMM0_Qa_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578eb0,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_ba_class,binop2_ba_bang);
  class_doaddfloat((long)binop3_ba_class,binop2_ba_float);
  class_sethelpsymbol((long)binop3_ba_class,puVar2);
  piVar5 = (int *)gensym("&&");
  binop3_la_class =
       class_new(extraout_XMM0_Qa_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x578f70,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_la_class,binop2_la_bang);
  class_doaddfloat((long)binop3_la_class,binop2_la_float);
  class_sethelpsymbol((long)binop3_la_class,puVar2);
  piVar5 = (int *)gensym("|");
  binop3_bo_class =
       class_new(extraout_XMM0_Qa_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x579040,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_bo_class,binop2_bo_bang);
  class_doaddfloat((long)binop3_bo_class,binop2_bo_float);
  class_sethelpsymbol((long)binop3_bo_class,puVar2);
  piVar5 = (int *)gensym("||");
  binop3_lo_class =
       class_new(extraout_XMM0_Qa_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x579100,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_lo_class,binop2_lo_bang);
  class_doaddfloat((long)binop3_lo_class,binop2_lo_float);
  class_sethelpsymbol((long)binop3_lo_class,puVar2);
  piVar5 = (int *)gensym("<<");
  binop3_ls_class =
       class_new(extraout_XMM0_Qa_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x5791d0,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_ls_class,binop2_ls_bang);
  class_doaddfloat((long)binop3_ls_class,binop2_ls_float);
  class_sethelpsymbol((long)binop3_ls_class,puVar2);
  piVar5 = (int *)gensym(">>");
  binop3_rs_class =
       class_new(extraout_XMM0_Qa_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x579290,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_rs_class,binop2_rs_bang);
  class_doaddfloat((long)binop3_rs_class,binop2_rs_float);
  class_sethelpsymbol((long)binop3_rs_class,puVar2);
  piVar5 = (int *)gensym("%");
  binop3_pc_class =
       class_new(extraout_XMM0_Qa_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x579350,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_pc_class,binop2_pc_bang);
  class_doaddfloat((long)binop3_pc_class,binop2_pc_float);
  class_sethelpsymbol((long)binop3_pc_class,puVar2);
  piVar5 = (int *)gensym("mod");
  binop3_mod_class =
       class_new(extraout_XMM0_Qa_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x579430,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_mod_class,binop3_mod_bang);
  class_doaddfloat((long)binop3_mod_class,binop3_mod_float);
  class_sethelpsymbol((long)binop3_mod_class,puVar2);
  piVar5 = (int *)gensym("div");
  uVar6 = 0;
  binop3_div_class =
       class_new(extraout_XMM0_Qa_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar5,
                 0x579510,0,0x38,(char *)0x0,6,0,in_stack_ffffffffffffffd0);
  class_addbang((long)binop3_div_class,binop3_div_bang);
  class_doaddfloat((long)binop3_div_class,binop3_div_float);
  class_sethelpsymbol((long)binop3_div_class,puVar2);
  piVar5 = (int *)gensym("sin");
  sin_class = class_new(extraout_XMM0_Qa_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        piVar5,0x5795f0,0,0x30,(char *)0x0,0,uVar6,in_stack_ffffffffffffffd0);
  class_doaddfloat((long)sin_class,sin_float);
  class_sethelpsymbol((long)sin_class,puVar3);
  piVar5 = (int *)gensym("cos");
  cos_class = class_new(extraout_XMM0_Qa_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        piVar5,0x579650,0,0x30,(char *)0x0,0,uVar6,in_stack_ffffffffffffffd0);
  class_doaddfloat((long)cos_class,cos_float);
  class_sethelpsymbol((long)cos_class,puVar3);
  piVar5 = (int *)gensym("tan");
  tan_class = class_new(extraout_XMM0_Qa_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        piVar5,0x5796b0,0,0x30,(char *)0x0,0,uVar6,in_stack_ffffffffffffffd0);
  class_doaddfloat((long)tan_class,tan_float);
  class_sethelpsymbol((long)tan_class,puVar3);
  piVar5 = (int *)gensym("atan");
  atan_class = class_new(extraout_XMM0_Qa_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar5,0x579750,0,0x30,(char *)0x0,0,uVar6,in_stack_ffffffffffffffd0);
  class_doaddfloat((long)atan_class,atan_float);
  class_sethelpsymbol((long)atan_class,puVar3);
  piVar5 = (int *)gensym("atan2");
  atan2_class = class_new(extraout_XMM0_Qa_26,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,piVar5,0x5797b0,0,0x38,(char *)0x0,0,uVar6,
                          in_stack_ffffffffffffffd0);
  class_doaddfloat((long)atan2_class,atan2_float);
  class_addbang((long)atan2_class,atan2_bang);
  class_sethelpsymbol((long)atan2_class,puVar3);
  piVar5 = (int *)gensym("sqrt");
  sqrt_class = class_new(extraout_XMM0_Qa_27,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar5,0x579880,0,0x30,(char *)0x0,0,uVar6,in_stack_ffffffffffffffd0);
  class_doaddfloat((long)sqrt_class,sqrt_float);
  class_sethelpsymbol((long)sqrt_class,puVar4);
  piVar5 = (int *)gensym("exp");
  exp_class = class_new(extraout_XMM0_Qa_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        piVar5,0x579920,0,0x30,(char *)0x0,0,uVar6,in_stack_ffffffffffffffd0);
  class_doaddfloat((long)exp_class,exp_float);
  class_sethelpsymbol((long)exp_class,puVar4);
  piVar5 = (int *)gensym("abs");
  abs_class = class_new(extraout_XMM0_Qa_29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        piVar5,0x579990,0,0x30,(char *)0x0,0,uVar6,in_stack_ffffffffffffffd0);
  class_doaddfloat((long)abs_class,abs_float);
  class_sethelpsymbol((long)abs_class,puVar4);
  piVar5 = (int *)gensym("wrap");
  wrap_class = class_new(extraout_XMM0_Qa_30,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar5,0x5799e0,0,0x30,(char *)0x0,0,uVar6,in_stack_ffffffffffffffd0);
  class_doaddfloat((long)wrap_class,wrap_float);
  class_sethelpsymbol((long)wrap_class,puVar4);
  piVar5 = (int *)gensym("clip");
  clip_class = class_new(extraout_XMM0_Qa_31,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar5,0x579a60,0,0x40,(char *)0x0,6,6,0);
  class_doaddfloat((long)clip_class,clip_float);
  class_addbang((long)clip_class,clip_bang);
  return;
}


