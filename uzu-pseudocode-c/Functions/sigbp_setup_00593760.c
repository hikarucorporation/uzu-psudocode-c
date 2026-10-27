// Function : sigbp_setup
// Namespace: 
// Entry    : 00593760
// Prototype: undefined sigbp_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00593760 - 0059385c


void sigbp_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined *puVar2;
  int in_EAX;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int in_stack_00000008;
  
  piVar3 = (int *)gensym("bp~");
  uVar6 = 6;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0x593860,0,0x58,(char *)0x0,6,6,0);
  puVar2 = PTR_sigbp_class_00715800;
  *(undefined8 **)PTR_sigbp_class_00715800 = puVar4;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar4,0x50);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x593a20,piVar3,0xb,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("ft1");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x593b50,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("ft2");
  pcVar5 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x593c50,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x593d50,piVar3,0,pcVar5,uVar6,in_stack_00000008);
  return;
}


