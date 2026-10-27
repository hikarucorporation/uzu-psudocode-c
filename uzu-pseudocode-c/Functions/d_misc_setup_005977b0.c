// Function : d_misc_setup
// Namespace: 
// Entry    : 005977b0
// Prototype: undefined d_misc_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005977b0 - 005979f7


void d_misc_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  uint in_stack_00000028;
  uint in_stack_00000030;
  uint uVar6;
  int iVar7;
  uint in_stack_ffffffffffffffe0;
  
  piVar1 = (int *)gensym("print~");
  uVar6 = 0;
  uVar5 = 7;
  print_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar1,0x597a00,0,0x48,(char *)0x0,7,0,
                          in_stack_ffffffffffffffe0);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)print_class,0x30);
  plVar2 = print_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x597a50,piVar1,0xb,(char *)0x0,uVar5,uVar6);
  class_addbang((long)print_class,print_bang);
  class_doaddfloat((long)print_class,print_float);
  piVar1 = (int *)gensym("bang~");
  pcVar4 = (char *)0x0;
  uVar5 = 0;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_02),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x597b30,bang_tilde_free,0x38,
                     (char *)0x0,0,uVar6,in_stack_ffffffffffffffe0);
  bang_tilde_class = plVar2;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x597b90,piVar1,0,pcVar4,uVar5,uVar6);
  piVar1 = (int *)gensym("snake_in~");
  iVar7 = 0;
  pcVar4 = (char *)0x10;
  uVar5 = 6;
  snake_in_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x597be0,0,0x38,(char *)0x10,6,0,
                 in_stack_ffffffffffffffe0);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)snake_in_tilde_class,0x30);
  plVar2 = snake_in_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x597c80,piVar1,0,pcVar4,uVar5,iVar7);
  plVar2 = snake_in_tilde_class;
  puVar3 = gensym("snake-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("snake_out~");
  iVar7 = 0;
  pcVar4 = (char *)0x10;
  uVar5 = 6;
  snake_out_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x597cf0,0,0x38,(char *)0x10,6,0,
                 in_stack_ffffffffffffffe0);
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)snake_out_tilde_class,0x30);
  plVar2 = snake_out_tilde_class;
  piVar1 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x597d70,piVar1,0,pcVar4,uVar5,iVar7);
  plVar2 = snake_out_tilde_class;
  puVar3 = gensym("snake-tilde");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("snake~");
  class_addcreator(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x597e10,piVar1,10,0,pcVar4,uVar5,in_stack_00000008,
                   in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000028,
                   in_stack_00000030);
  return;
}


