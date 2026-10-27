// Function : obj_init
// Namespace: 
// Entry    : 00539a30
// Prototype: undefined obj_init(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00539a30 - 00539bfd


void obj_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint in_EAX;
  int *piVar1;
  undefined8 *puVar2;
  uint unaff_EBX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  
  piVar1 = (int *)gensym("inlet");
  inlet_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          piVar1,0,0,0x30,(char *)0x1,0,in_EAX,unaff_EBX);
  class_addbang((long)inlet_class,inlet_bang);
  class_addpointer((long)inlet_class,inlet_pointer);
  class_doaddfloat((long)inlet_class,inlet_float);
  class_addsymbol((long)inlet_class,inlet_symbol);
  class_addlist((long)inlet_class,inlet_list);
  class_addanything((long)inlet_class,inlet_anything);
  piVar1 = (int *)gensym("inlet");
  pointerinlet_class =
       class_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 0,0,0x30,(char *)0x1,0,in_EAX,unaff_EBX);
  class_addpointer((long)pointerinlet_class,pointerinlet_pointer);
  class_addanything((long)pointerinlet_class,inlet_wrong);
  piVar1 = (int *)gensym("inlet");
  floatinlet_class =
       class_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 0,0,0x30,(char *)0x1,0,in_EAX,unaff_EBX);
  class_doaddfloat((long)floatinlet_class,floatinlet_float);
  class_addanything((long)floatinlet_class,inlet_wrong);
  piVar1 = (int *)gensym("inlet");
  symbolinlet_class =
       class_new(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 0,0,0x30,(char *)0x1,0,in_EAX,unaff_EBX);
  class_addsymbol((long)symbolinlet_class,symbolinlet_symbol);
  class_addanything((long)symbolinlet_class,inlet_wrong);
  piVar1 = (int *)gensym("backtracer");
  puVar2 = class_new(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     piVar1,0,0,0x18,(char *)0x1,0,in_EAX,unaff_EBX);
  *(undefined8 **)PTR_backtracer_class_00715ba0 = puVar2;
  class_addanything((long)puVar2,backtracer_anything);
  return;
}


