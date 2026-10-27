// Function : x_time_setup
// Namespace: 
// Entry    : 0055bc40
// Prototype: undefined x_time_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0055bc40 - 0055c086


void x_time_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint in_EAX;
  int *piVar1;
  long *plVar2;
  uint unaff_EBX;
  char *pcVar3;
  undefined8 uVar4;
  uint unaff_R12D;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  uint unaff_retaddr;
  int in_stack_00000008;
  uint uVar5;
  
  piVar1 = (int *)gensym("delay");
  delay_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar1,0x55c090,delay_free,0x40,
                          (char *)0x0,6,6,7);
  piVar1 = (int *)gensym("del");
  pcVar3 = (char *)0x7;
  uVar4 = 0;
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x55c090,piVar1,6,6,(char *)0x7,0,in_EAX,unaff_EBX,
                   unaff_R12D,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_addbang((long)delay_class,delay_bang);
  plVar2 = delay_class;
  piVar1 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c1a0,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = delay_class;
  piVar1 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c1b0,piVar1,1,(char *)0x0,uVar4,in_EAX);
  plVar2 = delay_class;
  piVar1 = (int *)gensym("tempo");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c1d0,piVar1,1,(char *)0x2,0,in_EAX);
  class_doaddfloat((long)delay_class,delay_float);
  piVar1 = (int *)gensym("metro");
  pcVar3 = (char *)0x0;
  uVar4 = 6;
  metro_class = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_04),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar1,0x55c240,metro_free,0x48,
                          (char *)0x0,6,6,7);
  class_addbang((long)metro_class,metro_bang);
  plVar2 = metro_class;
  piVar1 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c390,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = metro_class;
  piVar1 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c3b0,piVar1,1,(char *)0x0,uVar4,in_EAX);
  plVar2 = metro_class;
  piVar1 = (int *)gensym("tempo");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c3e0,piVar1,1,(char *)0x2,0,in_EAX);
  class_doaddfloat((long)metro_class,metro_float);
  piVar1 = (int *)gensym("line");
  uVar4 = 6;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_08),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x55c4b0,line_free,0x70,(char *)0x0,6,6,
                     0);
  line_class = plVar2;
  piVar1 = (int *)gensym("ft1");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c5a0,piVar1,1,(char *)0x0,uVar4,in_EAX);
  plVar2 = line_class;
  piVar1 = (int *)gensym("stop");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c5c0,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = line_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c650,piVar1,1,(char *)0x0,uVar4,in_EAX);
  class_doaddfloat((long)line_class,line_float);
  piVar1 = (int *)gensym("timer");
  pcVar3 = (char *)0x0;
  uVar4 = 6;
  timer_class = class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_12),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,piVar1,0x55c870,0,0x48,(char *)0x0,6,7,0);
  class_addbang((long)timer_class,timer_bang);
  plVar2 = timer_class;
  piVar1 = (int *)gensym("bang2");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c980,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = timer_class;
  piVar1 = (int *)gensym("tempo");
  class_addmethod(extraout_XMM0_Da_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55c9c0,piVar1,1,(char *)0x2,0,in_EAX);
  uVar5 = 0x55bfe4;
  piVar1 = (int *)gensym("pipe");
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  pipe_class = class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_15),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar1,0x55ca30,pipe_free,0x58,(char *)0x0,
                         10,0,uVar5);
  class_addlist((long)pipe_class,pipe_list);
  plVar2 = pipe_class;
  piVar1 = (int *)gensym("flush");
  class_addmethod(extraout_XMM0_Da_16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55d0f0,piVar1,0,pcVar3,uVar4,in_EAX);
  plVar2 = pipe_class;
  piVar1 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55d110,piVar1,0,pcVar3,uVar4,in_stack_00000008);
  return;
}


