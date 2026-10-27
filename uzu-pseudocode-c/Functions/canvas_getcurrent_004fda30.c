// Function : canvas_getcurrent
// Namespace: 
// Entry    : 004fda30
// Prototype: undefined canvas_getcurrent(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004fda30 - 004fda58


void canvas_getcurrent(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *plVar1 + 0x120,*(long *)PTR_canvas_class_00715918);
  return;
}


