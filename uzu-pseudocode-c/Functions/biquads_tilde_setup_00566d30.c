// Function : biquads_tilde_setup
// Namespace: 
// Entry    : 00566d30
// Prototype: undefined biquads_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00566d30 - 00566e26


void biquads_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        )

{
  int *piVar1;
  long *plVar2;
  uint unaff_EBX;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("biquads~");
  pcVar3 = (char *)0x0;
  uVar4 = 0;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,(long)PTR_biquads_new_00715a50,biquads_free,
                     0xe60,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  biquads_class = plVar2;
  piVar1 = (int *)gensym("signal");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_nullfn_00715950,piVar1,0,pcVar3,uVar4,unaff_EBX);
  plVar2 = biquads_class;
  piVar1 = (int *)gensym("dsp");
  pcVar3 = (char *)0x0;
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x566e50,piVar1,0xb,(char *)0x0,uVar4,unaff_EBX);
  plVar2 = biquads_class;
  piVar1 = (int *)gensym("clear");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_biquads_clear_00715e40,piVar1,0,pcVar3,uVar4,unaff_EBX);
  plVar2 = biquads_class;
  piVar1 = (int *)gensym("bypass");
  class_addmethod(extraout_XMM0_Da_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,(long)PTR_biquads_bypass_007155d8,piVar1,6,(char *)0x0,uVar4,unaff_EBX);
  class_addlist((long)biquads_class,biquads_list);
  return;
}


