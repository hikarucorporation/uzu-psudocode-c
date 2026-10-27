// Function : apply_cached_to<OT::ChainContextFormat3>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 00408bc0
// Prototype: ulong apply_cached_to<OT::ChainContextFormat3>(long param_1, long param_2)
// Body     : 00408bc0 - 00408bc4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat3>(void const*,
   OT::hb_ot_apply_context_t*) */

ulong __cdecl
OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ChainContextFormat3>
          (long param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  hb_buffer_t hVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  hb_buffer_t *phVar10;
  char cVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  undefined8 uVar18;
  undefined4 *__ptr;
  byte bVar19;
  bool bVar20;
  ulong uVar21;
  byte bVar22;
  ushort uVar23;
  ushort uVar24;
  ushort *puVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  undefined1 uVar29;
  ulong uVar30;
  ushort uVar31;
  uint uVar32;
  Coverage *this;
  byte *pbVar33;
  int iVar34;
  bool bVar35;
  int iStack_90;
  ulong uStack_70;
  uint uStack_68;
  undefined4 auStack_48 [6];
  
  uVar21 = (ulong)(ushort)(*(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8);
  lVar1 = param_1 + uVar21 * 2;
  puVar25 = (ushort *)(lVar1 + 4);
  this = (Coverage *)&_hb_NullPool;
  puVar17 = (ushort *)&_hb_NullPool;
  if (*(short *)(param_1 + 4 + uVar21 * 2) != 0) {
    puVar17 = (ushort *)(lVar1 + 6);
  }
  uVar31 = *puVar17;
  if (uVar31 != 0) {
    this = (Coverage *)((ulong)(ushort)(uVar31 << 8 | uVar31 >> 8) + param_1);
  }
  lVar28 = *(long *)(param_2 + 0xa0);
  lVar8 = *(long *)(lVar28 + 0x70);
  uVar27 = *(uint *)(lVar28 + 0x5c);
  uVar21 = (ulong)uVar27;
  uVar14 = Layout::Common::Coverage::get_coverage(this,*(uint *)(lVar8 + uVar21 * 0x14));
  if ((uVar14 == 0xffffffff) || (uVar31 = *puVar25 << 8 | *puVar25 >> 8, 0x40 < uVar31)) {
LAB_00408c59:
    uVar21 = 0;
    goto LAB_00408c5b;
  }
  uVar30 = (ulong)uVar31;
  uVar24 = *(ushort *)(lVar1 + 6 + uVar30 * 2);
  uVar13 = uVar24 << 8 | uVar24 >> 8;
  uVar6 = *(ushort *)(param_1 + 2);
  uVar7 = puVar25[uVar30 + (ulong)uVar13 + 2];
  if (uVar31 < 5) {
    __ptr = auStack_48;
  }
  else {
    __ptr = malloc(uVar30 * 4);
    if (__ptr == (undefined4 *)0x0) goto LAB_00408c59;
  }
  *(uint *)(param_2 + 8) = uVar27;
  lVar9 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
  iVar34 = *(int *)(lVar9 + 0x60);
  *(int *)(param_2 + 0x40) = iVar34;
  uVar29 = 0;
  if (*(uint *)(lVar9 + 0x5c) == uVar27) {
    uVar29 = *(undefined1 *)(*(long *)(lVar9 + 0x70) + 0xf + uVar21 * 0x14);
  }
  if (*(char *)(param_2 + 0x23) == '\0') {
    uVar29 = 0;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar29;
  *(code **)(param_2 + 0x28) = match_coverage;
  *(long *)(param_2 + 0x30) = param_1;
  *(long *)(param_2 + 0x38) = lVar1 + 8;
  bVar3 = *(byte *)(lVar8 + 0xe + uVar21 * 0x14);
  bVar19 = bVar3 & 0xf;
  if ((bVar3 & 0x10) != 0) {
    bVar19 = 0;
  }
  if (uVar31 < 2) {
LAB_0040912a:
    uVar14 = *(uint *)(param_2 + 8);
    uVar21 = (ulong)uVar14;
    uVar27 = 0;
    *__ptr = *(undefined4 *)(lVar28 + 0x5c);
    uVar32 = uVar14 + 1;
    if (uVar32 == 0) goto LAB_004093f5;
    *(uint *)(param_2 + 0x48) = uVar14;
    lVar1 = *(long *)(*(long *)(param_2 + 0x50) + 0xa0);
    uVar27 = *(uint *)(lVar1 + 0x60);
    *(uint *)(param_2 + 0x80) = uVar27;
    uVar29 = 0;
    if (*(uint *)(lVar1 + 0x5c) == uVar14) {
      uVar29 = *(undefined1 *)(*(long *)(lVar1 + 0x70) + 0xf + uVar21 * 0x14);
    }
    if (*(char *)(param_2 + 99) == '\0') {
      uVar29 = 0;
    }
    *(undefined1 *)(param_2 + 100) = uVar29;
    *(code **)(param_2 + 0x68) = match_coverage;
    *(long *)(param_2 + 0x70) = param_1;
    *(ushort **)(param_2 + 0x78) = puVar25 + uVar30 + 2;
    if (uVar24 != 0) {
      iVar34 = uVar27 - 1;
      if ((int)uVar14 < iVar34) {
        bVar35 = true;
        uVar16 = 0;
LAB_00409211:
        do {
          uVar27 = (int)uVar21 + 1;
          uVar21 = (ulong)uVar27;
          *(uint *)(param_2 + 0x48) = uVar27;
          lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 0xa0) + 0x70);
          uVar27 = *(uint *)(param_2 + 0x58);
          uVar31 = *(ushort *)(lVar1 + 0xc + uVar21 * 0x14);
          if ((uVar27 & uVar31 & 0xe) != 0) goto LAB_00409204;
          puVar2 = (uint *)(lVar1 + uVar21 * 0x14);
          if ((uVar31 & 8) == 0) {
LAB_0040924c:
            lVar28 = lVar1 + uVar21 * 0x14;
            uVar31 = *(ushort *)(lVar1 + 0x10 + uVar21 * 0x14);
            uVar24 = 0;
            bVar20 = false;
            if (((((uVar31 & 0x20) != 0) && (bVar20 = false, (*(byte *)(lVar28 + 0xc) & 0x10) == 0))
                && ((*(char *)(param_2 + 0x60) != '\0' ||
                    (bVar20 = false, (uVar31 & 0x21f) != 0x201)))) &&
               ((*(char *)(param_2 + 0x61) != '\0' || (bVar20 = false, (uVar31 & 0x11f) != 0x101))))
            {
              bVar20 = (uVar31 & 0x40) == 0 || *(char *)(param_2 + 0x62) != '\0';
            }
            puVar17 = *(ushort **)(param_2 + 0x78);
            if (puVar17 != (ushort *)0x0) {
              uVar24 = *puVar17 << 8 | *puVar17 >> 8;
            }
            if (((*(uint *)(lVar1 + 4 + uVar21 * 0x14) & *(uint *)(param_2 + 0x5c)) != 0) &&
               ((*(char *)(param_2 + 100) == '\0' ||
                (*(char *)(param_2 + 100) == *(char *)(lVar28 + 0xf))))) {
              if (*(code **)(param_2 + 0x68) == (code *)0x0) {
                if (bVar20) goto LAB_00409204;
              }
              else {
                cVar11 = (**(code **)(param_2 + 0x68))
                                   (puVar2,uVar24,*(undefined8 *)(param_2 + 0x70));
                if (cVar11 == '\0') goto LAB_004091fb;
                puVar17 = *(ushort **)(param_2 + 0x78);
              }
              if (puVar17 != (ushort *)0x0) {
                *(ushort **)(param_2 + 0x78) = puVar17 + 1;
              }
              uVar16 = uVar16 + 1;
              uStack_68 = (uint)uVar13;
              bVar35 = uVar16 < uStack_68;
              if (uVar16 == uStack_68) {
                uVar14 = *(uint *)(param_2 + 0x48);
                goto LAB_0040943a;
              }
              uVar14 = *(uint *)(param_2 + 0x48);
              uVar21 = (ulong)uVar14;
              uVar27 = *(uint *)(param_2 + 0x80);
              iVar34 = uVar27 - 1;
              if (iVar34 <= (int)uVar14) {
                if (uVar16 < uStack_68) goto LAB_004093f5;
                goto LAB_0040943a;
              }
              goto LAB_00409211;
            }
LAB_004091fb:
            if (!bVar20) {
              uVar14 = *(uint *)(param_2 + 0x48);
              if (!bVar35) goto LAB_0040943a;
              uVar27 = uVar14 + 1;
              goto LAB_004093f5;
            }
          }
          else if ((uVar27 & 0x10) == 0) {
            if (((uVar27 & 0xff00) == 0) || ((uVar27 & 0xff00) == (uVar31 & 0xff00)))
            goto LAB_0040924c;
          }
          else {
            uVar18 = GDEF::accelerator_t::mark_set_covers
                               (*(accelerator_t **)(*(long *)(param_2 + 0x50) + 0xf8),uVar27 >> 0x10
                                ,*puVar2);
            if ((char)uVar18 != '\0') goto LAB_0040924c;
          }
LAB_00409204:
          uVar14 = *(uint *)(param_2 + 0x48);
          uVar21 = (ulong)uVar14;
        } while ((int)uVar14 < iVar34);
        if (!bVar35) goto LAB_0040943a;
        uVar27 = *(uint *)(param_2 + 0x80);
      }
      goto LAB_004093f5;
    }
LAB_0040943a:
    uVar27 = *(uint *)(*(long *)(param_2 + 0xa0) + 0x5c +
                      (ulong)*(byte *)(*(long *)(param_2 + 0xa0) + 0x5a) * 8);
    *(uint *)(param_2 + 0x48) = uVar27;
    lVar1 = *(long *)(*(long *)(param_2 + 0x50) + 0xa0);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(lVar1 + 0x60);
    uVar29 = 0;
    if (*(uint *)(lVar1 + 0x5c) == uVar27) {
      uVar29 = *(undefined1 *)(*(long *)(lVar1 + 0x70) + 0xf + (ulong)uVar27 * 0x14);
    }
    if (*(char *)(param_2 + 99) == '\0') {
      uVar29 = 0;
    }
    *(undefined1 *)(param_2 + 100) = uVar29;
    *(code **)(param_2 + 0x68) = match_coverage;
    *(long *)(param_2 + 0x70) = param_1;
    *(long *)(param_2 + 0x78) = param_1 + 4;
    if (uVar6 == 0) {
LAB_004097bc:
      hb_buffer_t::_set_glyph_flags(*(hb_buffer_t **)(param_2 + 0xa0),3,uVar27,uVar14 + 1,'\x01');
      apply_lookup(param_2,uVar30,__ptr,(uint)(ushort)(uVar7 << 8 | uVar7 >> 8),
                   (long)(puVar25 + uVar30 + (ulong)uVar13 + 3),(ulong)uVar32);
      uVar21 = CONCAT71((int7)((ulong)param_2 >> 8),1);
    }
    else {
      if (uVar27 != 0) {
        uVar15 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
        bVar35 = true;
        uVar16 = 0;
LAB_00409516:
        do {
          uVar21 = (ulong)(uVar27 - 1);
          *(uint *)(param_2 + 0x48) = uVar27 - 1;
          lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 0xa0) + 0x78);
          uVar27 = *(uint *)(param_2 + 0x58);
          uVar31 = *(ushort *)(lVar1 + 0xc + uVar21 * 0x14);
          if ((uVar27 & uVar31 & 0xe) != 0) goto LAB_0040950b;
          puVar2 = (uint *)(lVar1 + uVar21 * 0x14);
          if ((uVar31 & 8) == 0) {
LAB_0040954e:
            lVar28 = lVar1 + uVar21 * 0x14;
            uVar31 = *(ushort *)(lVar1 + 0x10 + uVar21 * 0x14);
            uVar24 = 0;
            bVar20 = false;
            if (((((uVar31 & 0x20) != 0) && (bVar20 = false, (*(byte *)(lVar28 + 0xc) & 0x10) == 0))
                && ((*(char *)(param_2 + 0x60) != '\0' ||
                    (bVar20 = false, (uVar31 & 0x21f) != 0x201)))) &&
               ((*(char *)(param_2 + 0x61) != '\0' || (bVar20 = false, (uVar31 & 0x11f) != 0x101))))
            {
              bVar20 = (uVar31 & 0x40) == 0 || *(char *)(param_2 + 0x62) != '\0';
            }
            puVar17 = *(ushort **)(param_2 + 0x78);
            if (puVar17 != (ushort *)0x0) {
              uVar24 = *puVar17 << 8 | *puVar17 >> 8;
            }
            if (((*(uint *)(lVar1 + 4 + uVar21 * 0x14) & *(uint *)(param_2 + 0x5c)) != 0) &&
               ((*(char *)(param_2 + 100) == '\0' ||
                (*(char *)(param_2 + 100) == *(char *)(lVar28 + 0xf))))) {
              if (*(code **)(param_2 + 0x68) == (code *)0x0) {
                if (bVar20) goto LAB_0040950b;
              }
              else {
                cVar11 = (**(code **)(param_2 + 0x68))
                                   (puVar2,uVar24,*(undefined8 *)(param_2 + 0x70));
                if (cVar11 == '\0') goto LAB_00409502;
                puVar17 = *(ushort **)(param_2 + 0x78);
              }
              if (puVar17 != (ushort *)0x0) {
                *(ushort **)(param_2 + 0x78) = puVar17 + 1;
              }
              uVar16 = uVar16 + 1;
              bVar35 = uVar16 < uVar15;
              if (uVar16 == uVar15) {
                uVar27 = *(uint *)(param_2 + 0x48);
                goto LAB_004097bc;
              }
              uVar27 = *(uint *)(param_2 + 0x48);
              if (uVar27 == 0) break;
              goto LAB_00409516;
            }
LAB_00409502:
            if (!bVar20) {
              uVar27 = *(uint *)(param_2 + 0x48);
              uVar16 = 1;
              if (uVar27 != 0) {
                uVar16 = uVar27;
              }
              if (!bVar35) goto LAB_004097bc;
              uVar16 = uVar16 - 1;
              phVar10 = *(hb_buffer_t **)(param_2 + 0xa0);
              hVar5 = phVar10[0x18];
              goto joined_r0x004096f0;
            }
          }
          else if ((uVar27 & 0x10) == 0) {
            if (((uVar27 & 0xff00) == 0) || ((uVar27 & 0xff00) == (uVar31 & 0xff00)))
            goto LAB_0040954e;
          }
          else {
            uVar18 = GDEF::accelerator_t::mark_set_covers
                               (*(accelerator_t **)(*(long *)(param_2 + 0x50) + 0xf8),uVar27 >> 0x10
                                ,*puVar2);
            if ((char)uVar18 != '\0') goto LAB_0040954e;
          }
LAB_0040950b:
          uVar27 = *(uint *)(param_2 + 0x48);
        } while (uVar27 != 0);
        uVar27 = 0;
        if (!bVar35) goto LAB_004097bc;
      }
      uVar16 = 0;
      phVar10 = *(hb_buffer_t **)(param_2 + 0xa0);
      hVar5 = phVar10[0x18];
joined_r0x004096f0:
      if (((byte)hVar5 & 0x40) == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        hb_buffer_t::_set_glyph_flags(phVar10,2,uVar16,uVar14 + 1,'\0');
      }
    }
  }
  else {
    iVar34 = iVar34 + -1;
    if ((int)uVar27 < iVar34) {
      bVar22 = bVar3 >> 5;
      uStack_70 = 1;
      bVar35 = true;
      iStack_90 = 0;
LAB_00408df4:
      do {
        uVar14 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar14;
        *(uint *)(param_2 + 8) = uVar14;
        lVar1 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0xa0) + 0x70);
        uVar14 = *(uint *)(param_2 + 0x18);
        uVar31 = *(ushort *)(lVar1 + 0xc + uVar21 * 0x14);
        if ((uVar14 & uVar31 & 0xe) != 0) goto LAB_00408de7;
        puVar2 = (uint *)(lVar1 + uVar21 * 0x14);
        if ((uVar31 & 8) == 0) {
LAB_00408e31:
          lVar8 = lVar1 + uVar21 * 0x14;
          uVar31 = *(ushort *)(lVar1 + 0x10 + uVar21 * 0x14);
          uVar23 = 0;
          bVar20 = false;
          if (((((uVar31 & 0x20) != 0) && (bVar20 = false, (*(byte *)(lVar8 + 0xc) & 0x10) == 0)) &&
              ((*(char *)(param_2 + 0x20) != '\0' || (bVar20 = false, (uVar31 & 0x21f) != 0x201))))
             && ((*(char *)(param_2 + 0x21) != '\0' || (bVar20 = false, (uVar31 & 0x11f) != 0x101)))
             ) {
            bVar20 = (uVar31 & 0x40) == 0 || *(char *)(param_2 + 0x22) != '\0';
          }
          puVar17 = *(ushort **)(param_2 + 0x38);
          if (puVar17 != (ushort *)0x0) {
            uVar23 = *puVar17 << 8 | *puVar17 >> 8;
          }
          if (((*(uint *)(lVar1 + 4 + uVar21 * 0x14) & *(uint *)(param_2 + 0x1c)) != 0) &&
             ((*(char *)(param_2 + 0x24) == '\0' ||
              (*(char *)(param_2 + 0x24) == *(char *)(lVar8 + 0xf))))) {
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              if (bVar20) goto LAB_00408de7;
            }
            else {
              cVar11 = (**(code **)(param_2 + 0x28))(puVar2,uVar23,*(undefined8 *)(param_2 + 0x30));
              if (cVar11 == '\0') goto LAB_00408dde;
              puVar17 = *(ushort **)(param_2 + 0x38);
            }
            if (puVar17 != (ushort *)0x0) {
              *(ushort **)(param_2 + 0x38) = puVar17 + 1;
            }
            uVar14 = *(uint *)(param_2 + 8);
            __ptr[uStack_70] = uVar14;
            bVar4 = *(byte *)(*(long *)(lVar28 + 0x70) + 0xe + (ulong)uVar14 * 0x14);
            bVar12 = bVar4 & 0xf;
            if ((bVar4 & 0x10) != 0) {
              bVar12 = 0;
            }
            if (bVar3 < 0x20 || bVar19 == 0) {
              if ((bVar4 >> 5 != bVar22) && (0x1f < bVar4)) {
joined_r0x00409035:
                if (bVar12 != 0) break;
              }
            }
            else if ((bVar22 != bVar4 >> 5) || (bVar19 != bVar12)) {
              if (iStack_90 == 0) {
                lVar1 = *(long *)(lVar28 + 0x78);
                uVar21 = (ulong)*(uint *)(lVar28 + 100);
                do {
                  uVar21 = uVar21 - 1;
                  if (uVar21 == 0xffffffffffffffff) goto LAB_0040911f;
                  uVar26 = uVar21 & 0xffffffff;
                  bVar4 = *(byte *)(lVar1 + 0xe + uVar26 * 0x14);
                  if (bVar4 >> 5 != bVar22) goto LAB_0040911f;
                } while (((bVar4 & 0x10) == 0) && ((bVar4 & 0xf) != 0));
                uVar31 = *(ushort *)(lVar1 + uVar26 * 0x14 + 0xc);
                iStack_90 = 2;
                if ((*(uint *)(param_2 + 0x18) & (uint)uVar31 & 0xe) == 0) {
                  if ((uVar31 & 8) != 0) {
                    uVar21 = hb_ot_apply_context_t::match_properties_mark
                                       (*(hb_ot_apply_context_t **)(param_2 + 0x10),
                                        *(uint *)(lVar1 + uVar26 * 0x14),(uint)uVar31,
                                        *(uint *)(param_2 + 0x18));
                    bVar12 = (byte)uVar21;
                    goto joined_r0x00409035;
                  }
                  break;
                }
              }
              else if (iStack_90 == 1) break;
            }
            uStack_70 = uStack_70 + 1;
            bVar35 = uStack_70 < uVar30;
            if (uStack_70 == uVar30) goto LAB_0040912a;
            uVar21 = (ulong)*(uint *)(param_2 + 8);
            iVar34 = *(int *)(param_2 + 0x40) + -1;
            if (iVar34 <= (int)*(uint *)(param_2 + 8)) break;
            goto LAB_00408df4;
          }
LAB_00408dde:
          if (!bVar20) break;
        }
        else if ((uVar14 & 0x10) == 0) {
          if (((uVar14 & 0xff00) == 0) || ((uVar14 & 0xff00) == (uVar31 & 0xff00)))
          goto LAB_00408e31;
        }
        else {
          uVar18 = GDEF::accelerator_t::mark_set_covers
                             (*(accelerator_t **)(*(long *)(param_2 + 0x10) + 0xf8),uVar14 >> 0x10,
                              *puVar2);
          if ((char)uVar18 != '\0') goto LAB_00408e31;
        }
