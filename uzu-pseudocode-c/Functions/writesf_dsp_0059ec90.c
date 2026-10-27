// Function : writesf_dsp
// Namespace: 
// Entry    : 0059ec90
// Prototype: undefined writesf_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 0059ec90 - 0059edcd


void writesf_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  uVar1 = *(uint *)(param_9 + 0x294);
  pthread_mutex_lock((pthread_mutex_t *)(param_9 + 0x2e8));
  piVar7 = (int *)*param_10;
  iVar2 = *piVar7;
  *(int *)(param_9 + 0x250) = iVar2;
  *(int *)(param_9 + 0x2d4) = *(int *)(param_9 + 0x2c0) / (iVar2 * *(int *)(param_9 + 0x2ac) * 0x10)
  ;
  if (0 < (int)uVar1) {
    *(undefined8 *)(param_9 + 0x50) = *(undefined8 *)(piVar7 + 2);
    if (uVar1 != 1) {
      uVar8 = (ulong)uVar1 - 1;
      uVar4 = (ulong)((uint)uVar8 & 3);
      lVar5 = 1;
      if (2 < (ulong)uVar1 - 2) {
        uVar3 = 0;
        do {
          uVar6 = uVar3;
          *(undefined8 *)(param_9 + 0x58 + uVar6 * 8) = *(undefined8 *)(param_10[uVar6 + 1] + 8);
          *(undefined8 *)(param_9 + 0x60 + uVar6 * 8) = *(undefined8 *)(param_10[uVar6 + 2] + 8);
          *(undefined8 *)(param_9 + 0x68 + uVar6 * 8) = *(undefined8 *)(param_10[uVar6 + 3] + 8);
          *(undefined8 *)(param_9 + 0x70 + uVar6 * 8) = *(undefined8 *)(param_10[uVar6 + 4] + 8);
          uVar3 = uVar6 + 4;
        } while ((uVar8 & 0xfffffffffffffffc) != uVar6 + 4);
        lVar5 = uVar6 + 5;
      }
      if (uVar4 != 0) {
        uVar8 = 0;
        do {
          *(undefined8 *)(param_9 + lVar5 * 8 + 0x50 + uVar8 * 8) =
               *(undefined8 *)(param_10[lVar5 + uVar8] + 8);
          uVar8 = uVar8 + 1;
        } while (uVar4 != uVar8);
      }
    }
    piVar7 = (int *)*param_10;
  }
  *(int *)(param_9 + 0x264) = piVar7[4];
  pthread_mutex_unlock((pthread_mutex_t *)(param_9 + 0x2e8));
  dsp_add(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
          param_7,param_8,writesf_perform,1,param_9,piVar7,param_13,param_14,param_15);
  return;
}


