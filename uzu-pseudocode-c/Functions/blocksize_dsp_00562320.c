// Function : blocksize_dsp
// Namespace: 
// Entry    : 00562320
// Prototype: undefined blocksize_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00562320 - 0056234b


void blocksize_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_10;
  *(float *)(param_9 + 0x3c) = (float)*piVar2;
  uVar1 = piVar2[4];
  *(uint *)(param_9 + 0x44) = uVar1;
  dsp_add((ulong)uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,blocksize_perform,1,
          param_9,param_12,param_13,param_14,param_15);
  return;
}


