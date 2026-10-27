// Function : inlet_pointer
// Namespace: 
// Entry    : 00539d30
// Prototype: undefined inlet_pointer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14, double param_15)
// Body     : 00539d30 - 00539dec


void inlet_pointer(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
                  uint *param_14,double param_15)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_XMM0_Qa;
  uint auStack_228 [128];
  undefined4 in_stack_ffffffffffffffdc;
  
  puVar2 = *(undefined8 **)(param_9 + 0x20);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar1 = (undefined8 *)(*plVar3 + 0x60);
  if (puVar2 == puVar1) {
    pd_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(long *)(param_9 + 0x18),*(undefined8 *)(param_9 + 0x28),0x657774,param_10,param_13,
             param_14,param_15);
    return;
  }
  if (puVar2 == (undefined8 *)0x0) {
    pd_pointer(*(long **)(param_9 + 0x18));
    return;
  }
  if (puVar2 == (undefined8 *)(*plVar3 + 0xc0)) {
    inlet_list(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               puVar1,1,auStack_228 + 0x80,param_13,param_14,
               (double)CONCAT44(in_stack_ffffffffffffffdc,3));
    return;
  }
  pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           *(long *)(param_9 + 0x10),"inlet: expected \'%s\' but got \'%s\'",*puVar2,*puVar1,
           (char *)param_13,param_14);
  return;
}


