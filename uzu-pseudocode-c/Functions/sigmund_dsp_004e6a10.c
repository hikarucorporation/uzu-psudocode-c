// Function : sigmund_dsp
// Namespace: 
// Entry    : 004e6a10
// Prototype: undefined sigmund_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 004e6a10 - 004e6ae1


void sigmund_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 in_R9;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_9 + 0x50) != 1) {
    return;
  }
  uVar1 = *(uint *)(param_9 + 0x54);
  puVar4 = (uint *)*param_10;
  uVar2 = *puVar4;
  if ((int)uVar1 % (int)uVar2 != 0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "sigmund~: npts %d must be multiple of block size %d",(ulong)uVar1,(ulong)uVar2,
             (char *)(ulong)uVar1,in_R9);
    return;
  }
  iVar3 = *(int *)(param_9 + 0x78) % (int)uVar2;
  if (iVar3 != 0) {
    *(int *)(param_9 + 0x78) = *(int *)(param_9 + 0x78) - iVar3;
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "sigmund~: adjusting hop size to %d");
    puVar4 = (uint *)*param_10;
    uVar2 = *puVar4;
  }
  if ((*(int *)(param_9 + 0x70) % (int)uVar2 != 0) ||
     (*(int *)(param_9 + 0x54) < *(int *)(param_9 + 0x70))) {
    if (*(void **)(param_9 + 0x60) != (void *)0x0) {
      memset(*(void **)(param_9 + 0x60),0,(long)*(int *)(param_9 + 0x54) << 2);
      puVar4 = (uint *)*param_10;
    }
    *(undefined4 *)(param_9 + 0x70) = 0;
  }
  uVar1 = puVar4[4];
  *(uint *)(param_9 + 0x4c) = uVar1;
  dsp_add((ulong)uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigmund_perform,3,
          param_9,*(undefined8 *)(puVar4 + 2),(long)(int)*puVar4,in_R9,in_stack_00000008);
  return;
}


