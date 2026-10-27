// Function : get_delta
// Namespace: OT:VarData
// Entry    : 0040ed00
// Prototype: float get_delta(VarData * this, uint param_1, long param_2, uint param_3, VarRegionList * param_4, long param_5)
// Body     : 0040ed00 - 0040ef4f


/* OT::VarData::get_delta(unsigned int, int const*, unsigned int, OT::VarRegionList const&, float*)
   const */

float __thiscall
OT::VarData::get_delta
          (VarData *this,uint param_1,long param_2,uint param_3,VarRegionList *param_4,long param_5)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  VarData *pVVar9;
  VarData *pVVar10;
  ulong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  
  if ((ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8) <= param_1) {
    return 0.0;
  }
  uVar3 = *(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8;
  uVar1 = *(ushort *)(this + 2);
  uVar4 = (uVar1 & 0xff7f) << 8 | uVar1 >> 8;
  bVar12 = (uVar1 & 0x80) == 0;
  uVar6 = (uint)uVar3;
  if (bVar12) {
    uVar6 = (uint)uVar4;
  }
  uVar5 = uVar1 & 0x80;
  if (!bVar12) {
    uVar5 = (uint)uVar4;
  }
  pVVar9 = this + (ulong)((2 - (uint)bVar12) * param_1 * ((uint)uVar4 + (uint)uVar3)) +
                  (ulong)uVar3 * 2 + 6;
  uVar11 = (ulong)uVar5;
  if (uVar5 == 0) {
    fVar13 = 0.0;
    if (uVar6 == 0) goto LAB_0040eebc;
  }
  else {
    pVVar10 = this + 6;
    fVar13 = 0.0;
    uVar8 = uVar11;
    do {
      fVar14 = VarRegionList::evaluate
                         (param_4,(uint)(ushort)(*(ushort *)pVVar10 << 8 | *(ushort *)pVVar10 >> 8),
                          param_2,param_3,param_5);
      uVar2 = *(uint *)pVVar9;
      pVVar9 = pVVar9 + 4;
      fVar13 = fVar13 + (float)(int)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8
                                    | uVar2 << 0x18) * fVar14;
      pVVar10 = pVVar10 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (uVar6 <= uVar5) {
LAB_0040eebc:
      if (uVar3 <= uVar5) {
        return fVar13;
      }
      goto LAB_0040eed1;
    }
  }
  do {
    fVar14 = VarRegionList::evaluate
                       (param_4,(uint)(ushort)(*(ushort *)(this + uVar11 * 2 + 6) << 8 |
                                              *(ushort *)(this + uVar11 * 2 + 6) >> 8),param_2,
                        param_3,param_5);
    uVar1 = *(ushort *)pVVar9;
    pVVar9 = pVVar9 + 2;
    fVar13 = fVar13 + (float)(int)(short)(uVar1 << 8 | uVar1 >> 8) * fVar14;
    uVar11 = uVar11 + 1;
  } while (uVar6 != uVar11);
  uVar5 = uVar6;
  if (uVar3 <= uVar6) {
    return fVar13;
  }
LAB_0040eed1:
  lVar7 = 0;
  do {
    fVar14 = VarRegionList::evaluate
                       (param_4,(uint)(ushort)(*(ushort *)(this + lVar7 * 2 + (ulong)uVar5 * 2 + 6)
                                               << 8 | *(ushort *)
                                                       (this + lVar7 * 2 + (ulong)uVar5 * 2 + 6) >>
                                                      8),param_2,param_3,param_5);
    fVar13 = fVar13 + (float)(int)(char)pVVar9[lVar7] * fVar14;
    lVar7 = lVar7 + 1;
  } while ((ulong)uVar3 - (ulong)uVar5 != lVar7);
  return fVar13;
}


