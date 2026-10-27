// Function : oscformat_setup
// Namespace: 
// Entry    : 0057fa70
// Prototype: undefined oscformat_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0057fa70 - 0057fb44


void oscformat_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  int iVar5;
  uint in_stack_fffffffffffffff0;
  
  piVar1 = (int *)gensym("oscformat");
  iVar5 = 0;
  uVar4 = 10;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x57fb50,oscformat_free,0x48,(char *)0x0,10,0,
                     in_stack_fffffffffffffff0);
  oscformat_class = plVar2;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x57fc70,piVar1,10,(char *)0x0,uVar4,iVar5);
  plVar2 = oscformat_class;
  piVar1 = (int *)gensym("format");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x57fd40,piVar1,7,(char *)0x0,uVar4,iVar5);
  class_addlist((long)oscformat_class,oscformat_list);
  plVar2 = oscformat_class;
  puVar3 = gensym("osc-format-parse");
  class_sethelpsymbol((long)plVar2,puVar3);
  return;
}


