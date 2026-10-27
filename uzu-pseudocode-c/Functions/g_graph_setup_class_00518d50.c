// Function : g_graph_setup_class
// Namespace: 
// Entry    : 00518d50
// Prototype: undefined g_graph_setup_class(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00518d50 - 00518edc


void g_graph_setup_class(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long *param_9)

{
  int *piVar1;
  int unaff_EBX;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  int in_stack_00000008;
  
  class_setwidget((long)param_9,PTR_graph_widgetbehavior_00715e10);
  piVar1 = (int *)gensym("bounds");
  class_addmethod(extraout_XMM0_Da,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  0x518ee0,piVar1,1,(char *)0x1,1,1);
  piVar1 = (int *)gensym("xticks");
  uVar3 = 1;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x518f30,piVar1,1,(char *)0x1,1,0);
  piVar1 = (int *)gensym("xlabel");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x518f50,piVar1,10,(char *)0x0,uVar3,unaff_EBX);
  piVar1 = (int *)gensym("yticks");
  uVar3 = 1;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x519010,piVar1,1,(char *)0x1,1,0);
  piVar1 = (int *)gensym("ylabel");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x519030,piVar1,10,(char *)0x0,uVar3,unaff_EBX);
  piVar1 = (int *)gensym("array");
  pcVar2 = (char *)0x1;
  uVar3 = 2;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,0x5190f0,piVar1,2,(char *)0x1,2,6);
  piVar1 = (int *)gensym("menuarray");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,(long)PTR_canvas_menuarray_007158e8,piVar1,0,pcVar2,uVar3,unaff_EBX);
  piVar1 = (int *)gensym("sort");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  param_9,(long)PTR_glist_sort_00715a88,piVar1,0,pcVar2,uVar3,in_stack_00000008);
  return;
}


