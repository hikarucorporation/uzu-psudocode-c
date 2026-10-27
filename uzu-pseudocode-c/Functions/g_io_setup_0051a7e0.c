// Function : g_io_setup
// Namespace: 
// Entry    : 0051a7e0
// Prototype: undefined g_io_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0051a7e0 - 0051aa36


void g_io_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  uint unaff_retaddr;
  uint uVar8;
  
  piVar4 = (int *)gensym("inlet");
  uVar8 = 0;
  pcVar6 = (char *)0x18;
  uVar7 = 7;
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar4,0x51aa40,vinlet_free,0x78,(char *)0x18,7,0,
                     unaff_EBX);
  puVar3 = PTR_vinlet_class_00715ab8;
  *(undefined8 **)PTR_vinlet_class_00715ab8 = puVar5;
  piVar4 = (int *)gensym("inlet~");
  class_addcreator(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x51ab40,piVar4,10,0,pcVar6,uVar7,uVar8,unaff_EBX,
                   unaff_R12D,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_addbang(*(long *)puVar3,vinlet_bang);
  class_addpointer(*(long *)puVar3,vinlet_pointer);
  class_doaddfloat(*(long *)puVar3,vinlet_float);
  class_addsymbol(*(long *)puVar3,vinlet_symbol);
  class_addlist(*(long *)puVar3,vinlet_list);
  class_addanything(*(long *)puVar3,vinlet_anything);
  plVar1 = *(long **)puVar3;
  piVar4 = (int *)gensym("fwd");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x51ad20,piVar4,10,(char *)0x0,uVar7,uVar8);
  plVar1 = *(long **)puVar3;
  piVar4 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x51ad60,piVar4,0xb,(char *)0x0,uVar7,uVar8);
  lVar2 = *(long *)puVar3;
  puVar5 = gensym("inlet-outlet");
  class_sethelpsymbol(lVar2,puVar5);
  piVar4 = (int *)gensym("outlet");
  uVar8 = 0;
  pcVar6 = (char *)0x18;
  uVar7 = 7;
  puVar5 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar4,0x51ae50,voutlet_free,0x78,(char *)0x18,
                     7,0,unaff_EBX);
  puVar3 = PTR_voutlet_class_00715fc0;
  *(undefined8 **)PTR_voutlet_class_00715fc0 = puVar5;
  piVar4 = (int *)gensym("outlet~");
  class_addcreator(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x51af50,piVar4,7,0,pcVar6,uVar7,uVar8,unaff_EBX,
                   unaff_R12D,unaff_R14D,unaff_R15D,unaff_retaddr);
  class_addbang(*(long *)puVar3,voutlet_bang);
  class_addpointer(*(long *)puVar3,voutlet_pointer);
  class_doaddfloat(*(long *)puVar3,voutlet_float);
  class_addsymbol(*(long *)puVar3,voutlet_symbol);
  class_addlist(*(long *)puVar3,voutlet_list);
  class_addanything(*(long *)puVar3,voutlet_anything);
  plVar1 = *(long **)puVar3;
  piVar4 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x51b0d0,piVar4,0xb,(char *)0x0,uVar7,uVar8);
  lVar2 = *(long *)puVar3;
  puVar5 = gensym("inlet-outlet");
  class_sethelpsymbol(lVar2,puVar5);
  return;
}


