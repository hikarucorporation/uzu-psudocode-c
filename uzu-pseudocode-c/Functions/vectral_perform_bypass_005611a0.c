// Function : vectral_perform_bypass
// Namespace: 
// Entry    : 005611a0
// Prototype: undefined vectral_perform_bypass(long param_1, uint param_2, float * param_3, float * param_4, undefined4 * param_5, undefined4 * param_6)
// Body     : 005611a0 - 005612f7


void vectral_perform_bypass
               (long param_1,uint param_2,float *param_3,float *param_4,undefined4 *param_5,
               undefined4 *param_6)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x40);
    puVar6 = *(undefined4 **)(param_1 + 0x50);
    uVar3 = param_2;
    if ((param_2 & 1) != 0) {
      uVar3 = (uint)*param_4;
      if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
        *(undefined4 *)(lVar2 + (ulong)uVar3 * 4) = *param_5;
      }
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      uVar3 = param_2 - 1;
    }
    if (param_2 != 1) {
      lVar4 = 0;
      do {
        uVar5 = (uint)param_4[lVar4];
        if ((-1 < (int)uVar5) && ((int)uVar5 < iVar1)) {
          *(undefined4 *)(lVar2 + (ulong)uVar5 * 4) = param_5[lVar4];
        }
        uVar5 = (uint)param_4[lVar4 + 1];
        if ((-1 < (int)uVar5) && ((int)uVar5 < iVar1)) {
          *(undefined4 *)(lVar2 + (ulong)uVar5 * 4) = param_5[lVar4 + 1];
        }
        lVar4 = lVar4 + 2;
      } while (uVar3 != (uint)lVar4);
    }
    if (param_2 != 0) {
      uVar3 = param_2;
      if ((param_2 & 1) != 0) {
        uVar3 = (uint)*param_3;
        uVar8 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < iVar1)) {
          uVar8 = *(undefined4 *)(lVar2 + (ulong)uVar3 * 4);
        }
        param_3 = param_3 + 1;
        *puVar6 = uVar8;
        puVar6 = puVar6 + 1;
        *param_6 = uVar8;
        param_6 = param_6 + 1;
        uVar3 = param_2 - 1;
      }
      if (param_2 != 1) {
        lVar4 = 0;
        do {
          uVar5 = (uint)param_3[lVar4];
          uVar7 = 0;
          uVar8 = 0;
          if ((-1 < (int)uVar5) && (uVar8 = 0, (int)uVar5 < iVar1)) {
            uVar8 = *(undefined4 *)(lVar2 + (ulong)uVar5 * 4);
          }
          puVar6[lVar4] = uVar8;
          param_6[lVar4] = uVar8;
          uVar5 = (uint)param_3[lVar4 + 1];
          if ((-1 < (int)uVar5) && ((int)uVar5 < iVar1)) {
            uVar7 = *(undefined4 *)(lVar2 + (ulong)uVar5 * 4);
          }
          puVar6[lVar4 + 1] = uVar7;
          param_6[lVar4 + 1] = uVar7;
          lVar4 = lVar4 + 2;
        } while (uVar3 != (uint)lVar4);
      }
    }
  }
  return;
}


