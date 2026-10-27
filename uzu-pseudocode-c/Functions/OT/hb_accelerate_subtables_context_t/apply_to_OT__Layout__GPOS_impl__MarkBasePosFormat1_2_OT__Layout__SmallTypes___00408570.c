// Function : apply_to<OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00408570
// Prototype: undefined8 apply_to<OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>>(long param_1, long param_2)
// Body     : 00408570 - 00408574


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

undefined8 __cdecl
OT::hb_accelerate_subtables_context_t::
apply_to<OT::Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>>
          (long param_1,long param_2)

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
  MarkArray *this;
  ushort *puVar14;
  uint *puVar15;
  long lVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  
  phVar3 = *(hb_buffer_t **)(param_2 + 0xa0);
  uVar1 = *(ushort *)(param_1 + 2);
  if (uVar1 == 0) {
    pCVar13 = (Coverage *)&_hb_NullPool;
  }
  else {
    pCVar13 = (Coverage *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
  }
  lVar16 = *(long *)(phVar3 + 0x70);
  uVar12 = *(uint *)(phVar3 + 0x5c);
  uVar5 = Layout::Common::Coverage::get_coverage(pCVar13,*(uint *)(lVar16 + (ulong)uVar12 * 0x14));
  if (uVar5 != 0xffffffff) {
    *(undefined4 *)(param_2 + 0x18) = 8;
    uVar6 = *(uint *)(param_2 + 0x14c);
    if (uVar12 < uVar6) {
      *(undefined8 *)(param_2 + 0x148) = 0xffffffff;
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
                               (*(hb_ot_apply_context_t **)(param_2 + 0x10),*puVar15,(uint)uVar1,
                                uVar6), (char)uVar8 != '\0')))) {
          pbVar7 = (byte *)(uVar9 * 0x14 + 0xc + lVar16);
          uVar1 = *(ushort *)(lVar16 + 0x10 + uVar9 * 0x14);
          uVar11 = 0;
          bVar10 = false;
          if ((((uVar1 & 0x20) != 0) &&
              ((bVar10 = false, (*pbVar7 & 0x10) == 0 &&
               ((*(char *)(param_2 + 0x20) != '\0' || (bVar10 = false, (uVar1 & 0x21f) != 0x201)))))
              ) && ((*(char *)(param_2 + 0x21) != '\0' || (bVar10 = false, (uVar1 & 0x11f) != 0x101)
                    ))) {
            bVar10 = (uVar1 & 0x40) == 0 || *(char *)(param_2 + 0x22) != '\0';
          }
          if (*(ushort **)(param_2 + 0x38) != (ushort *)0x0) {
            uVar1 = **(ushort **)(param_2 + 0x38);
            uVar11 = uVar1 << 8 | uVar1 >> 8;
          }
          if (((*(uint *)(lVar16 + 4 + uVar9 * 0x14) & *(uint *)(param_2 + 0x1c)) != 0) &&
             ((*(byte *)(param_2 + 0x24) == 0 || (*(byte *)(param_2 + 0x24) == pbVar7[3])))) {
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              if (!bVar10) goto LAB_0040f627;
            }
            else {
              cVar4 = (**(code **)(param_2 + 0x28))(puVar15,uVar11,*(undefined8 *)(param_2 + 0x30));
              if (cVar4 != '\0') {
LAB_0040f627:
                lVar16 = *(long *)(phVar3 + 0x70);
                uVar8 = Layout::GPOS_impl::MarkBasePosFormat1_2<OT::Layout::SmallTypes>::accept
                                  (lVar16,uVar12);
                if ((char)uVar8 == '\0') {
                  uVar1 = *(ushort *)(param_1 + 4);
                  pCVar13 = (Coverage *)&_hb_NullPool;
                  if (uVar1 != 0) {
                    pCVar13 = (Coverage *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
                  }
                  uVar6 = Layout::Common::Coverage::get_coverage
                                    (pCVar13,*(uint *)(lVar16 + uVar9 * 0x14));
                  if (uVar6 == 0xffffffff) goto LAB_0040f521;
                }
                *(uint *)(param_2 + 0x148) = uVar12;
                break;
              }
            }
          }
        }
LAB_0040f521:
        if (uVar12 <= *(uint *)(param_2 + 0x14c)) break;
        uVar6 = *(uint *)(param_2 + 0x18);
        lVar16 = *(long *)(phVar3 + 0x70);
      } while( true );
    }
    iVar2 = *(int *)(phVar3 + 0x5c);
    *(int *)(param_2 + 0x14c) = iVar2;
    uVar12 = *(uint *)(param_2 + 0x148);
    if ((ulong)uVar12 == 0xffffffff) {
      if (((byte)phVar3[0x18] & 0x40) == 0) {
        return 0;
      }
      uVar12 = 0;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 4);
      if (uVar1 == 0) {
        pCVar13 = (Coverage *)&_hb_NullPool;
      }
      else {
        pCVar13 = (Coverage *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
      }
      uVar6 = Layout::Common::Coverage::get_coverage
                        (pCVar13,*(uint *)(*(long *)(phVar3 + 0x70) + (ulong)uVar12 * 0x14));
      if (uVar6 != 0xffffffff) {
        uVar1 = *(ushort *)(param_1 + 8);
        puVar14 = (ushort *)&_hb_NullPool;
        this = (MarkArray *)&_hb_NullPool;
        if (uVar1 != 0) {
          this = (MarkArray *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
        }
        uVar1 = *(ushort *)(param_1 + 10);
        if (uVar1 != 0) {
          puVar14 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_1);
        }
        uVar9 = Layout::GPOS_impl::MarkArray::apply
                          (extraout_XMM0_Qa,in_XMM1_Qa,this,param_2,uVar5,uVar6,puVar14,
                           (ulong)(ushort)(*(ushort *)(param_1 + 6) << 8 |
                                          *(ushort *)(param_1 + 6) >> 8),uVar12);
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


