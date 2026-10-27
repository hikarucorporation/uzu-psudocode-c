// Function : apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00408520
// Prototype: undefined8 apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>>(long param_1, long param_2)
// Body     : 00408520 - 00408524


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

undefined8 __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GPOS_impl::PairPosFormat2_4<OT::Layout::SmallTypes>>
          (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  hb_buffer_t *this;
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
  ushort uVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  uint uVar15;
  ClassDef *this_00;
  uint uVar16;
  uint uVar17;
  Coverage *this_01;
  ClassDef *this_02;
  ulong uVar18;
  uint uVar19;
  uint *puVar20;
  ushort *puVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar22;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  this = *(hb_buffer_t **)(param_2 + 0xa0);
  uVar7 = *(ushort *)(param_1 + 2);
  if (uVar7 == 0) {
    this_01 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_01 = (Coverage *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_1);
  }
  uVar15 = *(uint *)(this + 0x5c);
  uVar12 = (ulong)uVar15;
  uVar8 = Layout::Common::Coverage::get_coverage
                    (this_01,*(uint *)(*(long *)(this + 0x70) + uVar12 * 0x14));
  if (uVar8 != 0xffffffff) {
    *(uint *)(param_2 + 8) = uVar15;
    uVar8 = *(uint *)(param_2 + 0x40);
    if ((int)uVar15 < (int)(uVar8 - 1)) {
      do {
        uVar15 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar15;
        *(uint *)(param_2 + 8) = uVar15;
        lVar3 = *(long *)(*(long *)(*(hb_ot_apply_context_t **)(param_2 + 0x10) + 0xa0) + 0x70);
        uVar7 = *(ushort *)(lVar3 + 0xc + uVar12 * 0x14);
        if (((*(uint *)(param_2 + 0x18) & (uint)uVar7 & 0xe) == 0) &&
           ((puVar20 = (uint *)(uVar12 * 0x14 + lVar3), (uVar7 & 8) == 0 ||
            (uVar18 = hb_ot_apply_context_t::match_properties_mark
                                (*(hb_ot_apply_context_t **)(param_2 + 0x10),*puVar20,(uint)uVar7,
                                 *(uint *)(param_2 + 0x18)), (char)uVar18 != '\0')))) {
          pbVar9 = (byte *)(uVar12 * 0x14 + 0xc + lVar3);
          uVar7 = *(ushort *)(lVar3 + 0x10 + uVar12 * 0x14);
          uVar11 = 0;
          bVar10 = false;
          if ((((uVar7 & 0x20) != 0) &&
              ((bVar10 = false, (*pbVar9 & 0x10) == 0 &&
               ((*(char *)(param_2 + 0x20) != '\0' || (bVar10 = false, (uVar7 & 0x21f) != 0x201)))))
              ) && ((*(char *)(param_2 + 0x21) != '\0' || (bVar10 = false, (uVar7 & 0x11f) != 0x101)
                    ))) {
            bVar10 = (uVar7 & 0x40) == 0 || *(char *)(param_2 + 0x22) != '\0';
          }
          puVar21 = *(ushort **)(param_2 + 0x38);
          if (puVar21 != (ushort *)0x0) {
            uVar11 = *puVar21 << 8 | *puVar21 >> 8;
          }
          if (((*(uint *)(lVar3 + 4 + uVar12 * 0x14) & *(uint *)(param_2 + 0x1c)) != 0) &&
             ((*(byte *)(param_2 + 0x24) == 0 || (*(byte *)(param_2 + 0x24) == pbVar9[3])))) {
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              if (!bVar10) goto LAB_0041066f;
              goto LAB_0041053c;
            }
            cVar5 = (**(code **)(param_2 + 0x28))(puVar20,uVar11,*(undefined8 *)(param_2 + 0x30));
            if (cVar5 != '\0') {
              puVar21 = *(ushort **)(param_2 + 0x38);
LAB_0041066f:
              if (puVar21 != (ushort *)0x0) {
                *(ushort **)(param_2 + 0x38) = puVar21 + 1;
              }
              uVar7 = *(ushort *)(param_1 + 8);
              this_00 = (ClassDef *)&_hb_NullPool;
              this_02 = (ClassDef *)&_hb_NullPool;
              if (uVar7 != 0) {
                this_02 = (ClassDef *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_1);
              }
              uVar11 = ClassDef::get_class(this_02,*(uint *)(*(long *)(this + 0x70) +
                                                            (ulong)*(uint *)(this + 0x5c) * 0x14));
              uVar7 = *(ushort *)(param_1 + 10);
              if (uVar7 != 0) {
                this_00 = (ClassDef *)((ulong)(ushort)(uVar7 << 8 | uVar7 >> 8) + param_1);
              }
              uVar7 = ClassDef::get_class(this_00,*(uint *)(*(long *)(this + 0x70) +
                                                           (ulong)*(uint *)(param_2 + 8) * 0x14));
              uVar15 = (uint)CONCAT62(extraout_var,uVar11);
              if (uVar15 < (ushort)(*(ushort *)(param_1 + 0xc) << 8 |
                                   *(ushort *)(param_1 + 0xc) >> 8)) {
                uVar8 = (uint)CONCAT62(extraout_var_00,uVar7);
                uVar19 = (uint)(ushort)(*(ushort *)(param_1 + 0xe) << 8 |
                                       *(ushort *)(param_1 + 0xe) >> 8);
                if (uVar8 < uVar19) {
                  uVar7 = *(ushort *)(param_1 + 4);
                  uVar16 = (uint)uVar7 - (uVar7 >> 1 & 0x5555);
                  uVar16 = (uVar16 >> 2 & 0x3333) + (uVar16 & 0x3333);
                  uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f) * 0x101 >> 8 & 0xff;
                  uVar11 = *(ushort *)(param_1 + 6);
                  uVar17 = (uint)uVar11 - (uVar11 >> 1 & 0x5555);
                  uVar17 = (uVar17 >> 2 & 0x3333) + (uVar17 & 0x3333);
                  phVar4 = *(hb_buffer_t **)(param_2 + 0xa0);
                  uVar22 = extraout_XMM0_Qa;
                  if (*(long *)(phVar4 + 0xd0) != 0) {
                    hb_buffer_t::message
                              (extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,
                               in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,phVar4,
                               *(undefined8 *)(param_2 + 0x90),"try kerning glyphs at %u,%u",
                               (ulong)*(uint *)(phVar4 + 0x5c),(ulong)*(uint *)(param_2 + 8),puVar20
                               ,in_AL);
                    uVar22 = extraout_XMM0_Qa_00;
                  }
                  puVar21 = (ushort *)
                            (param_1 + (ulong)((uVar15 * uVar19 + uVar8) *
                                              ((((uVar17 >> 4) + uVar17 & 0xf0f) * 0x101 >> 8 & 0xff
                                               ) + uVar16)) * 2 + 0x10);
                  if (uVar7 == 0) {
                    bVar14 = 0;
                  }
                  else {
                    uVar12 = Layout::GPOS_impl::ValueFormat::apply_value
                                       ((ValueFormat *)(param_1 + 4),param_2,param_1,puVar21,
                                        (int *)((ulong)*(uint *)(this + 0x5c) * 0x14 +
                                               *(long *)(this + 0x80)));
                    bVar14 = (byte)uVar12;
                    uVar22 = extraout_XMM0_Qa_01;
                  }
                  if (uVar11 == 0) {
                    bVar6 = 0;
                  }
                  else {
                    uVar12 = Layout::GPOS_impl::ValueFormat::apply_value
                                       ((ValueFormat *)(param_1 + 6),param_2,param_1,
                                        puVar21 + uVar16,
                                        (int *)((ulong)*(uint *)(param_2 + 8) * 0x14 +
                                               *(long *)(this + 0x80)));
                    bVar6 = (byte)uVar12;
                    uVar22 = extraout_XMM0_Qa_02;
                  }
                  if (((bVar14 | bVar6) == 1) &&
                     (phVar4 = *(hb_buffer_t **)(param_2 + 0xa0), *(long *)(phVar4 + 0xd0) != 0)) {
                    hb_buffer_t::message
                              (uVar22,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                               in_XMM6_Qa,in_XMM7_Qa,phVar4,*(undefined8 *)(param_2 + 0x90),
                               "kerned glyphs at %u,%u",(ulong)*(uint *)(phVar4 + 0x5c),
                               (ulong)*(uint *)(param_2 + 8),puVar20,in_AL);
                    uVar22 = extraout_XMM0_Qa_03;
                  }
                  phVar4 = *(hb_buffer_t **)(param_2 + 0xa0);
                  if (*(long *)(phVar4 + 0xd0) != 0) {
                    hb_buffer_t::message
                              (uVar22,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
                               in_XMM6_Qa,in_XMM7_Qa,phVar4,*(undefined8 *)(param_2 + 0x90),
                               "tried kerning glyphs at %u,%u",(ulong)*(uint *)(phVar4 + 0x5c),
                               (ulong)*(uint *)(param_2 + 8),puVar20,in_AL);
                  }
                  uVar15 = *(uint *)(this + 0x5c);
                  uVar12 = (ulong)uVar15;
                  uVar8 = *(int *)(param_2 + 8) + 1;
                  if ((bVar14 | bVar6) == 0) {
                    if (((byte)this[0x18] & 0x40) != 0) {
                      if (*(uint *)(this + 0x60) < uVar8) {
                        uVar8 = *(uint *)(this + 0x60);
                      }
                      this[0xc0] = (hb_buffer_t)((byte)this[0xc0] | 0x20);
                      if (uVar15 < uVar8) {
                        lVar3 = *(long *)(this + 0x70);
                        uVar18 = ~uVar12;
                        if ((uVar8 - uVar15 & 3) != 0) {
                          pbVar9 = (byte *)(lVar3 + uVar12 * 0x14 + 4);
                          lVar13 = 0;
                          do {
                            *pbVar9 = *pbVar9 | 2;
                            lVar13 = lVar13 + -1;
                            pbVar9 = pbVar9 + 0x14;
                          } while (-lVar13 != ((ulong)(uVar8 - uVar15) & 3));
                          uVar12 = uVar12 - lVar13;
                        }
                        if (2 < uVar18 + uVar8) {
                          lVar13 = uVar8 - uVar12;
                          pbVar9 = (byte *)(lVar3 + uVar12 * 0x14 + 0x40);
                          do {
                            pbVar9[-0x3c] = pbVar9[-0x3c] | 2;
                            pbVar9[-0x28] = pbVar9[-0x28] | 2;
                            pbVar9[-0x14] = pbVar9[-0x14] | 2;
                            *pbVar9 = *pbVar9 | 2;
                            pbVar9 = pbVar9 + 0x50;
                            lVar13 = lVar13 + -4;
                          } while (lVar13 != 0);
                        }
                      }
                    }
                  }
                  else {
                    hb_buffer_t::unsafe_to_break(this,uVar15,uVar8);
                  }
                  if (uVar11 != 0) {
                    iVar1 = *(int *)(param_2 + 8);
                    *(int *)(param_2 + 8) = iVar1 + 1;
                    hb_buffer_t::unsafe_to_break(this,*(uint *)(this + 0x5c),iVar1 + 2);
                  }
                  uVar2 = *(undefined4 *)(param_2 + 8);
                  *(undefined4 *)(this + 0x5c) = uVar2;
                  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
                }
              }
              if (((byte)this[0x18] & 0x40) == 0) {
                return 0;
              }
              uVar15 = *(uint *)(this + 0x5c);
              uVar12 = (ulong)uVar15;
              uVar8 = *(int *)(param_2 + 8) + 1;
              if (*(uint *)(this + 0x60) < uVar8) {
                uVar8 = *(uint *)(this + 0x60);
              }
              this[0xc0] = (hb_buffer_t)((byte)this[0xc0] | 0x20);
              if (uVar8 <= uVar15) {
                return 0;
              }
              lVar3 = *(long *)(this + 0x70);
              uVar18 = ~uVar12;
              if ((uVar8 - uVar15 & 3) != 0) {
                pbVar9 = (byte *)(lVar3 + uVar12 * 0x14 + 4);
                lVar13 = 0;
                do {
                  *pbVar9 = *pbVar9 | 2;
                  lVar13 = lVar13 + -1;
                  pbVar9 = pbVar9 + 0x14;
                } while (-lVar13 != ((ulong)(uVar8 - uVar15) & 3));
                uVar12 = uVar12 - lVar13;
              }
              if (uVar18 + uVar8 < 3) {
                return 0;
              }
              lVar13 = uVar8 - uVar12;
              pbVar9 = (byte *)(lVar3 + uVar12 * 0x14 + 0x40);
              do {
                pbVar9[-0x3c] = pbVar9[-0x3c] | 2;
                pbVar9[-0x28] = pbVar9[-0x28] | 2;
                pbVar9[-0x14] = pbVar9[-0x14] | 2;
                *pbVar9 = *pbVar9 | 2;
                pbVar9 = pbVar9 + 0x50;
                lVar13 = lVar13 + -4;
              } while (lVar13 != 0);
              return 0;
            }
          }
          if (!bVar10) {
            uVar8 = *(int *)(param_2 + 8) + 1;
            goto LAB_004108ee;
          }
        }
LAB_0041053c:
        uVar12 = (ulong)*(uint *)(param_2 + 8);
      } while ((int)*(uint *)(param_2 + 8) < (int)(uVar8 - 1));
      uVar8 = *(uint *)(param_2 + 0x40);
    }
