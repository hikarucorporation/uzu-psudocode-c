// Function : noise_dsp
// Namespace: 
// Entry    : 00599840
// Prototype: undefined noise_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 00599840 - 00599860


void noise_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 *param_10)

{
  undefined8 in_R9;
  undefined8 in_stack_00000008;
  
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,noise_perform,3,
          *(undefined8 *)((int *)*param_10 + 2),param_9 + 0x30,(long)*(int *)*param_10,in_R9,
          in_stack_00000008);
  return;
}


