// Function : g_template_setup
// Namespace: 
// Entry    : 005262e0
// Prototype: undefined g_template_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005262e0 - 005265b2


void g_template_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint unaff_EBX;
  char *pcVar6;
  undefined8 uVar7;
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
  uint unaff_retaddr;
  uint in_stack_ffffffffffffffd8;
  uint uVar8;
  uint in_stack_ffffffffffffffe0;
  
  piVar4 = (int *)gensym("template");
  uVar7 = 0;
  template_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar4,0,PTR_template_free_00715e80,0x30,(char *)0x1,0,
                 in_stack_ffffffffffffffd8,in_stack_ffffffffffffffe0);
  plVar1 = *(long **)PTR_pd_canvasmaker_00715c00;
  piVar4 = (int *)gensym("struct");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x527d60,piVar4,10,(char *)0x0,uVar7,in_stack_ffffffffffffffd8);
  piVar4 = (int *)gensym("struct");
  uVar8 = 0;
  pcVar6 = &DAT_00000008;
  uVar7 = 10;
  gtemplate_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar4,0x527ee0,gtemplate_free,0x60,&DAT_00000008,10,0,
                 in_stack_ffffffffffffffe0);
  piVar4 = (int *)gensym("template");
  class_addcreator(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x528040,piVar4,10,0,pcVar6,uVar7,uVar8,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  piVar4 = (int *)gensym("drawpolygon");
  uVar8 = 0;
  pcVar6 = (char *)0x0;
  uVar7 = 10;
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_03),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x528310,curve_free,0xf0,(char *)0x0,10,
                     0,in_stack_ffffffffffffffe0);
  puVar3 = PTR_curve_class_00715840;
  *(undefined8 **)PTR_curve_class_00715840 = puVar5;
  class_setdrawcommand((long)puVar5);
  piVar4 = (int *)gensym("drawcurve");
  class_addcreator(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x528310,piVar4,10,0,pcVar6,uVar7,uVar8,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  piVar4 = (int *)gensym("filledpolygon");
  class_addcreator(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x528310,piVar4,10,0,pcVar6,uVar7,uVar8,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  piVar4 = (int *)gensym("filledcurve");
  class_addcreator(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x528310,piVar4,10,0,pcVar6,uVar7,uVar8,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  lVar2 = *(long *)puVar3;
  puVar5 = gensym("draw-shapes");
  class_sethelpsymbol(lVar2,puVar5);
  class_setparentwidget(*(long *)puVar3,PTR_curve_widgetbehavior_00715cf8);
  class_doaddfloat(*(long *)puVar3,PTR_curve_float_00715ee0);
  piVar4 = (int *)gensym("plot");
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_07),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x528a10,0,0x240,(char *)0x0,10,0,
                     in_stack_ffffffffffffffe0);
  puVar3 = PTR_plot_class_00715bb0;
  *(undefined8 **)PTR_plot_class_00715bb0 = puVar5;
  class_setdrawcommand((long)puVar5);
  class_doaddfloat(*(long *)puVar3,PTR_plot_float_00715b98);
  class_setparentwidget(*(long *)puVar3,PTR_plot_widgetbehavior_007154e0);
  piVar4 = (int *)gensym("drawtext");
  uVar8 = 0;
  pcVar6 = (char *)0x0;
  uVar7 = 10;
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_08),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x5292e0,drawnumber_free,0xe8,
                     (char *)0x0,10,0,in_stack_ffffffffffffffe0);
  puVar3 = PTR_drawnumber_class_007158f8;
  *(undefined8 **)PTR_drawnumber_class_007158f8 = puVar5;
  class_setdrawcommand((long)puVar5);
  class_doaddfloat(*(long *)puVar3,PTR_drawnumber_float_00715758);
  piVar4 = (int *)gensym("drawsymbol");
  class_addcreator(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5292e0,piVar4,10,0,pcVar6,uVar7,uVar8,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  piVar4 = (int *)gensym("drawnumber");
  class_addcreator(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5292e0,piVar4,10,0,pcVar6,uVar7,uVar8,
                   in_stack_ffffffffffffffe0,unaff_EBX,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_setparentwidget(*(long *)puVar3,PTR_drawnumber_widgetbehavior_00715ec0);
  return;
}


