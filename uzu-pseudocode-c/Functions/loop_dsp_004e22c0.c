// Function : loop_dsp
// Namespace: 
// Entry    : 004e22c0
// Prototype: undefined8 loop_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10)
// Body     : 004e22c0 - 004e2301


undefined8
loop_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
        long *param_10)

{
  undefined8 in_RAX;
  
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,loop_perform,6,
          param_9 + 0x38,*(undefined8 *)(*param_10 + 8),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8),*(undefined8 *)(param_10[3] + 8));
  return in_RAX;
}


