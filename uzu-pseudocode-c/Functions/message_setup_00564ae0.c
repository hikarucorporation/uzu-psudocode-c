// Function : message_setup
// Namespace: 
// Entry    : 00564ae0
// Prototype: undefined message_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00564ae0 - 00564baf


void message_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  uint unaff_EBX;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  uint uVar5;
  
  piVar2 = (int *)gensym("message");
  uVar5 = 0;
  pcVar3 = (char *)0x0;
  uVar4 = 10;
  message_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x564bb0,message_free,0x70,(char *)0x0,10,0,unaff_EBX);
  class_addbang((long)message_class,message_output);
  class_addanything((long)message_class,message_any);
  plVar1 = message_class;
  piVar2 = (int *)gensym("click");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x564d70,piVar2,0,pcVar3,uVar4,uVar5);
  piVar2 = (int *)gensym("message proxy");
  message_proxy_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0,0,0x10,(char *)0x0,0,uVar5,unaff_EBX);
  class_addanything((long)message_proxy_class,message_proxy_anything);
  return;
}


