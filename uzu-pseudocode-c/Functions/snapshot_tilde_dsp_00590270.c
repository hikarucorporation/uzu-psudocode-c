// Function : snapshot_tilde_dsp
// Namespace: 
// Entry    : 00590270
// Prototype: undefined snapshot_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00590270 - 00590298


void snapshot_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                       undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,snapshot_tilde_perform,2,
          *(long *)((int *)*param_10 + 2) + (long)*(int *)*param_10 * 4 + -4,param_9 + 0x30,param_13
          ,param_14,param_15);
  return;
}


