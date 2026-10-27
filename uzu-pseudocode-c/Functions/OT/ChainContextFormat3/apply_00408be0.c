// Function : apply
// Namespace: OT:ChainContextFormat3
// Entry    : 00408be0
// Prototype: ulong apply(ChainContextFormat3 * this, long param_1)
// Body     : 00408be0 - 0040984e


/* OT::ChainContextFormat3::apply(OT::hb_ot_apply_context_t*) const */

ulong __thiscall OT::ChainContextFormat3::apply(ChainContextFormat3 *this,long param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  hb_buffer_t hVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  hb_buffer_t *phVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ChainContextFormat3 *pCVar16;
  undefined8 uVar17;
  undefined4 *__ptr;
  byte bVar18;
  bool bVar19;
  ushort *puVar20;
  ulong uVar21;
  byte bVar22;
  ushort uVar23;
  ushort uVar24;
  ChainContextFormat3 *pCVar25;
  uint uVar26;
  long lVar27;
  undefined1 uVar28;
  ulong uVar29;
  ulong uVar30;
  ushort uVar31;
  uint uVar32;
  Coverage *this_00;
  byte *pbVar33;
  int iVar34;
  bool bVar35;
  int local_90;
  ulong local_70;
  uint local_68;
  undefined4 local_48 [6];
  
  uVar21 = (ulong)(ushort)(*(ushort *)(this + 2) << 8 | *(ushort *)(this + 2) >> 8);
  pCVar25 = this + uVar21 * 2 + 4;
  this_00 = (Coverage *)&_hb_NullPool;
  pCVar16 = (ChainContextFormat3 *)&_hb_NullPool;
  if (*(short *)(this + uVar21 * 2 + 4) != 0) {
    pCVar16 = this + uVar21 * 2 + 6;
  }
  uVar31 = *(ushort *)pCVar16;
  if (uVar31 != 0) {
    this_00 = (Coverage *)(this + (ushort)(uVar31 << 8 | uVar31 >> 8));
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  lVar27 = *(long *)(lVar7 + 0x70);
  uVar26 = *(uint *)(lVar7 + 0x5c);
  uVar30 = (ulong)uVar26;
  uVar13 = Layout::Common::Coverage::get_coverage(this_00,*(uint *)(lVar27 + uVar30 * 0x14));
  if ((uVar13 == 0xffffffff) ||
     (uVar31 = *(ushort *)pCVar25 << 8 | *(ushort *)pCVar25 >> 8, 0x40 < uVar31)) {
LAB_00408c59:
    uVar21 = 0;
    goto LAB_00408c5b;
  }
  uVar29 = (ulong)uVar31;
  uVar24 = *(ushort *)(this + uVar29 * 2 + uVar21 * 2 + 6);
  uVar12 = uVar24 << 8 | uVar24 >> 8;
  uVar5 = *(ushort *)(this + 2);
  uVar6 = *(ushort *)(pCVar25 + (ulong)uVar12 * 2 + uVar29 * 2 + 4);
  if (uVar31 < 5) {
    __ptr = local_48;
  }
  else {
    __ptr = malloc(uVar29 * 4);
    if (__ptr == (undefined4 *)0x0) goto LAB_00408c59;
  }
  *(uint *)(param_1 + 8) = uVar26;
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
  iVar34 = *(int *)(lVar8 + 0x60);
  *(int *)(param_1 + 0x40) = iVar34;
  uVar28 = 0;
  if (*(uint *)(lVar8 + 0x5c) == uVar26) {
    uVar28 = *(undefined1 *)(*(long *)(lVar8 + 0x70) + 0xf + uVar30 * 0x14);
  }
  if (*(char *)(param_1 + 0x23) == '\0') {
    uVar28 = 0;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar28;
  *(code **)(param_1 + 0x28) = match_coverage;
  *(ChainContextFormat3 **)(param_1 + 0x30) = this;
  *(ChainContextFormat3 **)(param_1 + 0x38) = this + uVar21 * 2 + 8;
  bVar2 = *(byte *)(lVar27 + 0xe + uVar30 * 0x14);
  bVar18 = bVar2 & 0xf;
  if ((bVar2 & 0x10) != 0) {
    bVar18 = 0;
  }
  if (uVar31 < 2) {
LAB_0040912a:
    uVar13 = *(uint *)(param_1 + 8);
    uVar21 = (ulong)uVar13;
    uVar26 = 0;
    *__ptr = *(undefined4 *)(lVar7 + 0x5c);
    uVar32 = uVar13 + 1;
    if (uVar32 == 0) goto LAB_004093f5;
    *(uint *)(param_1 + 0x48) = uVar13;
    lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0xa0);
    uVar26 = *(uint *)(lVar7 + 0x60);
    *(uint *)(param_1 + 0x80) = uVar26;
    uVar28 = 0;
    if (*(uint *)(lVar7 + 0x5c) == uVar13) {
      uVar28 = *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0xf + uVar21 * 0x14);
    }
    if (*(char *)(param_1 + 99) == '\0') {
      uVar28 = 0;
    }
    *(undefined1 *)(param_1 + 100) = uVar28;
    *(code **)(param_1 + 0x68) = match_coverage;
    *(ChainContextFormat3 **)(param_1 + 0x70) = this;
    *(ChainContextFormat3 **)(param_1 + 0x78) = pCVar25 + uVar29 * 2 + 4;
    if (uVar24 != 0) {
      iVar34 = uVar26 - 1;
      if ((int)uVar13 < iVar34) {
        bVar35 = true;
        uVar15 = 0;
LAB_00409211:
        do {
          uVar26 = (int)uVar21 + 1;
          uVar21 = (ulong)uVar26;
          *(uint *)(param_1 + 0x48) = uVar26;
          lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa0) + 0x70);
          uVar26 = *(uint *)(param_1 + 0x58);
          uVar31 = *(ushort *)(lVar7 + 0xc + uVar21 * 0x14);
          if ((uVar26 & uVar31 & 0xe) != 0) goto LAB_00409204;
          puVar1 = (uint *)(lVar7 + uVar21 * 0x14);
          if ((uVar31 & 8) == 0) {
LAB_0040924c:
            lVar27 = lVar7 + uVar21 * 0x14;
            uVar31 = *(ushort *)(lVar7 + 0x10 + uVar21 * 0x14);
            uVar24 = 0;
            bVar19 = false;
            if (((((uVar31 & 0x20) != 0) && (bVar19 = false, (*(byte *)(lVar27 + 0xc) & 0x10) == 0))
                && ((*(char *)(param_1 + 0x60) != '\0' ||
                    (bVar19 = false, (uVar31 & 0x21f) != 0x201)))) &&
               ((*(char *)(param_1 + 0x61) != '\0' || (bVar19 = false, (uVar31 & 0x11f) != 0x101))))
            {
              bVar19 = (uVar31 & 0x40) == 0 || *(char *)(param_1 + 0x62) != '\0';
            }
            puVar20 = *(ushort **)(param_1 + 0x78);
            if (puVar20 != (ushort *)0x0) {
              uVar24 = *puVar20 << 8 | *puVar20 >> 8;
            }
            if (((*(uint *)(lVar7 + 4 + uVar21 * 0x14) & *(uint *)(param_1 + 0x5c)) != 0) &&
               ((*(char *)(param_1 + 100) == '\0' ||
                (*(char *)(param_1 + 100) == *(char *)(lVar27 + 0xf))))) {
              if (*(code **)(param_1 + 0x68) == (code *)0x0) {
                if (bVar19) goto LAB_00409204;
              }
              else {
                cVar10 = (**(code **)(param_1 + 0x68))
                                   (puVar1,uVar24,*(undefined8 *)(param_1 + 0x70));
                if (cVar10 == '\0') goto LAB_004091fb;
                puVar20 = *(ushort **)(param_1 + 0x78);
              }
              if (puVar20 != (ushort *)0x0) {
                *(ushort **)(param_1 + 0x78) = puVar20 + 1;
              }
              uVar15 = uVar15 + 1;
              local_68 = (uint)uVar12;
              bVar35 = uVar15 < local_68;
              if (uVar15 == local_68) {
                uVar13 = *(uint *)(param_1 + 0x48);
                goto LAB_0040943a;
              }
              uVar13 = *(uint *)(param_1 + 0x48);
              uVar21 = (ulong)uVar13;
              uVar26 = *(uint *)(param_1 + 0x80);
              iVar34 = uVar26 - 1;
              if (iVar34 <= (int)uVar13) {
                if (uVar15 < local_68) goto LAB_004093f5;
                goto LAB_0040943a;
              }
              goto LAB_00409211;
            }
LAB_004091fb:
            if (!bVar19) {
              uVar13 = *(uint *)(param_1 + 0x48);
              if (!bVar35) goto LAB_0040943a;
              uVar26 = uVar13 + 1;
              goto LAB_004093f5;
            }
          }
          else if ((uVar26 & 0x10) == 0) {
            if (((uVar26 & 0xff00) == 0) || ((uVar26 & 0xff00) == (uVar31 & 0xff00)))
            goto LAB_0040924c;
          }
          else {
            uVar17 = GDEF::accelerator_t::mark_set_covers
                               (*(accelerator_t **)(*(long *)(param_1 + 0x50) + 0xf8),uVar26 >> 0x10
                                ,*puVar1);
            if ((char)uVar17 != '\0') goto LAB_0040924c;
          }
LAB_00409204:
          uVar13 = *(uint *)(param_1 + 0x48);
          uVar21 = (ulong)uVar13;
        } while ((int)uVar13 < iVar34);
        if (!bVar35) goto LAB_0040943a;
        uVar26 = *(uint *)(param_1 + 0x80);
      }
      goto LAB_004093f5;
    }
