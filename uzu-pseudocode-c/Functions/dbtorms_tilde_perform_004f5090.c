// Function : dbtorms_tilde_perform
// Namespace: 
// Entry    : 004f5090
// Prototype: long dbtorms_tilde_perform(long param_1)
// Body     : 004f5090 - 004f51ca


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long dbtorms_tilde_perform(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    pfVar5 = *(float **)(param_1 + 8);
    pfVar4 = *(float **)(param_1 + 0x10);
    uVar2 = uVar1;
    if ((uVar1 & 1) != 0) {
      fVar7 = *pfVar5;
      fVar8 = 0.0;
      if (0.0 < fVar7) {
        if (DAT_0065343c <= fVar7) {
          fVar7 = DAT_0065343c;
        }
        dVar6 = exp((double)fVar7 * _DAT_006533a8 + _DAT_006533b0);
        fVar8 = (float)dVar6;
      }
      *pfVar4 = fVar8;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
      uVar2 = uVar1 - 1;
    }
    if (uVar1 != 1) {
      lVar3 = 0;
      do {
        fVar7 = pfVar5[lVar3];
        if (0.0 < fVar7) {
          if (DAT_0065343c <= fVar7) {
            fVar7 = DAT_0065343c;
          }
          dVar6 = exp((double)fVar7 * _DAT_006533a8 + _DAT_006533b0);
          pfVar4[lVar3] = (float)dVar6;
          fVar7 = pfVar5[lVar3 + 1];
        }
        else {
          pfVar4[lVar3] = 0.0;
          fVar7 = pfVar5[lVar3 + 1];
        }
        fVar8 = 0.0;
        if (0.0 < fVar7) {
          if (DAT_0065343c <= fVar7) {
            fVar7 = DAT_0065343c;
          }
          dVar6 = exp((double)fVar7 * _DAT_006533a8 + _DAT_006533b0);
          fVar8 = (float)dVar6;
        }
        pfVar4[lVar3 + 1] = fVar8;
        lVar3 = lVar3 + 2;
      } while (uVar2 != (uint)lVar3);
    }
  }
  return param_1 + 0x20;
}


