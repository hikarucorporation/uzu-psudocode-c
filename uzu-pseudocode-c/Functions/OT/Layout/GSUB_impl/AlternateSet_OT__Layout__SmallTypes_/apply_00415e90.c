// Function : apply
// Namespace: OT:Layout:GSUB_impl:AlternateSet_OT__Layout__SmallTypes_
// Entry    : 00415e90
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2, AlternateSet<OT::Layout::SmallTypes> * this, hb_ot_apply_context_t * param_4, undefined8 param_5, undefined8 param_6, ulong param_7, undefined8 param_8)
// Body     : 00415e90 - 004161e0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::Layout::GSUB_impl::AlternateSet<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */

ulong __thiscall
OT::Layout::GSUB_impl::AlternateSet<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,AlternateSet<OT::Layout::SmallTypes> *this,
          hb_ot_apply_context_t *param_4,undefined8 param_5,undefined8 param_6,ulong param_7,
          undefined8 param_8)

{
  hb_buffer_t hVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  ushort uVar6;
  AlternateSet<OT::Layout::SmallTypes> *in_RAX;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  AlternateSet<OT::Layout::SmallTypes> *pAVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 uVar16;
  uint uVar17;
  hb_buffer_t *phVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  uint uVar23;
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM5 [16];
  undefined1 in_XMM6 [16];
  undefined8 in_XMM7_Qa;
  undefined1 auVar28 [16];
  undefined1 uVar29;
  
  uVar6 = *(ushort *)this;
  if (uVar6 != 0) {
    uVar6 = uVar6 << 8 | uVar6 >> 8;
    phVar18 = *(hb_buffer_t **)(param_4 + 0xa0);
    lVar4 = *(long *)(phVar18 + 0x70);
    uVar17 = *(uint *)(param_4 + 300);
    if (uVar17 == 0) {
      bVar11 = 0;
    }
    else {
      iVar5 = 0;
      if (uVar17 != 0) {
        for (; (uVar17 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
      bVar11 = (byte)iVar5;
    }
    uVar17 = (uVar17 & *(uint *)(lVar4 + 4 + (ulong)*(uint *)(phVar18 + 0x5c) * 0x14)) >>
             (bVar11 & 0x1f);
    if (uVar17 == 0xff) {
      if (param_4[0x140] == (hb_ot_apply_context_t)0x0) {
        uVar17 = 0xff;
      }
      else {
        uVar17 = *(uint *)(phVar18 + 0x60);
        uVar12 = (ulong)uVar17;
        if (1 < uVar12) {
          phVar18[0xc0] = (hb_buffer_t)((byte)phVar18[0xc0] | 0x20);
          if (*(int *)(phVar18 + 0x1c) == 2) {
            if (uVar17 < 9) {
              param_7 = 0xffffffff;
              lVar7 = 0;
            }
            else {
              uVar13 = 8;
              if ((ulong)(uVar17 & 7) != 0) {
                uVar13 = (ulong)(uVar17 & 7);
              }
              lVar7 = uVar12 - uVar13;
              puVar14 = (undefined4 *)(lVar4 + 0x94);
              auVar28._8_4_ = 0xffffffff;
              auVar28._0_8_ = 0xffffffffffffffff;
              auVar28._12_4_ = 0xffffffff;
              auVar21._8_4_ = 0xffffffff;
              auVar21._0_8_ = 0xffffffffffffffff;
              auVar21._12_4_ = 0xffffffff;
              lVar15 = lVar7;
              do {
                in_XMM5._12_4_ = puVar14[-0x14];
                in_XMM5._8_4_ = puVar14[-0x19];
                in_XMM5._4_4_ = puVar14[-0x1e];
                in_XMM5._0_4_ = puVar14[-0x23];
                in_XMM6._12_4_ = *puVar14;
                in_XMM6._8_4_ = puVar14[-5];
                in_XMM6._4_4_ = puVar14[-10];
                in_XMM6._0_4_ = puVar14[-0xf];
                auVar24 = in_XMM5 ^ _DAT_006524b0;
                auVar19 = auVar28 ^ _DAT_006524b0;
                auVar25._0_4_ = -(uint)(auVar19._0_4_ < auVar24._0_4_);
                auVar25._4_4_ = -(uint)(auVar19._4_4_ < auVar24._4_4_);
                auVar25._8_4_ = -(uint)(auVar19._8_4_ < auVar24._8_4_);
                auVar25._12_4_ = -(uint)(auVar19._12_4_ < auVar24._12_4_);
                auVar28 = ~auVar25 & in_XMM5 | auVar28 & auVar25;
                auVar24 = in_XMM6 ^ _DAT_006524b0;
                auVar19 = auVar21 ^ _DAT_006524b0;
                auVar26._0_4_ = -(uint)(auVar19._0_4_ < auVar24._0_4_);
                auVar26._4_4_ = -(uint)(auVar19._4_4_ < auVar24._4_4_);
                auVar26._8_4_ = -(uint)(auVar19._8_4_ < auVar24._8_4_);
                auVar26._12_4_ = -(uint)(auVar19._12_4_ < auVar24._12_4_);
                auVar21 = ~auVar26 & in_XMM6 | auVar21 & auVar26;
                puVar14 = puVar14 + 0x28;
                lVar15 = lVar15 + -8;
              } while (lVar15 != 0);
              auVar19 = auVar28 ^ _DAT_006524b0;
              auVar24 = auVar21 ^ _DAT_006524b0;
              auVar27._0_4_ = -(uint)(auVar19._0_4_ < auVar24._0_4_);
              auVar27._4_4_ = -(uint)(auVar19._4_4_ < auVar24._4_4_);
              auVar27._8_4_ = -(uint)(auVar19._8_4_ < auVar24._8_4_);
              auVar27._12_4_ = -(uint)(auVar19._12_4_ < auVar24._12_4_);
              in_XMM4 = ~auVar27 & auVar21 | auVar28 & auVar27;
              auVar20._0_8_ = in_XMM4._8_8_;
              auVar20._8_4_ = in_XMM4._8_4_;
              auVar20._12_4_ = in_XMM4._12_4_;
              auVar28 = in_XMM4 ^ _DAT_006524b0;
              auVar21 = auVar20 ^ _DAT_006524b0;
              auVar22._0_4_ = -(uint)(auVar28._0_4_ < auVar21._0_4_);
              auVar22._4_4_ = -(uint)(auVar28._4_4_ < auVar21._4_4_);
              auVar22._8_4_ = -(uint)(auVar28._8_4_ < auVar21._8_4_);
              auVar22._12_4_ = -(uint)(auVar28._12_4_ < auVar21._12_4_);
              in_XMM4 = in_XMM4 & auVar22;
              in_XMM3 = ~auVar22 & auVar20 | in_XMM4;
              uVar23 = in_XMM3._4_4_;
              auVar19._4_4_ = uVar23;
              auVar19._0_4_ = uVar23;
              auVar19._8_4_ = uVar23;
              auVar19._12_4_ = uVar23;
              in_XMM2 = in_XMM3 ^ _DAT_006524b0;
              auVar19 = _DAT_006524b0 ^ auVar19;
              auVar24._0_4_ = -(uint)(in_XMM2._0_4_ < auVar19._0_4_);
              auVar24._4_4_ = -(uint)(in_XMM2._4_4_ < auVar19._4_4_);
              auVar24._8_4_ = -(uint)(in_XMM2._8_4_ < auVar19._8_4_);
              auVar24._12_4_ = -(uint)(in_XMM2._12_4_ < auVar19._12_4_);
              in_XMM3 = in_XMM3 & auVar24;
              param_7 = (ulong)(~auVar24._0_4_ & uVar23 | in_XMM3._0_4_);
            }
            lVar15 = uVar12 - lVar7;
            puVar8 = (uint *)(lVar4 + lVar7 * 0x14 + 8);
            do {
              if (*puVar8 < (uint)param_7) {
                param_7 = (ulong)*puVar8;
              }
              puVar8 = puVar8 + 5;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          else {
            uVar23 = *(uint *)(lVar4 + 8 + (ulong)(uVar17 - 1) * 0x14);
            uVar2 = *(uint *)(lVar4 + 8);
            if (uVar23 < *(uint *)(lVar4 + 8)) {
              uVar2 = uVar23;
            }
            param_7 = (ulong)uVar2;
          }
          param_8 = 3;
          hb_buffer_t::_infos_set_glyph_flags(phVar18,lVar4,0,uVar17,(uint)param_7,3);
          phVar18 = *(hb_buffer_t **)(param_4 + 0xa0);
          param_2 = extraout_XMM1_Qa;
        }
        uVar17 = (uint)(*(int *)(phVar18 + 0xbc) * 0xbc8f) % 0x7fffffff;
        *(uint *)(phVar18 + 0xbc) = uVar17;
        uVar17 = uVar17 % (uint)uVar6 + 1;
      }
    }
    uVar17 = uVar17 - 1;
    if (uVar17 < uVar6) {
      if (*(long *)(phVar18 + 0xd0) != 0) {
        hVar1 = phVar18[0x5a];
        uVar3 = *(undefined4 *)(phVar18 + 0x5c);
        uVar16 = *(undefined4 *)(phVar18 + 100);
        uVar9 = hb_buffer_t::sync(phVar18);
        if ((char)uVar9 == '\0') {
          uVar16 = uVar3;
        }
        *(undefined4 *)(phVar18 + 0x5c) = uVar16;
        if (hVar1 != (hb_buffer_t)0x0) {
          phVar18[0x5a] = (hb_buffer_t)0x1;
          *(undefined4 *)(phVar18 + 100) = uVar16;
        }
        hb_buffer_t::message
                  (extraout_XMM0_Qa,param_2,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                   in_XMM6._0_8_,in_XMM7_Qa,*(hb_buffer_t **)(param_4 + 0xa0),
                   *(undefined8 *)(param_4 + 0x90),"replacing glyph at %u (alternate substitution)",
                   (ulong)*(uint *)(*(hb_buffer_t **)(param_4 + 0xa0) + 0x5c),param_7,param_8,
                   (char)this);
        in_RAX = this;
      }
      uVar29 = SUB81(in_RAX,0);
      if (uVar17 < (ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8)) {
        pAVar10 = this + (ulong)uVar17 * 2 + 2;
      }
      else {
        pAVar10 = (AlternateSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
      }
      auVar28 = hb_ot_apply_context_t::replace_glyph
                          (param_4,(uint)(ushort)(*(ushort *)pAVar10 << 8 | *(ushort *)pAVar10 >> 8)
                          );
      phVar18 = *(hb_buffer_t **)(param_4 + 0xa0);
      uVar12 = CONCAT71((int7)((ulong)this >> 8),1);
      if (*(long *)(phVar18 + 0xd0) != 0) {
        hb_buffer_t::message
                  (auVar28._0_8_,auVar28._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                   in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,phVar18,*(undefined8 *)(param_4 + 0x90),
                   "replaced glyph at %u (alternate substitution)",
                   (ulong)(*(int *)(phVar18 + 0x5c) - 1),param_7,param_8,uVar29);
      }
      goto LAB_004161c3;
    }
  }
  uVar12 = 0;
LAB_004161c3:
  return uVar12 & 0xffffffff;
}


