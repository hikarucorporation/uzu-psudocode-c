// Function : apply
// Namespace: OT:ChainRule_OT__Layout__SmallTypes_
// Entry    : 0040b140
// Prototype: ulong apply(ChainRule<OT::Layout::SmallTypes> * this, long param_1, undefined8 * param_2)
// Body     : 0040b140 - 0040bd6b


/* OT::ChainRule<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*,
   OT::ChainContextApplyLookupContext const&) const */

ulong __thiscall
OT::ChainRule<OT::Layout::SmallTypes>::apply
          (ChainRule<OT::Layout::SmallTypes> *this,long param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  hb_buffer_t hVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  hb_buffer_t *phVar10;
  byte bVar11;
  char cVar12;
  byte bVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *__ptr;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ushort *puVar23;
  ushort uVar24;
  ushort uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  undefined1 uVar29;
  ulong uVar30;
  ulong uVar31;
  byte *pbVar32;
  long lVar33;
  byte bVar34;
  uint *puVar35;
  ushort uVar36;
  uint uVar37;
  bool bVar38;
  int local_8c;
  uint local_80;
  uint local_58;
  undefined4 local_48 [6];
  
  uVar5 = *(ushort *)this;
  uVar14 = uVar5 << 8 | uVar5 >> 8;
  uVar31 = (ulong)uVar14;
  uVar25 = *(ushort *)(this + uVar31 * 2 + 2);
  uVar36 = uVar25 << 8 | uVar25 >> 8;
  uVar22 = (ulong)uVar36;
  lVar33 = 2;
  if (uVar25 != 0) {
    lVar33 = uVar22 * 2;
  }
  if (0x40 < uVar36) {
LAB_0040b9ff:
    uVar22 = 0;
    goto LAB_0040b8ff;
  }
  uVar25 = *(ushort *)(this + lVar33 + 2 + uVar31 * 2);
  uVar15 = uVar25 << 8 | uVar25 >> 8;
  lVar28 = lVar33 + uVar31 * 2;
  uVar6 = *(ushort *)(this + (ulong)uVar15 * 2 + lVar28 + 4);
  if (uVar36 < 5) {
    __ptr = local_48;
  }
  else {
    __ptr = malloc(uVar22 * 4);
    if (__ptr == (undefined4 *)0x0) goto LAB_0040b9ff;
  }
  lVar7 = *(long *)(param_1 + 0xa0);
  uVar37 = *(uint *)(lVar7 + 0x5c);
  uVar18 = param_2[1];
  uVar8 = param_2[4];
  *(uint *)(param_1 + 8) = uVar37;
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
  iVar27 = *(int *)(lVar9 + 0x60);
  *(int *)(param_1 + 0x40) = iVar27;
  if (*(uint *)(lVar9 + 0x5c) == uVar37) {
    uVar29 = *(undefined1 *)(*(long *)(lVar9 + 0x70) + 0xf + (ulong)uVar37 * 0x14);
  }
  else {
    uVar29 = 0;
  }
  if (*(char *)(param_1 + 0x23) == '\0') {
    uVar29 = 0;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar29;
  *(undefined8 *)(param_1 + 0x28) = uVar18;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  *(ChainRule<OT::Layout::SmallTypes> **)(param_1 + 0x38) = this + uVar31 * 2 + 4;
  bVar2 = *(byte *)(*(long *)(lVar7 + 0x70) + 0xe + (ulong)uVar37 * 0x14);
  bVar11 = bVar2 & 0xf;
  if ((bVar2 & 0x10) != 0) {
    bVar11 = 0;
  }
  if (uVar36 < 2) {
LAB_0040b626:
    uVar16 = *(uint *)(param_1 + 8);
    uVar30 = (ulong)uVar16;
    *__ptr = *(undefined4 *)(lVar7 + 0x5c);
    uVar37 = 0;
    uVar20 = uVar16 + 1;
    if (uVar20 == 0) goto LAB_0040b8de;
    uVar18 = param_2[2];
    uVar8 = param_2[5];
    *(uint *)(param_1 + 0x48) = uVar16;
    lVar7 = *(long *)(*(long *)(param_1 + 0x50) + 0xa0);
    uVar37 = *(uint *)(lVar7 + 0x60);
    *(uint *)(param_1 + 0x80) = uVar37;
    uVar29 = 0;
    if (*(uint *)(lVar7 + 0x5c) == uVar16) {
      uVar29 = *(undefined1 *)(*(long *)(lVar7 + 0x70) + 0xf + uVar30 * 0x14);
    }
    if (*(char *)(param_1 + 99) == '\0') {
      uVar29 = 0;
    }
    *(undefined1 *)(param_1 + 100) = uVar29;
    *(undefined8 *)(param_1 + 0x68) = uVar18;
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    *(ChainRule<OT::Layout::SmallTypes> **)(param_1 + 0x78) = this + lVar33 + uVar31 * 2 + 4;
    if (uVar25 != 0) {
      iVar27 = uVar37 - 1;
      if ((int)uVar16 < iVar27) {
        bVar38 = true;
        uVar17 = 0;
        do {
          while( true ) {
            uVar37 = (int)uVar30 + 1;
            uVar31 = (ulong)uVar37;
            *(uint *)(param_1 + 0x48) = uVar37;
            lVar33 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa0) + 0x70);
            uVar37 = *(uint *)(param_1 + 0x58);
            uVar25 = *(ushort *)(lVar33 + 0xc + uVar31 * 0x14);
            if ((uVar37 & uVar25 & 0xe) != 0) goto LAB_0040b70b;
            puVar35 = (uint *)(lVar33 + uVar31 * 0x14);
            if ((uVar25 & 8) == 0) break;
            if ((uVar37 & 0x10) == 0) {
              if (((uVar37 & 0xff00) == 0) || ((uVar37 & 0xff00) == (uVar25 & 0xff00))) break;
            }
            else {
              uVar18 = GDEF::accelerator_t::mark_set_covers
                                 (*(accelerator_t **)(*(long *)(param_1 + 0x50) + 0xf8),
                                  uVar37 >> 0x10,*puVar35);
              if ((char)uVar18 != '\0') break;
            }
LAB_0040b70b:
            uVar16 = *(uint *)(param_1 + 0x48);
            uVar30 = (ulong)uVar16;
            if (iVar27 <= (int)uVar16) {
              if (!bVar38) goto LAB_0040ba18;
              uVar37 = *(uint *)(param_1 + 0x80);
              goto LAB_0040b8de;
            }
          }
          lVar7 = lVar33 + uVar31 * 0x14;
          uVar25 = *(ushort *)(lVar33 + 0x10 + uVar31 * 0x14);
          uVar36 = 0;
          bVar19 = false;
          if (((((uVar25 & 0x20) != 0) && (bVar19 = false, (*(byte *)(lVar7 + 0xc) & 0x10) == 0)) &&
              ((*(char *)(param_1 + 0x60) != '\0' || (bVar19 = false, (uVar25 & 0x21f) != 0x201))))
             && ((*(char *)(param_1 + 0x61) != '\0' || (bVar19 = false, (uVar25 & 0x11f) != 0x101)))
             ) {
            bVar19 = (uVar25 & 0x40) == 0 || *(char *)(param_1 + 0x62) != '\0';
          }
          puVar23 = *(ushort **)(param_1 + 0x78);
          if (puVar23 != (ushort *)0x0) {
            uVar36 = *puVar23 << 8 | *puVar23 >> 8;
          }
          if (((*(uint *)(lVar33 + 4 + uVar31 * 0x14) & *(uint *)(param_1 + 0x5c)) == 0) ||
             ((*(char *)(param_1 + 100) != '\0' &&
              (*(char *)(param_1 + 100) != *(char *)(lVar7 + 0xf))))) {
LAB_0040b702:
            if (bVar19) goto LAB_0040b70b;
            uVar16 = *(uint *)(param_1 + 0x48);
            if (!bVar38) goto LAB_0040ba18;
            uVar37 = uVar16 + 1;
            lVar33 = *(long *)(param_1 + 0xa0);
            bVar2 = *(byte *)(lVar33 + 0x18);
            goto joined_r0x0040b93b;
          }
          if (*(code **)(param_1 + 0x68) == (code *)0x0) {
            if (bVar19) goto LAB_0040b70b;
          }
          else {
            cVar12 = (**(code **)(param_1 + 0x68))(puVar35,uVar36,*(undefined8 *)(param_1 + 0x70));
            if (cVar12 == '\0') goto LAB_0040b702;
            puVar23 = *(ushort **)(param_1 + 0x78);
          }
          if (puVar23 != (ushort *)0x0) {
            *(ushort **)(param_1 + 0x78) = puVar23 + 1;
          }
          uVar17 = uVar17 + 1;
          local_80 = (uint)uVar15;
          bVar38 = uVar17 < local_80;
          if (uVar17 == local_80) {
            uVar16 = *(uint *)(param_1 + 0x48);
            goto LAB_0040ba18;
          }
          uVar16 = *(uint *)(param_1 + 0x48);
          uVar30 = (ulong)uVar16;
          uVar37 = *(uint *)(param_1 + 0x80);
          iVar27 = uVar37 - 1;
        } while ((int)uVar16 < iVar27);
        if (local_80 <= uVar17) goto LAB_0040ba18;
      }
      goto LAB_0040b8de;
    }
LAB_0040ba18:
    uVar18 = *param_2;
    uVar8 = param_2[3];
    uVar37 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x5c +
                      (ulong)*(byte *)(*(long *)(param_1 + 0xa0) + 0x5a) * 8);
    *(uint *)(param_1 + 0x48) = uVar37;
    lVar33 = *(long *)(*(long *)(param_1 + 0x50) + 0xa0);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar33 + 0x60);
    uVar29 = 0;
    if (*(uint *)(lVar33 + 0x5c) == uVar37) {
      uVar29 = *(undefined1 *)(*(long *)(lVar33 + 0x70) + 0xf + (ulong)uVar37 * 0x14);
    }
    if (*(char *)(param_1 + 99) == '\0') {
      uVar29 = 0;
    }
    *(undefined1 *)(param_1 + 100) = uVar29;
    *(undefined8 *)(param_1 + 0x68) = uVar18;
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    *(ChainRule<OT::Layout::SmallTypes> **)(param_1 + 0x78) = this + 2;
    if (uVar5 == 0) {
LAB_0040bd12:
      hb_buffer_t::_set_glyph_flags(*(hb_buffer_t **)(param_1 + 0xa0),3,uVar37,uVar16 + 1,'\x01');
      apply_lookup(param_1,uVar22,__ptr,(uint)(ushort)(uVar6 << 8 | uVar6 >> 8),
                   (long)(this + (ulong)uVar15 * 2 + lVar28 + 6),(ulong)uVar20);
      uVar22 = CONCAT71((int7)((ulong)(this + (ulong)uVar15 * 2 + lVar28 + 6) >> 8),1);
      goto LAB_0040b8ee;
    }
    if (uVar37 == 0) {
      phVar10 = *(hb_buffer_t **)(param_1 + 0xa0);
      hVar4 = phVar10[0x18];
    }
    else {
      bVar38 = true;
      uVar17 = 0;
LAB_0040baf1:
      do {
        uVar31 = (ulong)(uVar37 - 1);
        *(uint *)(param_1 + 0x48) = uVar37 - 1;
        lVar33 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0xa0) + 0x78);
        uVar37 = *(uint *)(param_1 + 0x58);
        uVar5 = *(ushort *)(lVar33 + 0xc + uVar31 * 0x14);
        if ((uVar37 & uVar5 & 0xe) != 0) goto LAB_0040bae4;
        puVar35 = (uint *)(uVar31 * 0x14 + lVar33);
        if ((uVar5 & 8) == 0) {
LAB_0040bb35:
          pbVar32 = (byte *)(uVar31 * 0x14 + 0xc + lVar33);
          uVar5 = *(ushort *)(lVar33 + 0x10 + uVar31 * 0x14);
          uVar25 = 0;
          bVar19 = false;
          if (((((uVar5 & 0x20) != 0) && (bVar19 = false, (*pbVar32 & 0x10) == 0)) &&
              ((*(char *)(param_1 + 0x60) != '\0' || (bVar19 = false, (uVar5 & 0x21f) != 0x201))))
             && ((*(char *)(param_1 + 0x61) != '\0' || (bVar19 = false, (uVar5 & 0x11f) != 0x101))))
          {
            bVar19 = (uVar5 & 0x40) == 0 || *(char *)(param_1 + 0x62) != '\0';
          }
          puVar23 = *(ushort **)(param_1 + 0x78);
          if (puVar23 != (ushort *)0x0) {
            uVar25 = *puVar23 << 8 | *puVar23 >> 8;
          }
          if (((*(uint *)(lVar33 + 4 + uVar31 * 0x14) & *(uint *)(param_1 + 0x5c)) != 0) &&
             ((*(byte *)(param_1 + 100) == 0 || (*(byte *)(param_1 + 100) == pbVar32[3])))) {
            if (*(code **)(param_1 + 0x68) == (code *)0x0) {
              if (bVar19) goto LAB_0040bae4;
            }
            else {
              cVar12 = (**(code **)(param_1 + 0x68))(puVar35,uVar25,*(undefined8 *)(param_1 + 0x70))
              ;
              if (cVar12 == '\0') goto LAB_0040badc;
              puVar23 = *(ushort **)(param_1 + 0x78);
            }
            if (puVar23 != (ushort *)0x0) {
              *(ushort **)(param_1 + 0x78) = puVar23 + 1;
            }
            uVar17 = uVar17 + 1;
            local_58 = (uint)uVar14;
            bVar38 = uVar17 < local_58;
            if (uVar17 == local_58) {
              uVar37 = *(uint *)(param_1 + 0x48);
              goto LAB_0040bd12;
            }
            uVar37 = *(uint *)(param_1 + 0x48);
            if (uVar37 == 0) break;
            goto LAB_0040baf1;
          }
LAB_0040badc:
          if (!bVar19) {
            uVar37 = *(uint *)(param_1 + 0x48);
            uVar17 = 1;
            if (uVar37 != 0) {
              uVar17 = uVar37;
            }
            if (!bVar38) goto LAB_0040bd12;
            uVar17 = uVar17 - 1;
            phVar10 = *(hb_buffer_t **)(param_1 + 0xa0);
            hVar4 = phVar10[0x18];
            goto joined_r0x0040bd05;
          }
        }
        else if ((uVar37 & 0x10) == 0) {
          if (((uVar37 & 0xff00) == 0) || ((uVar37 & 0xff00) == (uVar5 & 0xff00)))
          goto LAB_0040bb35;
        }
        else {
          uVar18 = GDEF::accelerator_t::mark_set_covers
                             (*(accelerator_t **)(*(long *)(param_1 + 0x50) + 0xf8),uVar37 >> 0x10,
                              *puVar35);
          if ((char)uVar18 != '\0') goto LAB_0040bb35;
        }
