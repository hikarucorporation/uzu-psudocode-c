// Function : tabread4_new
// Namespace: 
// Entry    : 0058e790
// Prototype: long * tabread4_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058e790 - 0058e7d3


long * tabread4_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,tabread4_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar1[6] = param_9;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
             *plVar2 + 0x78,extraout_RDX,param_12,param_13,param_14);
  return plVar1;
}


