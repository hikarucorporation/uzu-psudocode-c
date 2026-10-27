// Function : x_scalar_setup
// Namespace: 
// Entry    : 00583200
// Prototype: undefined x_scalar_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00583200 - 005832f8


void x_scalar_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  uint in_EAX;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint unaff_EBX;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  uint in_stack_00000008;
  uint in_stack_00000010;
  uint in_stack_00000018;
  uint in_stack_00000020;
  uint in_stack_00000028;
  uint in_stack_00000030;
  
  piVar3 = (int *)gensym("scalar define");
  uVar7 = 0;
  plVar4 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar3,0,PTR_canvas_free_00715480,0xf8,(char *)0x0,0,
                     in_EAX,unaff_EBX);
  puVar2 = PTR_scalar_define_class_007154f0;
  *(long **)PTR_scalar_define_class_007154f0 = plVar4;
  canvas_add_for_class
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,plVar4);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("send");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x583300,piVar3,2,(char *)0x0,uVar7,in_EAX);
  class_addbang(*(long *)puVar2,scalar_define_bang);
  plVar4 = *(long **)puVar2;
  piVar3 = (int *)gensym("set");
  pcVar6 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4
                  ,0x583410,piVar3,10,(char *)0x0,uVar7,in_EAX);
  lVar1 = *(long *)puVar2;
  puVar5 = gensym("scalar-object");
  class_sethelpsymbol(lVar1,puVar5);
  class_setsavefn(*(long *)puVar2,scalar_define_save);
  piVar3 = (int *)gensym("scalar");
  class_addcreator(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,0x5835e0,piVar3,10,0,pcVar6,uVar7,in_stack_00000008,
                   in_stack_00000010,in_stack_00000018,in_stack_00000020,in_stack_00000028,
                   in_stack_00000030);
  return;
}


