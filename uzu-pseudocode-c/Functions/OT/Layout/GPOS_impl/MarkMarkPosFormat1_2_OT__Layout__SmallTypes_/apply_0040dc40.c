// Function : apply
// Namespace: OT:Layout:GPOS_impl:MarkMarkPosFormat1_2_OT__Layout__SmallTypes_
// Entry    : 0040dc40
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2, MarkMarkPosFormat1_2<OT::Layout::SmallTypes> * this, long param_4)
// Body     : 0040dc40 - 0040dfd5


/* OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */

ulong __thiscall
OT::Layout::GPOS_impl::MarkMarkPosFormat1_2<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,
          MarkMarkPosFormat1_2<OT::Layout::SmallTypes> *this,long param_4)

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
  ushort *puVar17;
  ushort uVar18;
  uint uVar19;
  byte bVar20;
  byte bVar21;
  Coverage *this_00;
  MarkArray *this_01;
  MarkMarkPosFormat1_2<OT::Layout::SmallTypes> *pMVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint local_3c;
  
  phVar7 = *(hb_buffer_t **)(param_4 + 0xa0);
  uVar6 = *(ushort *)(this + 2);
  if (uVar6 == 0) {
    this_00 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_00 = (Coverage *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8));
  }
  uVar19 = *(uint *)(phVar7 + 0x5c);
  uVar13 = (ulong)uVar19;
  uVar11 = Common::Coverage::get_coverage
                     (this_00,*(uint *)(*(long *)(phVar7 + 0x70) + uVar13 * 0x14));
  if (uVar11 != 0xffffffff) {
    *(uint *)(param_4 + 8) = uVar19;
    uVar15 = *(uint *)(param_4 + 0x134) & 0xfffffff1;
    *(uint *)(param_4 + 0x18) = uVar15;
    if (uVar19 == 0) {
      local_3c = 0;
      hVar3 = phVar7[0x18];
    }
    else {
      local_3c = 0;
LAB_0040dccd:
      uVar19 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar19;
      *(uint *)(param_4 + 8) = uVar19;
      lVar8 = *(long *)(*(long *)(*(hb_ot_apply_context_t **)(param_4 + 0x10) + 0xa0) + 0x78);
      uVar6 = *(ushort *)(lVar8 + 0xc + uVar13 * 0x14);
      if (((uVar15 & uVar6 & 0xe) != 0) ||
         ((puVar1 = (uint *)(lVar8 + uVar13 * 0x14), (uVar6 & 8) != 0 &&
          (uVar12 = hb_ot_apply_context_t::match_properties_mark
                              (*(hb_ot_apply_context_t **)(param_4 + 0x10),*puVar1,(uint)uVar6,
                               uVar15), (char)uVar12 == '\0')))) {
LAB_0040ddd2:
        uVar13 = (ulong)*(uint *)(param_4 + 8);
        if (*(uint *)(param_4 + 8) == 0) goto LAB_0040de78;
        uVar15 = *(uint *)(param_4 + 0x18);
        goto LAB_0040dccd;
      }
      lVar2 = lVar8 + uVar13 * 0x14;
      uVar6 = *(ushort *)(lVar8 + 0x10 + uVar13 * 0x14);
      uVar18 = 0;
      bVar14 = false;
      if ((((uVar6 & 0x20) != 0) &&
          ((bVar14 = false, (*(byte *)(lVar2 + 0xc) & 0x10) == 0 &&
           ((*(char *)(param_4 + 0x20) != '\0' || (bVar14 = false, (uVar6 & 0x21f) != 0x201)))))) &&
         ((*(char *)(param_4 + 0x21) != '\0' || (bVar14 = false, (uVar6 & 0x11f) != 0x101)))) {
        bVar14 = (uVar6 & 0x40) == 0 || *(char *)(param_4 + 0x22) != '\0';
      }
      puVar17 = *(ushort **)(param_4 + 0x38);
      if (puVar17 != (ushort *)0x0) {
        uVar18 = *puVar17 << 8 | *puVar17 >> 8;
      }
      if (((*(uint *)(lVar8 + 4 + uVar13 * 0x14) & *(uint *)(param_4 + 0x1c)) != 0) &&
         ((*(char *)(param_4 + 0x24) == '\0' ||
          (*(char *)(param_4 + 0x24) == *(char *)(lVar2 + 0xf))))) {
        if (*(code **)(param_4 + 0x28) == (code *)0x0) {
          if (bVar14) goto LAB_0040ddd2;
        }
        else {
          cVar10 = (**(code **)(param_4 + 0x28))(puVar1,uVar18,*(undefined8 *)(param_4 + 0x30));
          if (cVar10 == '\0') goto LAB_0040ddca;
          puVar17 = *(ushort **)(param_4 + 0x38);
        }
        if (puVar17 != (ushort *)0x0) {
          *(ushort **)(param_4 + 0x38) = puVar17 + 1;
        }
        lVar8 = *(long *)(phVar7 + 0x70);
        local_3c = *(uint *)(param_4 + 8);
        uVar13 = (ulong)local_3c;
        if ((*(byte *)(lVar8 + 0xc + uVar13 * 0x14) & 8) == 0) {
          if (((byte)phVar7[0x18] & 0x40) == 0) {
            return 0;
          }
          uVar19 = *(uint *)(phVar7 + 0x5c);
        }
        else {
          uVar19 = *(uint *)(phVar7 + 0x5c);
          bVar4 = *(byte *)(lVar8 + 0xe + (ulong)uVar19 * 0x14);
          bVar20 = bVar4 & 0xf;
          if ((bVar4 & 0x10) != 0) {
            bVar20 = 0;
          }
          bVar5 = *(byte *)(lVar8 + uVar13 * 0x14 + 0xe);
          bVar21 = bVar5 & 0xf;
          if ((bVar5 & 0x10) != 0) {
            bVar21 = 0;
          }
          if ((bVar5 ^ bVar4) < 0x20) {
            if ((bVar4 < 0x20) || (bVar20 == bVar21)) goto LAB_0040df10;
          }
          else if (((0x1f < bVar4) && (bVar20 == 0)) || ((0x1f < bVar5 && (bVar21 == 0)))) {
LAB_0040df10:
            uVar6 = *(ushort *)(this + 4);
            if (uVar6 == 0) {
              uVar15 = Common::Coverage::get_coverage
                                 ((Coverage *)&_hb_NullPool,*(uint *)(lVar8 + uVar13 * 0x14));
              uVar9 = extraout_XMM0_Qa_00;
            }
            else {
              uVar15 = Common::Coverage::get_coverage
                                 ((Coverage *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8)),
                                  *(uint *)(lVar8 + uVar13 * 0x14));
              uVar9 = extraout_XMM0_Qa;
            }
            if (uVar15 != 0xffffffff) {
              uVar6 = *(ushort *)(this + 8);
              pMVar22 = (MarkMarkPosFormat1_2<OT::Layout::SmallTypes> *)&_hb_NullPool;
              this_01 = (MarkArray *)&_hb_NullPool;
              if (uVar6 != 0) {
                this_01 = (MarkArray *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8));
              }
              uVar6 = *(ushort *)(this + 10);
              if (uVar6 != 0) {
                pMVar22 = this + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar13 = MarkArray::apply(uVar9,param_2,this_01,param_4,uVar11,uVar15,
                                        (ushort *)pMVar22,
                                        (ulong)(ushort)(*(ushort *)(this + 6) << 8 |
                                                       *(ushort *)(this + 6) >> 8),local_3c);
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
      if (*(int *)(param_4 + 8) != 0) {
        iVar16 = *(int *)(param_4 + 8);
      }
      local_3c = iVar16 - 1;
LAB_0040de78:
      hVar3 = phVar7[0x18];
    }
    if (((byte)hVar3 & 0x40) != 0) {
      uVar19 = *(uint *)(phVar7 + 0x5c);
LAB_0040de56:
      hb_buffer_t::_set_glyph_flags(phVar7,2,local_3c,uVar19 + 1,'\0');
    }
  }
  return 0;
}


