// Function : apply
// Namespace: OT:Layout:GPOS_impl:MarkArray
// Entry    : 0040dfe0
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2_00, MarkArray * this, long param_4, uint param_5, uint param_6, ushort * param_7, undefined8 param_8, uint param_9)
// Body     : 0040dfe0 - 0040e5e8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::Layout::GPOS_impl::MarkArray::apply(OT::hb_ot_apply_context_t*, unsigned int, unsigned int,
   OT::Layout::GPOS_impl::AnchorMatrix const&, unsigned int, unsigned int) const */

ulong __thiscall
OT::Layout::GPOS_impl::MarkArray::apply
          (undefined8 param_1_00,undefined8 param_2_00,MarkArray *this,long param_4,uint param_5,
          uint param_6,ushort *param_7,undefined8 param_8,uint param_9)

{
  uint uVar1;
  hb_buffer_t *this_00;
  long lVar2;
  hb_buffer_t *phVar3;
  uint uVar4;
  ushort uVar5;
  MarkArray *pMVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 unaff_RBX;
  undefined7 uVar12;
  ulong uVar10;
  ulong uVar11;
  ulong uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  AnchorFormat3 *this_01;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  MarkArray *this_02;
  AnchorFormat2 *this_03;
  float fVar19;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar20 [16];
  undefined1 extraout_var [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM5 [16];
  undefined1 in_XMM6 [16];
  undefined8 in_XMM7_Qa;
  undefined1 auVar30 [16];
  float afStack_248 [128];
  float fVar31;
  float local_44;
  float local_40;
  float local_3c;
  ulong local_38;
  
  this_00 = *(hb_buffer_t **)(param_4 + 0xa0);
  this_02 = (MarkArray *)&_hb_NullPool;
  pMVar6 = (MarkArray *)&_hb_NullPool;
  if (param_5 < (ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8)) {
    pMVar6 = this + (ulong)param_5 * 4 + 2;
  }
  uVar5 = *(ushort *)(pMVar6 + 2);
  if (uVar5 != 0) {
    this_02 = this + (ushort)(uVar5 << 8 | uVar5 >> 8);
  }
  uVar12 = (undefined7)((ulong)unaff_RBX >> 8);
  uVar10 = CONCAT71(uVar12,1);
  uVar17 = (uint)(ushort)(*(ushort *)pMVar6 << 8 | *(ushort *)pMVar6 >> 8);
  if ((((uint)param_8 <= uVar17) || ((ushort)(*param_7 << 8 | *param_7 >> 8) <= param_6)) ||
     (uVar11 = (ulong)((uint)param_8 * param_6 + uVar17),
     (ulong)*(uint *)(param_4 + 0xc0) < (long)param_7 + (uVar11 * 2 - *(long *)(param_4 + 0xb0)) + 4
     )) goto LAB_0040e5c3;
  uVar5 = param_7[uVar11 + 1];
  if (uVar5 == 0) goto LAB_0040e147;
  this_01 = (AnchorFormat3 *)((ulong)(ushort)(uVar5 << 8 | uVar5 >> 8) + (long)param_7);
  if ((AnchorFormat3 *)(ulong)*(uint *)(param_4 + 0xc0) < this_01 + (2 - *(long *)(param_4 + 0xb0)))
  {
LAB_0040e117:
    if ((0x1f < *(uint *)(param_4 + 0xd4)) ||
       (*(uint *)(param_4 + 0xd4) = *(uint *)(param_4 + 0xd4) + 1, *(char *)(param_4 + 0xd0) == '\0'
       )) goto LAB_0040e5c3;
    param_7[uVar11 + 1] = 0;
  }
  else {
    uVar5 = *(ushort *)this_01 << 8 | *(ushort *)this_01 >> 8;
    if (uVar5 == 1) {
      if (this_01 + (6 - *(long *)(param_4 + 0xb0)) <=
          (AnchorFormat3 *)(ulong)*(uint *)(param_4 + 0xc0)) goto LAB_0040e147;
      goto LAB_0040e117;
    }
    if (uVar5 == 3) {
      uVar7 = AnchorFormat3::sanitize(this_01,param_4 + 0xa8);
      param_1_00 = extraout_XMM0_Qa;
      if ((char)uVar7 == '\0') goto LAB_0040e117;
    }
    else if ((uVar5 == 2) &&
            ((AnchorFormat3 *)(ulong)*(uint *)(param_4 + 0xc0) <
             this_01 + (8 - *(long *)(param_4 + 0xb0)))) goto LAB_0040e117;
  }
LAB_0040e147:
  auVar30._8_8_ = param_2_00;
  auVar30._0_8_ = param_1_00;
  uVar5 = param_7[uVar11 + 1];
  uVar10 = CONCAT71(uVar12,uVar5 == 0);
  if ((uVar5 != 0) &&
     (this_03 = (AnchorFormat2 *)((long)param_7 + (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8)),
     uVar5 != 0)) {
    uVar17 = *(uint *)(this_00 + 0x5c);
    uVar4 = uVar17 + 1;
    if (*(uint *)(this_00 + 0x60) < uVar17 + 1) {
      uVar4 = *(uint *)(this_00 + 0x60);
    }
    uVar9 = (ulong)uVar4;
    uVar11 = (ulong)param_9;
    if (1 < uVar4 - param_9) {
      this_00[0xc0] = (hb_buffer_t)((byte)this_00[0xc0] | 0x20);
      lVar2 = *(long *)(this_00 + 0x70);
      uVar17 = 0xffffffff;
      if (uVar4 != param_9) {
        if (*(int *)(this_00 + 0x1c) == 2) {
          if (param_9 < uVar4) {
            uVar18 = uVar9 - uVar11;
            uVar17 = 0xffffffff;
            if (uVar18 < 9) {
              uVar18 = uVar11;
            }
            else {
              uVar13 = (ulong)((uint)uVar18 & 7);
              uVar16 = 8;
              if (uVar13 != 0) {
                uVar16 = uVar13;
              }
              lVar8 = (uVar16 + uVar11) - uVar9;
              puVar14 = (undefined4 *)(lVar2 + uVar11 * 0x14 + 0x94);
              auVar22._8_4_ = 0xffffffff;
              auVar22._0_8_ = 0xffffffffffffffff;
              auVar22._12_4_ = 0xffffffff;
              auVar24._8_4_ = 0xffffffff;
              auVar24._0_8_ = 0xffffffffffffffff;
              auVar24._12_4_ = 0xffffffff;
              do {
                in_XMM5._12_4_ = puVar14[-0x14];
                in_XMM5._8_4_ = puVar14[-0x19];
                in_XMM5._4_4_ = puVar14[-0x1e];
                in_XMM5._0_4_ = puVar14[-0x23];
                in_XMM6._12_4_ = *puVar14;
                in_XMM6._8_4_ = puVar14[-5];
                in_XMM6._4_4_ = puVar14[-10];
                in_XMM6._0_4_ = puVar14[-0xf];
                auVar26 = in_XMM5 ^ _DAT_006524b0;
                auVar30 = auVar22 ^ _DAT_006524b0;
                auVar27._0_4_ = -(uint)(auVar30._0_4_ < auVar26._0_4_);
                auVar27._4_4_ = -(uint)(auVar30._4_4_ < auVar26._4_4_);
                auVar27._8_4_ = -(uint)(auVar30._8_4_ < auVar26._8_4_);
                auVar27._12_4_ = -(uint)(auVar30._12_4_ < auVar26._12_4_);
                auVar22 = ~auVar27 & in_XMM5 | auVar22 & auVar27;
                auVar26 = in_XMM6 ^ _DAT_006524b0;
                auVar30 = auVar24 ^ _DAT_006524b0;
                auVar28._0_4_ = -(uint)(auVar30._0_4_ < auVar26._0_4_);
                auVar28._4_4_ = -(uint)(auVar30._4_4_ < auVar26._4_4_);
                auVar28._8_4_ = -(uint)(auVar30._8_4_ < auVar26._8_4_);
                auVar28._12_4_ = -(uint)(auVar30._12_4_ < auVar26._12_4_);
                auVar24 = ~auVar28 & in_XMM6 | auVar24 & auVar28;
                puVar14 = puVar14 + 0x28;
                lVar8 = lVar8 + 8;
              } while (lVar8 != 0);
              uVar18 = (uVar18 - uVar16) + uVar11;
              auVar30 = auVar22 ^ _DAT_006524b0;
              auVar26 = auVar24 ^ _DAT_006524b0;
              auVar29._0_4_ = -(uint)(auVar30._0_4_ < auVar26._0_4_);
              auVar29._4_4_ = -(uint)(auVar30._4_4_ < auVar26._4_4_);
              auVar29._8_4_ = -(uint)(auVar30._8_4_ < auVar26._8_4_);
              auVar29._12_4_ = -(uint)(auVar30._12_4_ < auVar26._12_4_);
              auVar24 = ~auVar29 & auVar24 | auVar22 & auVar29;
              auVar23._0_8_ = auVar24._8_8_;
              auVar23._8_4_ = auVar24._8_4_;
              auVar23._12_4_ = auVar24._12_4_;
              auVar30 = auVar24 ^ _DAT_006524b0;
              auVar22 = auVar23 ^ _DAT_006524b0;
              auVar25._0_4_ = -(uint)(auVar30._0_4_ < auVar22._0_4_);
              auVar25._4_4_ = -(uint)(auVar30._4_4_ < auVar22._4_4_);
              auVar25._8_4_ = -(uint)(auVar30._8_4_ < auVar22._8_4_);
              auVar25._12_4_ = -(uint)(auVar30._12_4_ < auVar22._12_4_);
              in_XMM4 = auVar24 & auVar25;
              auVar30 = ~auVar25 & auVar23 | in_XMM4;
              uVar17 = auVar30._4_4_;
              auVar26._4_4_ = uVar17;
              auVar26._0_4_ = uVar17;
              auVar26._8_4_ = uVar17;
              auVar26._12_4_ = uVar17;
              in_XMM2 = auVar30 ^ _DAT_006524b0;
              auVar26 = _DAT_006524b0 ^ auVar26;
              auVar20._0_4_ = -(uint)(in_XMM2._0_4_ < auVar26._0_4_);
              auVar20._4_4_ = -(uint)(in_XMM2._4_4_ < auVar26._4_4_);
              auVar20._8_4_ = -(uint)(in_XMM2._8_4_ < auVar26._8_4_);
              auVar20._12_4_ = -(uint)(in_XMM2._12_4_ < auVar26._12_4_);
              in_XMM3 = auVar30 & auVar20;
              uVar17 = ~auVar20._0_4_ & uVar17 | in_XMM3._0_4_;
            }
            lVar8 = uVar9 - uVar18;
            puVar15 = (uint *)(lVar2 + uVar18 * 0x14 + 8);
            do {
              if (*puVar15 < uVar17) {
                uVar17 = *puVar15;
              }
              puVar15 = puVar15 + 5;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
        }
        else {
          uVar17 = *(uint *)(lVar2 + 8 + uVar11 * 0x14);
          uVar1 = *(uint *)(lVar2 + 8 + (ulong)(uVar4 - 1) * 0x14);
          if (uVar1 < uVar17) {
            uVar17 = uVar1;
          }
        }
      }
      param_8 = 3;
      local_38 = uVar11;
      auVar30 = hb_buffer_t::_infos_set_glyph_flags(this_00,lVar2,param_9,uVar4,uVar17,3);
      uVar17 = *(uint *)(this_00 + 0x5c);
      uVar11 = local_38;
    }
    uVar7 = auVar30._8_8_;
    local_40 = 0.0;
    local_3c = 0.0;
    uVar5 = *(ushort *)this_02 << 8 | *(ushort *)this_02 >> 8;
    if (uVar5 == 3) {
      auVar30 = AnchorFormat3::get_anchor((long)this_02,param_4,&local_3c,&local_40);
    }
    else if (uVar5 == 2) {
      auVar30 = AnchorFormat2::get_anchor
                          ((AnchorFormat2 *)this_02,*(hb_font_t **)(param_4 + 0x90),
                           *(undefined4 *)(*(long *)(this_00 + 0x70) + (ulong)uVar17 * 0x14),
                           &local_3c,&local_40);
    }
    else if (uVar5 == 1) {
      local_3c = (float)(int)(short)(*(ushort *)(this_02 + 2) << 8 | *(ushort *)(this_02 + 2) >> 8)
                 * *(float *)(*(long *)(param_4 + 0x90) + 0x4c);
      local_40 = (float)(int)(short)(*(ushort *)(this_02 + 4) << 8 | *(ushort *)(this_02 + 4) >> 8)
                 * *(float *)(*(long *)(param_4 + 0x90) + 0x50);
      auVar30._4_4_ = 0;
      auVar30._0_4_ = local_40;
      auVar30._8_8_ = uVar7;
    }
    uVar7 = auVar30._8_8_;
    fVar31 = 0.0;
    local_44 = 0.0;
    uVar5 = *(ushort *)this_03 << 8 | *(ushort *)this_03 >> 8;
    if (uVar5 == 3) {
      auVar30 = AnchorFormat3::get_anchor((long)this_03,param_4,&local_44,afStack_248 + 0x80);
    }
    else if (uVar5 == 2) {
      auVar30 = AnchorFormat2::get_anchor
                          (this_03,*(hb_font_t **)(param_4 + 0x90),
                           *(undefined4 *)(*(long *)(this_00 + 0x70) + uVar11 * 0x14),&local_44,
                           afStack_248 + 0x80);
    }
    else if (uVar5 == 1) {
      local_44 = (float)(int)(short)(*(ushort *)(this_03 + 2) << 8 | *(ushort *)(this_03 + 2) >> 8)
                 * *(float *)(*(long *)(param_4 + 0x90) + 0x4c);
      fVar31 = (float)(int)(short)(*(ushort *)(this_03 + 4) << 8 | *(ushort *)(this_03 + 4) >> 8) *
               *(float *)(*(long *)(param_4 + 0x90) + 0x50);
      auVar30._4_4_ = 0;
      auVar30._0_4_ = fVar31;
      auVar30._8_8_ = uVar7;
    }
    uVar7 = auVar30._8_8_;
    uVar10 = uVar10 & 0xffffffff;
    phVar3 = *(hb_buffer_t **)(param_4 + 0xa0);
    if (*(long *)(phVar3 + 0xd0) != 0) {
      hb_buffer_t::message
                (auVar30._0_8_,uVar7,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                 in_XMM6._0_8_,in_XMM7_Qa,phVar3,*(undefined8 *)(param_4 + 0x90),
                 "attaching mark glyph at %u to glyph at %u",(ulong)*(uint *)(phVar3 + 0x5c),
                 (ulong)param_9,param_8,SUB41(fVar31,0));
    }
    lVar2 = *(long *)(this_00 + 0x80);
    uVar11 = (ulong)*(uint *)(this_00 + 0x5c);
    fVar19 = floorf((local_44 - local_3c) + DAT_005d9044);
    *(int *)(lVar2 + 8 + uVar11 * 0x14) = (int)fVar19;
    auVar21._0_4_ = floorf((fVar31 - local_40) + DAT_005d9044);
    auVar21._4_12_ = extraout_var;
    *(int *)(lVar2 + 0xc + uVar11 * 0x14) = (int)auVar21._0_4_;
    *(undefined1 *)(lVar2 + 0x12 + uVar11 * 0x14) = 1;
    *(short *)(lVar2 + 0x10 + uVar11 * 0x14) =
         (short)param_9 - (short)*(undefined4 *)(this_00 + 0x5c);
    this_00[0xc0] = (hb_buffer_t)((byte)this_00[0xc0] | 8);
    phVar3 = *(hb_buffer_t **)(param_4 + 0xa0);
    if (*(long *)(phVar3 + 0xd0) != 0) {
      hb_buffer_t::message
                (auVar21._0_8_,uVar7,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                 in_XMM6._0_8_,in_XMM7_Qa,phVar3,*(undefined8 *)(param_4 + 0x90),
                 "attached mark glyph at %u to glyph at %u",(ulong)*(uint *)(phVar3 + 0x5c),
                 (ulong)param_9,param_8,SUB41(fVar31,0));
    }
    *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
  }
LAB_0040e5c3:
  return (uVar10 ^ 1) & 0xffffffff;
}


