// Function : apply
// Namespace: OT:Layout:GPOS_impl:MarkBasePosFormat1_2_OT__Layout__SmallTypes_
// Entry    : 0040f470
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2, MarkBasePosFormat1_2<OT::Layout::SmallTypes> * this, long param_4)
// Body     : 0040f470 - 0040f79d


/* OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */

ulong __thiscall
OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,
          MarkBasePosFormat1_2<OT::Layout::SmallTypes> *this,long param_4)

{
  ushort uVar1;
  int iVar2;
  hb_buffer_t *phVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  ushort uVar11;
  uint uVar12;
  Coverage *pCVar13;
  MarkArray *this_00;
  MarkBasePosFormat1_2<OT::Layout::SmallTypes> *pMVar14;
  uint *puVar15;
  long lVar16;
  undefined8 extraout_XMM0_Qa;
  
  phVar3 = *(hb_buffer_t **)(param_4 + 0xa0);
  uVar1 = *(ushort *)(this + 2);
  if (uVar1 == 0) {
    pCVar13 = (Coverage *)&_hb_NullPool;
  }
  else {
    pCVar13 = (Coverage *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8));
  }
  lVar16 = *(long *)(phVar3 + 0x70);
  uVar12 = *(uint *)(phVar3 + 0x5c);
  uVar5 = Common::Coverage::get_coverage(pCVar13,*(uint *)(lVar16 + (ulong)uVar12 * 0x14));
  if (uVar5 != 0xffffffff) {
    *(undefined4 *)(param_4 + 0x18) = 8;
    uVar6 = *(uint *)(param_4 + 0x14c);
    if (uVar12 < uVar6) {
      *(undefined8 *)(param_4 + 0x148) = 0xffffffff;
      uVar6 = 0;
    }
    if (uVar6 < uVar12) {
      uVar6 = 8;
      do {
        uVar12 = uVar12 - 1;
        uVar9 = (ulong)uVar12;
        uVar1 = *(ushort *)(lVar16 + 0xc + uVar9 * 0x14);
        if (((uVar6 & uVar1 & 0xe) == 0) &&
           ((puVar15 = (uint *)(uVar9 * 0x14 + lVar16), (uVar1 & 8) == 0 ||
            (uVar8 = hb_ot_apply_context_t::match_properties_mark
                               (*(hb_ot_apply_context_t **)(param_4 + 0x10),*puVar15,(uint)uVar1,
                                uVar6), (char)uVar8 != '\0')))) {
          pbVar7 = (byte *)(uVar9 * 0x14 + 0xc + lVar16);
          uVar1 = *(ushort *)(lVar16 + 0x10 + uVar9 * 0x14);
          uVar11 = 0;
          bVar10 = false;
          if ((((uVar1 & 0x20) != 0) &&
              ((bVar10 = false, (*pbVar7 & 0x10) == 0 &&
               ((*(char *)(param_4 + 0x20) != '\0' || (bVar10 = false, (uVar1 & 0x21f) != 0x201)))))
              ) && ((*(char *)(param_4 + 0x21) != '\0' || (bVar10 = false, (uVar1 & 0x11f) != 0x101)
                    ))) {
            bVar10 = (uVar1 & 0x40) == 0 || *(char *)(param_4 + 0x22) != '\0';
          }
          if (*(ushort **)(param_4 + 0x38) != (ushort *)0x0) {
            uVar1 = **(ushort **)(param_4 + 0x38);
            uVar11 = uVar1 << 8 | uVar1 >> 8;
          }
          if (((*(uint *)(lVar16 + 4 + uVar9 * 0x14) & *(uint *)(param_4 + 0x1c)) != 0) &&
             ((*(byte *)(param_4 + 0x24) == 0 || (*(byte *)(param_4 + 0x24) == pbVar7[3])))) {
            if (*(code **)(param_4 + 0x28) == (code *)0x0) {
              if (!bVar10) goto LAB_0040f627;
            }
            else {
              cVar4 = (**(code **)(param_4 + 0x28))(puVar15,uVar11,*(undefined8 *)(param_4 + 0x30));
              if (cVar4 != '\0') {
LAB_0040f627:
                lVar16 = *(long *)(phVar3 + 0x70);
                uVar8 = accept(lVar16,uVar12);
                if ((char)uVar8 == '\0') {
                  uVar1 = *(ushort *)(this + 4);
                  pCVar13 = (Coverage *)&_hb_NullPool;
                  if (uVar1 != 0) {
                    pCVar13 = (Coverage *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8));
                  }
                  uVar6 = Common::Coverage::get_coverage(pCVar13,*(uint *)(lVar16 + uVar9 * 0x14));
                  if (uVar6 == 0xffffffff) goto LAB_0040f521;
                }
                *(uint *)(param_4 + 0x148) = uVar12;
                break;
              }
            }
          }
        }
LAB_0040f521:
        if (uVar12 <= *(uint *)(param_4 + 0x14c)) break;
        uVar6 = *(uint *)(param_4 + 0x18);
        lVar16 = *(long *)(phVar3 + 0x70);
      } while( true );
    }
    iVar2 = *(int *)(phVar3 + 0x5c);
    *(int *)(param_4 + 0x14c) = iVar2;
    uVar12 = *(uint *)(param_4 + 0x148);
    if ((ulong)uVar12 == 0xffffffff) {
      if (((byte)phVar3[0x18] & 0x40) == 0) {
        return 0;
      }
      uVar12 = 0;
    }
    else {
      uVar1 = *(ushort *)(this + 4);
      if (uVar1 == 0) {
        pCVar13 = (Coverage *)&_hb_NullPool;
      }
      else {
        pCVar13 = (Coverage *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8));
      }
      uVar6 = Common::Coverage::get_coverage
                        (pCVar13,*(uint *)(*(long *)(phVar3 + 0x70) + (ulong)uVar12 * 0x14));
      if (uVar6 != 0xffffffff) {
        uVar1 = *(ushort *)(this + 8);
        pMVar14 = (MarkBasePosFormat1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
        this_00 = (MarkArray *)&_hb_NullPool;
        if (uVar1 != 0) {
          this_00 = (MarkArray *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8));
        }
        uVar1 = *(ushort *)(this + 10);
        if (uVar1 != 0) {
          pMVar14 = this + (ushort)(uVar1 << 8 | uVar1 >> 8);
        }
        uVar9 = MarkArray::apply(extraout_XMM0_Qa,param_2,this_00,param_4,uVar5,uVar6,
                                 (ushort *)pMVar14,
                                 (ulong)(ushort)(*(ushort *)(this + 6) << 8 |
                                                *(ushort *)(this + 6) >> 8),uVar12);
        return uVar9;
      }
      if (((byte)phVar3[0x18] & 0x40) == 0) {
        return 0;
      }
    }
    hb_buffer_t::_set_glyph_flags(phVar3,2,uVar12,iVar2 + 1,'\0');
  }
  return 0;
}


