// Function : apply_cached_to<OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 004085e0
// Prototype: undefined8 apply_cached_to<OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>>(long param_1, long param_2)
// Body     : 004085e0 - 004085e4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

undefined8 __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>>
          (long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  hb_buffer_t hVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  hb_buffer_t *phVar7;
  long lVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  ushort uVar17;
  uint uVar18;
  byte bVar19;
  byte bVar20;
  Coverage *this;
  MarkArray *this_00;
  ushort *puVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 in_XMM1_Qa;
  uint uStack_3c;
  
  phVar7 = *(hb_buffer_t **)(param_2 + 0xa0);
  uVar6 = *(ushort *)(param_1 + 2);
  if (uVar6 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)((ulong)(ushort)(uVar6 << 8 | uVar6 >> 8) + param_1);
  }
  uVar18 = *(uint *)(phVar7 + 0x5c);
  uVar13 = (ulong)uVar18;
  uVar11 = Layout::Common::Coverage::get_coverage
                     (this,*(uint *)(*(long *)(phVar7 + 0x70) + uVar13 * 0x14));
  if (uVar11 != 0xffffffff) {
    *(uint *)(param_2 + 8) = uVar18;
    uVar15 = *(uint *)(param_2 + 0x134) & 0xfffffff1;
    *(uint *)(param_2 + 0x18) = uVar15;
    if (uVar18 == 0) {
      uStack_3c = 0;
      hVar3 = phVar7[0x18];
    }
    else {
      uStack_3c = 0;
LAB_0040dccd:
      uVar18 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar18;
      *(uint *)(param_2 + 8) = uVar18;
      lVar8 = *(long *)(*(long *)(*(hb_ot_apply_context_t **)(param_2 + 0x10) + 0xa0) + 0x78);
      uVar6 = *(ushort *)(lVar8 + 0xc + uVar13 * 0x14);
      if (((uVar15 & uVar6 & 0xe) != 0) ||
         ((puVar1 = (uint *)(lVar8 + uVar13 * 0x14), (uVar6 & 8) != 0 &&
          (uVar12 = hb_ot_apply_context_t::match_properties_mark
                              (*(hb_ot_apply_context_t **)(param_2 + 0x10),*puVar1,(uint)uVar6,
                               uVar15), (char)uVar12 == '\0')))) {
LAB_0040ddd2:
        uVar13 = (ulong)*(uint *)(param_2 + 8);
        if (*(uint *)(param_2 + 8) == 0) goto LAB_0040de78;
        uVar15 = *(uint *)(param_2 + 0x18);
        goto LAB_0040dccd;
      }
      lVar2 = lVar8 + uVar13 * 0x14;
      uVar6 = *(ushort *)(lVar8 + 0x10 + uVar13 * 0x14);
      uVar17 = 0;
      bVar14 = false;
      if ((((uVar6 & 0x20) != 0) &&
          ((bVar14 = false, (*(byte *)(lVar2 + 0xc) & 0x10) == 0 &&
           ((*(char *)(param_2 + 0x20) != '\0' || (bVar14 = false, (uVar6 & 0x21f) != 0x201)))))) &&
         ((*(char *)(param_2 + 0x21) != '\0' || (bVar14 = false, (uVar6 & 0x11f) != 0x101)))) {
        bVar14 = (uVar6 & 0x40) == 0 || *(char *)(param_2 + 0x22) != '\0';
      }
      puVar21 = *(ushort **)(param_2 + 0x38);
      if (puVar21 != (ushort *)0x0) {
        uVar17 = *puVar21 << 8 | *puVar21 >> 8;
      }
      if (((*(uint *)(lVar8 + 4 + uVar13 * 0x14) & *(uint *)(param_2 + 0x1c)) != 0) &&
         ((*(char *)(param_2 + 0x24) == '\0' ||
          (*(char *)(param_2 + 0x24) == *(char *)(lVar2 + 0xf))))) {
        if (*(code **)(param_2 + 0x28) == (code *)0x0) {
          if (bVar14) goto LAB_0040ddd2;
        }
        else {
          cVar10 = (**(code **)(param_2 + 0x28))(puVar1,uVar17,*(undefined8 *)(param_2 + 0x30));
          if (cVar10 == '\0') goto LAB_0040ddca;
          puVar21 = *(ushort **)(param_2 + 0x38);
        }
        if (puVar21 != (ushort *)0x0) {
          *(ushort **)(param_2 + 0x38) = puVar21 + 1;
        }
        lVar8 = *(long *)(phVar7 + 0x70);
        uStack_3c = *(uint *)(param_2 + 8);
        uVar13 = (ulong)uStack_3c;
        if ((*(byte *)(lVar8 + 0xc + uVar13 * 0x14) & 8) == 0) {
          if (((byte)phVar7[0x18] & 0x40) == 0) {
            return 0;
          }
          uVar18 = *(uint *)(phVar7 + 0x5c);
        }
        else {
          uVar18 = *(uint *)(phVar7 + 0x5c);
          bVar4 = *(byte *)(lVar8 + 0xe + (ulong)uVar18 * 0x14);
          bVar19 = bVar4 & 0xf;
          if ((bVar4 & 0x10) != 0) {
            bVar19 = 0;
          }
          bVar5 = *(byte *)(lVar8 + uVar13 * 0x14 + 0xe);
          bVar20 = bVar5 & 0xf;
          if ((bVar5 & 0x10) != 0) {
            bVar20 = 0;
          }
          if ((bVar5 ^ bVar4) < 0x20) {
            if ((bVar4 < 0x20) || (bVar19 == bVar20)) goto LAB_0040df10;
          }
          else if (((0x1f < bVar4) && (bVar19 == 0)) || ((0x1f < bVar5 && (bVar20 == 0)))) {
LAB_0040df10:
            uVar6 = *(ushort *)(param_1 + 4);
            if (uVar6 == 0) {
              uVar15 = Layout::Common::Coverage::get_coverage
                                 ((Coverage *)&_hb_NullPool,*(uint *)(lVar8 + uVar13 * 0x14));
              uVar9 = extraout_XMM0_Qa_00;
            }
            else {
              uVar15 = Layout::Common::Coverage::get_coverage
                                 ((Coverage *)((ulong)(ushort)(uVar6 << 8 | uVar6 >> 8) + param_1),
                                  *(uint *)(lVar8 + uVar13 * 0x14));
              uVar9 = extraout_XMM0_Qa;
            }
            if (uVar15 != 0xffffffff) {
              uVar6 = *(ushort *)(param_1 + 8);
              puVar21 = (ushort *)&_hb_NullPool;
              this_00 = (MarkArray *)&_hb_NullPool;
              if (uVar6 != 0) {
                this_00 = (MarkArray *)((ulong)(ushort)(uVar6 << 8 | uVar6 >> 8) + param_1);
              }
              uVar6 = *(ushort *)(param_1 + 10);
              if (uVar6 != 0) {
                puVar21 = (ushort *)((ulong)(ushort)(uVar6 << 8 | uVar6 >> 8) + param_1);
              }
              uVar13 = Layout::GPOS_impl::MarkArray::apply
                                 (uVar9,in_XMM1_Qa,this_00,param_2,uVar11,uVar15,puVar21,
                                  (ulong)(ushort)(*(ushort *)(param_1 + 6) << 8 |
                                                 *(ushort *)(param_1 + 6) >> 8),uStack_3c);
              return uVar13;
            }
          }
          if (((byte)phVar7[0x18] & 0x40) == 0) {
            return 0;
          }
        }
        goto LAB_0040de56;
      }
LAB_0040ddca:
      if (bVar14) goto LAB_0040ddd2;
      iVar16 = 1;
      if (*(int *)(param_2 + 8) != 0) {
        iVar16 = *(int *)(param_2 + 8);
      }
      uStack_3c = iVar16 - 1;
LAB_0040de78:
      hVar3 = phVar7[0x18];
    }
    if (((byte)hVar3 & 0x40) != 0) {
      uVar18 = *(uint *)(phVar7 + 0x5c);
LAB_0040de56:
      hb_buffer_t::_set_glyph_flags(phVar7,2,uStack_3c,uVar18 + 1,'\0');
    }
  }
  return 0;
}


