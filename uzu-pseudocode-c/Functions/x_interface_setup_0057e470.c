// Function : x_interface_setup
// Namespace: 
// Entry    : 0057e470
// Prototype: undefined x_interface_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0057e470 - 0057e551


void x_interface_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("print");
  print_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          piVar1,0x57e560,0,0x38,(char *)0x0,10,0,unaff_retaddr);
  class_addbang((long)print_class,print_bang);
  class_doaddfloat((long)print_class,print_float);
  class_addpointer((long)print_class,print_pointer);
  class_addlist((long)print_class,print_list);
  class_addanything((long)print_class,print_anything);
  piVar1 = (int *)gensym("trace");
  trace_class = class_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,piVar1,0x57ee20,0,0x40,(char *)0x0,7,0,unaff_retaddr);
  class_addanything((long)trace_class,trace_anything);
  return;
}


