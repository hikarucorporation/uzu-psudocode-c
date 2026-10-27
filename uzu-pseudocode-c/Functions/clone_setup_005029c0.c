// Function : clone_setup
// Namespace: 
// Entry    : 005029c0
// Prototype: undefined clone_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005029c0 - 00502c76


void clone_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  uint in_EAX;
  int *piVar2;
  long *plVar3;
  uint unaff_EBX;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  uint uVar5;
  
  uVar5 = 0x5029d0;
  piVar2 = (int *)gensym("clone");
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar2,0x502c80,clone_free,0x90,(char *)0x18,10,0,uVar5
                    );
  puVar1 = PTR_clone_class_00715970;
  *(long **)PTR_clone_class_00715970 = plVar3;
  piVar2 = (int *)gensym("click");
  uVar4 = 1;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x503440,piVar2,1,(char *)0x1,1,1);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x503460,piVar2,1,(char *)0x0,uVar4,in_EAX);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x5034b0,piVar2,0xb,(char *)0x0,uVar4,in_EAX);
  piVar2 = (int *)gensym("clone-inlet");
  uVar4 = 0;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_03),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar2,0,0,0x18,(char *)0x1,0,in_EAX,unaff_EBX)
  ;
  clone_in_class = plVar3;
  piVar2 = (int *)gensym("next");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x503e70,piVar2,10,(char *)0x0,uVar4,in_EAX);
  plVar3 = clone_in_class;
  piVar2 = (int *)gensym("this");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x503f10,piVar2,10,(char *)0x0,uVar4,in_EAX);
  plVar3 = clone_in_class;
  piVar2 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x503fa0,piVar2,1,(char *)0x0,uVar4,in_EAX);
  plVar3 = clone_in_class;
  piVar2 = (int *)gensym("all");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x503fc0,piVar2,10,(char *)0x0,uVar4,in_EAX);
  plVar3 = clone_in_class;
  piVar2 = (int *)gensym("vis");
  uVar4 = 0;
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x504120,piVar2,1,(char *)0x1,0,in_EAX);
  plVar3 = clone_in_class;
  piVar2 = (int *)gensym("fwd");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x504170,piVar2,10,(char *)0x0,uVar4,in_EAX);
  plVar3 = clone_in_class;
  piVar2 = (int *)gensym("resize");
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x504190,piVar2,1,(char *)0x0,uVar4,in_EAX);
  class_addlist((long)clone_in_class,clone_in_list);
  piVar2 = (int *)gensym("clone-outlet");
  clone_out_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_11),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0,0,0x18,(char *)0x1,0,in_EAX,unaff_EBX);
  class_addanything((long)clone_out_class,clone_out_anything);
  return;
}


