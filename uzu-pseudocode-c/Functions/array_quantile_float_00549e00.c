// Function : array_quantile_float
// Namespace: 
// Entry    : 00549e00
// Prototype: undefined array_quantile_float(undefined8 param_1, undefined8 param_2, double param_3, double param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00549e00 - 00549f5a


void array_quantile_float
               (undefined8 param_1,undefined8 param_2,double param_3,double param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 in_R9;
  double dVar8;
  float fVar9;
  float fVar10;
  int local_2c;
  float local_28;
  uint local_24;
  float *local_20;
  int local_14;
  
  local_28 = (float)param_1;
  uVar3 = array_rangeop_getrange
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)&local_20,(int *)&local_24,&local_2c,&local_14,in_R9);
  if ((int)uVar3 == 0) {
    return;
  }
  uVar2 = 0;
  if (0 < (int)local_24) {
    lVar7 = (long)local_2c;
    uVar1 = local_24 - 1;
    uVar6 = local_24 & 3;
    pfVar4 = local_20;
    if (uVar1 < 3) {
      dVar8 = 0.0;
    }
    else {
      uVar5 = local_24 & 0xfffffffc;
      dVar8 = 0.0;
      param_2 = 0;
      do {
        fVar9 = *pfVar4;
        if (*pfVar4 <= 0.0) {
          fVar9 = 0.0;
        }
        param_3 = (double)fVar9 + dVar8;
        fVar9 = *(float *)((long)pfVar4 + lVar7);
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar10 = *(float *)((long)pfVar4 + lVar7 * 2);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        param_4 = (double)fVar10 + (double)fVar9;
        fVar9 = *(float *)((long)pfVar4 + lVar7 * 3);
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        pfVar4 = pfVar4 + lVar7;
        dVar8 = (double)fVar9 + param_3 + param_4;
        uVar5 = uVar5 - 4;
      } while (uVar5 != 0);
    }
    if (uVar6 != 0) {
      param_2 = 0;
      do {
        fVar9 = *pfVar4;
        if (*pfVar4 <= 0.0) {
          fVar9 = 0.0;
        }
        param_3 = (double)fVar9;
        dVar8 = dVar8 + param_3;
        pfVar4 = (float *)((long)pfVar4 + lVar7);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (1 < (int)local_24) {
      dVar8 = dVar8 * (double)local_28;
      uVar2 = 0;
      param_2 = 0;
      param_3 = 0.0;
      do {
        fVar9 = *local_20;
        if (*local_20 <= 0.0) {
          fVar9 = 0.0;
        }
        param_4 = (double)fVar9;
        dVar8 = dVar8 - param_4;
        if (dVar8 < 0.0) goto LAB_00549f44;
        uVar2 = uVar2 + 1;
        local_20 = (float *)((long)local_20 + (long)local_2c);
      } while (uVar1 != uVar2);
      uVar2 = uVar1;
    }
  }
LAB_00549f44:
  outlet_float((ulong)(uint)(float)(int)uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  return;
}


