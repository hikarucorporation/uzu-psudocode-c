// Function : evaluate<OT::ItemVarStoreInstancer>
// Namespace: OT:Condition
// Entry    : 00417e80
// Prototype: byte evaluate<OT::ItemVarStoreInstancer>(Condition * this, long param_1, uint param_2, long * param_3)
// Body     : 00417e80 - 00418167


/* bool OT::Condition::evaluate<OT::ItemVarStoreInstancer>(int const*, unsigned int,
   OT::ItemVarStoreInstancer*) const */

byte __thiscall
OT::Condition::evaluate<OT::ItemVarStoreInstancer>
          (Condition *this,long param_1,uint param_2,long *param_3)

{
  Condition CVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  Condition *pCVar9;
  VarData *this_00;
  Condition *this_01;
  VarRegionList *pVVar10;
  byte bVar11;
  ulong uVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  
  bVar11 = 0;
  uVar6 = *(ushort *)this << 8 | *(ushort *)this >> 8;
  while (uVar6 == 5) {
    pCVar9 = (Condition *)&_hb_NullPool;
    if (this[4] != (Condition)0x0 || (this[3] != (Condition)0x0 || this[2] != (Condition)0x0)) {
      pCVar9 = this + ((ulong)(byte)this[3] << 8 | (ulong)(byte)this[2] << 0x10 |
                      (ulong)(byte)this[4]);
    }
    bVar11 = bVar11 ^ 1;
    this = pCVar9;
    uVar6 = *(ushort *)pCVar9 << 8 | *(ushort *)pCVar9 >> 8;
  }
  switch(uVar6) {
  case 1:
    uVar6 = *(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8;
    iVar4 = 0;
    if (uVar6 < param_2) {
      iVar4 = *(int *)(param_1 + (ulong)uVar6 * 4);
    }
    bVar3 = iVar4 <= (short)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8) &&
            (short)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8) <= iVar4;
    break;
  case 2:
    uVar6 = *(ushort *)(this + 2);
    uVar5 = *(uint *)(this + 4);
    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    if ((DeltaSetIndexMap *)param_3[1] != (DeltaSetIndexMap *)0x0) {
      uVar5 = DeltaSetIndexMap::map((DeltaSetIndexMap *)param_3[1],uVar5);
    }
    fVar15 = 0.0;
    if ((int)param_3[3] != 0) {
      lVar8 = *param_3;
      if (uVar5 >> 0x10 < (uint)(ushort)(*(ushort *)(lVar8 + 6) << 8 | *(ushort *)(lVar8 + 6) >> 8))
      {
        uVar2 = *(uint *)(lVar8 + 8 + (ulong)(uVar5 >> 0x10) * 4);
        pVVar10 = (VarRegionList *)&_hb_NullPool;
        this_00 = (VarData *)&_hb_NullPool;
        if (uVar2 != 0) {
          this_00 = (VarData *)
                    ((ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18) + lVar8);
        }
        uVar2 = *(uint *)(lVar8 + 2);
        if (uVar2 != 0) {
          pVVar10 = (VarRegionList *)
                    (lVar8 + (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8
                                    | uVar2 << 0x18));
        }
        fVar15 = VarData::get_delta(this_00,uVar5 & 0xffff,param_3[2],*(uint *)(param_3 + 3),pVVar10
                                    ,param_3[4]);
      }
    }
    bVar3 = 0 < (int)((float)(int)(short)(uVar6 << 8 | uVar6 >> 8) + fVar15);
    break;
  case 3:
    uVar7 = (ulong)(byte)this[2];
    if (uVar7 == 0) {
      bVar14 = false;
    }
    else {
      pCVar9 = this + 5;
      bVar14 = true;
      uVar12 = 1;
      do {
        this_01 = (Condition *)&_hb_NullPool;
        if (*pCVar9 != (Condition)0x0 ||
            (pCVar9[-1] != (Condition)0x0 || pCVar9[-2] != (Condition)0x0)) {
          this_01 = this + ((ulong)(byte)pCVar9[-1] << 8 | (ulong)(byte)pCVar9[-2] << 0x10 |
                           (ulong)(byte)*pCVar9);
        }
        bVar3 = evaluate<OT::ItemVarStoreInstancer>(this_01,param_1,param_2,param_3);
        if (bVar3 == 0) break;
        bVar14 = uVar12 < uVar7;
        pCVar9 = pCVar9 + 3;
        bVar13 = uVar12 != uVar7;
        uVar12 = uVar12 + 1;
      } while (bVar13);
    }
    bVar3 = bVar14 ^ 1;
    break;
  case 4:
    CVar1 = this[2];
    if ((ulong)(byte)CVar1 != 0) {
      lVar8 = 0;
      do {
        pCVar9 = (Condition *)&_hb_NullPool;
        if (this[lVar8 + 5] != (Condition)0x0 ||
            (this[lVar8 + 4] != (Condition)0x0 || this[lVar8 + 3] != (Condition)0x0)) {
          pCVar9 = this + ((ulong)(byte)this[lVar8 + 4] << 8 | (ulong)(byte)this[lVar8 + 3] << 0x10
                          | (ulong)(byte)this[lVar8 + 5]);
        }
        bVar3 = evaluate<OT::ItemVarStoreInstancer>(pCVar9,param_1,param_2,param_3);
      } while ((bVar3 == 0) &&
              (bVar14 = (ulong)(byte)CVar1 * 3 + -3 != lVar8, lVar8 = lVar8 + 3, bVar14));
      break;
    }
  default:
    bVar3 = 0;
  }
  return (bVar11 ^ bVar3) & 1;
}


