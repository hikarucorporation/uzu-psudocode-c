// Function : d_filter_setup
// Namespace: 
// Entry    : 00595000
// Prototype: undefined d_filter_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00595000 - 00595181


void d_filter_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  int *piVar3;
  undefined8 *puVar4;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  int in_stack_00000008;
  int iVar7;
  uint in_stack_ffffffffffffffe0;
  
  sighip_setup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar3 = (int *)gensym("lop~");
  iVar7 = 0;
  uVar6 = 6;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0x593660,0,0x48,(char *)0x20,6,0,
                     in_stack_ffffffffffffffe0);
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
  uVar6 = class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar1,0x593750,piVar3,0,pcVar5,uVar6,iVar7);
  uVar6 = sigbp_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = sigbiquad_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = sigsamphold_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = sigrpole_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = sigrzero_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = sigrzero_rev_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = sigcpole_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = sigczero_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  sigczero_rev_setup(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  piVar3 = (int *)gensym("slop~");
  iVar7 = 0;
  uVar6 = 10;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar3,0x594ea0,0,0x58,(char *)0x0,10,0,
                     in_stack_ffffffffffffffe0);
  puVar2 = PTR_slop_tilde_class_00715430;
  *(undefined8 **)PTR_slop_tilde_class_00715430 = puVar4;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar4,0x30);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x594f60,piVar3,0xb,(char *)0x0,uVar6,iVar7);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x594ff0,piVar3,1,(char *)0x0,uVar6,in_stack_00000008);
  return;
}


