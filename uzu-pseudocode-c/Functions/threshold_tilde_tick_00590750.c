// Function : threshold_tilde_tick
// Namespace: 
// Entry    : 00590750
// Prototype: undefined threshold_tilde_tick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00590750 - 00590762


void threshold_tilde_tick
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x30 + (ulong)(*(int *)(param_9 + 0x4c) == 0) * 8));
  return;
}


