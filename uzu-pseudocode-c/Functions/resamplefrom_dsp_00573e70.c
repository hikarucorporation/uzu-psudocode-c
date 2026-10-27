// Function : resamplefrom_dsp
// Namespace: 
// Entry    : 00573e70
// Prototype: undefined resamplefrom_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, uint param_12, uint param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00573e70 - 00573efb


void resamplefrom_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 param_10,uint param_11,uint param_12,uint param_13,
                     undefined8 param_14,undefined8 param_15)

{
  void *pvVar1;
  undefined8 extraout_XMM0_Qa;
  
  if (param_11 == param_12) {
    freebytes(*(void **)(param_9 + 0x10));
    *(undefined4 *)(param_9 + 0x18) = 0;
    *(undefined8 *)(param_9 + 0x10) = param_10;
    return;
  }
  if (*(uint *)(param_9 + 0x18) == param_12) {
    pvVar1 = *(void **)(param_9 + 0x10);
  }
  else {
    freebytes(*(void **)(param_9 + 0x10));
    pvVar1 = getbytes((long)(int)param_12 << 2);
    *(void **)(param_9 + 0x10) = pvVar1;
    *(uint *)(param_9 + 0x18) = param_12;
    param_1 = extraout_XMM0_Qa;
  }
  resample_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               (ulong)param_11,pvVar1,(char *)(ulong)param_12,(ulong)param_13,param_15);
  return;
}


