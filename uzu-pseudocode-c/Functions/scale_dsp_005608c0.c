// Function : scale_dsp
// Namespace: 
// Entry    : 005608c0
// Prototype: undefined scale_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10)
// Body     : 005608c0 - 00560920


void scale_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 *param_10)

{
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,scale_perform,9,param_9,
          (ulong)*(uint *)*param_10,*(undefined8 *)((uint *)*param_10 + 2),
          *(undefined8 *)(param_10[1] + 8),*(undefined8 *)(param_10[2] + 8));
  return;
}


