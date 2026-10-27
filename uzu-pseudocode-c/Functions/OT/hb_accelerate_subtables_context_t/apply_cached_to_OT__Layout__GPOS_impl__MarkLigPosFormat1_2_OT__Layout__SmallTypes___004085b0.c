// Function : apply_cached_to<OT::Layout::GPOS_impl::MarkLigPosFormat1_2<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 004085b0
// Prototype: undefined8 apply_cached_to<OT::Layout::GPOS_impl::MarkLigPosFormat1_2<OT::Layout::SmallTypes>>(long param_1, long param_2)
// Body     : 004085b0 - 004085b4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GPOS_impl::MarkLigPosFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

undefined8 __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GPOS_impl::MarkLigPosFormat1_2<OT::Layout::SmallTypes>>
          (long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  hb_buffer_t *phVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  bool bVar14;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  Coverage *pCVar18;
  MarkArray *this;
  ushort *puVar19;
  long lVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  
  phVar6 = *(hb_buffer_t **)(param_2 + 0xa0);
  uVar8 = *(ushort *)(param_1 + 2);
  if (uVar8 == 0) {
    pCVar18 = (Coverage *)&_hb_NullPool;
  }
  else {
    pCVar18 = (Coverage *)((ulong)(ushort)(uVar8 << 8 | uVar8 >> 8) + param_1);
  }
  lVar20 = *(long *)(phVar6 + 0x70);
  uVar17 = *(uint *)(phVar6 + 0x5c);
  uVar9 = Layout::Common::Coverage::get_coverage(pCVar18,*(uint *)(lVar20 + (ulong)uVar17 * 0x14));
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  *(undefined4 *)(param_2 + 0x18) = 8;
  uVar10 = *(uint *)(param_2 + 0x14c);
  if (uVar17 < uVar10) {
    *(undefined8 *)(param_2 + 0x148) = 0xffffffff;
    uVar10 = 0;
  }
  if (uVar10 < uVar17) {
    uVar10 = 8;
    do {
      uVar17 = uVar17 - 1;
      uVar12 = (ulong)uVar17;
      uVar8 = *(ushort *)(lVar20 + 0xc + uVar12 * 0x14);
      if (((uVar10 & uVar8 & 0xe) == 0) &&
         ((puVar1 = (uint *)(lVar20 + uVar12 * 0x14), (uVar8 & 8) == 0 ||
          (uVar11 = hb_ot_apply_context_t::match_properties_mark
                              (*(hb_ot_apply_context_t **)(param_2 + 0x10),*puVar1,(uint)uVar8,
                               uVar10), (char)uVar11 != '\0')))) {
        lVar2 = lVar20 + uVar12 * 0x14;
        uVar8 = *(ushort *)(lVar20 + 0x10 + uVar12 * 0x14);
        uVar16 = 0;
        bVar14 = false;
        if ((((uVar8 & 0x20) != 0) &&
            ((bVar14 = false, (*(byte *)(lVar2 + 0xc) & 0x10) == 0 &&
             ((*(char *)(param_2 + 0x20) != '\0' || (bVar14 = false, (uVar8 & 0x21f) != 0x201))))))
           && ((*(char *)(param_2 + 0x21) != '\0' || (bVar14 = false, (uVar8 & 0x11f) != 0x101)))) {
          bVar14 = (uVar8 & 0x40) == 0 || *(char *)(param_2 + 0x22) != '\0';
        }
        if (*(ushort **)(param_2 + 0x38) != (ushort *)0x0) {
          uVar8 = **(ushort **)(param_2 + 0x38);
          uVar16 = uVar8 << 8 | uVar8 >> 8;
        }
        if (((*(uint *)(lVar20 + 4 + uVar12 * 0x14) & *(uint *)(param_2 + 0x1c)) != 0) &&
           ((*(char *)(param_2 + 0x24) == '\0' ||
            (*(char *)(param_2 + 0x24) == *(char *)(lVar2 + 0xf))))) {
          if (*(code **)(param_2 + 0x28) == (code *)0x0) {
            if (!bVar14) goto LAB_0040f2ae;
          }
          else {
            cVar7 = (**(code **)(param_2 + 0x28))(puVar1,uVar16,*(undefined8 *)(param_2 + 0x30));
            if (cVar7 != '\0') {
LAB_0040f2ae:
              *(uint *)(param_2 + 0x148) = uVar17;
              break;
            }
          }
        }
      }
      if (uVar17 <= *(uint *)(param_2 + 0x14c)) break;
      uVar10 = *(uint *)(param_2 + 0x18);
      lVar20 = *(long *)(phVar6 + 0x70);
    } while( true );
  }
  iVar5 = *(int *)(phVar6 + 0x5c);
  *(int *)(param_2 + 0x14c) = iVar5;
  uVar17 = *(uint *)(param_2 + 0x148);
  uVar12 = (ulong)uVar17;
  if (uVar12 == 0xffffffff) {
    if (((byte)phVar6[0x18] & 0x40) == 0) {
      return 0;
    }
    uVar17 = 0;
    goto LAB_0040f418;
  }
  uVar8 = *(ushort *)(param_1 + 4);
  if (uVar8 == 0) {
    pCVar18 = (Coverage *)&_hb_NullPool;
  }
  else {
    pCVar18 = (Coverage *)((ulong)(ushort)(uVar8 << 8 | uVar8 >> 8) + param_1);
  }
  uVar10 = Layout::Common::Coverage::get_coverage
                     (pCVar18,*(uint *)(*(long *)(phVar6 + 0x70) + uVar12 * 0x14));
  if (uVar10 == 0xffffffff) {
    if (((byte)phVar6[0x18] & 0x40) == 0) {
      return 0;
    }
    goto LAB_0040f418;
  }
  uVar8 = *(ushort *)(param_1 + 10);
  puVar19 = (ushort *)&_hb_NullPool;
  puVar13 = (ushort *)&_hb_NullPool;
  if (uVar8 != 0) {
    puVar13 = (ushort *)((ulong)(ushort)(uVar8 << 8 | uVar8 >> 8) + param_1);
  }
  if (uVar10 < (ushort)(*puVar13 << 8 | *puVar13 >> 8)) {
    uVar8 = puVar13[(ulong)uVar10 + 1];
    if (uVar8 != 0) {
      puVar19 = (ushort *)((long)puVar13 + (ulong)(ushort)(uVar8 << 8 | uVar8 >> 8));
      goto LAB_0040f354;
    }
    puVar19 = (ushort *)&_hb_NullPool;
    uVar8 = (ushort)_hb_NullPool;
  }
  else {
LAB_0040f354:
    uVar8 = *puVar19;
  }
  if (uVar8 != 0) {
    uVar8 = uVar8 << 8 | uVar8 >> 8;
    uVar10 = (uint)uVar8;
    bVar3 = *(byte *)(*(long *)(phVar6 + 0x70) + 0xe + uVar12 * 0x14);
    bVar4 = *(byte *)(*(long *)(phVar6 + 0x70) + 0xe + (ulong)*(uint *)(phVar6 + 0x5c) * 0x14);
    bVar15 = bVar4 & 0xf;
    if ((bVar4 & 0x10) != 0) {
      bVar15 = 0;
    }
    if (((0x1f < bVar3) && ((bVar4 ^ bVar3) < 0x20)) && (bVar15 != 0)) {
      uVar10 = (uint)uVar8;
      if ((uint)bVar15 < (uint)uVar8) {
        uVar10 = (uint)bVar15;
      }
    }
    uVar8 = *(ushort *)(param_1 + 8);
    if (uVar8 == 0) {
      this = (MarkArray *)&_hb_NullPool;
    }
    else {
      this = (MarkArray *)((ulong)(ushort)(uVar8 << 8 | uVar8 >> 8) + param_1);
    }
    uVar12 = Layout::GPOS_impl::MarkArray::apply
                       (extraout_XMM0_Qa,in_XMM1_Qa,this,param_2,uVar9,uVar10 - 1,puVar19,
                        (ulong)(ushort)(*(ushort *)(param_1 + 6) << 8 |
                                       *(ushort *)(param_1 + 6) >> 8),uVar17);
    return uVar12;
  }
  if (((byte)phVar6[0x18] & 0x40) == 0) {
    return 0;
  }
  iVar5 = *(int *)(phVar6 + 0x5c);
LAB_0040f418:
  hb_buffer_t::_set_glyph_flags(phVar6,2,uVar17,iVar5 + 1,'\0');
  return 0;
}


