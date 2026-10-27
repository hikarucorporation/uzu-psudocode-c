// Function : trigger_float
// Namespace: 
// Entry    : 0054e050
// Prototype: undefined trigger_float(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 0054e050 - 0054e091


void trigger_float(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  long *plVar1;
  uint *in_R8;
  uint *in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  int local_18 [2];
  undefined4 local_10;
  
  local_18[0] = 1;
  local_10 = param_1;
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  trigger_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,(undefined8 *)(*plVar1 + 0x78),1,local_18,in_R8,in_R9);
  return;
}


