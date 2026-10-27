// Function : array_random_bang
// Namespace: 
// Entry    : 0054a000
// Prototype: undefined array_random_bang(undefined8 param_1, undefined8 param_2, double param_3, double param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054a000 - 0054a19d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void array_random_bang(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 in_R9;
  uint uVar8;
  undefined8 extraout_XMM0_Qa;
  double dVar9;
  float fVar10;
  float fVar11;
  uint local_40;
  int local_3c;
  float *local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  uVar3 = array_rangeop_getrange
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     &local_20,&local_2c,&local_28,&local_30,in_R9);
  if ((int)uVar3 != 0) {
    uVar8 = *(int *)(param_9 + 0x80) * 0x1c307df1 + 0x319da917;
    *(uint *)(param_9 + 0x80) = uVar8;
    uVar3 = array_rangeop_getrange
                      (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,(long *)&local_38,(int *)&local_40,&local_3c,&local_24,in_R9);
    if ((int)uVar3 != 0) {
      uVar2 = 0;
      if (0 < (int)local_40) {
        lVar5 = (long)local_3c;
        uVar1 = local_40 - 1;
        uVar7 = local_40 & 3;
        pfVar4 = local_38;
        if (uVar1 < 3) {
          dVar9 = 0.0;
        }
        else {
          uVar6 = local_40 & 0xfffffffc;
          dVar9 = 0.0;
          param_2 = 0;
          do {
            fVar10 = *pfVar4;
            if (*pfVar4 <= 0.0) {
              fVar10 = 0.0;
            }
            param_3 = (double)fVar10 + dVar9;
            fVar10 = *(float *)((long)pfVar4 + lVar5);
            if (fVar10 <= 0.0) {
              fVar10 = 0.0;
            }
            fVar11 = *(float *)((long)pfVar4 + lVar5 * 2);
            if (fVar11 <= 0.0) {
              fVar11 = 0.0;
            }
            param_4 = (double)fVar11 + (double)fVar10;
            fVar10 = *(float *)((long)pfVar4 + lVar5 * 3);
            if (fVar10 <= 0.0) {
              fVar10 = 0.0;
            }
            pfVar4 = pfVar4 + lVar5;
            dVar9 = (double)fVar10 + param_3 + param_4;
            uVar6 = uVar6 - 4;
          } while (uVar6 != 0);
        }
        if (uVar7 != 0) {
          param_2 = 0;
          do {
            fVar10 = *pfVar4;
            if (*pfVar4 <= 0.0) {
              fVar10 = 0.0;
            }
            param_3 = (double)fVar10;
            dVar9 = dVar9 + param_3;
            pfVar4 = (float *)((long)pfVar4 + lVar5);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (1 < (int)local_40) {
          dVar9 = dVar9 * (double)(float)((double)uVar8 * _DAT_006597d8);
          uVar2 = 0;
          param_2 = 0;
          param_3 = 0.0;
          do {
            fVar10 = *local_38;
            if (*local_38 <= 0.0) {
              fVar10 = 0.0;
            }
            param_4 = (double)fVar10;
            dVar9 = dVar9 - param_4;
            if (dVar9 < 0.0) goto LAB_0054a184;
            uVar2 = uVar2 + 1;
            local_38 = (float *)((long)local_38 + lVar5);
          } while (uVar1 != uVar2);
          uVar2 = uVar1;
        }
      }
LAB_0054a184:
      outlet_float((ulong)(uint)(float)(int)uVar2,param_2,param_3,param_4,param_5,param_6,param_7,
                   param_8,*(long **)(param_9 + 0x18));
    }
  }
  return;
}