LAB_0040bae4:
        uVar37 = *(uint *)(param_1 + 0x48);
      } while (uVar37 != 0);
      uVar37 = 0;
      if (!bVar38) goto LAB_0040bd12;
      phVar10 = *(hb_buffer_t **)(param_1 + 0xa0);
      hVar4 = phVar10[0x18];
    }
    uVar17 = 0;
joined_r0x0040bd05:
    if (((byte)hVar4 & 0x40) != 0) {
      uVar22 = 0;
      hb_buffer_t::_set_glyph_flags(phVar10,2,uVar17,uVar16 + 1,'\0');
      goto LAB_0040b8ee;
    }
LAB_0040b8ec:
    uVar22 = 0;
  }
  else {
    iVar27 = iVar27 + -1;
    if ((int)uVar37 < iVar27) {
      bVar34 = bVar2 >> 5;
      uVar30 = 1;
      bVar38 = true;
      local_8c = 0;
      uVar16 = uVar37;
LAB_0040b32a:
      do {
        uVar21 = (ulong)(uVar16 + 1);
        *(uint *)(param_1 + 8) = uVar16 + 1;
        lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x70);
        uVar16 = *(uint *)(param_1 + 0x18);
        uVar36 = *(ushort *)(lVar9 + 0xc + uVar21 * 0x14);
        if ((uVar16 & uVar36 & 0xe) != 0) goto LAB_0040b31d;
        puVar35 = (uint *)(lVar9 + uVar21 * 0x14);
        if ((uVar36 & 8) == 0) {
LAB_0040b366:
          lVar1 = lVar9 + uVar21 * 0x14;
          uVar36 = *(ushort *)(lVar9 + 0x10 + uVar21 * 0x14);
          uVar24 = 0;
          bVar19 = false;
          if (((((uVar36 & 0x20) != 0) && (bVar19 = false, (*(byte *)(lVar1 + 0xc) & 0x10) == 0)) &&
              ((*(char *)(param_1 + 0x20) != '\0' || (bVar19 = false, (uVar36 & 0x21f) != 0x201))))
             && ((*(char *)(param_1 + 0x21) != '\0' || (bVar19 = false, (uVar36 & 0x11f) != 0x101)))
             ) {
            bVar19 = (uVar36 & 0x40) == 0 || *(char *)(param_1 + 0x22) != '\0';
          }
          puVar23 = *(ushort **)(param_1 + 0x38);
          if (puVar23 != (ushort *)0x0) {
            uVar24 = *puVar23 << 8 | *puVar23 >> 8;
          }
          if (((*(uint *)(lVar9 + 4 + uVar21 * 0x14) & *(uint *)(param_1 + 0x1c)) != 0) &&
             ((*(char *)(param_1 + 0x24) == '\0' ||
              (*(char *)(param_1 + 0x24) == *(char *)(lVar1 + 0xf))))) {
            if (*(code **)(param_1 + 0x28) == (code *)0x0) {
              if (bVar19) goto LAB_0040b31d;
            }
            else {
              cVar12 = (**(code **)(param_1 + 0x28))(puVar35,uVar24,*(undefined8 *)(param_1 + 0x30))
              ;
              if (cVar12 == '\0') goto LAB_0040b314;
              puVar23 = *(ushort **)(param_1 + 0x38);
            }
            if (puVar23 != (ushort *)0x0) {
              *(ushort **)(param_1 + 0x38) = puVar23 + 1;
            }
            uVar16 = *(uint *)(param_1 + 8);
            __ptr[uVar30] = uVar16;
            bVar3 = *(byte *)(*(long *)(lVar7 + 0x70) + 0xe + (ulong)uVar16 * 0x14);
            bVar13 = bVar3 & 0xf;
            if ((bVar3 & 0x10) != 0) {
              bVar13 = 0;
            }
            if (bVar2 < 0x20 || bVar11 == 0) {
              if ((bVar3 >> 5 != bVar34) && (0x1f < bVar3)) {
joined_r0x0040b527:
                if (bVar13 != 0) break;
              }
            }
            else if ((bVar34 != bVar3 >> 5) || (bVar11 != bVar13)) {
              if (local_8c == 0) {
                lVar9 = *(long *)(lVar7 + 0x78);
                uVar21 = (ulong)*(uint *)(lVar7 + 100);
                do {
                  uVar21 = uVar21 - 1;
                  if (uVar21 == 0xffffffffffffffff) goto LAB_0040b61b;
                  uVar26 = uVar21 & 0xffffffff;
                  bVar3 = *(byte *)(lVar9 + 0xe + uVar26 * 0x14);
                  if (bVar3 >> 5 != bVar34) goto LAB_0040b61b;
                } while (((bVar3 & 0x10) == 0) && ((bVar3 & 0xf) != 0));
                uVar36 = *(ushort *)(uVar26 * 0x14 + 0xc + lVar9);
                local_8c = 2;
                if ((*(uint *)(param_1 + 0x18) & (uint)uVar36 & 0xe) == 0) {
                  if ((uVar36 & 8) != 0) {
                    uVar21 = hb_ot_apply_context_t::match_properties_mark
                                       (*(hb_ot_apply_context_t **)(param_1 + 0x10),
                                        *(uint *)(lVar9 + uVar26 * 0x14),(uint)uVar36,
                                        *(uint *)(param_1 + 0x18));
                    bVar13 = (byte)uVar21;
                    goto joined_r0x0040b527;
                  }
                  break;
                }
              }
              else if (local_8c == 1) break;
            }
            if (uVar30 + 1 == uVar22) goto LAB_0040b626;
            uVar30 = uVar30 + 1;
            bVar38 = uVar30 < uVar22;
            uVar16 = *(uint *)(param_1 + 8);
            iVar27 = *(int *)(param_1 + 0x40) + -1;
            if (iVar27 <= (int)uVar16) break;
            goto LAB_0040b32a;
          }
LAB_0040b314:
          if (!bVar19) break;
        }
        else if ((uVar16 & 0x10) == 0) {
          if (((uVar16 & 0xff00) == 0) || ((uVar16 & 0xff00) == (uVar36 & 0xff00)))
          goto LAB_0040b366;
        }
        else {
          uVar18 = GDEF::accelerator_t::mark_set_covers
                             (*(accelerator_t **)(*(long *)(param_1 + 0x10) + 0xf8),uVar16 >> 0x10,
                              *puVar35);
          if ((char)uVar18 != '\0') goto LAB_0040b366;
        }
LAB_0040b31d:
        uVar16 = *(uint *)(param_1 + 8);
      } while ((int)uVar16 < iVar27);
LAB_0040b61b:
      if (!bVar38) goto LAB_0040b626;
    }
