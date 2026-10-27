// Function : loop_tilde_setup
// Namespace: 
// Entry    : 004e2170
// Prototype: undefined loop_tilde_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004e2170 - 004e2220


void loop_tilde_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  uint unaff_EBX;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar4;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("loop~");
  uVar3 = 0;
  plVar2 = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar1,0x4e2230,0,0x50,(char *)0x0,0,unaff_EBX,
                     unaff_retaddr);
  loop_class = plVar2;
  piVar1 = (int *)gensym("dsp");
  uVar4 = class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,plVar2,0x4e22c0,piVar1,0xb,(char *)0x0,uVar3,unaff_EBX);
  class_domainsignalin
            (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)loop_class,0x30);
  plVar2 = loop_class;
  piVar1 = (int *)gensym("set");
  class_addmethod(extraout_XMM0_Da_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2
                  ,0x4e2310,piVar1,6,(char *)0x0,uVar3,unaff_EBX);
  class_addbang((long)loop_class,loop_bang);
  return;
}


