// Function : sigczero_dsp
// Namespace: 
// Entry    : 00594b60
// Prototype: undefined sigczero_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10)
// Body     : 00594b60 - 00594bb6


void sigczero_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,long *param_10)

{
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigczero_perform,8,
          *(undefined8 *)(*param_10 + 8),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8),*(undefined8 *)(param_10[3] + 8),
          *(undefined8 *)(param_10[4] + 8));
  return;
}


