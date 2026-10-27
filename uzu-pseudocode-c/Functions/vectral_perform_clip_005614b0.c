// Function : vectral_perform_clip
// Namespace: 
// Entry    : 005614b0
// Prototype: undefined vectral_perform_clip(long param_1, uint param_2, long param_3, float * param_4, undefined4 * param_5, long param_6)
// Body     : 005614b0 - 005615c1


void vectral_perform_clip
               (long param_1,uint param_2,long param_3,float *param_4,undefined4 *param_5,
               long param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if (param_2 != 0) {
    lVar6 = *(long *)(param_1 + 0x48);
    iVar5 = *(int *)(param_1 + 0x40);
    fVar1 = *(float *)(param_1 + 0x68);
    fVar2 = *(float *)(param_1 + 0x6c);
    lVar7 = *(long *)(param_1 + 0x50);
    uVar10 = param_2;
    if ((param_2 & 1) != 0) {
      uVar10 = (uint)*param_4;
      if ((-1 < (int)uVar10) && ((int)uVar10 < iVar5)) {
        *(undefined4 *)(lVar6 + (ulong)uVar10 * 4) = *param_5;
      }
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      uVar10 = param_2 - 1;
    }
    if (param_2 != 1) {
      lVar8 = 0;
      do {
        uVar9 = (uint)param_4[lVar8];
        if ((-1 < (int)uVar9) && ((int)uVar9 < iVar5)) {
          *(undefined4 *)(lVar6 + (ulong)uVar9 * 4) = param_5[lVar8];
        }
        uVar9 = (uint)param_4[lVar8 + 1];
        if ((-1 < (int)uVar9) && ((int)uVar9 < iVar5)) {
          *(undefined4 *)(lVar6 + (ulong)uVar9 * 4) = param_5[lVar8 + 1];
        }
        lVar8 = lVar8 + 2;
      } while (uVar10 != (uint)lVar8);
    }
    if (param_2 != 0) {
      lVar8 = 0;
      do {
        uVar10 = (uint)*(float *)(param_3 + lVar8 * 4);
        fVar11 = 0.0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < iVar5)) {
          fVar11 = *(float *)(lVar6 + (ulong)uVar10 * 4);
          fVar4 = *(float *)(lVar7 + lVar8 * 4);
          fVar12 = fVar11 - fVar4;
          fVar3 = fVar1;
          if ((fVar12 < fVar1) || (fVar3 = fVar2, fVar2 < fVar12)) {
            fVar11 = fVar4 + fVar3;
          }
        }
        *(float *)(lVar7 + lVar8 * 4) = fVar11;
        *(float *)(param_6 + lVar8 * 4) = fVar11;
        lVar8 = lVar8 + 1;
      } while (param_2 != (uint)lVar8);
    }
  }
  return;
}


