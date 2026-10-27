// Function : sigdelwrite_dsp
// Namespace: 
// Entry    : 005913b0
// Prototype: undefined sigdelwrite_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 005913b0 - 005914b2


void sigdelwrite_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 *param_10)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined8 in_R9;
  float fVar6;
  float fVar7;
  undefined8 in_stack_ffffffffffffffd8;
  
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigdelwrite_perform,3,
          *(undefined8 *)((int *)*param_10 + 2),param_9 + 0x40,(long)*(int *)*param_10,in_R9,
          in_stack_ffffffffffffffd8);
  uVar1 = ugen_getsortno();
  *(undefined4 *)(param_9 + 0x58) = uVar1;
  iVar5 = *(int *)*param_10;
  fVar6 = (float)((int *)*param_10)[4];
  iVar3 = *(int *)(param_9 + 0x5c);
  iVar2 = ugen_getsortno();
  if (iVar3 == iVar2) {
    iVar3 = *(int *)(param_9 + 0x60);
    if (*(int *)(param_9 + 0x60) < iVar5) {
      *(int *)(param_9 + 0x60) = iVar5;
      iVar3 = iVar5;
    }
    fVar7 = *(float *)(param_9 + 100);
    if (fVar7 < fVar6) {
      *(float *)(param_9 + 100) = fVar6;
      fVar7 = fVar6;
    }
  }
  else {
    *(int *)(param_9 + 0x60) = iVar5;
    *(float *)(param_9 + 100) = fVar6;
    uVar1 = ugen_getsortno();
    *(undefined4 *)(param_9 + 0x5c) = uVar1;
    fVar7 = *(float *)(param_9 + 100);
    iVar3 = *(int *)(param_9 + 0x60);
  }
  fVar6 = *(float *)(param_9 + 0x38) * DAT_005d908c * fVar7;
  iVar2 = (int)fVar6;
  iVar5 = 1;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  iVar5 = iVar5 + iVar3 + (-iVar5 & 3U);
  if (*(int *)(param_9 + 0x40) != iVar5) {
    pvVar4 = resizebytes((ulong)(uint)fVar6,(ulong)(uint)fVar7,param_3,param_4,param_5,param_6,
                         param_7,param_8,*(void **)(param_9 + 0x48),
                         (long)*(int *)(param_9 + 0x40) * 4 + 0x10,(long)iVar5 * 4 + 0x10);
    *(void **)(param_9 + 0x48) = pvVar4;
    *(int *)(param_9 + 0x40) = iVar5;
    *(undefined4 *)(param_9 + 0x50) = 4;
  }
  return;
}


