// Function : log_tilde_perform_scalar
// Namespace: 
// Entry    : 005894b0
// Prototype: long log_tilde_perform_scalar(long param_1)
// Body     : 005894b0 - 00589617


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long log_tilde_perform_scalar(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double local_30;
  
  pfVar5 = *(float **)(param_1 + 8);
  fVar6 = **(float **)(param_1 + 0x10);
  local_30 = _DAT_005d9000;
  if ((0.0 < fVar6) && (fVar6 != DAT_005d9038)) {
    dVar8 = log((double)fVar6);
    local_30 = (double)(float)(_DAT_005d9000 / dVar8);
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    pfVar4 = *(float **)(param_1 + 0x18);
    uVar2 = uVar1;
    fVar6 = DAT_0065b9c0;
    if ((uVar1 & 1) != 0) {
      if (*pfVar5 <= 0.0) {
      }
      else {
        dVar8 = log((double)*pfVar5);
        fVar6 = (float)(dVar8 * local_30);
      }
      pfVar5 = pfVar5 + 1;
      *pfVar4 = fVar6;
      pfVar4 = pfVar4 + 1;
      uVar2 = uVar1 - 1;
      fVar6 = DAT_0065b9c0;
    }
    DAT_0065b9c0 = fVar6;
    if (uVar1 != 1) {
      lVar3 = 0;
      do {
        fVar7 = fVar6;
        if (0.0 < pfVar5[lVar3]) {
          dVar8 = log((double)pfVar5[lVar3]);
          fVar6 = (float)(dVar8 * local_30);
          fVar7 = DAT_0065b9c0;
        }
        pfVar4[lVar3] = fVar6;
        fVar6 = fVar7;
        if (0.0 < pfVar5[lVar3 + 1]) {
          dVar8 = log((double)pfVar5[lVar3 + 1]);
          fVar7 = (float)(dVar8 * local_30);
          fVar6 = DAT_0065b9c0;
        }
        pfVar4[lVar3 + 1] = fVar7;
        lVar3 = lVar3 + 2;
      } while (uVar2 != (uint)lVar3);
    }
  }
  return param_1 + 0x28;
}


