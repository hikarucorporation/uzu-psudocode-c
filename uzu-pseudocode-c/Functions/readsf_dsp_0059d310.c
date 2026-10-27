// Function : readsf_dsp
// Namespace: 
// Entry    : 0059d310
// Prototype: undefined readsf_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 0059d310 - 0059d42d


void readsf_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_XMM0_Qa;
  
  uVar2 = *(uint *)(param_9 + 0x4c);
  pthread_mutex_lock((pthread_mutex_t *)(param_9 + 0x2e8));
  piVar6 = (int *)*param_10;
  iVar3 = *piVar6;
  *(int *)(param_9 + 0x250) = iVar3;
  *(int *)(param_9 + 0x2d4) = *(int *)(param_9 + 0x2c0) / (iVar3 * *(int *)(param_9 + 0x2ac));
  if ((0 < (int)uVar2) &&
     (*(undefined8 *)(param_9 + 0x50) = *(undefined8 *)(piVar6 + 2), uVar2 != 1)) {
    uVar8 = (ulong)uVar2 - 1;
    uVar5 = (ulong)((uint)uVar8 & 3);
    piVar6 = (int *)0x1;
    if (2 < (ulong)uVar2 - 2) {
      uVar4 = 0;
      do {
        uVar7 = uVar4;
        *(undefined8 *)(param_9 + 0x58 + uVar7 * 8) = *(undefined8 *)(param_10[uVar7 + 1] + 8);
        *(undefined8 *)(param_9 + 0x60 + uVar7 * 8) = *(undefined8 *)(param_10[uVar7 + 2] + 8);
        *(undefined8 *)(param_9 + 0x68 + uVar7 * 8) = *(undefined8 *)(param_10[uVar7 + 3] + 8);
        *(undefined8 *)(param_9 + 0x70 + uVar7 * 8) = *(undefined8 *)(param_10[uVar7 + 4] + 8);
        uVar4 = uVar7 + 4;
      } while ((uVar8 & 0xfffffffffffffffc) != uVar7 + 4);
      piVar6 = (int *)(uVar7 + 5);
    }
    if (uVar5 != 0) {
      lVar1 = (long)piVar6 * 8;
      piVar6 = (int *)(param_10 + (long)piVar6);
      uVar8 = 0;
      do {
        *(undefined8 *)(param_9 + lVar1 + 0x50 + uVar8 * 8) =
             *(undefined8 *)(*(long *)(piVar6 + uVar8 * 2) + 8);
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_9 + 0x2e8));
  dsp_add(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,readsf_perform,1,
          param_9,piVar6,param_13,param_14,param_15);
  return;
}


