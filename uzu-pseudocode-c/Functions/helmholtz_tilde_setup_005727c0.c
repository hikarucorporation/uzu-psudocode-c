// Function : helmholtz_tilde_setup
// Namespace: 
// Entry    : 005727c0
// Prototype: undefined helmholtz_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005727c0 - 0057295e


void helmholtz_tilde_setup
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  piVar3 = (int *)gensym("helmholtz~");
  pcVar5 = (char *)0x0;
  uVar6 = 6;
  puVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0x572960,helmholtz_free,0x70,(char *)0x0,6,6,0);
  puVar2 = PTR_helmholtz_class_00715488;
  *(undefined8 **)PTR_helmholtz_class_00715488 = puVar4;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)puVar4,0x30);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x572aa0,piVar3,0,pcVar5,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("framesize");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x572ae0,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("overlap");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x572af0,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("bias");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x572b00,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("fidelity");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x572b10,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("maxfreq");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x572b30,piVar3,1,(char *)0x0,uVar6,in_EAX);
  plVar1 = *(long **)puVar2;
  piVar3 = (int *)gensym("sens");
  uVar6 = class_addmethod(extraout_XMM0_Da_07,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar1,0x572b50,piVar3,1,(char *)0x0,uVar6,in_EAX);
  uVar6 = post(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "helmholtz~ pitch tracker version 1.0, written by Katja Vetter");
  post(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "helmholtz~ uses SNAC function as invented by Philip McLeod");
  return;
}


