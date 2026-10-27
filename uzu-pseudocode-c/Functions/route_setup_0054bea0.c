// Function : route_setup
// Namespace: 
// Entry    : 0054bea0
// Prototype: undefined route_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0054bea0 - 0054bf03


void route_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 extraout_XMM0_Qa;
  uint unaff_retaddr;
  
  piVar1 = (int *)gensym("route");
  route_class = class_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          piVar1,0x54bf10,route_free,0x48,(char *)0x0,10,0,unaff_retaddr);
  class_addlist((long)route_class,route_list);
  class_addanything((long)route_class,route_anything);
  return;
}


