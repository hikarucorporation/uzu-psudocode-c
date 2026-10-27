// Function : mtof_tilde_perform
// Namespace: 
// Entry    : 004f4df0
// Prototype: long mtof_tilde_perform(long param_1)
// Body     : 004f4df0 - 004f4f4e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long mtof_tilde_perform(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    pfVar5 = *(float **)(param_1 + 8);
    pfVar4 = *(float **)(param_1 + 0x10);
    uVar2 = uVar1;
    fVar8 = DAT_00652e10;
    if ((uVar1 & 1) != 0) {
      fVar8 = *pfVar5;
      fVar6 = 0.0;
      if (DAT_00652e10 < fVar8) {
        if (DAT_00653438 <= fVar8) {
          fVar8 = DAT_00653438;
        }
        dVar7 = exp((double)fVar8 * _DAT_00652440);
        fVar6 = (float)(dVar7 * _DAT_00652448);
      }
      *pfVar4 = fVar6;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
      uVar2 = uVar1 - 1;
      fVar8 = DAT_00652e10;
    }
    DAT_00652e10 = fVar8;
    if (uVar1 != 1) {
      lVar3 = 0;
      do {
        fVar6 = pfVar5[lVar3];
        fVar9 = 0.0;
        if (fVar8 < fVar6) {
          if (DAT_00653438 <= fVar6) {
            fVar6 = DAT_00653438;
          }
          dVar7 = exp((double)fVar6 * _DAT_00652440);
          fVar8 = DAT_00652e10;
          fVar9 = 0.0;
          pfVar4[lVar3] = (float)(dVar7 * _DAT_00652448);
          fVar6 = pfVar5[lVar3 + 1];
          if (fVar8 < fVar6) goto LAB_004f4f1a;
        }
        else {
          pfVar4[lVar3] = 0.0;
          fVar6 = pfVar5[lVar3 + 1];
          if (fVar8 < fVar6) {
LAB_004f4f1a:
            if (DAT_00653438 <= fVar6) {
              fVar6 = DAT_00653438;
            }
            dVar7 = exp((double)fVar6 * _DAT_00652440);
            fVar9 = (float)(dVar7 * _DAT_00652448);
            fVar8 = DAT_00652e10;
          }
        }
        pfVar4[lVar3 + 1] = fVar9;
        lVar3 = lVar3 + 2;
      } while (uVar2 != (uint)lVar3);
    }
  }
  return param_1 + 0x20;
}


