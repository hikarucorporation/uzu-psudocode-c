// Function : bicoeff_biquad_callback
// Namespace: 
// Entry    : 00567ef0
// Prototype: undefined bicoeff_biquad_callback(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined4 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00567ef0 - 00567f25


void bicoeff_biquad_callback
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = *(long **)(param_9 + 0x18);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
              *plVar2 + 0xc0,param_11,param_12,param_13,param_14);
  return;
}


