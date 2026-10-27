// Function : sigrpole_dsp
// Namespace: 
// Entry    : 005943a0
// Prototype: long sigrpole_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10)
// Body     : 005943a0 - 005943d6


long sigrpole_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 *param_10)

{
  long lVar1;
  
  lVar1 = (long)*(int *)*param_10;
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigrpole_perform,5,
          *(undefined8 *)((int *)*param_10 + 2),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8),param_9,lVar1);
  return lVar1;
}


