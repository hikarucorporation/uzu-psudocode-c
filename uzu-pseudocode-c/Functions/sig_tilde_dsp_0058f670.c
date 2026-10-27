// Function : sig_tilde_dsp
// Namespace: 
// Entry    : 0058f670
// Prototype: undefined sig_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 0058f670 - 0058f681


void sig_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  dsp_add_scalarcopy(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9 + 0x30,
                     *(undefined8 *)((uint *)*param_10 + 2),*(uint *)*param_10,param_12,param_13,
                     param_14,param_15);
  return;
}


