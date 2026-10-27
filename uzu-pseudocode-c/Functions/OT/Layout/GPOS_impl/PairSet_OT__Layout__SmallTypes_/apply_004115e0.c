// Function : apply
// Namespace: OT:Layout:GPOS_impl:PairSet_OT__Layout__SmallTypes_
// Entry    : 004115e0
// Prototype: undefined8 apply(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, PairSet<OT::Layout::SmallTypes> * this, long param_9, ValueFormat * param_10, uint param_11)
// Body     : 004115e0 - 00411d50


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::Layout::GPOS_impl::PairSet<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*,
   OT::Layout::GPOS_impl::ValueFormat const*, unsigned int) const */

undefined8 __thiscall
OT::Layout::GPOS_impl::PairSet<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,
          PairSet<OT::Layout::SmallTypes> *this,long param_9,ValueFormat *param_10,uint param_11)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  hb_buffer_t *phVar5;
  ulong uVar6;
  uint7 extraout_var;
  uint7 extraout_var_00;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  byte *pbVar20;
  hb_buffer_t *this_00;
  long lVar21;
  uint uVar22;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  uint uVar27;
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  uint uVar28;
  undefined1 auVar29 [16];
  uint uVar30;
  uint uVar31;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ushort local_38;
  
  uVar11 = (ulong)param_11;
  this_00 = *(hb_buffer_t **)(param_9 + 0xa0);
  lVar4 = *(long *)(this_00 + 0x70);
  uVar1 = *(ushort *)this;
  if (uVar1 != 0) {
    uVar2 = *(ushort *)param_10;
    uVar9 = (uint)uVar2 - (uVar2 >> 1 & 0x5555);
    uVar9 = (uVar9 >> 2 & 0x3333) + (uVar9 & 0x3333);
    uVar12 = ((uVar9 >> 4) + uVar9 & 0xf0f) * 0x101 >> 8 & 0xff;
    uVar3 = *(ushort *)(param_10 + 2);
    uVar9 = (uint)uVar3 - (uVar3 >> 1 & 0x5555);
    uVar10 = (uVar9 >> 2 & 0x3333) + (uVar9 & 0x3333);
    iVar7 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 1;
    uVar9 = *(uint *)(lVar4 + uVar11 * 0x14);
    iVar13 = 0;
    do {
      while( true ) {
        uVar16 = (uint)(iVar7 + iVar13) >> 1;
        lVar21 = (ulong)uVar16 *
                 (ulong)(((((uVar10 >> 4) + uVar10 & 0xf0f) * 0x101 >> 8 & 0xff) + uVar12) * 2 + 2);
        uVar22 = (uint)(ushort)(*(ushort *)(this + lVar21 + 2) << 8 |
                               *(ushort *)(this + lVar21 + 2) >> 8);
        if (uVar9 < uVar22) break;
        if (uVar9 == uVar22) {
          uVar18 = uVar11;
          if (*(long *)(this_00 + 0xd0) != 0) {
            hb_buffer_t::message
                      (param_1_00,param_2_00,in_XMM2._0_8_,param_3_00,param_4,param_5,param_6,
                       param_7,this_00,*(undefined8 *)(param_9 + 0x90),"try kerning glyphs at %u,%u"
                       ,(ulong)*(uint *)(this_00 + 0x5c),(ulong)param_11,uVar11,(char)this_00);
            param_1_00 = extraout_XMM0_Qa;
          }
          if (uVar2 == 0) {
            bVar15 = 0;
          }
          else {
            uVar6 = ValueFormat::apply_value
                              (param_10,param_9,(long)this,(ushort *)(this + lVar21 + 4),
                               (int *)((ulong)*(uint *)(this_00 + 0x5c) * 0x14 +
                                      *(long *)(this_00 + 0x80)));
            bVar15 = (byte)uVar6;
            param_1_00 = extraout_XMM0_Qa_00;
          }
          if (uVar3 == 0) {
            uVar25 = in_XMM2._0_8_;
            uVar6 = 0;
          }
          else {
            local_38 = (ushort)uVar12;
            uVar6 = ValueFormat::apply_value
                              (param_10 + 2,param_9,(long)this,
                               (ushort *)(this + (ulong)local_38 * 2 + lVar21 + 4),
                               (int *)(uVar11 * 0x14 + *(long *)(this_00 + 0x80)));
            uVar25 = in_XMM2._0_8_;
            bVar15 = bVar15 | (byte)uVar6;
            param_1_00 = extraout_XMM0_Qa_01;
          }
          if (bVar15 == 1) {
            uVar25 = in_XMM2._0_8_;
            phVar5 = *(hb_buffer_t **)(param_9 + 0xa0);
            if (*(long *)(phVar5 + 0xd0) != 0) {
              hb_buffer_t::message
                        (param_1_00,param_2_00,uVar25,param_3_00,param_4,param_5,param_6,param_7,
                         phVar5,*(undefined8 *)(param_9 + 0x90),"kerned glyphs at %u,%u",
                         (ulong)*(uint *)(phVar5 + 0x5c),uVar11,uVar18,(char)this_00);
              uVar25 = in_XMM2._0_8_;
              uVar6 = (ulong)extraout_var << 8;
              param_1_00 = extraout_XMM0_Qa_02;
            }
          }
          phVar5 = *(hb_buffer_t **)(param_9 + 0xa0);
          if (*(long *)(phVar5 + 0xd0) != 0) {
            hb_buffer_t::message
                      (param_1_00,param_2_00,uVar25,param_3_00,param_4,param_5,param_6,param_7,
                       phVar5,*(undefined8 *)(param_9 + 0x90),"tried kerning glyphs at %u,%u",
                       (ulong)*(uint *)(phVar5 + 0x5c),uVar11,uVar18,(char)this_00);
            uVar6 = (ulong)extraout_var_00 << 8;
          }
          if (bVar15 != 0) {
            uVar9 = *(uint *)(this_00 + 0x5c);
            uVar11 = (ulong)uVar9;
            uVar10 = param_11 + 1;
            if (*(uint *)(this_00 + 0x60) < param_11 + 1) {
              uVar10 = *(uint *)(this_00 + 0x60);
            }
            uVar6 = (ulong)(uVar10 - uVar9);
            if (1 < uVar10 - uVar9) {
              this_00[0xc0] = (hb_buffer_t)((byte)this_00[0xc0] | 0x20);
              lVar4 = *(long *)(this_00 + 0x70);
              uVar12 = 0xffffffff;
              if (uVar10 != uVar9) {
                if (*(int *)(this_00 + 0x1c) == 2) {
                  if (uVar9 < uVar10) {
                    uVar18 = (ulong)uVar10;
                    uVar6 = uVar18 - uVar11;
                    uVar12 = 0xffffffff;
                    if (8 < uVar6) {
                      uVar8 = (ulong)((uint)uVar6 & 7);
                      uVar17 = 8;
                      if (uVar8 != 0) {
                        uVar17 = uVar8;
                      }
                      lVar21 = (uVar17 + uVar11) - uVar18;
                      puVar14 = (undefined4 *)(lVar4 + uVar11 * 0x14 + 0x94);
                      auVar24._8_4_ = 0xffffffff;
                      auVar24._0_8_ = 0xffffffffffffffff;
                      auVar24._12_4_ = 0xffffffff;
                      auVar29._4_4_ = _UNK_006524b4;
                      auVar29._0_4_ = _DAT_006524b0;
                      auVar29._8_4_ = _UNK_006524b8;
                      auVar29._12_4_ = _UNK_006524bc;
                      auVar26._8_4_ = 0xffffffff;
                      auVar26._0_8_ = 0xffffffffffffffff;
                      auVar26._12_4_ = 0xffffffff;
                      do {
                        auVar41._12_4_ = puVar14[-0x14];
                        auVar41._8_4_ = puVar14[-0x19];
                        auVar41._4_4_ = puVar14[-0x1e];
                        auVar41._0_4_ = puVar14[-0x23];
                        auVar42._12_4_ = *puVar14;
                        auVar42._8_4_ = puVar14[-5];
                        auVar42._4_4_ = puVar14[-10];
                        auVar42._0_4_ = puVar14[-0xf];
                        auVar32 = auVar41 ^ auVar29;
                        auVar23 = auVar24 ^ auVar29;
                        auVar33._0_4_ = -(uint)(auVar23._0_4_ < auVar32._0_4_);
                        auVar33._4_4_ = -(uint)(auVar23._4_4_ < auVar32._4_4_);
                        auVar33._8_4_ = -(uint)(auVar23._8_4_ < auVar32._8_4_);
                        auVar33._12_4_ = -(uint)(auVar23._12_4_ < auVar32._12_4_);
                        auVar24 = ~auVar33 & auVar41 | auVar24 & auVar33;
                        auVar32 = auVar42 ^ auVar29;
                        auVar23 = auVar26 ^ auVar29;
                        auVar34._0_4_ = -(uint)(auVar23._0_4_ < auVar32._0_4_);
                        auVar34._4_4_ = -(uint)(auVar23._4_4_ < auVar32._4_4_);
                        auVar34._8_4_ = -(uint)(auVar23._8_4_ < auVar32._8_4_);
                        auVar34._12_4_ = -(uint)(auVar23._12_4_ < auVar32._12_4_);
                        auVar26 = ~auVar34 & auVar42 | auVar26 & auVar34;
                        puVar14 = puVar14 + 0x28;
                        lVar21 = lVar21 + 8;
                      } while (lVar21 != 0);
                      uVar11 = (uVar6 - uVar17) + uVar11;
                      auVar23 = auVar24 ^ auVar29;
                      auVar32 = auVar26 ^ auVar29;
                      auVar35._0_4_ = -(uint)(auVar23._0_4_ < auVar32._0_4_);
                      auVar35._4_4_ = -(uint)(auVar23._4_4_ < auVar32._4_4_);
                      auVar35._8_4_ = -(uint)(auVar23._8_4_ < auVar32._8_4_);
                      auVar35._12_4_ = -(uint)(auVar23._12_4_ < auVar32._12_4_);
                      auVar26 = ~auVar35 & auVar26 | auVar24 & auVar35;
                      auVar23._0_8_ = auVar26._8_8_;
                      auVar23._8_4_ = auVar26._8_4_;
                      auVar23._12_4_ = auVar26._12_4_;
                      auVar24 = auVar26 ^ auVar29;
                      auVar29 = auVar23 ^ auVar29;
                      auVar32._0_4_ = -(uint)(auVar24._0_4_ < auVar29._0_4_);
                      auVar32._4_4_ = -(uint)(auVar24._4_4_ < auVar29._4_4_);
                      auVar32._8_4_ = -(uint)(auVar24._8_4_ < auVar29._8_4_);
                      auVar32._12_4_ = -(uint)(auVar24._12_4_ < auVar29._12_4_);
                      auVar29 = ~auVar32 & auVar23 | auVar26 & auVar32;
                      uVar16 = auVar29._4_4_;
                      uVar12 = auVar29._0_4_;
                      uVar22 = -(uint)((int)(uVar12 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar16)
                                      );
                      uVar12 = ~uVar22 & uVar16 | uVar12 & uVar22;
                    }
                    lVar21 = uVar18 - uVar11;
                    puVar19 = (uint *)(lVar4 + uVar11 * 0x14 + 8);
                    do {
                      if (*puVar19 < uVar12) {
                        uVar12 = *puVar19;
                      }
                      puVar19 = puVar19 + 5;
                      lVar21 = lVar21 + -1;
                    } while (lVar21 != 0);
                  }
                }
                else {
                  uVar12 = *(uint *)(lVar4 + 8 + uVar11 * 0x14);
                  uVar22 = *(uint *)(lVar4 + 8 + (ulong)(uVar10 - 1) * 0x14);
                  if (uVar22 < uVar12) {
                    uVar12 = uVar22;
                  }
                }
              }
              uVar6 = hb_buffer_t::_infos_set_glyph_flags(this_00,lVar4,uVar9,uVar10,uVar12,3);
            }
          }
          if (uVar3 != 0) {
            uVar12 = param_11 + 1;
            uVar9 = *(uint *)(this_00 + 0x5c);
            uVar11 = (ulong)uVar9;
            uVar10 = param_11 + 2;
            if (*(uint *)(this_00 + 0x60) < param_11 + 2) {
              uVar10 = *(uint *)(this_00 + 0x60);
            }
            uVar6 = (ulong)(uVar10 - uVar9);
            param_11 = uVar12;
            if (1 < uVar10 - uVar9) {
              this_00[0xc0] = (hb_buffer_t)((byte)this_00[0xc0] | 0x20);
              lVar4 = *(long *)(this_00 + 0x70);
              uVar12 = 0xffffffff;
              if (uVar10 != uVar9) {
                if (*(int *)(this_00 + 0x1c) == 2) {
                  if (uVar9 < uVar10) {
                    uVar18 = (ulong)uVar10;
                    uVar6 = uVar18 - uVar11;
                    uVar12 = 0xffffffff;
                    if (8 < uVar6) {
                      uVar8 = (ulong)((uint)uVar6 & 7);
                      uVar17 = 8;
                      if (uVar8 != 0) {
                        uVar17 = uVar8;
                      }
                      lVar21 = (uVar17 + uVar11) - uVar18;
                      puVar19 = (uint *)(lVar4 + uVar11 * 0x14 + 0x94);
                      uVar16 = 0xffffffff;
                      uVar12 = 0xffffffff;
                      uVar22 = 0xffffffff;
                      uVar40 = 0xffffffff;
                      uVar27 = 0xffffffff;
                      uVar31 = 0xffffffff;
                      uVar37 = 0xffffffff;
                      uVar28 = 0xffffffff;
                      do {
                        uVar30 = -(uint)((int)(uVar12 ^ _DAT_006524b0) <
                                        (int)(puVar19[-0x23] ^ _DAT_006524b0));
                        uVar36 = -(uint)((int)(uVar22 ^ _UNK_006524b4) <
                                        (int)(puVar19[-0x1e] ^ _UNK_006524b4));
                        uVar38 = -(uint)((int)(uVar16 ^ _UNK_006524b8) <
                                        (int)(puVar19[-0x19] ^ _UNK_006524b8));
                        uVar39 = -(uint)((int)(uVar40 ^ _UNK_006524bc) <
                                        (int)(puVar19[-0x14] ^ _UNK_006524bc));
                        uVar12 = ~uVar30 & puVar19[-0x23] | uVar12 & uVar30;
                        uVar22 = ~uVar36 & puVar19[-0x1e] | uVar22 & uVar36;
                        uVar16 = ~uVar38 & puVar19[-0x19] | uVar16 & uVar38;
                        uVar40 = ~uVar39 & puVar19[-0x14] | uVar40 & uVar39;
                        uVar30 = -(uint)((int)(uVar31 ^ _DAT_006524b0) <
                                        (int)(puVar19[-0xf] ^ _DAT_006524b0));
                        uVar36 = -(uint)((int)(uVar37 ^ _UNK_006524b4) <
                                        (int)(puVar19[-10] ^ _UNK_006524b4));
                        uVar38 = -(uint)((int)(uVar27 ^ _UNK_006524b8) <
                                        (int)(puVar19[-5] ^ _UNK_006524b8));
                        uVar39 = -(uint)((int)(uVar28 ^ _UNK_006524bc) <
                                        (int)(*puVar19 ^ _UNK_006524bc));
                        uVar31 = ~uVar30 & puVar19[-0xf] | uVar31 & uVar30;
                        uVar37 = ~uVar36 & puVar19[-10] | uVar37 & uVar36;
                        uVar27 = ~uVar38 & puVar19[-5] | uVar27 & uVar38;
                        uVar28 = ~uVar39 & *puVar19 | uVar28 & uVar39;
                        puVar19 = puVar19 + 0x28;
                        lVar21 = lVar21 + 8;
                      } while (lVar21 != 0);
                      uVar11 = (uVar6 - uVar17) + uVar11;
                      uVar30 = -(uint)((int)(uVar12 ^ _DAT_006524b0) < (int)(uVar31 ^ _DAT_006524b0)
                                      );
                      uVar36 = -(uint)((int)(uVar22 ^ _UNK_006524b4) < (int)(uVar37 ^ _UNK_006524b4)
                                      );
                      uVar38 = -(uint)((int)(uVar16 ^ _UNK_006524b8) < (int)(uVar27 ^ _UNK_006524b8)
                                      );
                      uVar39 = -(uint)((int)(uVar40 ^ _UNK_006524bc) < (int)(uVar28 ^ _UNK_006524bc)
                                      );
                      uVar31 = ~uVar30 & uVar31 | uVar12 & uVar30;
                      uVar37 = ~uVar36 & uVar37 | uVar22 & uVar36;
                      uVar22 = ~uVar38 & uVar27 | uVar16 & uVar38;
                      uVar40 = ~uVar39 & uVar28 | uVar40 & uVar39;
                      uVar12 = -(uint)((int)(uVar31 ^ _DAT_006524b0) < (int)(uVar22 ^ _DAT_006524b0)
                                      );
                      uVar16 = -(uint)((int)(uVar37 ^ _UNK_006524b4) < (int)(uVar40 ^ _UNK_006524b4)
                                      );
                      uVar22 = ~uVar12 & uVar22 | uVar31 & uVar12;
                      uVar16 = ~uVar16 & uVar40 | uVar37 & uVar16;
                      uVar12 = -(uint)((int)(uVar22 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar16)
                                      );
                      uVar12 = ~uVar12 & uVar16 | uVar22 & uVar12;
                    }
                    lVar21 = uVar18 - uVar11;
                    puVar19 = (uint *)(lVar4 + uVar11 * 0x14 + 8);
                    do {
                      if (*puVar19 < uVar12) {
                        uVar12 = *puVar19;
                      }
                      puVar19 = puVar19 + 5;
                      lVar21 = lVar21 + -1;
                    } while (lVar21 != 0);
                  }
                }
                else {
                  uVar12 = *(uint *)(lVar4 + 8 + uVar11 * 0x14);
                  uVar22 = *(uint *)(lVar4 + 8 + (ulong)(uVar10 - 1) * 0x14);
                  if (uVar22 < uVar12) {
                    uVar12 = uVar22;
                  }
                }
              }
              uVar6 = hb_buffer_t::_infos_set_glyph_flags(this_00,lVar4,uVar9,uVar10,uVar12,3);
            }
          }
          *(uint *)(this_00 + 0x5c) = param_11;
          return CONCAT71((int7)(uVar6 >> 8),1);
        }
        iVar13 = uVar16 + 1;
        if (iVar7 < iVar13) goto LAB_004116f1;
      }
      iVar7 = uVar16 - 1;
    } while (iVar13 <= iVar7);
  }
