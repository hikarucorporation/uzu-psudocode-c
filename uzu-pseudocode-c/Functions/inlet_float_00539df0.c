// Function : inlet_float
// Namespace: 
// Entry    : 00539df0
// Prototype: undefined inlet_float(float param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14, double param_15)
// Body     : 00539df0 - 00539ecd


void inlet_float(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                undefined8 param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
                uint *param_14,double param_15)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 in_stack_ffffffffffffffd8;
  uint local_20 [2];
  float local_18;
  
  puVar2 = *(undefined8 **)(param_9 + 0x20);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *plVar4;
  puVar1 = (undefined8 *)(lVar3 + 0x78);
  if (puVar2 == puVar1) {
    pd_vmess((double)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             *(long *)(param_9 + 0x18),*(undefined8 *)(param_9 + 0x28),0x651ee3,param_12,param_13,
             param_14,param_15);
    return;
  }
  if (puVar2 == (undefined8 *)(lVar3 + 0xf0)) {
    *(float *)(param_9 + 0x28) = param_1;
    return;
  }
  if (puVar2 == (undefined8 *)0x0) {
    pd_float(*(long **)(param_9 + 0x18));
    return;
  }
  if (puVar2 == (undefined8 *)(lVar3 + 0xc0)) {
    local_20[0] = 1;
    local_18 = param_1;
    inlet_list((ulong)(uint)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               puVar1,1,local_20,param_13,param_14,
               (double)CONCAT44(param_1,in_stack_ffffffffffffffd8));
    return;
  }
  pd_error((ulong)(uint)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
           *(long *)(param_9 + 0x10),"inlet: expected \'%s\' but got \'%s\'",*puVar2,*puVar1,
           (char *)param_13,param_14);
  return;
}


