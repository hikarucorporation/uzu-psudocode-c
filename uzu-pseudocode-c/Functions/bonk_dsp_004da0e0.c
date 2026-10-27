// Function : bonk_dsp
// Namespace: 
// Entry    : 004da0e0
// Prototype: undefined bonk_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, ulong param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004da0e0 - 004da1e0


void bonk_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
             ulong param_13,undefined8 param_14,undefined8 param_15)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  
  piVar5 = (int *)*param_10;
  iVar3 = *piVar5;
  iVar4 = *(int *)(param_9 + 0x2630);
  uVar2 = piVar5[4];
  *(uint *)(param_9 + 0x265c) = uVar2;
  if (0 < iVar4) {
    lVar6 = *(long *)(param_9 + 0x2628);
    *(undefined8 *)(lVar6 + 0x2590) = *(undefined8 *)(piVar5 + 2);
    if (iVar4 != 1) {
      uVar9 = iVar4 - 1;
      param_13 = (ulong)uVar9;
      if (2 < iVar4 - 2U) {
        uVar8 = uVar9 & 0xfffffffc;
        do {
          *(undefined8 *)(lVar6 + 0x4b28) = *(undefined8 *)(param_10[1] + 8);
          *(undefined8 *)(lVar6 + 0x70c0) = *(undefined8 *)(param_10[2] + 8);
          *(undefined8 *)(lVar6 + 0x9658) = *(undefined8 *)(param_10[3] + 8);
          plVar1 = param_10 + 4;
          param_10 = param_10 + 4;
          *(undefined8 *)(lVar6 + 0xbbf0) = *(undefined8 *)(*plVar1 + 8);
          lVar6 = lVar6 + 0x9660;
          uVar8 = uVar8 - 4;
        } while (uVar8 != 0);
      }
      if ((uVar9 & 3) != 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x4b28);
        uVar9 = (byte)((char)iVar4 - 1) & 3;
        param_13 = (ulong)uVar9;
        lVar6 = 0;
        do {
          *puVar7 = *(undefined8 *)(param_10[lVar6 + 1] + 8);
          lVar6 = lVar6 + 1;
          puVar7 = puVar7 + 0x4b3;
        } while (uVar9 != (uint)lVar6);
      }
    }
  }
  dsp_add((ulong)uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,bonk_perform,2,
          param_9,(long)iVar3,param_13,param_9,param_15);
  return;
}


