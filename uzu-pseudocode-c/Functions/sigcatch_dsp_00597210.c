// Function : sigcatch_dsp
// Namespace: 
// Entry    : 00597210
// Prototype: undefined sigcatch_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00597210 - 00597297


void sigcatch_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                 undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 extraout_RDX;
  uint uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  
  iVar1 = *(int *)*param_10;
  if (*(int *)(param_9 + 0x40) == iVar1) {
    uVar5 = *(uint *)(param_9 + 0x44);
    uVar3 = *(uint *)(param_9 + 0x48);
    uVar4 = (ulong)uVar3;
    if (uVar5 == uVar3) goto LAB_00597265;
  }
  else {
    uVar5 = *(uint *)(param_9 + 0x44);
    uVar3 = *(uint *)(param_9 + 0x48);
  }
  uVar3 = uVar3 * *(int *)(param_9 + 0x40);
  uVar4 = (ulong)uVar3;
  pvVar2 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 0x50),(long)(int)uVar3 << 2,
                       (long)(int)(uVar5 * iVar1) << 2);
  *(void **)(param_9 + 0x50) = pvVar2;
  *(int *)(param_9 + 0x40) = iVar1;
  uVar5 = *(uint *)(param_9 + 0x44);
  *(uint *)(param_9 + 0x48) = uVar5;
  param_11 = extraout_RDX;
  param_1 = extraout_XMM0_Qa;
LAB_00597265:
  uVar6 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10,(ulong)uVar5,param_11,uVar4,param_13,param_14);
  dsp_add(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigcatch_perform,3,
          *(undefined8 *)(param_9 + 0x50),*(undefined8 *)(*param_10 + 8),
          (ulong)(uint)(*(int *)(param_9 + 0x44) * *(int *)(param_9 + 0x40)),param_14,param_15);
  return;
}


