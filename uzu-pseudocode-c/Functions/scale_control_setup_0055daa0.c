// Function : scale_control_setup
// Namespace: 
// Entry    : 0055daa0
// Prototype: undefined scale_control_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0055daa0 - 0055db41


void scale_control_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  int in_stack_00000008;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("scale");
  uVar3 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x55db50,scale_free,0x78,(char *)0x0,10,0,
                     in_stack_fffffffffffffff0);
  scale_class = plVar2;
  class_doaddfloat((long)plVar2,scale_ft);
  class_addbang((long)plVar2,scale_bang);
  class_addlist((long)plVar2,scale_list);
  piVar1 = (int *)gensym("classic");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x55e0d0,piVar1,6,(char *)0x0,uVar3,in_stack_00000008);
  return;
}


