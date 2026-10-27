// Function : g_array_setup
// Namespace: 
// Entry    : 004fabe0
// Prototype: undefined g_array_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004fabe0 - 004fb092


void g_array_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  uint in_EAX;
  int *piVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  char *pcVar5;
  undefined8 uVar6;
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
  undefined4 extraout_XMM0_Db;
  
  piVar3 = (int *)gensym("array");
  uVar6 = 0;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0,garray_free,0x38,(char *)0x2,0,in_EAX,
                     unaff_EBX);
  puVar2 = PTR_garray_class_00715780;
  *(undefined8 **)PTR_garray_class_00715780 = puVar4;
  class_setwidget((long)puVar4,PTR_garray_widgetbehavior_007156e8);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("const");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb170,piVar3,6,(char *)0x0,uVar6,in_EAX);
  class_addlist(*(long *)puVar2,garray_list);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("bounds");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb430,piVar3,1,(char *)0x1,1,1);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("xticks");
  uVar6 = 1;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb4a0,piVar3,1,(char *)0x1,1,0);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("xlabel");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb500,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("yticks");
  uVar6 = 1;
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb510,piVar3,1,(char *)0x1,1,0);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("ylabel");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb570,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("style");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb580,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("width");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb710,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("color");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb820,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("vis");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fb910,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("rename");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fba30,piVar3,2,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("read");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fbae0,piVar3,2,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("write");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fbd90,piVar3,2,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("resize");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fbed0,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("zoom");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fbee0,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("edit");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fbef0,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fbf10,piVar3,0,pcVar5,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("sinesum");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fbf40,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("cosinesum");
  class_addmethod(extraout_XMM0_Da_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fc020,piVar3,10,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("normalize");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fc100,piVar3,6,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("arraydialog");
  pcVar5 = (char *)0x1;
  uVar6 = 1;
  class_addmethod(extraout_XMM0_Da_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_garray_arraydialog_00715690,piVar3,2,(char *)0x1,1,1);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("arrayviewlistnew");
  class_addmethod(extraout_XMM0_Da_21,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fc370,piVar3,0,pcVar5,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("arrayviewlistfillpage");
  pcVar5 = (char *)0x6;
  uVar6 = 0;
  class_addmethod(extraout_XMM0_Da_22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fc3f0,piVar3,1,(char *)0x6,0,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("arrayviewclose");
  class_addmethod(extraout_XMM0_Da_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4fa4f0,piVar3,0,pcVar5,uVar6,in_EAX);
  class_setsavefn(*(long *)puVar2,garray_save);
  return;
}


