// Function : ftom_tilde_perform
// Namespace: 
// Entry    : 004f4f50
// Prototype: long ftom_tilde_perform(long param_1)
// Body     : 004f4f50 - 004f5080


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ftom_tilde_perform(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    pfVar5 = *(float **)(param_1 + 8);
    pfVar4 = *(float **)(param_1 + 0x10);
    uVar2 = uVar1;
    dVar7 = DAT_00652e18;
    if ((uVar1 & 1) != 0) {
      if (*pfVar5 <= 0.0) {
        fVar6 = DAT_00652e10;
      }
      else {
        dVar7 = log((double)*pfVar5 * _DAT_00652450);
        fVar6 = (float)(dVar7 * _DAT_00652458);
      }
      *pfVar4 = fVar6;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
      uVar2 = uVar1 - 1;
      dVar7 = DAT_00652e18;
    }
    DAT_00652e18 = dVar7;
    if (uVar1 != 1) {
      lVar3 = 0;
      do {
        dVar8 = dVar7;
        if (0.0 < pfVar5[lVar3]) {
          dVar7 = log((double)pfVar5[lVar3] * _DAT_00652450);
          dVar7 = dVar7 * _DAT_00652458;
          dVar8 = DAT_00652e18;
        }
        pfVar4[lVar3] = (float)dVar7;
        dVar7 = dVar8;
        if (0.0 < pfVar5[lVar3 + 1]) {
          dVar8 = log((double)pfVar5[lVar3 + 1] * _DAT_00652450);
          dVar8 = dVar8 * _DAT_00652458;
          dVar7 = DAT_00652e18;
        }
        pfVar4[lVar3 + 1] = (float)dVar8;
        lVar3 = lVar3 + 2;
      } while (uVar2 != (uint)lVar3);
    }
  }
  return param_1 + 0x20;
}


