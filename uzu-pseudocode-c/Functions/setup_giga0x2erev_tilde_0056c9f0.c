// Function : setup_giga0x2erev_tilde
// Namespace: 
// Entry    : 0056c9f0
// Prototype: undefined setup_giga0x2erev_tilde(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0056c9f0 - 0056cc5a


void setup_giga0x2erev_tilde
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  uint unaff_EBX;
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
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  int iVar6;
  
  piVar2 = (int *)gensym("giga.rev~");
  iVar6 = 0;
  pcVar4 = (char *)0x0;
  uVar5 = 10;
  plVar3 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar2,(long)PTR_gverb_new_00715bb8,
                     PTR_gverb_free_00715c78,0xd8,(char *)0x0,10,0,unaff_EBX);
  puVar1 = PTR_gverb_class_00715a20;
  *(long **)PTR_gverb_class_00715a20 = plVar3;
  piVar2 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_nullfn_00715950,piVar2,0,pcVar4,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_gverb_dsp_00715958,piVar2,0xb,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("spread");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56cc60,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("size");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56d140,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("decay");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56d310,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("damp");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56d450,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("bw");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56d490,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("dry");
  class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56d4c0,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("wet");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56d4e0,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("early");
  class_addmethod(extraout_XMM0_Da_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56d500,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("late");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,0x56d520,piVar2,1,(char *)0x0,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_gverb_clear_00715d88,piVar2,0,pcVar4,uVar5,iVar6);
  plVar3 = *(long **)puVar1;
  piVar2 = (int *)gensym("print");
  class_addmethod(extraout_XMM0_Da_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3
                  ,(long)PTR_gverb_print_00715ed8,piVar2,0,pcVar4,uVar5,in_stack_00000008);
  return;
}


