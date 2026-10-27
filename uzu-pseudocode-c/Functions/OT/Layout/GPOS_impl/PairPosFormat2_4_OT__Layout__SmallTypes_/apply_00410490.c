// Function : apply
// Namespace: OT:Layout:GPOS_impl:PairPosFormat2_4_OT__Layout__SmallTypes_
// Entry    : 00410490
// Prototype: undefined8 apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, PairPosFormat2_4<OT::Layout::SmallTypes> * this, long param_10)
// Body     : 00410490 - 00410aba


/* OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*)
   const */

undefined8 __thiscall
OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          PairPosFormat2_4<OT::Layout::SmallTypes> *this,long param_10)

{
  int iVar1;
  undefined4 uVar2;
  hb_buffer_t *this_00;
  long lVar3;
  hb_buffer_t *phVar4;
  undefined1 in_AL;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  bool bVar10;
  ushort *puVar11;
  ushort uVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  uint uVar16;
  ClassDef *this_01;
  uint uVar17;
  uint uVar18;
  Coverage *this_02;
  ClassDef *this_03;
  ulong uVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar22;
  
  this_00 = *(hb_buffer_t **)(param_10 + 0xa0);
  uVar7 = *(ushort *)(this + 2);
  if (uVar7 == 0) {
    this_02 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_02 = (Coverage *)(this + (ushort)(uVar7 << 8 | uVar7 >> 8));
  }
  uVar16 = *(uint *)(this_00 + 0x5c);
  uVar13 = (ulong)uVar16;
  uVar8 = Common::Coverage::get_coverage
                    (this_02,*(uint *)(*(long *)(this_00 + 0x70) + uVar13 * 0x14));
  if (uVar8 != 0xffffffff) {
    *(uint *)(param_10 + 8) = uVar16;
    uVar8 = *(uint *)(param_10 + 0x40);
    if ((int)uVar16 < (int)(uVar8 - 1)) {
      do {
        uVar16 = (int)uVar13 + 1;
        uVar13 = (ulong)uVar16;
        *(uint *)(param_10 + 8) = uVar16;
        lVar3 = *(long *)(*(long *)(*(hb_ot_apply_context_t **)(param_10 + 0x10) + 0xa0) + 0x70);
        uVar7 = *(ushort *)(lVar3 + 0xc + uVar13 * 0x14);
        if (((*(uint *)(param_10 + 0x18) & (uint)uVar7 & 0xe) == 0) &&
           ((puVar21 = (uint *)(uVar13 * 0x14 + lVar3), (uVar7 & 8) == 0 ||
            (uVar19 = hb_ot_apply_context_t::match_properties_mark
                                (*(hb_ot_apply_context_t **)(param_10 + 0x10),*puVar21,(uint)uVar7,
                                 *(uint *)(param_10 + 0x18)), (char)uVar19 != '\0')))) {
          pbVar9 = (byte *)(uVar13 * 0x14 + 0xc + lVar3);
          uVar7 = *(ushort *)(lVar3 + 0x10 + uVar13 * 0x14);
          uVar12 = 0;
          bVar10 = false;
          if ((((uVar7 & 0x20) != 0) &&
              ((bVar10 = false, (*pbVar9 & 0x10) == 0 &&
               ((*(char *)(param_10 + 0x20) != '\0' || (bVar10 = false, (uVar7 & 0x21f) != 0x201))))
              )) && ((*(char *)(param_10 + 0x21) != '\0' ||
                     (bVar10 = false, (uVar7 & 0x11f) != 0x101)))) {
            bVar10 = (uVar7 & 0x40) == 0 || *(char *)(param_10 + 0x22) != '\0';
          }
          puVar11 = *(ushort **)(param_10 + 0x38);
          if (puVar11 != (ushort *)0x0) {
            uVar12 = *puVar11 << 8 | *puVar11 >> 8;
          }
          if (((*(uint *)(lVar3 + 4 + uVar13 * 0x14) & *(uint *)(param_10 + 0x1c)) != 0) &&
             ((*(byte *)(param_10 + 0x24) == 0 || (*(byte *)(param_10 + 0x24) == pbVar9[3])))) {
            if (*(code **)(param_10 + 0x28) == (code *)0x0) {
              if (!bVar10) goto LAB_0041066f;
              goto LAB_0041053c;
            }
            cVar5 = (**(code **)(param_10 + 0x28))(puVar21,uVar12,*(undefined8 *)(param_10 + 0x30));
            if (cVar5 != '\0') {
              puVar11 = *(ushort **)(param_10 + 0x38);
LAB_0041066f:
              if (puVar11 != (ushort *)0x0) {
                *(ushort **)(param_10 + 0x38) = puVar11 + 1;
              }
              uVar7 = *(ushort *)(this + 8);
              this_01 = (ClassDef *)&_hb_NullPool;
              this_03 = (ClassDef *)&_hb_NullPool;
              if (uVar7 != 0) {
                this_03 = (ClassDef *)(this + (ushort)(uVar7 << 8 | uVar7 >> 8));
              }
              uVar12 = ClassDef::get_class(this_03,*(uint *)(*(long *)(this_00 + 0x70) +
                                                            (ulong)*(uint *)(this_00 + 0x5c) * 0x14)
                                          );
              uVar7 = *(ushort *)(this + 10);
              if (uVar7 != 0) {
                this_01 = (ClassDef *)(this + (ushort)(uVar7 << 8 | uVar7 >> 8));
              }
              uVar7 = ClassDef::get_class(this_01,*(uint *)(*(long *)(this_00 + 0x70) +
                                                           (ulong)*(uint *)(param_10 + 8) * 0x14));
              uVar16 = (uint)CONCAT62(extraout_var,uVar12);
              if (uVar16 < (ushort)(*(ushort *)(this + 0xc) << 8 | *(ushort *)(this + 0xc) >> 8)) {
                uVar8 = (uint)CONCAT62(extraout_var_00,uVar7);
                uVar20 = (uint)(ushort)(*(ushort *)(this + 0xe) << 8 | *(ushort *)(this + 0xe) >> 8)
                ;
                if (uVar8 < uVar20) {
                  uVar7 = *(ushort *)(this + 4);
                  uVar17 = (uint)uVar7 - (uVar7 >> 1 & 0x5555);
                  uVar17 = (uVar17 >> 2 & 0x3333) + (uVar17 & 0x3333);
                  uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f) * 0x101 >> 8 & 0xff;
                  uVar12 = *(ushort *)(this + 6);
                  uVar18 = (uint)uVar12 - (uVar12 >> 1 & 0x5555);
                  uVar18 = (uVar18 >> 2 & 0x3333) + (uVar18 & 0x3333);
                  phVar4 = *(hb_buffer_t **)(param_10 + 0xa0);
                  uVar22 = extraout_XMM0_Qa;
                  if (*(long *)(phVar4 + 0xd0) != 0) {
                    hb_buffer_t::message
                              (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,phVar4,*(undefined8 *)(param_10 + 0x90),
                               "try kerning glyphs at %u,%u",(ulong)*(uint *)(phVar4 + 0x5c),
                               (ulong)*(uint *)(param_10 + 8),puVar21,in_AL);
                    uVar22 = extraout_XMM0_Qa_00;
                  }
                  if (uVar7 == 0) {
                    bVar15 = 0;
                  }
                  else {
                    uVar13 = ValueFormat::apply_value
                                       ((ValueFormat *)(this + 4),param_10,(long)this,
                                        (ushort *)
                                        (this + (ulong)((uVar16 * uVar20 + uVar8) *
                                                       ((((uVar18 >> 4) + uVar18 & 0xf0f) * 0x101 >>
                                                         8 & 0xff) + uVar17)) * 2 + 0x10),
                                        (int *)((ulong)*(uint *)(this_00 + 0x5c) * 0x14 +
                                               *(long *)(this_00 + 0x80)));
                    bVar15 = (byte)uVar13;
                    uVar22 = extraout_XMM0_Qa_01;
                  }
                  if (uVar12 == 0) {
                    bVar6 = 0;
                  }
                  else {
                    uVar13 = ValueFormat::apply_value
                                       ((ValueFormat *)(this + 6),param_10,(long)this,
                                        (ushort *)
                                        (this + (ulong)((uVar16 * uVar20 + uVar8) *
                                                       ((((uVar18 >> 4) + uVar18 & 0xf0f) * 0x101 >>
                                                         8 & 0xff) + uVar17)) * 2 + 0x10 +
                                        (ulong)uVar17 * 2),
                                        (int *)((ulong)*(uint *)(param_10 + 8) * 0x14 +
                                               *(long *)(this_00 + 0x80)));
                    bVar6 = (byte)uVar13;
                    uVar22 = extraout_XMM0_Qa_02;
                  }
                  if (((bVar15 | bVar6) == 1) &&
                     (phVar4 = *(hb_buffer_t **)(param_10 + 0xa0), *(long *)(phVar4 + 0xd0) != 0)) {
                    hb_buffer_t::message
                              (uVar22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar4
                               ,*(undefined8 *)(param_10 + 0x90),"kerned glyphs at %u,%u",
                               (ulong)*(uint *)(phVar4 + 0x5c),(ulong)*(uint *)(param_10 + 8),
                               puVar21,in_AL);
                    uVar22 = extraout_XMM0_Qa_03;
                  }
                  phVar4 = *(hb_buffer_t **)(param_10 + 0xa0);
                  if (*(long *)(phVar4 + 0xd0) != 0) {
                    hb_buffer_t::message
                              (uVar22,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar4
                               ,*(undefined8 *)(param_10 + 0x90),"tried kerning glyphs at %u,%u",
                               (ulong)*(uint *)(phVar4 + 0x5c),(ulong)*(uint *)(param_10 + 8),
                               puVar21,in_AL);
                  }
                  uVar16 = *(uint *)(this_00 + 0x5c);
                  uVar13 = (ulong)uVar16;
                  uVar8 = *(int *)(param_10 + 8) + 1;
                  if ((bVar15 | bVar6) == 0) {
                    if (((byte)this_00[0x18] & 0x40) != 0) {
                      if (*(uint *)(this_00 + 0x60) < uVar8) {
                        uVar8 = *(uint *)(this_00 + 0x60);
                      }
                      this_00[0xc0] = (hb_buffer_t)((byte)this_00[0xc0] | 0x20);
                      if (uVar16 < uVar8) {
                        lVar3 = *(long *)(this_00 + 0x70);
                        uVar19 = ~uVar13;
                        if ((uVar8 - uVar16 & 3) != 0) {
                          pbVar9 = (byte *)(lVar3 + uVar13 * 0x14 + 4);
                          lVar14 = 0;
                          do {
                            *pbVar9 = *pbVar9 | 2;
                            lVar14 = lVar14 + -1;
                            pbVar9 = pbVar9 + 0x14;
                          } while (-lVar14 != ((ulong)(uVar8 - uVar16) & 3));
                          uVar13 = uVar13 - lVar14;
                        }
                        if (2 < uVar19 + uVar8) {
                          lVar14 = uVar8 - uVar13;
                          pbVar9 = (byte *)(lVar3 + uVar13 * 0x14 + 0x40);
                          do {
                            pbVar9[-0x3c] = pbVar9[-0x3c] | 2;
                            pbVar9[-0x28] = pbVar9[-0x28] | 2;
                            pbVar9[-0x14] = pbVar9[-0x14] | 2;
                            *pbVar9 = *pbVar9 | 2;
                            pbVar9 = pbVar9 + 0x50;
                            lVar14 = lVar14 + -4;
                          } while (lVar14 != 0);
                        }
                      }
                    }
                  }
                  else {
                    hb_buffer_t::unsafe_to_break(this_00,uVar16,uVar8);
                  }
                  if (uVar12 != 0) {
                    iVar1 = *(int *)(param_10 + 8);
                    *(int *)(param_10 + 8) = iVar1 + 1;
                    hb_buffer_t::unsafe_to_break(this_00,*(uint *)(this_00 + 0x5c),iVar1 + 2);
                  }
                  uVar2 = *(undefined4 *)(param_10 + 8);
                  *(undefined4 *)(this_00 + 0x5c) = uVar2;
                  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
                }
              }
              if (((byte)this_00[0x18] & 0x40) == 0) {
                return 0;
              }
              uVar16 = *(uint *)(this_00 + 0x5c);
              uVar13 = (ulong)uVar16;
              uVar8 = *(int *)(param_10 + 8) + 1;
              if (*(uint *)(this_00 + 0x60) < uVar8) {
                uVar8 = *(uint *)(this_00 + 0x60);
              }
              this_00[0xc0] = (hb_buffer_t)((byte)this_00[0xc0] | 0x20);
              if (uVar8 <= uVar16) {
                return 0;
              }
              lVar3 = *(long *)(this_00 + 0x70);
              uVar19 = ~uVar13;
              if ((uVar8 - uVar16 & 3) != 0) {
                pbVar9 = (byte *)(lVar3 + uVar13 * 0x14 + 4);
                lVar14 = 0;
                do {
                  *pbVar9 = *pbVar9 | 2;
                  lVar14 = lVar14 + -1;
                  pbVar9 = pbVar9 + 0x14;
                } while (-lVar14 != ((ulong)(uVar8 - uVar16) & 3));
                uVar13 = uVar13 - lVar14;
              }
              if (uVar19 + uVar8 < 3) {
                return 0;
              }
              lVar14 = uVar8 - uVar13;
              pbVar9 = (byte *)(lVar3 + uVar13 * 0x14 + 0x40);
              do {
                pbVar9[-0x3c] = pbVar9[-0x3c] | 2;
                pbVar9[-0x28] = pbVar9[-0x28] | 2;
                pbVar9[-0x14] = pbVar9[-0x14] | 2;
                *pbVar9 = *pbVar9 | 2;
                pbVar9 = pbVar9 + 0x50;
                lVar14 = lVar14 + -4;
              } while (lVar14 != 0);
              return 0;
            }
          }
          if (!bVar10) {
            uVar8 = *(int *)(param_10 + 8) + 1;
            goto LAB_004108ee;
          }
        }
LAB_0041053c:
        uVar13 = (ulong)*(uint *)(param_10 + 8);
      } while ((int)*(uint *)(param_10 + 8) < (int)(uVar8 - 1));
      uVar8 = *(uint *)(param_10 + 0x40);
    }
LAB_004108ee:
    if (((byte)this_00[0x18] & 0x40) != 0) {
      uVar16 = *(uint *)(this_00 + 0x5c);
      uVar13 = (ulong)uVar16;
      if (*(uint *)(this_00 + 0x60) < uVar8) {
        uVar8 = *(uint *)(this_00 + 0x60);
      }
      this_00[0xc0] = (hb_buffer_t)((byte)this_00[0xc0] | 0x20);
      if (uVar16 < uVar8) {
        lVar3 = *(long *)(this_00 + 0x70);
        uVar19 = ~uVar13;
        if ((uVar8 - uVar16 & 3) != 0) {
          pbVar9 = (byte *)(lVar3 + uVar13 * 0x14 + 4);
          lVar14 = 0;
          do {
            *pbVar9 = *pbVar9 | 2;
            lVar14 = lVar14 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar14 != ((ulong)(uVar8 - uVar16) & 3));
          uVar13 = uVar13 - lVar14;
        }
        if (2 < uVar19 + uVar8) {
          lVar14 = uVar8 - uVar13;
          pbVar9 = (byte *)(lVar3 + uVar13 * 0x14 + 0x40);
          do {
            pbVar9[-0x3c] = pbVar9[-0x3c] | 2;
            pbVar9[-0x28] = pbVar9[-0x28] | 2;
            pbVar9[-0x14] = pbVar9[-0x14] | 2;
            *pbVar9 = *pbVar9 | 2;
            pbVar9 = pbVar9 + 0x50;
            lVar14 = lVar14 + -4;
          } while (lVar14 != 0);
          return 0;
        }
      }
    }
  }
  return 0;
}


