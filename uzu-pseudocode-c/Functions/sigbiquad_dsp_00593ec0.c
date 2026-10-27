// Function : sigbiquad_dsp
// Namespace: 
// Entry    : 00593ec0
// Prototype: undefined sigbiquad_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 00593ec0 - 00593ee8


void sigbiquad_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 *param_10)

{
  undefined8 in_stack_00000008;
  
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigbiquad_perform,4,
          *(undefined8 *)((int *)*param_10 + 2),*(undefined8 *)(param_10[1] + 8),param_9 + 0x34,
          (long)*(int *)*param_10,in_stack_00000008);
  return;
}


