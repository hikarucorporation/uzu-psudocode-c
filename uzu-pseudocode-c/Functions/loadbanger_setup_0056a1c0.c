// Function : loadbanger_setup
// Namespace: 
// Entry    : 0056a1c0
// Prototype: undefined loadbanger_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0056a1c0 - 0056a29c


void loadbanger_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  int unaff_EBX;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  uint uVar4;
  
  uVar4 = 0x56a1cd;
  piVar2 = (int *)gensym("loadbanger");
  uVar3 = 10;
  loadbanger_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x56a2a0,loadbanger_free,0x58,(char *)0x0,10,0,uVar4);
  class_addbang((long)loadbanger_class,loadbanger_bang);
  class_addanything((long)loadbanger_class,loadbanger_anything);
  plVar1 = loadbanger_class;
  piVar2 = (int *)gensym("loadbang");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x56a510,piVar2,6,(char *)0x0,uVar3,unaff_EBX);
  plVar1 = loadbanger_class;
  piVar2 = (int *)gensym("click");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x56a5b0,piVar2,1,(char *)0x1,1,1);
  return;
}


