// Function : siglop_setup
// Namespace: 
// Entry    : 005935b0
// Prototype: undefined siglop_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005935b0 - 00593658


void siglop_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint unaff_EBX;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int in_stack_00000008;
  int iVar7;
  
  piVar3 = (int *)gensym("lop~");
  iVar7 = 0;
  uVar6 = 6;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0x593660,0,0x48,(char *)0x20,6,0,unaff_EBX);
  puVar2 = PTR_siglop_class_00715988;
  *(undefined8 **)PTR_siglop_class_00715988 = puVar4;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar4,0x40);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5936d0,piVar3,0xb,(char *)0x0,uVar6,iVar7);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x593750,piVar3,0,pcVar5,uVar6,in_stack_00000008);
  return;
}