LAB_0040943a:
    uVar26 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x5c +
                      (ulong)*(byte *)(*(long *)(param_1 + 0xa0) + 0x5a) * 8);
    *(uint *)(param_1 + 0x48) = uVar26;
    lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0xa0);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar7 + 0x60);
    uVar28 = 0;
    if (*(uint *)(lVar7 + 0x5c) == uVar26) {
      uVar28 = *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0xf + (ulong)uVar26 * 0x14);
    }
    if (*(char *)(param_1 + 99) == '\0') {
      uVar28 = 0;
    }
    *(undefined1 *)(param_1 + 100) = uVar28;
    *(code **)(param_1 + 0x68) = match_coverage;
    *(ChainContextFormat3 **)(param_1 + 0x70) = this;
    *(ChainContextFormat3 **)(param_1 + 0x78) = this + 4;
    if (uVar5 == 0) {
LAB_004097bc:
      hb_buffer_t::_set_glyph_flags(*(hb_buffer_t **)(param_1 + 0xa0),3,uVar26,uVar13 + 1,'\x01');
      apply_lookup(param_1,uVar29,__ptr,(uint)(ushort)(uVar6 << 8 | uVar6 >> 8),
                   (long)(pCVar25 + (ulong)uVar12 * 2 + uVar29 * 2 + 6),(ulong)uVar32);
      uVar21 = CONCAT71((int7)((ulong)param_1 >> 8),1);
    }
    else {
      if (uVar26 != 0) {
        uVar14 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
        bVar35 = true;
        uVar15 = 0;
LAB_00409516:
        do {
          uVar21 = (ulong)(uVar26 - 1);
          *(uint *)(param_1 + 0x48) = uVar26 - 1;
          lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa0) + 0x78);
          uVar26 = *(uint *)(param_1 + 0x58);
          uVar31 = *(ushort *)(lVar7 + 0xc + uVar21 * 0x14);
          if ((uVar26 & uVar31 & 0xe) != 0) goto LAB_0040950b;
          puVar1 = (uint *)(lVar7 + uVar21 * 0x14);
          if ((uVar31 & 8) == 0) {
LAB_0040954e:
            lVar27 = lVar7 + uVar21 * 0x14;
            uVar31 = *(ushort *)(lVar7 + 0x10 + uVar21 * 0x14);
            uVar24 = 0;
            bVar19 = false;
            if (((((uVar31 & 0x20) != 0) && (bVar19 = false, (*(byte *)(lVar27 + 0xc) & 0x10) == 0))
                && ((*(char *)(param_1 + 0x60) != '\0' ||
                    (bVar19 = false, (uVar31 & 0x21f) != 0x201)))) &&
               ((*(char *)(param_1 + 0x61) != '\0' || (bVar19 = false, (uVar31 & 0x11f) != 0x101))))
            {
              bVar19 = (uVar31 & 0x40) == 0 || *(char *)(param_1 + 0x62) != '\0';
            }
            puVar20 = *(ushort **)(param_1 + 0x78);
            if (puVar20 != (ushort *)0x0) {
              uVar24 = *puVar20 << 8 | *puVar20 >> 8;
            }
            if (((*(uint *)(lVar7 + 4 + uVar21 * 0x14) & *(uint *)(param_1 + 0x5c)) != 0) &&
               ((*(char *)(param_1 + 100) == '\0' ||
                (*(char *)(param_1 + 100) == *(char *)(lVar27 + 0xf))))) {
              if (*(code **)(param_1 + 0x68) == (code *)0x0) {
                if (bVar19) goto LAB_0040950b;
              }
              else {
                cVar10 = (**(code **)(param_1 + 0x68))
                                   (puVar1,uVar24,*(undefined8 *)(param_1 + 0x70));
                if (cVar10 == '\0') goto LAB_00409502;
                puVar20 = *(ushort **)(param_1 + 0x78);
              }
              if (puVar20 != (ushort *)0x0) {
                *(ushort **)(param_1 + 0x78) = puVar20 + 1;
              }
              uVar15 = uVar15 + 1;
              bVar35 = uVar15 < uVar14;
              if (uVar15 == uVar14) {
                uVar26 = *(uint *)(param_1 + 0x48);
                goto LAB_004097bc;
              }
              uVar26 = *(uint *)(param_1 + 0x48);
              if (uVar26 == 0) break;
              goto LAB_00409516;
            }
LAB_00409502:
            if (!bVar19) {
              uVar26 = *(uint *)(param_1 + 0x48);
              uVar15 = 1;
              if (uVar26 != 0) {
                uVar15 = uVar26;
              }
              if (!bVar35) goto LAB_004097bc;
              uVar15 = uVar15 - 1;
              phVar9 = *(hb_buffer_t **)(param_1 + 0xa0);
              hVar4 = phVar9[0x18];
              goto joined_r0x004096f0;
            }
          }
          else if ((uVar26 & 0x10) == 0) {
            if (((uVar26 & 0xff00) == 0) || ((uVar26 & 0xff00) == (uVar31 & 0xff00)))
            goto LAB_0040954e;
          }
          else {
            uVar17 = GDEF::accelerator_t::mark_set_covers
                               (*(accelerator_t **)(*(long *)(param_1 + 0x50) + 0xf8),uVar26 >> 0x10
                                ,*puVar1);
            if ((char)uVar17 != '\0') goto LAB_0040954e;
          }
LAB_0040950b:
          uVar26 = *(uint *)(param_1 + 0x48);
        } while (uVar26 != 0);
        uVar26 = 0;
        if (!bVar35) goto LAB_004097bc;
      }
      uVar15 = 0;
      phVar9 = *(hb_buffer_t **)(param_1 + 0xa0);
      hVar4 = phVar9[0x18];
