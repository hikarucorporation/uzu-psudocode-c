// Function : sigsend_dsp
// Namespace: 
// Entry    : 005969b0
// Prototype: undefined sigsend_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 005969b0 - 00596a70


void sigsend_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  
  iVar2 = *(int *)(param_9 + 0x44);
  piVar4 = (int *)*param_10;
  iVar1 = *piVar4;
  iVar5 = piVar4[5];
  if (iVar2 < piVar4[5]) {
    iVar5 = iVar2;
  }
  if ((*(int *)(param_9 + 0x40) == iVar1) && (iVar2 == *(int *)(param_9 + 0x48))) {
    pvVar3 = *(void **)(param_9 + 0x50);
  }
  else {
    pvVar3 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 0x50),
                         (long)(*(int *)(param_9 + 0x48) * *(int *)(param_9 + 0x40)) << 2,
                         (long)(iVar2 * iVar1) << 2);
    *(void **)(param_9 + 0x50) = pvVar3;
    *(int *)(param_9 + 0x40) = iVar1;
    *(undefined4 *)(param_9 + 0x48) = *(undefined4 *)(param_9 + 0x44);
    piVar4 = (int *)*param_10;
    param_1 = extraout_XMM0_Qa;
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigsend_perform,3,
          *(undefined8 *)(piVar4 + 2),pvVar3,(ulong)(uint)(iVar1 * iVar5),in_R9,in_RAX);
  iVar2 = *(int *)(param_9 + 0x44) - iVar5;
  if (iVar2 == 0 || *(int *)(param_9 + 0x44) < iVar5) {
    return;
  }
  memset((void *)((long)(iVar5 * *(int *)(param_9 + 0x40)) * 4 + *(long *)(param_9 + 0x50)),0,
         (long)(iVar2 * *(int *)(param_9 + 0x40)) << 2);
  return;
}