LAB_004116f1:
  if (((byte)this_00[0x18] & 0x40) != 0) {
    uVar9 = *(uint *)(this_00 + 0x5c);
    uVar11 = (ulong)uVar9;
    uVar10 = param_11 + 1;
    if (*(uint *)(this_00 + 0x60) < param_11 + 1) {
      uVar10 = *(uint *)(this_00 + 0x60);
    }
    this_00[0xc0] = (hb_buffer_t)((byte)this_00[0xc0] | 0x20);
    if (uVar9 < uVar10) {
      uVar18 = ~uVar11;
      if ((uVar10 - uVar9 & 3) != 0) {
        pbVar20 = (byte *)(lVar4 + uVar11 * 0x14 + 4);
        lVar21 = 0;
        do {
          *pbVar20 = *pbVar20 | 2;
          lVar21 = lVar21 + -1;
          pbVar20 = pbVar20 + 0x14;
        } while (-lVar21 != ((ulong)(uVar10 - uVar9) & 3));
        uVar11 = uVar11 - lVar21;
      }
      if (2 < uVar18 + uVar10) {
        lVar21 = uVar10 - uVar11;
        pbVar20 = (byte *)(lVar4 + uVar11 * 0x14 + 0x40);
        do {
          pbVar20[-0x3c] = pbVar20[-0x3c] | 2;
          pbVar20[-0x28] = pbVar20[-0x28] | 2;
          pbVar20[-0x14] = pbVar20[-0x14] | 2;
          *pbVar20 = *pbVar20 | 2;
          pbVar20 = pbVar20 + 0x50;
          lVar21 = lVar21 + -4;
        } while (lVar21 != 0);
        return 0;
      }
    }
  }
  return 0;
}


