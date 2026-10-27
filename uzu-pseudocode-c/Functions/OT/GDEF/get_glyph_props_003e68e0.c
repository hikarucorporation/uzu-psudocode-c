// Function : get_glyph_props
// Namespace: OT:GDEF
// Entry    : 003e68e0
// Prototype: uint get_glyph_props(GDEF * this, uint param_1)
// Body     : 003e68e0 - 003e6b70


/* OT::GDEF::get_glyph_props(unsigned int) const */

uint __thiscall OT::GDEF::get_glyph_props(GDEF *this,uint param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  GDEF *pGVar5;
  int iVar6;
  GDEF *pGVar7;
  
  if ((*(short *)this == 0x100) && (uVar2 = *(ushort *)(this + 4), uVar2 != 0)) {
    pGVar7 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
  }
  else {
    pGVar7 = (GDEF *)&_hb_NullPool;
  }
  uVar2 = *(ushort *)pGVar7 << 8 | *(ushort *)pGVar7 >> 8;
  if (uVar2 == 2) {
    uVar2 = *(ushort *)(pGVar7 + 2);
    pGVar5 = (GDEF *)&_hb_Null_OT_RangeRecord;
    if (uVar2 != 0) {
      iVar6 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
      iVar4 = 0;
      do {
        while( true ) {
          uVar3 = (uint)(iVar6 + iVar4) >> 1;
          lVar1 = (ulong)uVar3 * 6;
          if (param_1 < (ushort)(*(ushort *)(pGVar7 + lVar1 + 4) << 8 |
                                *(ushort *)(pGVar7 + lVar1 + 4) >> 8)) break;
          if (param_1 <=
              (ushort)(*(ushort *)(pGVar7 + lVar1 + 6) << 8 | *(ushort *)(pGVar7 + lVar1 + 6) >> 8))
          {
            pGVar5 = pGVar7 + (ulong)uVar3 * 6 + 4;
            goto LAB_003e6afb;
          }
          iVar4 = uVar3 + 1;
          if (iVar6 < iVar4) goto LAB_003e6afb;
        }
        iVar6 = uVar3 - 1;
      } while (iVar4 <= iVar6);
    }
LAB_003e6afb:
    uVar2 = *(ushort *)(pGVar5 + 4) << 8 | *(ushort *)(pGVar5 + 4) >> 8;
  }
  else {
    if (uVar2 != 1) {
      return 0;
    }
    uVar3 = param_1 - (ushort)(*(ushort *)(pGVar7 + 2) << 8 | *(ushort *)(pGVar7 + 2) >> 8);
    if (uVar3 < (ushort)(*(ushort *)(pGVar7 + 4) << 8 | *(ushort *)(pGVar7 + 4) >> 8)) {
      uVar2 = *(ushort *)(pGVar7 + (ulong)uVar3 * 2 + 6) << 8 |
              *(ushort *)(pGVar7 + (ulong)uVar3 * 2 + 6) >> 8;
    }
    else {
      uVar2 = (ushort)_hb_NullPool << 8 | (ushort)_hb_NullPool >> 8;
    }
  }
  if (uVar2 != 3) {
    if (uVar2 == 2) {
      return 4;
    }
    if (uVar2 == 1) {
      return 2;
    }
    return 0;
  }
  if ((*(short *)this == 0x100) && (uVar2 = *(ushort *)(this + 10), uVar2 != 0)) {
    pGVar7 = this + (ushort)(uVar2 << 8 | uVar2 >> 8);
    uVar2 = *(ushort *)pGVar7 << 8 | *(ushort *)pGVar7 >> 8;
  }
  else {
    pGVar7 = (GDEF *)&_hb_NullPool;
    uVar2 = (ushort)_hb_NullPool << 8 | (ushort)_hb_NullPool >> 8;
  }
  if (uVar2 == 2) {
    uVar2 = *(ushort *)(pGVar7 + 2);
    pGVar5 = (GDEF *)&_hb_Null_OT_RangeRecord;
    if (uVar2 != 0) {
      iVar6 = (ushort)(uVar2 << 8 | uVar2 >> 8) - 1;
      iVar4 = 0;
      do {
        while( true ) {
          uVar3 = (uint)(iVar6 + iVar4) >> 1;
          lVar1 = (ulong)uVar3 * 6;
          if (param_1 < (ushort)(*(ushort *)(pGVar7 + lVar1 + 4) << 8 |
                                *(ushort *)(pGVar7 + lVar1 + 4) >> 8)) break;
          if (param_1 <=
              (ushort)(*(ushort *)(pGVar7 + lVar1 + 6) << 8 | *(ushort *)(pGVar7 + lVar1 + 6) >> 8))
          {
            pGVar5 = pGVar7 + (ulong)uVar3 * 6 + 4;
            goto LAB_003e6b37;
          }
          iVar4 = uVar3 + 1;
          if (iVar6 < iVar4) goto LAB_003e6b37;
        }
        iVar6 = uVar3 - 1;
      } while (iVar4 <= iVar6);
    }
LAB_003e6b37:
    pGVar5 = pGVar5 + 4;
  }
  else {
    if (uVar2 != 1) {
      return 8;
    }
    uVar3 = param_1 - (ushort)(*(ushort *)(pGVar7 + 2) << 8 | *(ushort *)(pGVar7 + 2) >> 8);
    if (uVar3 < (ushort)(*(ushort *)(pGVar7 + 4) << 8 | *(ushort *)(pGVar7 + 4) >> 8)) {
      pGVar5 = pGVar7 + (ulong)uVar3 * 2 + 6;
    }
    else {
      pGVar5 = (GDEF *)&_hb_NullPool;
    }
  }
  return (uint)(ushort)(*(ushort *)pGVar5 << 8 | *(ushort *)pGVar5 >> 8) << 8 | 8;
}


