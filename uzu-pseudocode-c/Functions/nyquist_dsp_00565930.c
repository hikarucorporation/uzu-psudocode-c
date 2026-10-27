// Function : nyquist_dsp
// Namespace: 
// Entry    : 00565930
// Prototype: undefined nyquist_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00565930 - 00565952


void nyquist_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_10 + 0x10);
  *(uint *)(param_9 + 0x38) = uVar1;
  dsp_add((ulong)uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,nyquist_perform,1,
          param_9,param_12,param_13,param_14,param_15);
  return;
}


