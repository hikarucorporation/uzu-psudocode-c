// Function : bang_tilde_dsp
// Namespace: 
// Entry    : 00597b90
// Prototype: undefined bang_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00597b90 - 00597ba5


void bang_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,bang_tilde_perform,1,
          param_9,param_12,param_13,param_14,param_15);
  return;
}


