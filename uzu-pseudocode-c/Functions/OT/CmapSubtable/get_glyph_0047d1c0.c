// Function : get_glyph
// Namespace: OT:CmapSubtable
// Entry    : 0047d1c0
// Prototype: ulong get_glyph(CmapSubtable * this, uint param_1, uint * param_2)
// Body     : 0047d1c0 - 0047d4d7


/* WARNING: Type propagation algorithm not settling */
/* OT::CmapSubtable::get_glyph(unsigned int, unsigned int*) const */

ulong __thiscall OT::CmapSubtable::get_glyph(CmapSubtable *this,uint param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  CmapSubtable *pCVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  uVar6 = (ushort)_hb_NullPool;
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 0:
    if ((param_1 < 0x100) &&
       (uVar4 = (ulong)(byte)this[(ulong)param_1 + 6], this[(ulong)param_1 + 6] != (CmapSubtable)0x0
       )) {
LAB_0047d4ba:
      *param_2 = (uint)uVar4;
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
    break;
  case 4:
    uVar6 = *(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8;
    iVar11 = 0;
    if (uVar6 < 2) {
      return 0;
    }
    uVar10 = (uint)(uVar6 >> 1);
    uVar4 = (ulong)(uVar10 * 2);
    lVar1 = uVar4 * 2 + 0x10;
    lVar2 = uVar4 + lVar1;
    iVar8 = uVar10 - 1;
    do {
      while( true ) {
        uVar7 = (uint)(iVar11 + iVar8) >> 1;
        uVar5 = (ulong)(iVar11 + iVar8 & 0xfffffffe);
        if ((ushort)(*(ushort *)(this + uVar5 + 0xe) << 8 | *(ushort *)(this + uVar5 + 0xe) >> 8) <
            param_1) break;
        if ((ushort)(*(ushort *)(this + (ulong)(uVar10 + 1) * 2 + uVar5 + 0xe) << 8 |
                    *(ushort *)(this + (ulong)(uVar10 + 1) * 2 + uVar5 + 0xe) >> 8) <= param_1) {
          uVar5 = (ulong)uVar7;
          uVar6 = *(ushort *)(this + uVar5 * 2 + lVar2);
          if (uVar6 != 0) {
            uVar7 = ((param_1 - uVar10) + uVar7 + (uint)((ushort)(uVar6 << 8 | uVar6 >> 8) >> 1)) -
                    (uint)(ushort)(*(ushort *)(this + uVar5 * 2 + uVar4 + 0x10) << 8 |
                                  *(ushort *)(this + uVar5 * 2 + uVar4 + 0x10) >> 8);
            if (((uint)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8) +
                uVar10 * -8) - 0x10 >> 1 <= uVar7) {
              return 0;
            }
            uVar6 = *(ushort *)(this + (ulong)uVar7 * 2 + uVar4 + lVar2);
            if (uVar6 == 0) {
              return 0;
            }
            param_1 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
          }
          uVar10 = (ushort)(*(ushort *)(this + uVar5 * 2 + lVar1) << 8 |
                           *(ushort *)(this + uVar5 * 2 + lVar1) >> 8) + param_1 & 0xffff;
          uVar4 = (ulong)uVar10;
          if (uVar10 == 0) {
            return 0;
          }
          goto LAB_0047d4ba;
        }
        iVar8 = uVar7 - 1;
        if (iVar8 < iVar11) {
          return 0;
        }
      }
      iVar11 = uVar7 + 1;
    } while (iVar11 <= iVar8);
    break;
  case 6:
    uVar10 = param_1 - (ushort)(*(ushort *)(this + 6) << 8 | *(ushort *)(this + 6) >> 8);
    if (uVar10 < (ushort)(*(ushort *)(this + 8) << 8 | *(ushort *)(this + 8) >> 8)) {
      uVar6 = *(ushort *)(this + (ulong)uVar10 * 2 + 10);
    }
    goto joined_r0x0047d32b;
  case 10:
    uVar10 = *(uint *)(this + 0xc);
    uVar7 = *(uint *)(this + 0x10);
    uVar10 = param_1 - (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                       uVar10 << 0x18);
    if (uVar10 < (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18))
    {
      uVar6 = *(ushort *)(this + (ulong)uVar10 * 2 + 0x14);
    }
joined_r0x0047d32b:
    uVar4 = (ulong)uVar6;
    if (uVar6 != 0) {
      *param_2 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
    }
    bVar12 = uVar6 == 0;
LAB_0047d44c:
    return CONCAT71((int7)(uVar4 >> 8),!bVar12);
  case 0xc:
    uVar10 = *(uint *)(this + 0xc);
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    pCVar9 = (CmapSubtable *)&_hb_Null_OT_CmapSubtableLongGroup;
    if (0 < (int)uVar10) {
      iVar11 = uVar10 - 1;
      iVar8 = 0;
      do {
        while( true ) {
          uVar7 = (uint)(iVar11 + iVar8) >> 1;
          lVar1 = (ulong)uVar7 * 0xc;
          uVar10 = *(uint *)(this + lVar1 + 0x10);
          if (param_1 < (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                        uVar10 << 0x18)) break;
          uVar10 = *(uint *)(this + lVar1 + 0x14);
          if (param_1 <=
              (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18))
          {
            pCVar9 = this + (ulong)uVar7 * 0xc + 0x10;
            goto LAB_0047d409;
          }
          iVar8 = uVar7 + 1;
          if (iVar11 < iVar8) goto LAB_0047d409;
        }
        iVar11 = uVar7 - 1;
      } while (iVar8 <= iVar11);
    }
LAB_0047d409:
    uVar10 = *(uint *)pCVar9;
    uVar7 = *(uint *)(pCVar9 + 4);
    uVar3 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    bVar12 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) <
             uVar3;
    uVar10 = *(uint *)(pCVar9 + 8);
    uVar10 = (param_1 - uVar3) +
             (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18);
    if (uVar10 != 0 && !bVar12) {
      *param_2 = uVar10;
    }
    return (ulong)CONCAT31((int3)(uVar3 >> 8),uVar10 == 0 || bVar12) ^ 1;
  case 0xd:
    uVar10 = *(uint *)(this + 0xc);
    uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    pCVar9 = (CmapSubtable *)&_hb_Null_OT_CmapSubtableLongGroup;
    if (0 < (int)uVar10) {
      iVar11 = uVar10 - 1;
      iVar8 = 0;
      do {
        while( true ) {
          uVar7 = (uint)(iVar11 + iVar8) >> 1;
          lVar1 = (ulong)uVar7 * 0xc;
          uVar10 = *(uint *)(this + lVar1 + 0x10);
          if (param_1 < (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                        uVar10 << 0x18)) break;
          uVar10 = *(uint *)(this + lVar1 + 0x14);
          if (param_1 <=
              (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18))
          {
            pCVar9 = this + (ulong)uVar7 * 0xc + 0x10;
            goto LAB_0047d43c;
          }
          iVar8 = uVar7 + 1;
          if (iVar11 < iVar8) goto LAB_0047d43c;
        }
        iVar11 = uVar7 - 1;
      } while (iVar8 <= iVar11);
    }
LAB_0047d43c:
    uVar10 = *(uint *)(pCVar9 + 8);
    uVar4 = (ulong)uVar10;
    if (uVar10 != 0) {
      *param_2 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18
      ;
    }
    bVar12 = uVar10 == 0;
    goto LAB_0047d44c;
  }
  return 0;
}