joined_r0x004096f0:
      if (((byte)hVar4 & 0x40) == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        hb_buffer_t::_set_glyph_flags(phVar9,2,uVar15,uVar13 + 1,'\0');
      }
    }
  }
  else {
    iVar34 = iVar34 + -1;
    if ((int)uVar26 < iVar34) {
      bVar22 = bVar2 >> 5;
      local_70 = 1;
      bVar35 = true;
      local_90 = 0;
LAB_00408df4:
      do {
        uVar13 = (int)uVar30 + 1;
        uVar21 = (ulong)uVar13;
        *(uint *)(param_1 + 8) = uVar13;
        lVar27 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x70);
        uVar13 = *(uint *)(param_1 + 0x18);
        uVar31 = *(ushort *)(lVar27 + 0xc + uVar21 * 0x14);
        if ((uVar13 & uVar31 & 0xe) != 0) goto LAB_00408de7;
        puVar1 = (uint *)(lVar27 + uVar21 * 0x14);
        if ((uVar31 & 8) == 0) {
LAB_00408e31:
          lVar8 = lVar27 + uVar21 * 0x14;
          uVar31 = *(ushort *)(lVar27 + 0x10 + uVar21 * 0x14);
          uVar23 = 0;
          bVar19 = false;
          if (((((uVar31 & 0x20) != 0) && (bVar19 = false, (*(byte *)(lVar8 + 0xc) & 0x10) == 0)) &&
              ((*(char *)(param_1 + 0x20) != '\0' || (bVar19 = false, (uVar31 & 0x21f) != 0x201))))
             && ((*(char *)(param_1 + 0x21) != '\0' || (bVar19 = false, (uVar31 & 0x11f) != 0x101)))
             ) {
            bVar19 = (uVar31 & 0x40) == 0 || *(char *)(param_1 + 0x22) != '\0';
          }
          puVar20 = *(ushort **)(param_1 + 0x38);
          if (puVar20 != (ushort *)0x0) {
            uVar23 = *puVar20 << 8 | *puVar20 >> 8;
          }
          if (((*(uint *)(lVar27 + 4 + uVar21 * 0x14) & *(uint *)(param_1 + 0x1c)) != 0) &&
             ((*(char *)(param_1 + 0x24) == '\0' ||
              (*(char *)(param_1 + 0x24) == *(char *)(lVar8 + 0xf))))) {
            if (*(code **)(param_1 + 0x28) == (code *)0x0) {
              if (bVar19) goto LAB_00408de7;
            }
            else {
              cVar10 = (**(code **)(param_1 + 0x28))(puVar1,uVar23,*(undefined8 *)(param_1 + 0x30));
              if (cVar10 == '\0') goto LAB_00408dde;
              puVar20 = *(ushort **)(param_1 + 0x38);
            }
            if (puVar20 != (ushort *)0x0) {
              *(ushort **)(param_1 + 0x38) = puVar20 + 1;
            }
            uVar13 = *(uint *)(param_1 + 8);
            __ptr[local_70] = uVar13;
            bVar3 = *(byte *)(*(long *)(lVar7 + 0x70) + 0xe + (ulong)uVar13 * 0x14);
            bVar11 = bVar3 & 0xf;
            if ((bVar3 & 0x10) != 0) {
              bVar11 = 0;
            }
            if (bVar2 < 0x20 || bVar18 == 0) {
              if ((bVar3 >> 5 != bVar22) && (0x1f < bVar3)) {
joined_r0x00409035:
                if (bVar11 != 0) break;
              }
            }
            else if ((bVar22 != bVar3 >> 5) || (bVar18 != bVar11)) {
              if (local_90 == 0) {
                lVar27 = *(long *)(lVar7 + 0x78);
                uVar21 = (ulong)*(uint *)(lVar7 + 100);
                do {
                  uVar21 = uVar21 - 1;
                  if (uVar21 == 0xffffffffffffffff) goto LAB_0040911f;
                  uVar30 = uVar21 & 0xffffffff;
                  bVar3 = *(byte *)(lVar27 + 0xe + uVar30 * 0x14);
                  if (bVar3 >> 5 != bVar22) goto LAB_0040911f;
                } while (((bVar3 & 0x10) == 0) && ((bVar3 & 0xf) != 0));
                uVar31 = *(ushort *)(lVar27 + uVar30 * 0x14 + 0xc);
                local_90 = 2;
                if ((*(uint *)(param_1 + 0x18) & (uint)uVar31 & 0xe) == 0) {
                  if ((uVar31 & 8) != 0) {
                    uVar21 = hb_ot_apply_context_t::match_properties_mark
                                       (*(hb_ot_apply_context_t **)(param_1 + 0x10),
                                        *(uint *)(lVar27 + uVar30 * 0x14),(uint)uVar31,
                                        *(uint *)(param_1 + 0x18));
                    bVar11 = (byte)uVar21;
                    goto joined_r0x00409035;
                  }
                  break;
                }
              }
              else if (local_90 == 1) break;
            }
            local_70 = local_70 + 1;
            bVar35 = local_70 < uVar29;
            if (local_70 == uVar29) goto LAB_0040912a;
            uVar30 = (ulong)*(uint *)(param_1 + 8);
            iVar34 = *(int *)(param_1 + 0x40) + -1;
            if (iVar34 <= (int)*(uint *)(param_1 + 8)) break;
            goto LAB_00408df4;
          }
LAB_00408dde:
          if (!bVar19) break;
        }
        else if ((uVar13 & 0x10) == 0) {
          if (((uVar13 & 0xff00) == 0) || ((uVar13 & 0xff00) == (uVar31 & 0xff00)))
          goto LAB_00408e31;
        }
        else {
          uVar17 = GDEF::accelerator_t::mark_set_covers
                             (*(accelerator_t **)(*(long *)(param_1 + 0x10) + 0xf8),uVar13 >> 0x10,
                              *puVar1);
          if ((char)uVar17 != '\0') goto LAB_00408e31;
        }
LAB_00408de7:
        uVar30 = (ulong)*(uint *)(param_1 + 8);
      } while ((int)*(uint *)(param_1 + 8) < iVar34);
LAB_0040911f:
      if (!bVar35) goto LAB_0040912a;
    }
