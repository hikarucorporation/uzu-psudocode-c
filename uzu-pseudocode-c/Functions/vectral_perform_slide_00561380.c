// Function : vectral_perform_slide
// Namespace: 
// Entry    : 00561380
// Prototype: undefined vectral_perform_slide(long param_1, uint param_2, long param_3, float * param_4, undefined4 * param_5, long param_6)
// Body     : 00561380 - 005614a5


void vectral_perform_slide
               (long param_1,uint param_2,long param_3,float *param_4,undefined4 *param_5,
               long param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  
  if (param_2 != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    iVar3 = *(int *)(param_1 + 0x40);
    dVar1 = *(double *)(param_1 + 0x58);
    dVar2 = *(double *)(param_1 + 0x60);
    lVar5 = *(long *)(param_1 + 0x50);
    uVar8 = param_2;
    if ((param_2 & 1) != 0) {
      uVar8 = (uint)*param_4;
      if ((-1 < (int)uVar8) && ((int)uVar8 < iVar3)) {
        *(undefined4 *)(lVar4 + (ulong)uVar8 * 4) = *param_5;
      }
      param_4 = param_4 + 1;
      param_5 = param_5 + 1;
      uVar8 = param_2 - 1;
    }
    if (param_2 != 1) {
      lVar6 = 0;
      do {
        uVar7 = (uint)param_4[lVar6];
        if ((-1 < (int)uVar7) && ((int)uVar7 < iVar3)) {
          *(undefined4 *)(lVar4 + (ulong)uVar7 * 4) = param_5[lVar6];
        }
        uVar7 = (uint)param_4[lVar6 + 1];
        if ((-1 < (int)uVar7) && ((int)uVar7 < iVar3)) {
          *(undefined4 *)(lVar4 + (ulong)uVar7 * 4) = param_5[lVar6 + 1];
        }
        lVar6 = lVar6 + 2;
      } while (uVar8 != (uint)lVar6);
    }
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        uVar8 = (uint)*(float *)(param_3 + lVar6 * 4);
        fVar9 = 0.0;
        if ((-1 < (int)uVar8) && (fVar9 = 0.0, (int)uVar8 < iVar3)) {
          fVar9 = *(float *)(lVar5 + lVar6 * 4);
          fVar10 = *(float *)(lVar4 + (ulong)uVar8 * 4) - fVar9;
          dVar11 = dVar1;
          if (fVar10 <= 0.0) {
            dVar11 = dVar2;
          }
          fVar9 = (float)((double)fVar9 + (double)fVar10 * dVar11);
        }
        *(float *)(lVar5 + lVar6 * 4) = fVar9;
        *(float *)(param_6 + lVar6 * 4) = fVar9;
        lVar6 = lVar6 + 1;
      } while (param_2 != (uint)lVar6);
    }
  }
  return;
}


