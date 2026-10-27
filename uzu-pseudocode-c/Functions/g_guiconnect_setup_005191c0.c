// Function : g_guiconnect_setup
// Namespace: 
// Entry    : 005191c0
// Prototype: undefined g_guiconnect_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 005191c0 - 0051922d


void g_guiconnect_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  uint unaff_EBX;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  uint unaff_retaddr;
  int in_stack_00000008;
  
  piVar2 = (int *)gensym("guiconnect");
  pcVar3 = (char *)0x1;
  uVar4 = 0;
  guiconnect_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0,guiconnect_free,0x48,(char *)0x1,0,unaff_EBX,
                 unaff_retaddr);
  class_addanything((long)guiconnect_class,guiconnect_anything);
  plVar1 = guiconnect_class;
  piVar2 = (int *)gensym("signoff");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x519270,piVar2,0,pcVar3,uVar4,in_stack_00000008);
  return;
}


