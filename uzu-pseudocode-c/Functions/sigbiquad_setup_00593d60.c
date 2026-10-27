// Function : sigbiquad_setup
// Namespace: 
// Entry    : 00593d60
// Prototype: undefined sigbiquad_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00593d60 - 00593e4b


void sigbiquad_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int in_stack_00000008;
  int iVar6;
  uint in_stack_ffffffffffffffe0;
  
  piVar3 = (int *)gensym("biquad~");
  iVar6 = 0;
  uVar5 = 10;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0x593e50,0,0x50,(char *)0x0,10,0,
                     in_stack_ffffffffffffffe0);
  puVar2 = PTR_sigbiquad_class_00715c48;
  *(undefined8 **)PTR_sigbiquad_class_00715c48 = puVar4;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar4,0x30);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x593ec0,piVar3,0xb,(char *)0x0,uVar5,iVar6);
  class_addlist(*(long *)puVar2,sigbiquad_list);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x594030,piVar3,10,(char *)0x0,uVar5,iVar6);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x594030,piVar3,10,(char *)0x0,uVar5,in_stack_00000008);
  return;
}


