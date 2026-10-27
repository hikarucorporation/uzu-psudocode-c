// Function : x_net_setup
// Namespace: 
// Entry    : 00581360
// Prototype: undefined x_net_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00581360 - 0058155b


void x_net_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
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
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int iVar6;
  uint in_stack_ffffffffffffffe0;
  
  piVar1 = (int *)gensym("netsend");
  iVar6 = 0;
  uVar5 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x581560,netsend_free,0xe8,(char *)0x0,10,0,
                     in_stack_ffffffffffffffe0);
  netsend_class = plVar2;
  piVar1 = (int *)gensym("connect");
  pcVar4 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5817b0,piVar1,10,(char *)0x0,uVar5,iVar6);
  plVar2 = netsend_class;
  piVar1 = (int *)gensym("disconnect");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x581c00,piVar1,0,pcVar4,uVar5,iVar6);
  plVar2 = netsend_class;
  piVar1 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x581c80,piVar1,10,(char *)0x0,uVar5,iVar6);
  class_addlist((long)netsend_class,netsend_send);
  plVar2 = netsend_class;
  piVar1 = (int *)gensym("timeout");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x581d20,piVar1,6,(char *)0x0,uVar5,iVar6);
  plVar2 = netsend_class;
  puVar3 = gensym("netsend-receive");
  class_sethelpsymbol((long)plVar2,puVar3);
  piVar1 = (int *)gensym("netreceive");
  iVar6 = 0;
  uVar5 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_04),param_2,param_3,param_4,
                     param_5,param_6,param_7,param_8,piVar1,0x582700,netreceive_free,0x108,
                     (char *)0x0,10,0,in_stack_ffffffffffffffe0);
  netreceive_class = plVar2;
  piVar1 = (int *)gensym("listen");
  class_addmethod(extraout_XMM0_Da_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x5829b0,piVar1,10,(char *)0x0,uVar5,iVar6);
  plVar2 = netreceive_class;
  piVar1 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x582e90,piVar1,10,(char *)0x0,uVar5,iVar6);
  class_addlist((long)netreceive_class,netreceive_send);
  plVar2 = netreceive_class;
  puVar3 = gensym("netsend-receive");
  class_sethelpsymbol((long)plVar2,puVar3);
  return;
}


