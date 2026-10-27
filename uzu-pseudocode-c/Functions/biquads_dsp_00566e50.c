// Function : biquads_dsp
// Namespace: 
// Entry    : 00566e50
// Prototype: undefined biquads_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10)
// Body     : 00566e50 - 00566e76


void biquads_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 *param_10)

{
  undefined8 in_stack_00000008;
  
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,biquads_perform,4,param_9,
          (ulong)*(uint *)*param_10,*(undefined8 *)((uint *)*param_10 + 2),
          *(undefined8 *)(param_10[1] + 8),in_stack_00000008);
  return;
}


