// Function : apply
// Namespace: OT:Layout:GSUB_impl:ReverseChainSingleSubstFormat1
// Entry    : 00414210
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, ReverseChainSingleSubstFormat1 * this, hb_ot_apply_context_t * param_10)
// Body     : 00414210 - 00414949


/* OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1::apply(OT::hb_ot_apply_context_t*) const */

ulong __thiscall
OT::Layout::GSUB_impl::ReverseChainSingleSubstFormat1::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          ReverseChainSingleSubstFormat1 *this,hb_ot_apply_context_t *param_10)

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
  ReverseChainSingleSubstFormat1 *pRVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort *puVar17;
  ushort uVar18;
  ReverseChainSingleSubstFormat1 *pRVar19;
  hb_ot_apply_context_t hVar20;
  Coverage *this_00;
  uint *puVar21;
  undefined8 uVar22;
  ReverseChainSingleSubstFormat1 *pRVar23;
  ulong uVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined1 in_stack_ffffffffffffffa8;
  uint local_54;
  uint local_50;
  
  uVar3 = *(ushort *)(this + 2);
  if (uVar3 == 0) {
    this_00 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_00 = (Coverage *)(this + (ushort)(uVar3 << 8 | uVar3 >> 8));
  }
  lVar4 = *(long *)(param_10 + 0xa0);
  uVar16 = (ulong)*(uint *)(lVar4 + 0x5c);
  uVar7 = Common::Coverage::get_coverage(this_00,*(uint *)(*(long *)(lVar4 + 0x70) + uVar16 * 0x14))
  ;
  if ((uVar7 != 0xffffffff) && (*(int *)(param_10 + 0x138) == 0x40)) {
    uVar3 = *(ushort *)(this + 4);
    uVar13 = uVar3 << 8 | uVar3 >> 8;
    uVar9 = (ulong)uVar13;
    pRVar23 = this + uVar9 * 2 + 4;
    uVar24 = (ulong)(ushort)(*(ushort *)(this + uVar9 * 2 + 6) << 8 |
                            *(ushort *)(this + uVar9 * 2 + 6) >> 8);
    if (uVar7 < (ushort)(*(ushort *)(pRVar23 + uVar24 * 2 + 4) << 8 |
                        *(ushort *)(pRVar23 + uVar24 * 2 + 4) >> 8)) {
      if (*(char *)(lVar4 + 0x5a) != '\0') {
        uVar16 = (ulong)*(uint *)(lVar4 + 100);
      }
      uVar25 = (uint)uVar16;
      *(uint *)(param_10 + 0x48) = uVar25;
      lVar4 = *(long *)(*(long *)(param_10 + 0x50) + 0xa0);
      *(undefined4 *)(param_10 + 0x80) = *(undefined4 *)(lVar4 + 0x60);
      hVar20 = (hb_ot_apply_context_t)0x0;
      if (*(uint *)(lVar4 + 0x5c) == uVar25) {
        hVar20 = *(hb_ot_apply_context_t *)(*(long *)(lVar4 + 0x70) + 0xf + uVar16 * 0x14);
      }
      if (param_10[99] == (hb_ot_apply_context_t)0x0) {
        hVar20 = (hb_ot_apply_context_t)0x0;
      }
      param_10[100] = hVar20;
      *(code **)(param_10 + 0x68) = match_coverage;
      *(ReverseChainSingleSubstFormat1 **)(param_10 + 0x70) = this;
      *(ReverseChainSingleSubstFormat1 **)(param_10 + 0x78) = this + 6;
      if (uVar3 == 0) {
LAB_00414588:
        uVar14 = uVar25;
        uVar3 = *(ushort *)(this + uVar9 * 2 + 6);
        uVar25 = *(uint *)(*(long *)(param_10 + 0xa0) + 0x5c);
        uVar16 = (ulong)uVar25;
        *(uint *)(param_10 + 0x48) = uVar25;
        lVar4 = *(long *)(*(long *)(param_10 + 0x50) + 0xa0);
        uVar15 = *(uint *)(lVar4 + 0x60);
        *(uint *)(param_10 + 0x80) = uVar15;
        hVar20 = (hb_ot_apply_context_t)0x0;
        if (*(uint *)(lVar4 + 0x5c) == uVar25) {
          hVar20 = *(hb_ot_apply_context_t *)(*(long *)(lVar4 + 0x70) + 0xf + uVar16 * 0x14);
        }
        if (param_10[99] == (hb_ot_apply_context_t)0x0) {
          hVar20 = (hb_ot_apply_context_t)0x0;
        }
        param_10[100] = hVar20;
        *(code **)(param_10 + 0x68) = match_coverage;
        *(ReverseChainSingleSubstFormat1 **)(param_10 + 0x70) = this;
        *(ReverseChainSingleSubstFormat1 **)(param_10 + 0x78) = this + uVar9 * 2 + 6 + 2;
        if (uVar3 == 0) {
LAB_0041487a:
          pRVar19 = pRVar23 + uVar24 * 2 + 4;
          uVar22 = 1;
          uVar27 = hb_buffer_t::_set_glyph_flags
                             (*(hb_buffer_t **)(param_10 + 0xa0),3,uVar14,uVar25 + 1,'\x01');
          phVar5 = *(hb_buffer_t **)(param_10 + 0xa0);
          if (*(long *)(phVar5 + 0xd0) != 0) {
            hb_buffer_t::message
                      (uVar27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar5,
                       *(undefined8 *)(param_10 + 0x90),
                       "replacing glyph at %u (reverse chaining substitution)",
                       (ulong)*(uint *)(phVar5 + 0x5c),uVar22,pRVar23,in_stack_ffffffffffffffa8);
          }
          if (uVar7 < (ushort)(*(ushort *)pRVar19 << 8 | *(ushort *)pRVar19 >> 8)) {
            pRVar11 = pRVar19 + (ulong)uVar7 * 2 + 2;
          }
          else {
            pRVar11 = (ReverseChainSingleSubstFormat1 *)&_hb_NullPool;
          }
          uVar25 = (uint)(ushort)(*(ushort *)pRVar11 << 8 | *(ushort *)pRVar11 >> 8);
          uVar22 = 0;
          uVar27 = hb_ot_apply_context_t::_set_glyph_class(param_10,uVar25,0,'\0','\0');
          phVar5 = *(hb_buffer_t **)(param_10 + 0xa0);
          uVar7 = *(uint *)(phVar5 + 0x5c);
          *(uint *)(*(long *)(phVar5 + 0x70) + (ulong)uVar7 * 0x14) = uVar25;
          uVar16 = CONCAT71((int7)((ulong)pRVar19 >> 8),1);
          if (*(long *)(phVar5 + 0xd0) != 0) {
            hb_buffer_t::message
                      (uVar27,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar5,
                       *(undefined8 *)(param_10 + 0x90),
                       "replaced glyph at %u (reverse chaining substitution)",(ulong)uVar7,uVar22,
                       pRVar23,in_stack_ffffffffffffffa8);
          }
          goto LAB_00414259;
        }
        iVar1 = uVar15 - 1;
        if ((int)uVar25 < iVar1) {
          uVar8 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
          bVar26 = true;
          local_54 = 0;
LAB_0041466e:
          do {
            uVar25 = (int)uVar16 + 1;
            uVar16 = (ulong)uVar25;
            *(uint *)(param_10 + 0x48) = uVar25;
            lVar4 = *(long *)(*(long *)(*(long *)(param_10 + 0x50) + 0xa0) + 0x70);
            uVar25 = *(uint *)(param_10 + 0x58);
            uVar3 = *(ushort *)(lVar4 + 0xc + uVar16 * 0x14);
            if ((uVar25 & uVar3 & 0xe) != 0) goto LAB_00414661;
            puVar21 = (uint *)(lVar4 + uVar16 * 0x14);
            if ((uVar3 & 8) == 0) {
LAB_004146a7:
              lVar2 = lVar4 + uVar16 * 0x14;
              uVar3 = *(ushort *)(lVar4 + 0x10 + uVar16 * 0x14);
              uVar13 = 0;
              bVar12 = false;
              if (((((uVar3 & 0x20) != 0) && (bVar12 = false, (*(byte *)(lVar2 + 0xc) & 0x10) == 0))
                  && ((param_10[0x60] != (hb_ot_apply_context_t)0x0 ||
                      (bVar12 = false, (uVar3 & 0x21f) != 0x201)))) &&
                 ((param_10[0x61] != (hb_ot_apply_context_t)0x0 ||
                  (bVar12 = false, (uVar3 & 0x11f) != 0x101)))) {
                bVar12 = (uVar3 & 0x40) == 0 || param_10[0x62] != (hb_ot_apply_context_t)0x0;
              }
              puVar17 = *(ushort **)(param_10 + 0x78);
              if (puVar17 != (ushort *)0x0) {
                uVar13 = *puVar17 << 8 | *puVar17 >> 8;
              }
              if (((*(uint *)(lVar4 + 4 + uVar16 * 0x14) & *(uint *)(param_10 + 0x5c)) != 0) &&
                 ((param_10[100] == (hb_ot_apply_context_t)0x0 ||
                  (param_10[100] == *(hb_ot_apply_context_t *)(lVar2 + 0xf))))) {
                if (*(code **)(param_10 + 0x68) == (code *)0x0) {
                  if (bVar12) goto LAB_00414661;
                }
                else {
                  cVar6 = (**(code **)(param_10 + 0x68))
                                    (puVar21,uVar13,*(undefined8 *)(param_10 + 0x70));
                  if (cVar6 == '\0') goto LAB_00414658;
                  puVar17 = *(ushort **)(param_10 + 0x78);
                }
                if (puVar17 != (ushort *)0x0) {
                  *(ushort **)(param_10 + 0x78) = puVar17 + 1;
                }
                local_54 = local_54 + 1;
                bVar26 = local_54 < uVar8;
                if (local_54 == uVar8) {
                  uVar25 = *(uint *)(param_10 + 0x48);
                  goto LAB_0041487a;
                }
                uVar25 = *(uint *)(param_10 + 0x48);
                uVar16 = (ulong)uVar25;
                uVar15 = *(uint *)(param_10 + 0x80);
                iVar1 = uVar15 - 1;
                if (iVar1 <= (int)uVar25) {
                  if (local_54 < uVar8) goto LAB_00414841;
                  goto LAB_0041487a;
                }
                goto LAB_0041466e;
              }
LAB_00414658:
              if (!bVar12) {
                uVar25 = *(uint *)(param_10 + 0x48);
                if (!bVar26) goto LAB_0041487a;
                uVar15 = uVar25 + 1;
                goto LAB_00414841;
              }
            }
            else if ((uVar25 & 0x10) == 0) {
              if (((uVar25 & 0xff00) == 0) || ((uVar25 & 0xff00) == (uVar3 & 0xff00)))
              goto LAB_004146a7;
            }
            else {
              uVar22 = GDEF::accelerator_t::mark_set_covers
                                 (*(accelerator_t **)(*(long *)(param_10 + 0x50) + 0xf8),
                                  uVar25 >> 0x10,*puVar21);
              if ((char)uVar22 != '\0') goto LAB_004146a7;
            }
LAB_00414661:
            uVar25 = *(uint *)(param_10 + 0x48);
            uVar16 = (ulong)uVar25;
          } while ((int)uVar25 < iVar1);
          if (!bVar26) goto LAB_0041487a;
          uVar15 = *(uint *)(param_10 + 0x80);
        }
      }
      else if (uVar25 == 0) {
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        bVar26 = true;
        local_54 = 0;
        do {
          uVar25 = (int)uVar16 - 1;
          uVar16 = (ulong)uVar25;
          *(uint *)(param_10 + 0x48) = uVar25;
          lVar4 = *(long *)(*(long *)(*(long *)(param_10 + 0x50) + 0xa0) + 0x78);
          uVar25 = *(uint *)(param_10 + 0x58);
          uVar3 = *(ushort *)(lVar4 + 0xc + uVar16 * 0x14);
          if ((uVar25 & uVar3 & 0xe) != 0) goto LAB_00414374;
          puVar21 = (uint *)(uVar16 * 0x14 + lVar4);
          if ((uVar3 & 8) == 0) {
LAB_004143c3:
            pbVar10 = (byte *)(uVar16 * 0x14 + 0xc + lVar4);
            uVar3 = *(ushort *)(lVar4 + 0x10 + uVar16 * 0x14);
            uVar18 = 0;
            bVar12 = false;
            if (((((uVar3 & 0x20) != 0) && (bVar12 = false, (*pbVar10 & 0x10) == 0)) &&
                ((param_10[0x60] != (hb_ot_apply_context_t)0x0 ||
                 (bVar12 = false, (uVar3 & 0x21f) != 0x201)))) &&
               ((param_10[0x61] != (hb_ot_apply_context_t)0x0 ||
                (bVar12 = false, (uVar3 & 0x11f) != 0x101)))) {
              bVar12 = (uVar3 & 0x40) == 0 || param_10[0x62] != (hb_ot_apply_context_t)0x0;
            }
            puVar17 = *(ushort **)(param_10 + 0x78);
            if (puVar17 != (ushort *)0x0) {
              uVar18 = *puVar17 << 8 | *puVar17 >> 8;
            }
            if (((*(uint *)(lVar4 + 4 + uVar16 * 0x14) & *(uint *)(param_10 + 0x5c)) == 0) ||
               ((param_10[100] != (hb_ot_apply_context_t)0x0 &&
                (param_10[100] != *(hb_ot_apply_context_t *)(pbVar10 + 3))))) {
LAB_0041436c:
              if (!bVar12) {
                uVar25 = *(uint *)(param_10 + 0x48);
                uVar14 = 1;
                if (uVar25 != 0) {
                  uVar14 = uVar25;
                }
                if (!bVar26) goto LAB_00414588;
                uVar14 = uVar14 - 1;
                uVar15 = 0;
                goto LAB_00414841;
              }
            }
            else {
              if (*(code **)(param_10 + 0x68) == (code *)0x0) {
                if (bVar12) goto LAB_00414374;
              }
              else {
                cVar6 = (**(code **)(param_10 + 0x68))
                                  (puVar21,uVar18,*(undefined8 *)(param_10 + 0x70));
                if (cVar6 == '\0') goto LAB_0041436c;
                puVar17 = *(ushort **)(param_10 + 0x78);
              }
              if (puVar17 != (ushort *)0x0) {
                *(ushort **)(param_10 + 0x78) = puVar17 + 1;
              }
              local_54 = local_54 + 1;
              local_50 = (uint)uVar13;
              bVar26 = local_54 < local_50;
              if (local_54 == local_50) {
                uVar25 = *(uint *)(param_10 + 0x48);
                goto LAB_00414588;
              }
            }
          }
          else if ((uVar25 & 0x10) == 0) {
            if (((uVar25 & 0xff00) == 0) || ((uVar25 & 0xff00) == (uVar3 & 0xff00)))
            goto LAB_004143c3;
          }
          else {
            uVar22 = GDEF::accelerator_t::mark_set_covers
                               (*(accelerator_t **)(*(long *)(param_10 + 0x50) + 0xf8),
                                uVar25 >> 0x10,*puVar21);
            if ((char)uVar22 != '\0') goto LAB_004143c3;
          }
LAB_00414374:
          uVar16 = (ulong)*(uint *)(param_10 + 0x48);
        } while (*(uint *)(param_10 + 0x48) != 0);
        uVar14 = 0;
        uVar15 = 0;
        uVar25 = 0;
        if (!bVar26) goto LAB_00414588;
      }
LAB_00414841:
      if (((byte)(*(hb_buffer_t **)(param_10 + 0xa0))[0x18] & 0x40) != 0) {
        uVar16 = 0;
        hb_buffer_t::_set_glyph_flags(*(hb_buffer_t **)(param_10 + 0xa0),2,uVar14,uVar15,'\0');
        goto LAB_00414259;
      }
    }
  }
  uVar16 = 0;
LAB_00414259:
  return uVar16 & 0xffffffff;
}


