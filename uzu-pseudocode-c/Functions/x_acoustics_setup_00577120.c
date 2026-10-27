// Function : x_acoustics_setup
// Namespace: 
// Entry    : 00577120
// Prototype: undefined x_acoustics_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00577120 - 0057730a


void x_acoustics_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int *piVar2;
  uint unaff_EBX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  uint unaff_retaddr;
  
  puVar1 = gensym("acoustics.pd");
  piVar2 = (int *)gensym("mtof");
  mtof_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         piVar2,0x577310,0,0x30,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_doaddfloat((long)mtof_class,mtof_float);
  class_sethelpsymbol((long)mtof_class,puVar1);
  piVar2 = (int *)gensym("ftom");
  ftom_class = class_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,piVar2,0x5773b0,0,0x30,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_doaddfloat((long)ftom_class,ftom_float);
  class_sethelpsymbol((long)ftom_class,puVar1);
  piVar2 = (int *)gensym("powtodb");
  powtodb_class =
       class_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,
                 0x577440,0,0x30,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_doaddfloat((long)powtodb_class,powtodb_float);
  class_sethelpsymbol((long)powtodb_class,puVar1);
  piVar2 = (int *)gensym("rmstodb");
  rmstodb_class =
       class_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,
                 0x5774d0,0,0x30,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_doaddfloat((long)rmstodb_class,rmstodb_float);
  class_sethelpsymbol((long)rmstodb_class,puVar1);
  piVar2 = (int *)gensym("dbtopow");
  dbtopow_class =
       class_new(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,
                 0x577560,0,0x30,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_doaddfloat((long)dbtopow_class,dbtopow_float);
  class_sethelpsymbol((long)dbtopow_class,puVar1);
  piVar2 = (int *)gensym("dbtorms");
  dbtorms_class =
       class_new(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,
                 0x5775f0,0,0x30,(char *)0x0,0,unaff_EBX,unaff_retaddr);
  class_doaddfloat((long)dbtorms_class,dbtorms_float);
  class_sethelpsymbol((long)dbtorms_class,puVar1);
  return;
}