LAB_00408de7:
        uVar21 = (ulong)*(uint *)(param_2 + 8);
      } while ((int)*(uint *)(param_2 + 8) < iVar34);
LAB_0040911f:
      if (!bVar35) goto LAB_0040912a;
    }
LAB_004093f5:
    lVar1 = *(long *)(param_2 + 0xa0);
    if ((*(byte *)(lVar1 + 0x18) & 0x40) == 0) {
      uVar21 = 0;
    }
    else {
      uVar14 = *(uint *)(lVar1 + 0x5c);
      uVar21 = (ulong)uVar14;
      if (*(uint *)(lVar1 + 0x60) < uVar27) {
        uVar27 = *(uint *)(lVar1 + 0x60);
      }
      *(byte *)(lVar1 + 0xc0) = *(byte *)(lVar1 + 0xc0) | 0x20;
      if (uVar14 < uVar27) {
        lVar1 = *(long *)(lVar1 + 0x70);
        uVar30 = ~uVar21;
        if ((uVar27 - uVar14 & 3) != 0) {
          pbVar33 = (byte *)(lVar1 + uVar21 * 0x14 + 4);
          lVar28 = 0;
          do {
            *pbVar33 = *pbVar33 | 2;
            lVar28 = lVar28 + -1;
            pbVar33 = pbVar33 + 0x14;
          } while (-lVar28 != ((ulong)(uVar27 - uVar14) & 3));
          uVar21 = uVar21 - lVar28;
        }
        if (2 < uVar30 + uVar27) {
          lVar28 = uVar27 - uVar21;
          pbVar33 = (byte *)(lVar1 + uVar21 * 0x14 + 0x40);
          uVar21 = 0;
          do {
            pbVar33[-0x3c] = pbVar33[-0x3c] | 2;
            pbVar33[-0x28] = pbVar33[-0x28] | 2;
            pbVar33[-0x14] = pbVar33[-0x14] | 2;
            *pbVar33 = *pbVar33 | 2;
            pbVar33 = pbVar33 + 0x50;
            lVar28 = lVar28 + -4;
          } while (lVar28 != 0);
          goto LAB_0040940d;
        }
      }
      uVar21 = 0;
    }
  }
LAB_0040940d:
  if (__ptr != auStack_48) {
    free(__ptr);
  }
LAB_00408c5b:
  return uVar21 & 0xffffffff;
}


