// Function : apply_cached_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 004141f0
// Prototype: ulong apply_cached_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>(long param_1, hb_ot_apply_context_t * param_2)
// Body     : 004141f0 - 004141f4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>(void
   const*, OT::hb_ot_apply_context_t*) */

ulong __cdecl
OT::hb_accelerate_subtables_context_t::
apply_cached_to<OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1>
          (long param_1,hb_ot_apply_context_t *param_2)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  hb_buffer_t *phVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  ushort *puVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  ushort *puVar18;
  hb_ot_apply_context_t hVar19;
  Coverage *this;
  uint *puVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  bool bVar25;
  undefined8 uVar26;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined1 in_stack_ffffffffffffffa8;
  uint uStack_54;
  uint uStack_50;
  
  uVar3 = *(ushort *)(param_1 + 2);
  if (uVar3 == 0) {
    this = (Coverage *)&_hb_NullPool;
  }
  else {
    this = (Coverage *)((ulong)(ushort)(uVar3 << 8 | uVar3 >> 8) + param_1);
  }
  lVar4 = *(long *)(param_2 + 0xa0);
  uVar16 = (ulong)*(uint *)(lVar4 + 0x5c);
  uVar7 = Layout::Common::Coverage::get_coverage
                    (this,*(uint *)(*(long *)(lVar4 + 0x70) + uVar16 * 0x14));
  if ((uVar7 != 0xffffffff) && (*(int *)(param_2 + 0x138) == 0x40)) {
    uVar3 = *(ushort *)(param_1 + 4);
    uVar13 = uVar3 << 8 | uVar3 >> 8;
    uVar9 = (ulong)uVar13;
    lVar22 = uVar9 * 2 + 4 + param_1;
    uVar17 = *(ushort *)(param_1 + 6 + uVar9 * 2);
    uVar23 = (ulong)(ushort)(uVar17 << 8 | uVar17 >> 8);
    uVar17 = *(ushort *)(lVar22 + 4 + uVar23 * 2);
    if (uVar7 < (ushort)(uVar17 << 8 | uVar17 >> 8)) {
      if (*(char *)(lVar4 + 0x5a) != '\0') {
        uVar16 = (ulong)*(uint *)(lVar4 + 100);
      }
      uVar24 = (uint)uVar16;
      *(uint *)(param_2 + 0x48) = uVar24;
      lVar4 = *(long *)(*(long *)(param_2 + 0x50) + 0xa0);
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(lVar4 + 0x60);
      hVar19 = (hb_ot_apply_context_t)0x0;
      if (*(uint *)(lVar4 + 0x5c) == uVar24) {
        hVar19 = *(hb_ot_apply_context_t *)(*(long *)(lVar4 + 0x70) + 0xf + uVar16 * 0x14);
      }
      if (param_2[99] == (hb_ot_apply_context_t)0x0) {
        hVar19 = (hb_ot_apply_context_t)0x0;
      }
      param_2[100] = hVar19;
      *(code **)(param_2 + 0x68) = match_coverage;
      *(long *)(param_2 + 0x70) = param_1;
      *(long *)(param_2 + 0x78) = param_1 + 6;
      if (uVar3 == 0) {
LAB_00414588:
        uVar14 = uVar24;
        puVar18 = (ushort *)(uVar9 * 2 + 6 + param_1);
        uVar3 = *puVar18;
        uVar24 = *(uint *)(*(long *)(param_2 + 0xa0) + 0x5c);
        uVar16 = (ulong)uVar24;
        *(uint *)(param_2 + 0x48) = uVar24;
        lVar4 = *(long *)(*(long *)(param_2 + 0x50) + 0xa0);
        uVar15 = *(uint *)(lVar4 + 0x60);
        *(uint *)(param_2 + 0x80) = uVar15;
        hVar19 = (hb_ot_apply_context_t)0x0;
        if (*(uint *)(lVar4 + 0x5c) == uVar24) {
          hVar19 = *(hb_ot_apply_context_t *)(*(long *)(lVar4 + 0x70) + 0xf + uVar16 * 0x14);
        }
        if (param_2[99] == (hb_ot_apply_context_t)0x0) {
          hVar19 = (hb_ot_apply_context_t)0x0;
        }
        param_2[100] = hVar19;
        *(code **)(param_2 + 0x68) = match_coverage;
        *(long *)(param_2 + 0x70) = param_1;
        *(ushort **)(param_2 + 0x78) = puVar18 + 1;
        if (uVar3 == 0) {
LAB_0041487a:
          puVar18 = (ushort *)(lVar22 + uVar23 * 2 + 4);
          uVar21 = 1;
          uVar26 = hb_buffer_t::_set_glyph_flags
                             (*(hb_buffer_t **)(param_2 + 0xa0),3,uVar14,uVar24 + 1,'\x01');
          phVar5 = *(hb_buffer_t **)(param_2 + 0xa0);
          if (*(long *)(phVar5 + 0xd0) != 0) {
            hb_buffer_t::message
                      (uVar26,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                       in_XMM7_Qa,phVar5,*(undefined8 *)(param_2 + 0x90),
                       "replacing glyph at %u (reverse chaining substitution)",
                       (ulong)*(uint *)(phVar5 + 0x5c),uVar21,lVar22,in_stack_ffffffffffffffa8);
          }
          if (uVar7 < (ushort)(*puVar18 << 8 | *puVar18 >> 8)) {
            puVar11 = puVar18 + (ulong)uVar7 + 1;
          }
          else {
            puVar11 = (ushort *)&_hb_NullPool;
          }
          uVar24 = (uint)(ushort)(*puVar11 << 8 | *puVar11 >> 8);
          uVar21 = 0;
          uVar26 = hb_ot_apply_context_t::_set_glyph_class(param_2,uVar24,0,'\0','\0');
          phVar5 = *(hb_buffer_t **)(param_2 + 0xa0);
          uVar7 = *(uint *)(phVar5 + 0x5c);
          *(uint *)(*(long *)(phVar5 + 0x70) + (ulong)uVar7 * 0x14) = uVar24;
          uVar16 = CONCAT71((int7)((ulong)puVar18 >> 8),1);
          if (*(long *)(phVar5 + 0xd0) != 0) {
            hb_buffer_t::message
                      (uVar26,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                       in_XMM7_Qa,phVar5,*(undefined8 *)(param_2 + 0x90),
                       "replaced glyph at %u (reverse chaining substitution)",(ulong)uVar7,uVar21,
                       lVar22,in_stack_ffffffffffffffa8);
          }
          goto LAB_00414259;
        }
        iVar1 = uVar15 - 1;
        if ((int)uVar24 < iVar1) {
          uVar8 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
          bVar25 = true;
          uStack_54 = 0;
LAB_0041466e:
          do {
            uVar24 = (int)uVar16 + 1;
            uVar16 = (ulong)uVar24;
            *(uint *)(param_2 + 0x48) = uVar24;
            lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 0xa0) + 0x70);
            uVar24 = *(uint *)(param_2 + 0x58);
            uVar3 = *(ushort *)(lVar4 + 0xc + uVar16 * 0x14);
            if ((uVar24 & uVar3 & 0xe) != 0) goto LAB_00414661;
            puVar20 = (uint *)(lVar4 + uVar16 * 0x14);
            if ((uVar3 & 8) == 0) {
LAB_004146a7:
              lVar2 = lVar4 + uVar16 * 0x14;
              uVar3 = *(ushort *)(lVar4 + 0x10 + uVar16 * 0x14);
              uVar17 = 0;
              bVar12 = false;
              if (((((uVar3 & 0x20) != 0) && (bVar12 = false, (*(byte *)(lVar2 + 0xc) & 0x10) == 0))
                  && ((param_2[0x60] != (hb_ot_apply_context_t)0x0 ||
                      (bVar12 = false, (uVar3 & 0x21f) != 0x201)))) &&
                 ((param_2[0x61] != (hb_ot_apply_context_t)0x0 ||
                  (bVar12 = false, (uVar3 & 0x11f) != 0x101)))) {
                bVar12 = (uVar3 & 0x40) == 0 || param_2[0x62] != (hb_ot_apply_context_t)0x0;
              }
              puVar18 = *(ushort **)(param_2 + 0x78);
              if (puVar18 != (ushort *)0x0) {
                uVar17 = *puVar18 << 8 | *puVar18 >> 8;
              }
              if (((*(uint *)(lVar4 + 4 + uVar16 * 0x14) & *(uint *)(param_2 + 0x5c)) != 0) &&
                 ((param_2[100] == (hb_ot_apply_context_t)0x0 ||
                  (param_2[100] == *(hb_ot_apply_context_t *)(lVar2 + 0xf))))) {
                if (*(code **)(param_2 + 0x68) == (code *)0x0) {
                  if (bVar12) goto LAB_00414661;
                }
                else {
                  cVar6 = (**(code **)(param_2 + 0x68))
                                    (puVar20,uVar17,*(undefined8 *)(param_2 + 0x70));
                  if (cVar6 == '\0') goto LAB_00414658;
                  puVar18 = *(ushort **)(param_2 + 0x78);
                }
                if (puVar18 != (ushort *)0x0) {
                  *(ushort **)(param_2 + 0x78) = puVar18 + 1;
                }
                uStack_54 = uStack_54 + 1;
                bVar25 = uStack_54 < uVar8;
                if (uStack_54 == uVar8) {
                  uVar24 = *(uint *)(param_2 + 0x48);
                  goto LAB_0041487a;
                }
                uVar24 = *(uint *)(param_2 + 0x48);
                uVar16 = (ulong)uVar24;
                uVar15 = *(uint *)(param_2 + 0x80);
                iVar1 = uVar15 - 1;
                if (iVar1 <= (int)uVar24) {
                  if (uStack_54 < uVar8) goto LAB_00414841;
                  goto LAB_0041487a;
                }
                goto LAB_0041466e;
              }
LAB_00414658:
              if (!bVar12) {
                uVar24 = *(uint *)(param_2 + 0x48);
                if (!bVar25) goto LAB_0041487a;
                uVar15 = uVar24 + 1;
                goto LAB_00414841;
              }
            }
            else if ((uVar24 & 0x10) == 0) {
              if (((uVar24 & 0xff00) == 0) || ((uVar24 & 0xff00) == (uVar3 & 0xff00)))
              goto LAB_004146a7;
            }
            else {
              uVar21 = GDEF::accelerator_t::mark_set_covers
                                 (*(accelerator_t **)(*(long *)(param_2 + 0x50) + 0xf8),
                                  uVar24 >> 0x10,*puVar20);
              if ((char)uVar21 != '\0') goto LAB_004146a7;
            }
LAB_00414661:
            uVar24 = *(uint *)(param_2 + 0x48);
            uVar16 = (ulong)uVar24;
          } while ((int)uVar24 < iVar1);
          if (!bVar25) goto LAB_0041487a;
          uVar15 = *(uint *)(param_2 + 0x80);
        }
      }
      else if (uVar24 == 0) {
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        bVar25 = true;
        uStack_54 = 0;
        do {
          uVar24 = (int)uVar16 - 1;
          uVar16 = (ulong)uVar24;
          *(uint *)(param_2 + 0x48) = uVar24;
          lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 0xa0) + 0x78);
          uVar24 = *(uint *)(param_2 + 0x58);
          uVar3 = *(ushort *)(lVar4 + 0xc + uVar16 * 0x14);
          if ((uVar24 & uVar3 & 0xe) != 0) goto LAB_00414374;
          puVar20 = (uint *)(uVar16 * 0x14 + lVar4);
          if ((uVar3 & 8) == 0) {
LAB_004143c3:
            pbVar10 = (byte *)(uVar16 * 0x14 + 0xc + lVar4);
            uVar3 = *(ushort *)(lVar4 + 0x10 + uVar16 * 0x14);
            uVar17 = 0;
            bVar12 = false;
            if (((((uVar3 & 0x20) != 0) && (bVar12 = false, (*pbVar10 & 0x10) == 0)) &&
                ((param_2[0x60] != (hb_ot_apply_context_t)0x0 ||
                 (bVar12 = false, (uVar3 & 0x21f) != 0x201)))) &&
               ((param_2[0x61] != (hb_ot_apply_context_t)0x0 ||
                (bVar12 = false, (uVar3 & 0x11f) != 0x101)))) {
              bVar12 = (uVar3 & 0x40) == 0 || param_2[0x62] != (hb_ot_apply_context_t)0x0;
            }
            puVar18 = *(ushort **)(param_2 + 0x78);
            if (puVar18 != (ushort *)0x0) {
              uVar17 = *puVar18 << 8 | *puVar18 >> 8;
            }
            if (((*(uint *)(lVar4 + 4 + uVar16 * 0x14) & *(uint *)(param_2 + 0x5c)) == 0) ||
               ((param_2[100] != (hb_ot_apply_context_t)0x0 &&
                (param_2[100] != *(hb_ot_apply_context_t *)(pbVar10 + 3))))) {
LAB_0041436c:
              if (!bVar12) {
                uVar24 = *(uint *)(param_2 + 0x48);
                uVar14 = 1;
                if (uVar24 != 0) {
                  uVar14 = uVar24;
                }
                if (!bVar25) goto LAB_00414588;
                uVar14 = uVar14 - 1;
                uVar15 = 0;
                goto LAB_00414841;
              }
            }
            else {
              if (*(code **)(param_2 + 0x68) == (code *)0x0) {
                if (bVar12) goto LAB_00414374;
              }
              else {
                cVar6 = (**(code **)(param_2 + 0x68))
                                  (puVar20,uVar17,*(undefined8 *)(param_2 + 0x70));
                if (cVar6 == '\0') goto LAB_0041436c;
                puVar18 = *(ushort **)(param_2 + 0x78);
              }
              if (puVar18 != (ushort *)0x0) {
                *(ushort **)(param_2 + 0x78) = puVar18 + 1;
              }
              uStack_54 = uStack_54 + 1;
              uStack_50 = (uint)uVar13;
              bVar25 = uStack_54 < uStack_50;
              if (uStack_54 == uStack_50) {
                uVar24 = *(uint *)(param_2 + 0x48);
                goto LAB_00414588;
              }
            }
          }
          else if ((uVar24 & 0x10) == 0) {
            if (((uVar24 & 0xff00) == 0) || ((uVar24 & 0xff00) == (uVar3 & 0xff00)))
            goto LAB_004143c3;
          }
          else {
            uVar21 = GDEF::accelerator_t::mark_set_covers
                               (*(accelerator_t **)(*(long *)(param_2 + 0x50) + 0xf8),uVar24 >> 0x10
                                ,*puVar20);
            if ((char)uVar21 != '\0') goto LAB_004143c3;
          }
LAB_00414374:
          uVar16 = (ulong)*(uint *)(param_2 + 0x48);
        } while (*(uint *)(param_2 + 0x48) != 0);
        uVar14 = 0;
        uVar15 = 0;
        uVar24 = 0;
        if (!bVar25) goto LAB_00414588;
      }
LAB_00414841:
      if (((byte)(*(hb_buffer_t **)(param_2 + 0xa0))[0x18] & 0x40) != 0) {
        uVar16 = 0;
        hb_buffer_t::_set_glyph_flags(*(hb_buffer_t **)(param_2 + 0xa0),2,uVar14,uVar15,'\0');
        goto LAB_00414259;
      }
    }
  }
  uVar16 = 0;
LAB_00414259:
  return uVar16 & 0xffffffff;
}


