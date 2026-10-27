// Function : apply
// Namespace: OT:Rule_OT__Layout__SmallTypes_
// Entry    : 0040d400
// Prototype: undefined8 apply(ushort * param_1, long param_2, undefined8 param_3, undefined8 param_4)
// Body     : 0040d400 - 0040dc30


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::Rule<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*, OT::ContextApplyLookupContext
   const&) const */

undefined8 __cdecl
OT::Rule<OT::Layout::SmallTypes>::apply
          (ushort *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  hb_buffer_t *this;
  char cVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined4 *__ptr;
  byte bVar10;
  bool bVar11;
  ushort *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  byte bVar15;
  ushort uVar16;
  ulong uVar17;
  ushort uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  int local_90;
  int local_8c;
  undefined4 local_48 [6];
  
  uVar3 = *param_1;
  uVar18 = uVar3 << 8 | uVar3 >> 8;
  uVar22 = (ulong)uVar18;
  uVar13 = 0;
  if (uVar3 != 0) {
    uVar13 = uVar22 * 2 - 2 & 0xffffffff;
  }
  if (0x40 < uVar18) {
    return 0;
  }
  uVar3 = param_1[1];
  if (uVar18 < 5) {
    __ptr = local_48;
  }
  else {
    __ptr = malloc(uVar22 << 2);
    if (__ptr == (undefined4 *)0x0) {
      return 0;
    }
  }
  lVar4 = *(long *)(param_2 + 0xa0);
  uVar7 = *(uint *)(lVar4 + 0x5c);
  uVar24 = (ulong)uVar7;
  *(uint *)(param_2 + 8) = uVar7;
  lVar21 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
  uVar25 = *(uint *)(lVar21 + 0x60);
  *(uint *)(param_2 + 0x40) = uVar25;
  if (*(uint *)(lVar21 + 0x5c) == uVar7) {
    uVar14 = *(undefined1 *)(*(long *)(lVar21 + 0x70) + 0xf + uVar24 * 0x14);
  }
  else {
    uVar14 = 0;
  }
  if (*(char *)(param_2 + 0x23) == '\0') {
    uVar14 = 0;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar14;
  *(undefined8 *)(param_2 + 0x28) = param_3;
  *(undefined8 *)(param_2 + 0x30) = param_4;
  *(ushort **)(param_2 + 0x38) = param_1 + 2;
  bVar1 = *(byte *)(*(long *)(lVar4 + 0x70) + 0xe + uVar24 * 0x14);
  bVar10 = bVar1 & 0xf;
  if ((bVar1 & 0x10) != 0) {
    bVar10 = 0;
  }
  if (uVar18 < 2) {
LAB_0040d920:
    uVar26 = *(int *)(param_2 + 8) + 1;
    *__ptr = *(undefined4 *)(lVar4 + 0x5c);
    this = *(hb_buffer_t **)(param_2 + 0xa0);
    uVar7 = *(uint *)(this + 0x5c);
    uVar24 = (ulong)uVar7;
    uVar25 = *(uint *)(this + 0x60);
    if (uVar26 <= *(uint *)(this + 0x60)) {
      uVar25 = uVar26;
    }
    if (1 < uVar25 - uVar7) {
      this[0xc0] = (hb_buffer_t)((byte)this[0xc0] | 0x20);
      lVar4 = *(long *)(this + 0x70);
      uVar31 = 0xffffffff;
      if (uVar25 != uVar7) {
        if (*(int *)(this + 0x1c) == 2) {
          if (uVar7 < uVar25) {
            uVar19 = (ulong)uVar25;
            uVar23 = uVar19 - uVar24;
            uVar31 = 0xffffffff;
            if (8 < uVar23) {
              uVar17 = (ulong)((uint)uVar23 & 7);
              uVar20 = 8;
              if (uVar17 != 0) {
                uVar20 = uVar17;
              }
              lVar21 = (uVar20 + uVar24) - uVar19;
              puVar27 = (uint *)(lVar4 + uVar24 * 0x14 + 0x94);
              uVar33 = 0xffffffff;
              uVar31 = 0xffffffff;
              uVar32 = 0xffffffff;
              uVar40 = 0xffffffff;
              uVar29 = 0xffffffff;
              uVar35 = 0xffffffff;
              uVar37 = 0xffffffff;
              uVar30 = 0xffffffff;
              do {
                uVar34 = -(uint)((int)(uVar31 ^ _DAT_006524b0) <
                                (int)(puVar27[-0x23] ^ _DAT_006524b0));
                uVar36 = -(uint)((int)(uVar32 ^ _UNK_006524b4) <
                                (int)(puVar27[-0x1e] ^ _UNK_006524b4));
                uVar38 = -(uint)((int)(uVar33 ^ _UNK_006524b8) <
                                (int)(puVar27[-0x19] ^ _UNK_006524b8));
                uVar39 = -(uint)((int)(uVar40 ^ _UNK_006524bc) <
                                (int)(puVar27[-0x14] ^ _UNK_006524bc));
                uVar31 = ~uVar34 & puVar27[-0x23] | uVar31 & uVar34;
                uVar32 = ~uVar36 & puVar27[-0x1e] | uVar32 & uVar36;
                uVar33 = ~uVar38 & puVar27[-0x19] | uVar33 & uVar38;
                uVar40 = ~uVar39 & puVar27[-0x14] | uVar40 & uVar39;
                uVar34 = -(uint)((int)(uVar35 ^ _DAT_006524b0) <
                                (int)(puVar27[-0xf] ^ _DAT_006524b0));
                uVar36 = -(uint)((int)(uVar37 ^ _UNK_006524b4) < (int)(puVar27[-10] ^ _UNK_006524b4)
                                );
                uVar38 = -(uint)((int)(uVar29 ^ _UNK_006524b8) < (int)(puVar27[-5] ^ _UNK_006524b8))
                ;
                uVar39 = -(uint)((int)(uVar30 ^ _UNK_006524bc) < (int)(*puVar27 ^ _UNK_006524bc));
                uVar35 = ~uVar34 & puVar27[-0xf] | uVar35 & uVar34;
                uVar37 = ~uVar36 & puVar27[-10] | uVar37 & uVar36;
                uVar29 = ~uVar38 & puVar27[-5] | uVar29 & uVar38;
                uVar30 = ~uVar39 & *puVar27 | uVar30 & uVar39;
                puVar27 = puVar27 + 0x28;
                lVar21 = lVar21 + 8;
              } while (lVar21 != 0);
              uVar24 = (uVar23 - uVar20) + uVar24;
              uVar34 = -(uint)((int)(uVar31 ^ _DAT_006524b0) < (int)(uVar35 ^ _DAT_006524b0));
              uVar36 = -(uint)((int)(uVar32 ^ _UNK_006524b4) < (int)(uVar37 ^ _UNK_006524b4));
              uVar38 = -(uint)((int)(uVar33 ^ _UNK_006524b8) < (int)(uVar29 ^ _UNK_006524b8));
              uVar39 = -(uint)((int)(uVar40 ^ _UNK_006524bc) < (int)(uVar30 ^ _UNK_006524bc));
              uVar35 = ~uVar34 & uVar35 | uVar31 & uVar34;
              uVar37 = ~uVar36 & uVar37 | uVar32 & uVar36;
              uVar32 = ~uVar38 & uVar29 | uVar33 & uVar38;
              uVar40 = ~uVar39 & uVar30 | uVar40 & uVar39;
              uVar31 = -(uint)((int)(uVar35 ^ _DAT_006524b0) < (int)(uVar32 ^ _DAT_006524b0));
              uVar33 = -(uint)((int)(uVar37 ^ _UNK_006524b4) < (int)(uVar40 ^ _UNK_006524b4));
              uVar32 = ~uVar31 & uVar32 | uVar35 & uVar31;
              uVar33 = ~uVar33 & uVar40 | uVar37 & uVar33;
              uVar31 = -(uint)((int)(uVar32 ^ _DAT_006524b0) < (int)(_DAT_006524b0 ^ uVar33));
              uVar31 = ~uVar31 & uVar33 | uVar32 & uVar31;
            }
            lVar21 = uVar19 - uVar24;
            puVar27 = (uint *)(lVar4 + uVar24 * 0x14 + 8);
            do {
              if (*puVar27 < uVar31) {
                uVar31 = *puVar27;
              }
              puVar27 = puVar27 + 5;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
        }
        else {
          uVar31 = *(uint *)(lVar4 + 8 + uVar24 * 0x14);
          uVar32 = *(uint *)(lVar4 + 8 + (ulong)(uVar25 - 1) * 0x14);
          if (uVar32 < uVar31) {
            uVar31 = uVar32;
          }
        }
      }
      hb_buffer_t::_infos_set_glyph_flags(this,lVar4,uVar7,uVar25,uVar31,3);
    }
    apply_lookup(param_2,uVar22,__ptr,(uint)(ushort)(uVar3 << 8 | uVar3 >> 8),
                 (long)param_1 + uVar13 + 4,(ulong)uVar26);
    uVar9 = CONCAT71((uint7)(uint3)(uVar26 >> 8),1);
  }
  else {
    local_90 = uVar25 - 1;
    if ((int)uVar7 < local_90) {
      bVar15 = bVar1 >> 5;
      uVar19 = 1;
      bVar28 = true;
      local_8c = 0;
LAB_0040d58e:
      do {
        uVar7 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar7;
        *(uint *)(param_2 + 8) = uVar7;
        lVar21 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0xa0) + 0x70);
        uVar7 = *(uint *)(param_2 + 0x18);
        uVar18 = *(ushort *)(lVar21 + 0xc + uVar24 * 0x14);
        if ((uVar7 & uVar18 & 0xe) != 0) goto LAB_0040d582;
        puVar27 = (uint *)(uVar24 * 0x14 + lVar21);
        if ((uVar18 & 8) == 0) {
LAB_0040d5ce:
          pbVar8 = (byte *)(uVar24 * 0x14 + 0xc + lVar21);
          uVar18 = *(ushort *)(lVar21 + 0x10 + uVar24 * 0x14);
          uVar16 = 0;
          bVar11 = false;
          if (((((uVar18 & 0x20) != 0) && (bVar11 = false, (*pbVar8 & 0x10) == 0)) &&
              ((*(char *)(param_2 + 0x20) != '\0' || (bVar11 = false, (uVar18 & 0x21f) != 0x201))))
             && ((*(char *)(param_2 + 0x21) != '\0' || (bVar11 = false, (uVar18 & 0x11f) != 0x101)))
             ) {
            bVar11 = (uVar18 & 0x40) == 0 || *(char *)(param_2 + 0x22) != '\0';
          }
          puVar12 = *(ushort **)(param_2 + 0x38);
          if (puVar12 != (ushort *)0x0) {
            uVar16 = *puVar12 << 8 | *puVar12 >> 8;
          }
          if (((*(uint *)(lVar21 + 4 + uVar24 * 0x14) & *(uint *)(param_2 + 0x1c)) != 0) &&
             ((*(byte *)(param_2 + 0x24) == 0 || (*(byte *)(param_2 + 0x24) == pbVar8[3])))) {
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              if (bVar11) goto LAB_0040d582;
            }
            else {
              cVar5 = (**(code **)(param_2 + 0x28))(puVar27,uVar16,*(undefined8 *)(param_2 + 0x30));
              if (cVar5 == '\0') goto LAB_0040d576;
              puVar12 = *(ushort **)(param_2 + 0x38);
            }
            if (puVar12 != (ushort *)0x0) {
              *(ushort **)(param_2 + 0x38) = puVar12 + 1;
            }
            uVar7 = *(uint *)(param_2 + 8);
            __ptr[uVar19] = uVar7;
            bVar2 = *(byte *)(*(long *)(lVar4 + 0x70) + 0xe + (ulong)uVar7 * 0x14);
            bVar6 = bVar2 & 0xf;
            if ((bVar2 & 0x10) != 0) {
              bVar6 = 0;
            }
            if (bVar1 < 0x20 || bVar10 == 0) {
              if (((bVar2 >> 5 != bVar15) && (0x1f < bVar2)) && (bVar6 != 0)) {
                uVar25 = 0;
                goto LAB_0040d919;
              }
LAB_0040d799:
              uVar19 = uVar19 + 1;
              bVar28 = uVar19 < uVar22;
              if (uVar19 == uVar22) goto LAB_0040d920;
              uVar24 = (ulong)*(uint *)(param_2 + 8);
              uVar25 = *(uint *)(param_2 + 0x40);
              local_90 = uVar25 - 1;
              if ((int)*(uint *)(param_2 + 8) < local_90) goto LAB_0040d58e;
            }
            else {
              if ((bVar15 == bVar2 >> 5) && (bVar10 == bVar6)) goto LAB_0040d799;
              uVar25 = 0;
              if (local_8c != 0) {
                if (local_8c == 1) goto LAB_0040d919;
                goto LAB_0040d799;
              }
              lVar21 = *(long *)(lVar4 + 0x78);
              uVar24 = (ulong)*(uint *)(lVar4 + 100);
              do {
                uVar24 = uVar24 - 1;
                if (uVar24 == 0xffffffffffffffff) goto LAB_0040d919;
                uVar23 = uVar24 & 0xffffffff;
                bVar2 = *(byte *)(lVar21 + 0xe + uVar23 * 0x14);
                if (bVar2 >> 5 != bVar15) goto LAB_0040d919;
              } while (((bVar2 & 0x10) == 0) && ((bVar2 & 0xf) != 0));
              uVar18 = *(ushort *)(uVar23 * 0x14 + 0xc + lVar21);
              if ((*(uint *)(param_2 + 0x18) & (uint)uVar18 & 0xe) != 0) {
                local_8c = 2;
                goto LAB_0040d799;
              }
              if ((uVar18 & 8) != 0) {
                local_8c = 2;
                uVar24 = hb_ot_apply_context_t::match_properties_mark
                                   (*(hb_ot_apply_context_t **)(param_2 + 0x10),
                                    *(uint *)(lVar21 + uVar23 * 0x14),(uint)uVar18,
                                    *(uint *)(param_2 + 0x18));
                if ((char)uVar24 == '\0') goto LAB_0040d799;
              }
            }
LAB_0040d919:
            if (bVar28) goto LAB_0040d8ba;
            goto LAB_0040d920;
          }
LAB_0040d576:
          if (!bVar11) {
            if (!bVar28) goto LAB_0040d920;
            uVar25 = *(int *)(param_2 + 8) + 1;
            goto LAB_0040d8ba;
          }
        }
        else if ((uVar7 & 0x10) == 0) {
          if (((uVar7 & 0xff00) == 0) || ((uVar7 & 0xff00) == (uVar18 & 0xff00))) goto LAB_0040d5ce;
        }
        else {
          uVar9 = GDEF::accelerator_t::mark_set_covers
                            (*(accelerator_t **)(*(long *)(param_2 + 0x10) + 0xf8),uVar7 >> 0x10,
                             *puVar27);
          if ((char)uVar9 != '\0') goto LAB_0040d5ce;
        }
LAB_0040d582:
        uVar24 = (ulong)*(uint *)(param_2 + 8);
      } while ((int)*(uint *)(param_2 + 8) < local_90);
      if (!bVar28) goto LAB_0040d920;
      uVar25 = *(uint *)(param_2 + 0x40);
    }
LAB_0040d8ba:
    lVar4 = *(long *)(param_2 + 0xa0);
    if ((*(byte *)(lVar4 + 0x18) & 0x40) != 0) {
      uVar7 = *(uint *)(lVar4 + 0x5c);
      uVar13 = (ulong)uVar7;
      if (*(uint *)(lVar4 + 0x60) < uVar25) {
        uVar25 = *(uint *)(lVar4 + 0x60);
      }
      *(byte *)(lVar4 + 0xc0) = *(byte *)(lVar4 + 0xc0) | 0x20;
      if (uVar7 < uVar25) {
        lVar4 = *(long *)(lVar4 + 0x70);
        uVar22 = ~uVar13;
        if ((uVar25 - uVar7 & 3) != 0) {
          pbVar8 = (byte *)(lVar4 + uVar13 * 0x14 + 4);
          lVar21 = 0;
          do {
            *pbVar8 = *pbVar8 | 2;
            lVar21 = lVar21 + -1;
            pbVar8 = pbVar8 + 0x14;
          } while (-lVar21 != ((ulong)(uVar25 - uVar7) & 3));
          uVar13 = uVar13 - lVar21;
        }
        if (2 < uVar22 + uVar25) {
          lVar21 = uVar25 - uVar13;
          pbVar8 = (byte *)(lVar4 + uVar13 * 0x14 + 0x40);
          do {
            pbVar8[-0x3c] = pbVar8[-0x3c] | 2;
            pbVar8[-0x28] = pbVar8[-0x28] | 2;
            pbVar8[-0x14] = pbVar8[-0x14] | 2;
            *pbVar8 = *pbVar8 | 2;
            pbVar8 = pbVar8 + 0x50;
            uVar9 = 0;
            lVar21 = lVar21 + -4;
          } while (lVar21 != 0);
          goto LAB_0040db77;
        }
      }
    }
    uVar9 = 0;
  }
LAB_0040db77:
  if (__ptr != local_48) {
    free(__ptr);
  }
  return uVar9;
}


