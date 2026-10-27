// Function : pd_tilde_dsp
// Namespace: 
// Entry    : 004e3070
// Prototype: undefined pd_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, ulong param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004e3070 - 004e320a


void pd_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 *param_10,undefined8 param_11,ulong param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_9 + 100);
  uVar6 = (ulong)uVar1;
  if (uVar6 == 0) {
    if (*(int *)(param_9 + 0x68) == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined4 *)*param_10;
    }
    *(undefined4 *)(param_9 + 0x98) = uVar2;
  }
  else {
    *(undefined4 *)(param_9 + 0x98) = *(undefined4 *)*param_10;
    if (0 < (int)uVar1) {
      param_12 = *(ulong *)(param_9 + 0x88);
      if (2 < uVar1 - 1) {
        lVar3 = 0;
        lVar4 = 0;
        do {
          *(undefined8 *)(param_12 + lVar3 * 8) = *(undefined8 *)(param_10[lVar3] + 8);
          *(undefined8 *)(param_12 + 8 + lVar3 * 8) = *(undefined8 *)(param_10[lVar3 + 1] + 8);
          *(undefined8 *)(param_12 + 0x10 + lVar3 * 8) = *(undefined8 *)(param_10[lVar3 + 2] + 8);
          *(undefined8 *)(param_12 + 0x18 + lVar3 * 8) = *(undefined8 *)(param_10[lVar3 + 3] + 8);
          lVar4 = lVar4 + -0x20;
          lVar3 = lVar3 + 4;
        } while ((uVar1 & 0xfffffffc) != (uint)lVar3);
        param_12 = param_12 - lVar4;
        param_10 = (undefined8 *)((long)param_10 - lVar4);
      }
      if ((uVar1 & 3) != 0) {
        lVar3 = 0;
        do {
          *(undefined8 *)(param_12 + lVar3) = *(undefined8 *)(*(long *)((long)param_10 + lVar3) + 8)
          ;
          lVar3 = lVar3 + 8;
        } while ((uVar1 & 3) * 8 != (int)lVar3);
        param_10 = (undefined8 *)((long)param_10 + lVar3);
      }
    }
  }
  uVar1 = *(uint *)(param_9 + 0x68);
  if (0 < (int)uVar1) {
    lVar3 = *(long *)(param_9 + 0x90);
    puVar5 = param_10 + (uVar6 == 0);
    param_12 = (ulong)(uVar1 - 1);
    if (2 < uVar1 - 1) {
      uVar6 = (ulong)(uVar1 & 0xfffffffc);
      param_12 = 0;
      lVar4 = 0;
      do {
        *(undefined8 *)(lVar3 + param_12 * 8) = *(undefined8 *)(puVar5[param_12] + 8);
        *(undefined8 *)(lVar3 + 8 + param_12 * 8) = *(undefined8 *)(puVar5[param_12 + 1] + 8);
        *(undefined8 *)(lVar3 + 0x10 + param_12 * 8) = *(undefined8 *)(puVar5[param_12 + 2] + 8);
        *(undefined8 *)(lVar3 + 0x18 + param_12 * 8) = *(undefined8 *)(puVar5[param_12 + 3] + 8);
        lVar4 = lVar4 + -0x20;
        param_12 = param_12 + 4;
      } while ((uVar1 & 0xfffffffc) != (uint)param_12);
      lVar3 = lVar3 - lVar4;
      puVar5 = (undefined8 *)((long)puVar5 - lVar4);
    }
    if ((uVar1 & 3) != 0) {
      param_12 = 0;
      do {
        *(undefined8 *)(lVar3 + param_12 * 8) = *(undefined8 *)(puVar5[param_12] + 8);
        param_12 = param_12 + 1;
      } while ((uVar1 & 3) != (uint)param_12);
    }
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pd_tilde_perform,1,param_9
          ,param_12,param_9,uVar6,param_15);
  return;
}


