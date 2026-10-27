// Function : array_min_float
// Namespace: 
// Entry    : 0054a560
// Prototype: undefined array_min_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054a560 - 0054a6b8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void array_min_float(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 in_R9;
  float fVar8;
  float local_28;
  int local_24;
  uint local_20;
  int local_1c;
  float *local_18;
  
  *(int *)(param_9 + 0x68) = (int)param_1;
  uVar3 = array_rangeop_getrange
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)&local_18,(int *)&local_20,&local_1c,&local_24,in_R9);
  if ((int)uVar3 == 0) {
    return;
  }
  if ((int)local_20 < 1) {
    local_28 = _DAT_006597e0;
    fVar8 = DAT_005d9054;
  }
  else {
    lVar4 = (long)local_1c;
    uVar5 = local_20 & 3;
    local_28 = _DAT_006597e0;
    if (local_20 - 1 < 3) {
      uVar7 = 0;
      iVar6 = -1;
    }
    else {
      uVar7 = 0;
      iVar6 = -1;
      do {
        fVar8 = *local_18;
        iVar2 = local_24 + uVar7;
        if (local_28 <= *local_18) {
          fVar8 = local_28;
          iVar2 = iVar6;
        }
        fVar1 = *(float *)((long)local_18 + lVar4);
        iVar6 = local_24 + 1 + uVar7;
        if (fVar8 <= fVar1) {
          iVar6 = iVar2;
        }
        if (fVar1 <= fVar8) {
          fVar8 = fVar1;
        }
        fVar1 = *(float *)((long)local_18 + lVar4 * 2);
        iVar2 = local_24 + 2 + uVar7;
        if (fVar8 <= fVar1) {
          iVar2 = iVar6;
        }
        if (fVar1 <= fVar8) {
          fVar8 = fVar1;
        }
        fVar1 = *(float *)((long)local_18 + lVar4 * 3);
        param_2 = (ulong)(uint)fVar1;
        local_18 = local_18 + lVar4;
        iVar6 = local_24 + 3 + uVar7;
        if (fVar8 <= fVar1) {
          iVar6 = iVar2;
        }
        local_28 = fVar8;
        if (fVar1 <= fVar8) {
          local_28 = fVar1;
        }
        uVar7 = uVar7 + 4;
      } while ((local_20 & 0xfffffffc) != uVar7);
    }
    if (uVar5 != 0) {
      local_24 = uVar7 + local_24;
      do {
        fVar8 = *local_18;
        if (fVar8 < local_28) {
          iVar6 = local_24;
        }
        if (fVar8 <= local_28) {
          local_28 = fVar8;
        }
        local_18 = (float *)((long)local_18 + lVar4);
        local_24 = local_24 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_3 = (ulong)(uint)local_28;
    fVar8 = (float)iVar6;
  }
  outlet_float((ulong)(uint)fVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x88));
  outlet_float((ulong)(uint)local_28,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x80));
  return;
}


