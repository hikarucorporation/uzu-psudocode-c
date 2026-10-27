// Function : list_trim_list
// Namespace: 
// Entry    : 005530d0
// Prototype: undefined list_trim_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 005530d0 - 0055312b


void list_trim_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                   undefined8 param_10,int param_11,int *param_12,uint *param_13,uint *param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_XMM0_Qa;
  
  if ((param_11 < 1) || (*param_12 != 2)) {
    plVar1 = *(long **)(param_9 + 0x18);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    outlet_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
                *plVar2 + 0xc0,param_11,param_12,(char *)param_13,param_14);
    return;
  }
  outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x18),*(undefined8 **)(param_12 + 2),param_11 - 1,
                  param_12 + 4,param_13,param_14);
  return;
}