LAB_0040b8de:
    lVar33 = *(long *)(param_1 + 0xa0);
    bVar2 = *(byte *)(lVar33 + 0x18);
joined_r0x0040b93b:
    if ((bVar2 & 0x40) == 0) goto LAB_0040b8ec;
    uVar16 = *(uint *)(lVar33 + 0x5c);
    uVar22 = (ulong)uVar16;
    if (*(uint *)(lVar33 + 0x60) < uVar37) {
      uVar37 = *(uint *)(lVar33 + 0x60);
    }
    *(byte *)(lVar33 + 0xc0) = *(byte *)(lVar33 + 0xc0) | 0x20;
    if (uVar37 <= uVar16) goto LAB_0040b8ec;
    lVar33 = *(long *)(lVar33 + 0x70);
    uVar31 = ~uVar22;
    if ((uVar37 - uVar16 & 3) != 0) {
      pbVar32 = (byte *)(lVar33 + uVar22 * 0x14 + 4);
      lVar28 = 0;
      do {
        *pbVar32 = *pbVar32 | 2;
        lVar28 = lVar28 + -1;
        pbVar32 = pbVar32 + 0x14;
      } while (-lVar28 != ((ulong)(uVar37 - uVar16) & 3));
      uVar22 = uVar22 - lVar28;
    }
    if (uVar31 + uVar37 < 3) goto LAB_0040b8ec;
    lVar28 = uVar37 - uVar22;
    pbVar32 = (byte *)(lVar33 + uVar22 * 0x14 + 0x40);
    uVar22 = 0;
    do {
      pbVar32[-0x3c] = pbVar32[-0x3c] | 2;
      pbVar32[-0x28] = pbVar32[-0x28] | 2;
      pbVar32[-0x14] = pbVar32[-0x14] | 2;
      *pbVar32 = *pbVar32 | 2;
      pbVar32 = pbVar32 + 0x50;
      lVar28 = lVar28 + -4;
    } while (lVar28 != 0);
  }
LAB_0040b8ee:
  if (__ptr != local_48) {
    free(__ptr);
  }
LAB_0040b8ff:
  return uVar22 & 0xffffffff;
}


