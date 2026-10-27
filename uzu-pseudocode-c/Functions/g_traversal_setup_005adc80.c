// Function : g_traversal_setup
// Namespace: 
// Entry    : 005adc80
// Prototype: undefined g_traversal_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005adc80 - 005ae199


void g_traversal_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  int in_stack_00000008;
  int iVar5;
  uint in_stack_ffffffffffffffe0;
  uint uVar6;
  
  piVar1 = (int *)gensym("pointer");
  iVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x5ae1a0,ptrobj_free,0x68,(char *)0x0,10,0,
                     in_stack_ffffffffffffffe0);
  ptrobj_class = plVar2;
  piVar1 = (int *)gensym("next");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ae310,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = ptrobj_class;
  piVar1 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ae320,piVar1,2,(char *)0x0,uVar4,iVar5);
  plVar2 = ptrobj_class;
  piVar1 = (int *)gensym("traverse");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ae390,piVar1,2,(char *)0x0,uVar4,iVar5);
  plVar2 = ptrobj_class;
  piVar1 = (int *)gensym("vnext");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ae3f0,piVar1,6,(char *)0x0,uVar4,iVar5);
  plVar2 = ptrobj_class;
  piVar1 = (int *)gensym("delete");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ae580,piVar1,0,pcVar3,uVar4,iVar5);
  plVar2 = ptrobj_class;
  piVar1 = (int *)gensym("equal");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ae700,piVar1,3,(char *)0x0,uVar4,iVar5);
  plVar2 = ptrobj_class;
  piVar1 = (int *)gensym("send-window");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ae7b0,piVar1,10,(char *)0x0,uVar4,iVar5);
  plVar2 = ptrobj_class;
  piVar1 = (int *)gensym("rewind");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5ae840,piVar1,0,pcVar3,uVar4,iVar5);
  class_addpointer((long)ptrobj_class,ptrobj_pointer);
  class_addbang((long)ptrobj_class,ptrobj_bang);
  piVar1 = (int *)gensym("get");
  iVar5 = 0;
  get_class = class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_08),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,piVar1,0x5aea20,get_free,0x48,(char *)0x0,10
                        ,0,in_stack_ffffffffffffffe0);
  class_addpointer((long)get_class,get_pointer);
  plVar2 = get_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5aed30,piVar1,2,(char *)0x2,0,iVar5);
  piVar1 = (int *)gensym("set");
  iVar5 = 0;
  set_class = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_10),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,piVar1,0x5aedb0,set_free,0x60,(char *)0x0,10
                        ,0,in_stack_ffffffffffffffe0);
  class_doaddfloat((long)set_class,set_float);
  class_addsymbol((long)set_class,set_symbol);
  class_addbang((long)set_class,set_bang);
  plVar2 = set_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5af230,piVar1,2,(char *)0x2,0,iVar5);
  piVar1 = (int *)gensym("element");
  iVar5 = 7;
  elem_class = class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_12),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,piVar1,0x5af2e0,elem_free,0x70,(char *)0x0,
                         7,7,0);
  class_doaddfloat((long)elem_class,elem_float);
  plVar2 = elem_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5af560,piVar1,2,(char *)0x2,0,iVar5);
  piVar1 = (int *)gensym("getsize");
  iVar5 = 7;
  getsize_class =
       class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_14),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x5af5c0,0,0x40,(char *)0x0,7,7,0);
  class_addpointer((long)getsize_class,getsize_pointer);
  plVar2 = getsize_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5af7a0,piVar1,2,(char *)0x2,0,iVar5);
  piVar1 = (int *)gensym("setsize");
  uVar6 = 6;
  iVar5 = 7;
  setsize_class =
       class_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_16),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar1,0x5af800,setsize_free,0x58,(char *)0x0,7,7,6);
  class_doaddfloat((long)setsize_class,setsize_float);
  plVar2 = setsize_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5afbf0,piVar1,2,(char *)0x2,0,iVar5);
  piVar1 = (int *)gensym("append");
  append_class = class_new(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_18),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,piVar1,0x5afc50,append_free,0x60,
                           (char *)0x0,10,0,uVar6);
  class_doaddfloat((long)append_class,append_float);
  plVar2 = append_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_19,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5affd0,piVar1,2,(char *)0x2,0,in_stack_00000008);
  return;
}


