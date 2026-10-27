// Function : g_readwrite_setup
// Namespace: 
// Entry    : 0051c950
// Prototype: undefined g_readwrite_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0051c950 - 0051cb1b


void g_readwrite_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  uint in_EAX;
  int *piVar3;
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
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  int iVar5;
  
  piVar3 = (int *)gensym("savestate");
  savestate_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar3,0x51d590,0,0x48,(char *)0x0,0,in_EAX,unaff_EBX);
  class_addlist((long)savestate_class,savestate_list);
  puVar2 = PTR_canvas_class_00715918;
  plVar1 = *(long **)PTR_canvas_class_00715918;
  piVar3 = (int *)gensym("write");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x51cb20,piVar3,2,(char *)0x7,0,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("read");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_glist_read_00715b38,piVar3,2,(char *)0x7,0,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("mergefile");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_glist_mergefile_00715a70,piVar3,2,(char *)0x7,0,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("savetofile");
  iVar5 = 0;
  uVar4 = 6;
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x51cbf0,piVar3,2,(char *)0x2,6,0);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("saveto");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x51cfc0,piVar3,0xb,(char *)0x0,uVar4,iVar5);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("saved");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,(long)PTR_canvas_saved_007159a0,piVar3,10,(char *)0x0,uVar4,iVar5);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("menusave");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x51d3d0,piVar3,6,(char *)0x0,uVar4,iVar5);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("menusaveas");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x51d4d0,piVar3,6,(char *)0x0,uVar4,in_stack_00000008);
  return;
}


