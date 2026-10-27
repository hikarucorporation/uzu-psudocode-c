// Function : evaluate
// Namespace: OT:VarRegionList
// Entry    : 0040ef50
// Prototype: float evaluate(VarRegionList * this, uint param_1, long param_2, uint param_3, long param_4)
// Body     : 0040ef50 - 0040f0d6


/* OT::VarRegionList::evaluate(unsigned int, int const*, unsigned int, float*) const */

float __thiscall
OT::VarRegionList::evaluate(VarRegionList *this,uint param_1,long param_2,uint param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  VarRegionList *pVVar8;
  ulong uVar9;
  float *pfVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  
  if (param_1 < (ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8)) {
    if (param_4 == 0) {
      pfVar10 = (float *)0x0;
    }
    else {
      fVar15 = *(float *)(param_4 + (ulong)param_1 * 4);
      if (fVar15 != DAT_005d9078) {
        return fVar15;
      }
      if (NAN(fVar15) || NAN(DAT_005d9078)) {
        return fVar15;
      }
      pfVar10 = (float *)(param_4 + (ulong)param_1 * 4);
    }
    uVar1 = *(ushort *)this;
    fVar15 = DAT_005d9038;
    if (uVar1 == 0) {
      bVar14 = false;
    }
    else {
      uVar1 = uVar1 << 8 | uVar1 >> 8;
      uVar12 = 1;
      if (1 < uVar1) {
        uVar12 = (ulong)(uint)uVar1;
      }
      pVVar8 = this + (ulong)(param_1 * uVar1) * 6 + 8;
      uVar9 = 0;
      do {
        iVar11 = 0;
        if (uVar9 < param_3) {
          iVar11 = *(int *)(param_2 + uVar9 * 4);
        }
        uVar5 = *(ushort *)(pVVar8 + -2);
        fVar16 = DAT_005d9038;
        if (uVar5 != 0) {
          uVar5 = uVar5 << 8 | uVar5 >> 8;
          iVar13 = (int)(short)uVar5;
          if (iVar11 != iVar13) {
            if (iVar11 != 0) {
              uVar2 = *(ushort *)(pVVar8 + -4) << 8 | *(ushort *)(pVVar8 + -4) >> 8;
              if ((((short)uVar5 < (short)uVar2) ||
                  (uVar3 = *(ushort *)pVVar8 << 8 | *(ushort *)pVVar8 >> 8,
                  (short)uVar3 < (short)uVar5)) || (((short)uVar2 < 0 && (0 < (short)uVar3))))
              goto LAB_0040efe0;
              iVar6 = (int)(short)uVar2;
              if ((iVar11 - iVar6 != 0 && iVar6 <= iVar11) &&
                 (iVar4 = (int)(short)uVar3, iVar11 < iVar4)) {
                iVar7 = iVar4 - iVar11;
                iVar4 = iVar4 - iVar13;
                if (iVar11 < iVar13) {
                  iVar7 = iVar11 - iVar6;
                  iVar4 = iVar13 - iVar6;
                }
                fVar16 = (float)iVar7 / (float)iVar4;
                if ((fVar16 != 0.0) || (NAN(fVar16))) goto LAB_0040efe0;
              }
            }
            fVar15 = 0.0;
            if (param_4 == 0) {
              return 0.0;
            }
            goto LAB_0040f0c4;
          }
        }
LAB_0040efe0:
        fVar15 = fVar15 * fVar16;
        uVar9 = uVar9 + 1;
        pVVar8 = pVVar8 + 6;
      } while (uVar12 != uVar9);
      bVar14 = (uint)uVar12 < (uint)uVar1;
    }
    if ((param_4 != 0) && (!bVar14)) {
LAB_0040f0c4:
      *pfVar10 = fVar15;
    }
  }
  else {
    fVar15 = 0.0;
  }
  return fVar15;
}


