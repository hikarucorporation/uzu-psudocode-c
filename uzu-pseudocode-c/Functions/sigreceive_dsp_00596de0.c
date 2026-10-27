// Function : sigreceive_dsp
// Namespace: 
// Entry    : 00596de0
// Prototype: undefined sigreceive_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, ulong param_12, char * param_13, ulong param_14, undefined8 param_15)
// Body     : 00596de0 - 00596e44


void sigreceive_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long *param_10,undefined8 param_11,ulong param_12,char *param_13,
                   ulong param_14,undefined8 param_15)

{
  undefined8 extraout_RDX;
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_9 + 0x40) = *(undefined4 *)*param_10;
  uVar3 = sigreceive_set(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         *(undefined8 **)(param_9 + 0x30),param_11,param_12,param_13,param_14);
  uVar3 = signal_setmultiout(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                             (ulong)*(uint *)(param_9 + 0x44),extraout_RDX,param_12,param_13,
                             param_14);
  uVar2 = (long)*(int *)(param_9 + 0x44) * (long)*(int *)(param_9 + 0x40);
  pcVar1 = sigreceive_perform;
  if ((uVar2 & 7) == 0) {
    pcVar1 = sigreceive_perf8;
  }
  dsp_add(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar1,3,param_9,
          *(undefined8 *)(*param_10 + 8),uVar2,param_14,param_15);
  return;
}