LAB_004093f5:
    lVar7 = *(long *)(param_1 + 0xa0);
    if ((*(byte *)(lVar7 + 0x18) & 0x40) == 0) {
      uVar21 = 0;
    }
    else {
      uVar13 = *(uint *)(lVar7 + 0x5c);
      uVar21 = (ulong)uVar13;
      if (*(uint *)(lVar7 + 0x60) < uVar26) {
        uVar26 = *(uint *)(lVar7 + 0x60);
      }
      *(byte *)(lVar7 + 0xc0) = *(byte *)(lVar7 + 0xc0) | 0x20;
      if (uVar13 < uVar26) {
        lVar7 = *(long *)(lVar7 + 0x70);
        uVar30 = ~uVar21;
        if ((uVar26 - uVar13 & 3) != 0) {
          pbVar33 = (byte *)(lVar7 + uVar21 * 0x14 + 4);
          lVar27 = 0;
          do {
            *pbVar33 = *pbVar33 | 2;
            lVar27 = lVar27 + -1;
            pbVar33 = pbVar33 + 0x14;
          } while (-lVar27 != ((ulong)(uVar26 - uVar13) & 3));
          uVar21 = uVar21 - lVar27;
        }
        if (2 < uVar30 + uVar26) {
          lVar27 = uVar26 - uVar21;
          pbVar33 = (byte *)(lVar7 + uVar21 * 0x14 + 0x40);
          uVar21 = 0;
          do {
            pbVar33[-0x3c] = pbVar33[-0x3c] | 2;
            pbVar33[-0x28] = pbVar33[-0x28] | 2;
            pbVar33[-0x14] = pbVar33[-0x14] | 2;
            *pbVar33 = *pbVar33 | 2;
            pbVar33 = pbVar33 + 0x50;
            lVar27 = lVar27 + -4;
          } while (lVar27 != 0);
          goto LAB_0040940d;
        }
      }
      uVar21 = 0;
    }
  }
LAB_0040940d:
  if (__ptr != local_48) {
    free(__ptr);
  }
LAB_00408c5b:
  return uVar21 & 0xffffffff;
}


