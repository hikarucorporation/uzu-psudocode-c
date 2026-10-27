// Function : apply
// Namespace: OT:Layout:GPOS_impl:CursivePosFormat1
// Entry    : 0040f820
// Prototype: ulong apply(CursivePosFormat1 * this, long param_1)
// Body     : 0040f820 - 004103e1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::Layout::GPOS_impl::CursivePosFormat1::apply(OT::hb_ot_apply_context_t*) const */

ulong __thiscall
OT::Layout::GPOS_impl::CursivePosFormat1::apply(CursivePosFormat1 *this,long param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  hb_buffer_t *phVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  ushort uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  CursivePosFormat1 *pCVar21;
  uint *puVar22;
  Coverage *pCVar23;
  AnchorFormat3 *pAVar24;
  long lVar25;
  AnchorFormat2 *pAVar26;
  hb_buffer_t *phVar27;
  uint uVar28;
  undefined8 in_R9;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar34;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM1_Qa;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_XMM5 [16];
  undefined1 in_XMM6 [16];
  undefined8 in_XMM7_Qa;
  float afStack_268 [128];
  undefined1 uVar44;
  undefined4 in_stack_ffffffffffffff98;
  float fVar45;
  float local_64;
  float local_60;
  float local_5c;
  ulong local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  CursivePosFormat1 *local_40;
  hb_buffer_t *local_38;
  
  phVar27 = *(hb_buffer_t **)(param_1 + 0xa0);
  uVar6 = *(ushort *)(this + 2);
  pCVar21 = (CursivePosFormat1 *)&_hb_NullPool;
  pCVar23 = (Coverage *)&_hb_NullPool;
  if (uVar6 != 0) {
    pCVar23 = (Coverage *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8));
  }
  uVar7 = Common::Coverage::get_coverage
                    (pCVar23,*(uint *)(*(long *)(phVar27 + 0x70) +
                                      (ulong)*(uint *)(phVar27 + 0x5c) * 0x14));
  if (uVar7 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)) {
    pCVar21 = this + (ulong)uVar7 * 4 + 6;
  }
  if ((*(ushort *)pCVar21 != 0) &&
     (pCVar21 + (2 - *(long *)(param_1 + 0xb0)) <=
      (CursivePosFormat1 *)(ulong)*(uint *)(param_1 + 0xc0))) {
    local_58 = param_1 + 0xa8;
    uVar6 = *(ushort *)pCVar21;
    if (uVar6 == 0) goto LAB_0040f915;
    pAVar24 = (AnchorFormat3 *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8));
    if ((AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0xc0) <
        pAVar24 + (2 - *(long *)(param_1 + 0xb0))) {
LAB_0040f8ea:
      if ((0x1f < *(uint *)(param_1 + 0xd4)) ||
         (*(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1,
         *(char *)(param_1 + 0xd0) == '\0')) goto LAB_0041033a;
      *(ushort *)pCVar21 = 0;
    }
    else {
      uVar6 = *(ushort *)pAVar24 << 8 | *(ushort *)pAVar24 >> 8;
      if (uVar6 == 1) {
        if (pAVar24 + (6 - *(long *)(param_1 + 0xb0)) <=
            (AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0xc0)) goto LAB_0040f915;
        goto LAB_0040f8ea;
      }
      if (uVar6 == 3) {
        uVar9 = AnchorFormat3::sanitize(pAVar24,local_58);
        if ((char)uVar9 == '\0') goto LAB_0040f8ea;
      }
      else if ((uVar6 == 2) &&
              ((AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0xc0) <
               pAVar24 + (8 - *(long *)(param_1 + 0xb0)))) goto LAB_0040f8ea;
    }
LAB_0040f915:
    iVar14 = *(int *)(phVar27 + 0x5c);
    *(int *)(param_1 + 8) = iVar14;
    local_50 = (ulong)local_50._4_4_ << 0x20;
    if (iVar14 != 0) {
      local_40 = pCVar21;
      local_38 = phVar27;
      do {
        uVar11 = (ulong)(iVar14 - 1U);
        *(uint *)(param_1 + 8) = iVar14 - 1U;
        lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x78);
        uVar7 = *(uint *)(param_1 + 0x18);
        uVar6 = *(ushort *)(lVar3 + 0xc + uVar11 * 0x14);
        if ((uVar7 & uVar6 & 0xe) != 0) goto LAB_0040f952;
        puVar22 = (uint *)(uVar11 * 0x14 + lVar3);
        if ((uVar6 & 8) == 0) {
LAB_0040f99c:
          uVar44 = (undefined1)in_stack_ffffffffffffff98;
          pbVar8 = (byte *)(uVar11 * 0x14 + 0xc + lVar3);
          uVar6 = *(ushort *)(lVar3 + 0x10 + uVar11 * 0x14);
          uVar18 = 0;
          bVar13 = false;
          if (((((uVar6 & 0x20) != 0) && (bVar13 = false, (*pbVar8 & 0x10) == 0)) &&
              ((*(char *)(param_1 + 0x20) != '\0' || (bVar13 = false, (uVar6 & 0x21f) != 0x201))))
             && ((*(char *)(param_1 + 0x21) != '\0' || (bVar13 = false, (uVar6 & 0x11f) != 0x101))))
          {
            bVar13 = (uVar6 & 0x40) == 0 || *(char *)(param_1 + 0x22) != '\0';
          }
          puVar17 = *(ushort **)(param_1 + 0x38);
          if (puVar17 != (ushort *)0x0) {
            uVar18 = *puVar17 << 8 | *puVar17 >> 8;
          }
          if (((*(uint *)(lVar3 + 4 + uVar11 * 0x14) & *(uint *)(param_1 + 0x1c)) != 0) &&
             ((*(byte *)(param_1 + 0x24) == 0 || (*(byte *)(param_1 + 0x24) == pbVar8[3])))) {
            if (*(code **)(param_1 + 0x28) == (code *)0x0) {
              if (bVar13) goto LAB_0040f952;
            }
            else {
              cVar5 = (**(code **)(param_1 + 0x28))(puVar22,uVar18,*(undefined8 *)(param_1 + 0x30));
              uVar44 = (undefined1)in_stack_ffffffffffffff98;
              in_XMM1._8_8_ = extraout_XMM1_Qb;
              in_XMM1._0_8_ = extraout_XMM1_Qa;
              if (cVar5 == '\0') goto LAB_0040f949;
              puVar17 = *(ushort **)(param_1 + 0x38);
            }
            phVar27 = local_38;
            if (puVar17 != (ushort *)0x0) {
              *(ushort **)(param_1 + 0x38) = puVar17 + 1;
            }
            uVar6 = *(ushort *)(this + 2);
            pCVar21 = (CursivePosFormat1 *)&_hb_NullPool;
            pCVar23 = (Coverage *)&_hb_NullPool;
            if (uVar6 != 0) {
              pCVar23 = (Coverage *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8));
            }
            uVar7 = Common::Coverage::get_coverage
                              (pCVar23,*(uint *)(*(long *)(local_38 + 0x70) +
                                                (ulong)*(uint *)(param_1 + 8) * 0x14));
            uVar9 = in_XMM1._0_8_;
            if (uVar7 < (ushort)(*(ushort *)(this + 4) << 8 | *(ushort *)(this + 4) >> 8)) {
              pCVar21 = this + (ulong)uVar7 * 4 + 6;
            }
            if ((*(short *)(pCVar21 + 2) != 0) &&
               (pCVar21 + (4 - *(long *)(param_1 + 0xb0)) <=
                (CursivePosFormat1 *)(ulong)*(uint *)(param_1 + 0xc0))) {
              uVar6 = *(ushort *)(pCVar21 + 2);
              uVar34 = extraout_XMM0_Qa;
              if (uVar6 == 0) goto LAB_0040fb92;
              pAVar24 = (AnchorFormat3 *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8));
              if ((AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0xc0) <
                  pAVar24 + (2 - *(long *)(param_1 + 0xb0))) {
LAB_0040fb67:
                if ((0x1f < *(uint *)(param_1 + 0xd4)) ||
                   (*(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1,
                   *(char *)(param_1 + 0xd0) == '\0')) goto LAB_0040fda8;
                *(undefined2 *)(pCVar21 + 2) = 0;
              }
              else {
                uVar6 = *(ushort *)pAVar24 << 8 | *(ushort *)pAVar24 >> 8;
                if (uVar6 == 1) {
                  if (pAVar24 + (6 - *(long *)(param_1 + 0xb0)) <=
                      (AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0xc0)) goto LAB_0040fb92;
                  goto LAB_0040fb67;
                }
                if (uVar6 == 3) {
                  uVar12 = AnchorFormat3::sanitize(pAVar24,local_58);
                  uVar9 = in_XMM1._0_8_;
                  uVar34 = extraout_XMM0_Qa_00;
                  if ((char)uVar12 == '\0') goto LAB_0040fb67;
                }
                else if ((uVar6 == 2) &&
                        ((AnchorFormat3 *)(ulong)*(uint *)(param_1 + 0xc0) <
                         pAVar24 + (8 - *(long *)(param_1 + 0xb0)))) goto LAB_0040fb67;
              }
LAB_0040fb92:
              uVar7 = *(uint *)(param_1 + 8);
              uVar11 = (ulong)uVar7;
              uVar15 = *(uint *)(phVar27 + 0x5c);
              uVar31 = (ulong)uVar15;
              if (*(long *)(*(hb_buffer_t **)(param_1 + 0xa0) + 0xd0) != 0) {
                hb_buffer_t::message
                          (uVar34,uVar9,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,in_XMM5._0_8_,
                           in_XMM6._0_8_,in_XMM7_Qa,*(hb_buffer_t **)(param_1 + 0xa0),
                           *(undefined8 *)(param_1 + 0x90),
                           "cursive attaching glyph at %u to glyph at %u",uVar11,uVar31,in_R9,uVar44
                          );
              }
              uVar15 = uVar15 + 1;
              if (*(uint *)(phVar27 + 0x60) < uVar15) {
                uVar15 = *(uint *)(phVar27 + 0x60);
              }
              if (1 < uVar15 - uVar7) {
                phVar27[0xc0] = (hb_buffer_t)((byte)phVar27[0xc0] | 0x20);
                lVar3 = *(long *)(phVar27 + 0x70);
                uVar28 = 0xffffffff;
                if (uVar15 != uVar7) {
                  if (*(int *)(phVar27 + 0x1c) == 2) {
                    if (uVar7 < uVar15) {
                      uVar10 = (ulong)uVar15;
                      uVar29 = uVar10 - uVar11;
                      uVar28 = 0xffffffff;
                      uVar30 = uVar11;
                      if (8 < uVar29) {
                        uVar19 = (ulong)((uint)uVar29 & 7);
                        uVar30 = 8;
                        if (uVar19 != 0) {
                          uVar30 = uVar19;
                        }
                        lVar25 = (uVar30 + uVar11) - uVar10;
                        puVar20 = (undefined4 *)(lVar3 + uVar11 * 0x14 + 0x94);
                        auVar36._8_4_ = 0xffffffff;
                        auVar36._0_8_ = 0xffffffffffffffff;
                        auVar36._12_4_ = 0xffffffff;
                        auVar38._8_4_ = 0xffffffff;
                        auVar38._0_8_ = 0xffffffffffffffff;
                        auVar38._12_4_ = 0xffffffff;
                        do {
                          in_XMM5._12_4_ = puVar20[-0x14];
                          in_XMM5._8_4_ = puVar20[-0x19];
                          in_XMM5._4_4_ = puVar20[-0x1e];
                          in_XMM5._0_4_ = puVar20[-0x23];
                          in_XMM6._12_4_ = *puVar20;
                          in_XMM6._8_4_ = puVar20[-5];
                          in_XMM6._4_4_ = puVar20[-10];
                          in_XMM6._0_4_ = puVar20[-0xf];
                          auVar40 = in_XMM5 ^ _DAT_006524b0;
                          auVar35 = auVar36 ^ _DAT_006524b0;
                          auVar41._0_4_ = -(uint)(auVar35._0_4_ < auVar40._0_4_);
                          auVar41._4_4_ = -(uint)(auVar35._4_4_ < auVar40._4_4_);
                          auVar41._8_4_ = -(uint)(auVar35._8_4_ < auVar40._8_4_);
                          auVar41._12_4_ = -(uint)(auVar35._12_4_ < auVar40._12_4_);
                          auVar36 = ~auVar41 & in_XMM5 | auVar36 & auVar41;
                          auVar40 = in_XMM6 ^ _DAT_006524b0;
                          auVar35 = auVar38 ^ _DAT_006524b0;
                          auVar42._0_4_ = -(uint)(auVar35._0_4_ < auVar40._0_4_);
                          auVar42._4_4_ = -(uint)(auVar35._4_4_ < auVar40._4_4_);
                          auVar42._8_4_ = -(uint)(auVar35._8_4_ < auVar40._8_4_);
                          auVar42._12_4_ = -(uint)(auVar35._12_4_ < auVar40._12_4_);
                          auVar38 = ~auVar42 & in_XMM6 | auVar38 & auVar42;
                          puVar20 = puVar20 + 0x28;
                          lVar25 = lVar25 + 8;
                        } while (lVar25 != 0);
                        uVar30 = (uVar29 - uVar30) + uVar11;
                        auVar35 = auVar36 ^ _DAT_006524b0;
                        auVar40 = auVar38 ^ _DAT_006524b0;
                        auVar43._0_4_ = -(uint)(auVar35._0_4_ < auVar40._0_4_);
                        auVar43._4_4_ = -(uint)(auVar35._4_4_ < auVar40._4_4_);
                        auVar43._8_4_ = -(uint)(auVar35._8_4_ < auVar40._8_4_);
                        auVar43._12_4_ = -(uint)(auVar35._12_4_ < auVar40._12_4_);
                        in_XMM4 = ~auVar43 & auVar38 | auVar36 & auVar43;
                        auVar37._0_8_ = in_XMM4._8_8_;
                        auVar37._8_4_ = in_XMM4._8_4_;
                        auVar37._12_4_ = in_XMM4._12_4_;
                        auVar36 = in_XMM4 ^ _DAT_006524b0;
                        auVar38 = auVar37 ^ _DAT_006524b0;
                        auVar39._0_4_ = -(uint)(auVar36._0_4_ < auVar38._0_4_);
                        auVar39._4_4_ = -(uint)(auVar36._4_4_ < auVar38._4_4_);
                        auVar39._8_4_ = -(uint)(auVar36._8_4_ < auVar38._8_4_);
                        auVar39._12_4_ = -(uint)(auVar36._12_4_ < auVar38._12_4_);
                        in_XMM4 = in_XMM4 & auVar39;
                        in_XMM3 = ~auVar39 & auVar37 | in_XMM4;
                        uVar28 = in_XMM3._4_4_;
                        auVar35._4_4_ = uVar28;
                        auVar35._0_4_ = uVar28;
                        auVar35._8_4_ = uVar28;
                        auVar35._12_4_ = uVar28;
                        in_XMM2 = in_XMM3 ^ _DAT_006524b0;
                        auVar35 = _DAT_006524b0 ^ auVar35;
                        auVar40._0_4_ = -(uint)(in_XMM2._0_4_ < auVar35._0_4_);
                        auVar40._4_4_ = -(uint)(in_XMM2._4_4_ < auVar35._4_4_);
                        auVar40._8_4_ = -(uint)(in_XMM2._8_4_ < auVar35._8_4_);
                        auVar40._12_4_ = -(uint)(in_XMM2._12_4_ < auVar35._12_4_);
                        in_XMM3 = in_XMM3 & auVar40;
                        uVar28 = ~auVar40._0_4_ & uVar28 | in_XMM3._0_4_;
                      }
                      lVar25 = uVar10 - uVar30;
                      puVar22 = (uint *)(lVar3 + uVar30 * 0x14 + 8);
                      do {
                        if (*puVar22 < uVar28) {
                          uVar28 = *puVar22;
                        }
                        puVar22 = puVar22 + 5;
                        lVar25 = lVar25 + -1;
                      } while (lVar25 != 0);
                    }
                  }
                  else {
                    uVar28 = *(uint *)(lVar3 + 8 + uVar11 * 0x14);
                    uVar2 = *(uint *)(lVar3 + 8 + (ulong)(uVar15 - 1) * 0x14);
                    if (uVar2 < uVar28) {
                      uVar28 = uVar2;
                    }
                  }
                }
                in_R9 = 3;
                hb_buffer_t::_infos_set_glyph_flags(phVar27,lVar3,uVar7,uVar15,uVar28,3);
              }
              uVar6 = *(ushort *)(pCVar21 + 2);
              if (uVar6 == 0) {
                pAVar26 = (AnchorFormat2 *)&_hb_NullPool;
              }
              else {
                pAVar26 = (AnchorFormat2 *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8));
              }
              fVar45 = 0.0;
              local_64 = 0.0;
              uVar6 = *(ushort *)pAVar26 << 8 | *(ushort *)pAVar26 >> 8;
              local_58 = uVar31;
              if (uVar6 == 3) {
                AnchorFormat3::get_anchor((long)pAVar26,param_1,&local_64,afStack_268 + 0x80);
              }
              else if (uVar6 == 2) {
                AnchorFormat2::get_anchor
                          (pAVar26,*(hb_font_t **)(param_1 + 0x90),
                           *(undefined4 *)(*(long *)(phVar27 + 0x70) + uVar11 * 0x14),&local_64,
                           afStack_268 + 0x80);
              }
              else if (uVar6 == 1) {
                local_64 = (float)(int)(short)(*(ushort *)(pAVar26 + 2) << 8 |
                                              *(ushort *)(pAVar26 + 2) >> 8) *
                           *(float *)(*(long *)(param_1 + 0x90) + 0x4c);
                fVar45 = (float)(int)(short)(*(ushort *)(pAVar26 + 4) << 8 |
                                            *(ushort *)(pAVar26 + 4) >> 8) *
                         *(float *)(*(long *)(param_1 + 0x90) + 0x50);
              }
              uVar31 = local_58;
              uVar6 = *(ushort *)local_40;
              if (uVar6 == 0) {
                pAVar26 = (AnchorFormat2 *)&_hb_NullPool;
              }
              else {
                pAVar26 = (AnchorFormat2 *)(this + (ushort)(uVar6 << 8 | uVar6 >> 8));
              }
              local_60 = 0.0;
              local_5c = 0.0;
              uVar6 = *(ushort *)pAVar26 << 8 | *(ushort *)pAVar26 >> 8;
              if (uVar6 == 3) {
                AnchorFormat3::get_anchor((long)pAVar26,param_1,&local_5c,&local_60);
              }
              else if (uVar6 == 2) {
                AnchorFormat2::get_anchor
                          (pAVar26,*(hb_font_t **)(param_1 + 0x90),
                           *(undefined4 *)(*(long *)(phVar27 + 0x70) + local_58 * 0x14),&local_5c,
                           &local_60);
              }
              else if (uVar6 == 1) {
                local_5c = (float)(int)(short)(*(ushort *)(pAVar26 + 2) << 8 |
                                              *(ushort *)(pAVar26 + 2) >> 8) *
                           *(float *)(*(long *)(param_1 + 0x90) + 0x4c);
                local_60 = (float)(int)(short)(*(ushort *)(pAVar26 + 4) << 8 |
                                              *(ushort *)(pAVar26 + 4) >> 8) *
                           *(float *)(*(long *)(param_1 + 0x90) + 0x50);
              }
              lVar3 = *(long *)(phVar27 + 0x80);
              local_40 = (CursivePosFormat1 *)(ulong)*(uint *)(param_1 + 0x128);
              switch(*(uint *)(param_1 + 0x128)) {
              case 4:
                fVar32 = floorf(local_64 + DAT_005d9044);
                *(int *)(lVar3 + uVar11 * 0x14) =
                     (int)((float)*(int *)(lVar3 + 8 + uVar11 * 0x14) + fVar32);
                fVar32 = floorf(DAT_005d9044 + local_5c);
                iVar14 = *(int *)(lVar3 + 8 + uVar31 * 0x14);
                iVar16 = (int)((float)iVar14 + fVar32);
                piVar1 = (int *)(lVar3 + uVar31 * 0x14);
                *piVar1 = *piVar1 - iVar16;
                *(int *)(lVar3 + 8 + uVar31 * 0x14) = iVar14 - iVar16;
                break;
              case 5:
                fVar32 = floorf(local_64 + DAT_005d9044);
                iVar14 = *(int *)(lVar3 + 8 + uVar11 * 0x14);
                iVar16 = (int)((float)iVar14 + fVar32);
                piVar1 = (int *)(lVar3 + uVar11 * 0x14);
                *piVar1 = *piVar1 - iVar16;
                *(int *)(lVar3 + 8 + uVar11 * 0x14) = iVar14 - iVar16;
                fVar32 = floorf(DAT_005d9044 + local_5c);
                *(int *)(lVar3 + uVar31 * 0x14) =
                     (int)((float)*(int *)(lVar3 + 8 + uVar31 * 0x14) + fVar32);
                break;
              case 6:
                fVar32 = floorf(fVar45 + DAT_005d9044);
                *(int *)(lVar3 + 4 + uVar11 * 0x14) =
                     (int)((float)*(int *)(lVar3 + 0xc + uVar11 * 0x14) + fVar32);
                fVar32 = floorf(DAT_005d9044 + local_60);
                iVar14 = *(int *)(lVar3 + 0xc + uVar31 * 0x14);
                iVar16 = (int)((float)iVar14 + fVar32);
                piVar1 = (int *)(lVar3 + 4 + uVar31 * 0x14);
                *piVar1 = *piVar1 - iVar16;
                *(int *)(lVar3 + 0xc + uVar31 * 0x14) = iVar14 - iVar16;
                break;
              case 7:
                fVar32 = floorf(fVar45 + DAT_005d9044);
                iVar14 = *(int *)(lVar3 + 0xc + uVar11 * 0x14);
                iVar16 = (int)((float)iVar14 + fVar32);
                piVar1 = (int *)(lVar3 + 4 + uVar11 * 0x14);
                *piVar1 = *piVar1 - iVar16;
                *(int *)(lVar3 + 0xc + uVar11 * 0x14) = iVar14 - iVar16;
                fVar32 = floorf(DAT_005d9044 + local_60);
                *(int *)(lVar3 + 4 + uVar31 * 0x14) = (int)fVar32;
              }
              fVar32 = floorf((local_5c - local_64) + DAT_005d9044);
              fVar33 = floorf((local_60 - fVar45) + DAT_005d9044);
              uVar44 = SUB41(fVar45,0);
              local_44 = (int)fVar33;
              if ((*(byte *)(param_1 + 0x134) & 1) == 0) {
                local_44 = -local_44;
                uVar31 = local_58;
                uVar15 = uVar7;
                uVar7 = (uint)local_58;
                local_48 = -(int)fVar32;
              }
              else {
                uVar31 = uVar11;
                uVar15 = (uint)local_58;
                local_48 = (int)fVar32;
              }
              local_50 = uVar11;
              auVar36 = reverse_cursive_minor_offset(lVar3,uVar7,(uint)local_40,uVar15);
              phVar27 = local_38;
              *(undefined1 *)(lVar3 + 0x12 + uVar31 * 0x14) = 2;
              *(short *)(lVar3 + 0x10 + uVar31 * 0x14) = (short)uVar15 - (short)uVar7;
              local_38[0xc0] = (hb_buffer_t)((byte)local_38[0xc0] | 8);
              if ((*(uint *)(param_1 + 0x128) & 0xfffffffe) == 4) {
                *(int *)(lVar3 + 0xc + uVar31 * 0x14) = local_44;
              }
              else {
                *(int *)(lVar3 + 8 + uVar31 * 0x14) = local_48;
              }
              uVar11 = (ulong)uVar15;
              if ((int)*(short *)(lVar3 + uVar31 * 0x14 + 0x10) +
                  (int)*(short *)(lVar3 + 0x10 + uVar11 * 0x14) == 0) {
                *(undefined2 *)(lVar3 + uVar11 * 0x14 + 0x10) = 0;
                if ((*(uint *)(param_1 + 0x128) & 0xfffffffe) == 4) {
                  puVar20 = (undefined4 *)(lVar3 + uVar11 * 0x14 + 0xc);
                }
                else {
                  puVar20 = (undefined4 *)(lVar3 + uVar11 * 0x14 + 8);
                }
                *puVar20 = 0;
                phVar4 = *(hb_buffer_t **)(param_1 + 0xa0);
                lVar3 = *(long *)(phVar4 + 0xd0);
              }
              else {
                phVar4 = *(hb_buffer_t **)(param_1 + 0xa0);
                lVar3 = *(long *)(phVar4 + 0xd0);
              }
              if (lVar3 != 0) {
                hb_buffer_t::message
                          (auVar36._0_8_,auVar36._8_8_,in_XMM2._0_8_,in_XMM3._0_8_,in_XMM4._0_8_,
                           in_XMM5._0_8_,in_XMM6._0_8_,in_XMM7_Qa,phVar4,
                           *(undefined8 *)(param_1 + 0x90),
                           "cursive attached glyph at %u to glyph at %u",local_50,local_58,in_R9,
                           uVar44);
              }
              *(int *)(phVar27 + 0x5c) = *(int *)(phVar27 + 0x5c) + 1;
              uVar11 = CONCAT71((int7)((ulong)param_1 >> 8),1);
              goto LAB_0041033c;
            }
LAB_0040fda8:
            if (((byte)phVar27[0x18] & 0x40) == 0) goto LAB_0041033a;
            iVar14 = *(int *)(phVar27 + 0x5c);
            uVar7 = *(uint *)(param_1 + 8);
            goto LAB_004103cb;
          }
LAB_0040f949:
          if (!bVar13) {
            iVar14 = 1;
            if (*(int *)(param_1 + 8) != 0) {
              iVar14 = *(int *)(param_1 + 8);
            }
            local_50 = CONCAT44(local_50._4_4_,iVar14 + -1);
            break;
          }
        }
        else if ((uVar7 & 0x10) == 0) {
          if (((uVar7 & 0xff00) == 0) || ((uVar7 & 0xff00) == (uVar6 & 0xff00))) goto LAB_0040f99c;
        }
        else {
          uVar9 = GDEF::accelerator_t::mark_set_covers
                            (*(accelerator_t **)(*(long *)(param_1 + 0x10) + 0xf8),uVar7 >> 0x10,
                             *puVar22);
          if ((char)uVar9 != '\0') goto LAB_0040f99c;
        }
LAB_0040f952:
        iVar14 = *(int *)(param_1 + 8);
      } while (iVar14 != 0);
      phVar27 = local_38;
    }
    if (((byte)phVar27[0x18] & 0x40) != 0) {
      iVar14 = *(int *)(phVar27 + 0x5c);
      uVar7 = (uint)local_50;
LAB_004103cb:
      uVar11 = 0;
      hb_buffer_t::_set_glyph_flags(phVar27,2,uVar7,iVar14 + 1,'\0');
      goto LAB_0041033c;
    }
  }
LAB_0041033a:
  uVar11 = 0;
LAB_0041033c:
  return uVar11 & 0xffffffff;
}


