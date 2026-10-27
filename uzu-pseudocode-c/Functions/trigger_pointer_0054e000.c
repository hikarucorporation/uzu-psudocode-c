// Function : trigger_pointer
// Namespace: 
// Entry    : 0054e000
// Prototype: undefined trigger_pointer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 0054e000 - 0054e040


void trigger_pointer(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                    undefined8 param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
                    uint *param_14)

{
  long *plVar1;
  undefined8 extraout_XMM0_Qa;
  int local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 3;
  local_10 = param_10;
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  trigger_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               (undefined8 *)(*plVar1 + 0x60),1,local_18,param_13,param_14);
  return;
}


