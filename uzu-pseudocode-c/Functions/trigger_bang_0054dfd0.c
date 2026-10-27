// Function : trigger_bang
// Namespace: 
// Entry    : 0054dfd0
// Prototype: undefined trigger_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 0054dfd0 - 0054dff8


void trigger_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  uint *in_R8;
  uint *in_R9;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  trigger_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               (undefined8 *)(*plVar1 + 0xa8),0,(int *)0x0,in_R8,in_R9);
  return;
}


