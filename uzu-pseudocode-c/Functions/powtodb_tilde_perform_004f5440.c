// Function : powtodb_tilde_perform
// Namespace: 
// Entry    : 004f5440
// Prototype: long powtodb_tilde_perform(long param_1)
// Body     : 004f5440 - 004f5566


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long powtodb_tilde_perform(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    pfVar5 = *(float **)(param_1 + 8);
    pfVar4 = *(float **)(param_1 + 0x10);
    uVar2 = uVar1;
    if ((uVar1 & 1) != 0) {
      fVar6 = 0.0;
      if (0.0 < *pfVar5) {
        dVar7 = log((double)*pfVar5);
        fVar8 = (float)(dVar7 * _DAT_006533c8 + DAT_005d90a0);
        fVar6 = 0.0;
        if (0.0 <= fVar8) {
          fVar6 = fVar8;
        }
      }
      *pfVar4 = fVar6;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
      uVar2 = uVar1 - 1;
    }
    if (uVar1 != 1) {
      lVar3 = 0;
      do {
        fVar6 = 0.0;
        if (0.0 < pfVar5[lVar3]) {
          dVar7 = log((double)pfVar5[lVar3]);
          fVar6 = (float)(dVar7 * _DAT_006533c8 + DAT_005d90a0);
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
        }
        pfVar4[lVar3] = fVar6;
        fVar6 = 0.0;
        if (0.0 < pfVar5[lVar3 + 1]) {
          dVar7 = log((double)pfVar5[lVar3 + 1]);
          fVar6 = (float)(dVar7 * _DAT_006533c8 + DAT_005d90a0);
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
        }
        pfVar4[lVar3 + 1] = fVar6;
        lVar3 = lVar3 + 2;
      } while (uVar2 != (uint)lVar3);
    }
  }
  return param_1 + 0x20;
}


