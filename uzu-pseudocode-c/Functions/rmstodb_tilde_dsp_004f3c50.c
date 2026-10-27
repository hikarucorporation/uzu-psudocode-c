// Function : rmstodb_tilde_dsp
// Namespace: 
// Entry    : 004f3c50
// Prototype: undefined rmstodb_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004f3c50 - 004f3c90


void rmstodb_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14,undefined8 param_15)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 1,(ulong)*(uint *)(*param_10 + 0x14),param_11,param_12,
                             param_13,param_14);
  piVar1 = (int *)*param_10;
  dsp_add(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,rmstodb_tilde_perform,3,
          *(undefined8 *)(piVar1 + 2),*(undefined8 *)(param_10[1] + 8),
          (long)piVar1[5] * (long)*piVar1,param_14,param_15);
  return;
}


