// Function : lrshift_tilde_setup
// Namespace: 
// Entry    : 004e24d0
// Prototype: undefined lrshift_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004e24d0 - 004e254d


void lrshift_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  long *plVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int in_stack_00000008;
  uint in_stack_fffffffffffffff0;
  
  piVar2 = (int *)gensym("lrshift~");
  pcVar3 = (char *)0x10;
  uVar4 = 6;
  lrshift_tilde_class =
       class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,piVar2,0x4e2550,0,0x38,(char *)0x10,6,0,in_stack_fffffffffffffff0)
  ;
  class_domainsignalin
            (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)lrshift_tilde_class,0x34);
  plVar1 = lrshift_tilde_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x4e25a0,piVar2,0,pcVar3,uVar4,in_stack_00000008);
  return;
}