LAB_004108ee:
    if (((byte)this[0x18] & 0x40) != 0) {
      uVar15 = *(uint *)(this + 0x5c);
      uVar12 = (ulong)uVar15;
      if (*(uint *)(this + 0x60) < uVar8) {
        uVar8 = *(uint *)(this + 0x60);
      }
      this[0xc0] = (hb_buffer_t)((byte)this[0xc0] | 0x20);
      if (uVar15 < uVar8) {
        lVar3 = *(long *)(this + 0x70);
        uVar18 = ~uVar12;
        if ((uVar8 - uVar15 & 3) != 0) {
          pbVar9 = (byte *)(lVar3 + uVar12 * 0x14 + 4);
          lVar13 = 0;
          do {
            *pbVar9 = *pbVar9 | 2;
            lVar13 = lVar13 + -1;
            pbVar9 = pbVar9 + 0x14;
          } while (-lVar13 != ((ulong)(uVar8 - uVar15) & 3));
          uVar12 = uVar12 - lVar13;
        }
        if (2 < uVar18 + uVar8) {
          lVar13 = uVar8 - uVar12;
          pbVar9 = (byte *)(lVar3 + uVar12 * 0x14 + 0x40);
          do {
            pbVar9[-0x3c] = pbVar9[-0x3c] | 2;
            pbVar9[-0x28] = pbVar9[-0x28] | 2;
            pbVar9[-0x14] = pbVar9[-0x14] | 2;
            *pbVar9 = *pbVar9 | 2;
            pbVar9 = pbVar9 + 0x50;
            lVar13 = lVar13 + -4;
          } while (lVar13 != 0);
          return 0;
        }
      }
    }
  }
  return 0;
}


