// Function : apply_cached_to<OT::ContextFormat3>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 0040bf10
// Prototype: ulong apply_cached_to<OT::ContextFormat3>(long param_1, long param_2)
// Body     : 0040bf10 - 0040bf14


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat3>(void const*,
   OT::hb_ot_apply_context_t*) */

ulong __cdecl
OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat3>
          (long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  hb_buffer_t *this;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte bVar12;
  ushort *puVar13;
  byte bVar14;
  ushort uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 uVar20;
  ulong uVar21;
  Coverage *this_00;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
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
  undefined4 *puStack_80;
  int iStack_74;
  ulong uStack_68;
  undefined4 auStack_48 [6];
  
  uVar8 = *(ushort *)(param_1 + 6);
  if (uVar8 == 0) {
    this_00 = (Coverage *)&_hb_NullPool;
  }
  else {
    this_00 = (Coverage *)((ulong)(ushort)(uVar8 << 8 | uVar8 >> 8) + param_1);
  }
  lVar4 = *(long *)(param_2 + 0xa0);
  lVar19 = *(long *)(lVar4 + 0x70);
  uVar26 = *(uint *)(lVar4 + 0x5c);
  uVar21 = (ulong)uVar26;
  uVar16 = uVar21 * 5;
  uVar9 = Layout::Common::Coverage::get_coverage(this_00,*(uint *)(lVar19 + uVar21 * 0x14));
  if ((uVar9 == 0xffffffff) ||
     (uVar8 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8, 0x40 < uVar8)) {
LAB_0040bf80:
    uVar16 = 0;
    goto LAB_0040bf82;
  }
  uVar3 = *(ushort *)(param_1 + 4);
  uVar23 = (ulong)uVar8;
  if (uVar8 < 5) {
    puStack_80 = auStack_48;
  }
  else {
    puStack_80 = malloc(uVar23 * 4);
    if (puStack_80 == (undefined4 *)0x0) goto LAB_0040bf80;
  }
  *(uint *)(param_2 + 8) = uVar26;
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0xa0);
  uVar9 = *(uint *)(lVar5 + 0x60);
  *(uint *)(param_2 + 0x40) = uVar9;
  uVar20 = 0;
  if (*(uint *)(lVar5 + 0x5c) == uVar26) {
    uVar20 = *(undefined1 *)(*(long *)(lVar5 + 0x70) + 0xf + uVar21 * 0x14);
  }
  if (*(char *)(param_2 + 0x23) == '\0') {
    uVar20 = 0;
  }
  *(undefined1 *)(param_2 + 0x24) = uVar20;
  *(code **)(param_2 + 0x28) = match_coverage;
  *(long *)(param_2 + 0x30) = param_1;
  *(long *)(param_2 + 0x38) = param_1 + 8;
  bVar1 = *(byte *)(lVar19 + 0xe + uVar21 * 0x14);
  bVar12 = bVar1 & 0xf;
  if ((bVar1 & 0x10) != 0) {
    bVar12 = 0;
  }
  if (uVar8 < 2) {
LAB_0040c408:
    uVar27 = *(int *)(param_2 + 8) + 1;
    *puStack_80 = *(undefined4 *)(lVar4 + 0x5c);
    this = *(hb_buffer_t **)(param_2 + 0xa0);
    uVar26 = *(uint *)(this + 0x5c);
    uVar21 = (ulong)uVar26;
    uVar9 = *(uint *)(this + 0x60);
    if (uVar27 <= *(uint *)(this + 0x60)) {
      uVar9 = uVar27;
    }
    if (1 < uVar9 - uVar26) {
      this[0xc0] = (hb_buffer_t)((byte)this[0xc0] | 0x20);
      lVar4 = *(long *)(this + 0x70);
      uVar31 = 0xffffffff;
      if (uVar9 != uVar26) {
        if (*(int *)(this + 0x1c) == 2) {
          if (uVar26 < uVar9) {
            uVar16 = (ulong)uVar9;
            uVar24 = uVar16 - uVar21;
            uVar31 = 0xffffffff;
            if (8 < uVar24) {
              uVar18 = (ulong)((uint)uVar24 & 7);
              uVar17 = 8;
              if (uVar18 != 0) {
                uVar17 = uVar18;
              }
              lVar19 = (uVar17 + uVar21) - uVar16;
              puVar22 = (uint *)(lVar4 + uVar21 * 0x14 + 0x94);
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
                                (int)(puVar22[-0x23] ^ _DAT_006524b0));
                uVar36 = -(uint)((int)(uVar32 ^ _UNK_006524b4) <
                                (int)(puVar22[-0x1e] ^ _UNK_006524b4));
                uVar38 = -(uint)((int)(uVar33 ^ _UNK_006524b8) <
                                (int)(puVar22[-0x19] ^ _UNK_006524b8));
                uVar39 = -(uint)((int)(uVar40 ^ _UNK_006524bc) <
                                (int)(puVar22[-0x14] ^ _UNK_006524bc));
                uVar31 = ~uVar34 & puVar22[-0x23] | uVar31 & uVar34;
                uVar32 = ~uVar36 & puVar22[-0x1e] | uVar32 & uVar36;
                uVar33 = ~uVar38 & puVar22[-0x19] | uVar33 & uVar38;
                uVar40 = ~uVar39 & puVar22[-0x14] | uVar40 & uVar39;
                uVar34 = -(uint)((int)(uVar35 ^ _DAT_006524b0) <
                                (int)(puVar22[-0xf] ^ _DAT_006524b0));
                uVar36 = -(uint)((int)(uVar37 ^ _UNK_006524b4) < (int)(puVar22[-10] ^ _UNK_006524b4)
                                );
                uVar38 = -(uint)((int)(uVar29 ^ _UNK_006524b8) < (int)(puVar22[-5] ^ _UNK_006524b8))
                ;
                uVar39 = -(uint)((int)(uVar30 ^ _UNK_006524bc) < (int)(*puVar22 ^ _UNK_006524bc));
                uVar35 = ~uVar34 & puVar22[-0xf] | uVar35 & uVar34;
                uVar37 = ~uVar36 & puVar22[-10] | uVar37 & uVar36;
                uVar29 = ~uVar38 & puVar22[-5] | uVar29 & uVar38;
                uVar30 = ~uVar39 & *puVar22 | uVar30 & uVar39;
                puVar22 = puVar22 + 0x28;
                lVar19 = lVar19 + 8;
              } while (lVar19 != 0);
              uVar21 = (uVar24 - uVar17) + uVar21;
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
            lVar19 = uVar16 - uVar21;
            puVar22 = (uint *)(lVar4 + uVar21 * 0x14 + 8);
            do {
              uVar32 = *puVar22;
              uVar16 = (ulong)uVar32;
              if (uVar32 < uVar31) {
                uVar31 = uVar32;
              }
              puVar22 = puVar22 + 5;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
        }
        else {
          uVar31 = *(uint *)(lVar4 + 8 + uVar21 * 0x14);
          uVar32 = *(uint *)(lVar4 + 8 + (ulong)(uVar9 - 1) * 0x14);
          if (uVar32 < uVar31) {
            uVar31 = uVar32;
          }
        }
      }
      hb_buffer_t::_infos_set_glyph_flags(this,lVar4,uVar26,uVar9,uVar31,3);
    }
    apply_lookup(param_2,uVar23,puStack_80,(uint)(ushort)(uVar3 << 8 | uVar3 >> 8),
                 param_1 + uVar23 * 2 + 6,(ulong)uVar27);
    uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
  }
  else {
    iVar25 = uVar9 - 1;
    if ((int)uVar26 < iVar25) {
      bVar14 = bVar1 >> 5;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uStack_68 = 1;
      bVar28 = true;
      iStack_74 = 0;
LAB_0040c0cd:
      do {
        uVar26 = (int)uVar21 + 1;
        uVar21 = (ulong)uVar26;
        *(uint *)(param_2 + 8) = uVar26;
        lVar19 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0xa0) + 0x70);
        uVar26 = *(uint *)(param_2 + 0x18);
        uVar8 = *(ushort *)(lVar19 + 0xc + uVar21 * 0x14);
        if ((uVar26 & uVar8 & 0xe) != 0) goto LAB_0040c0bf;
        puVar22 = (uint *)(uVar21 * 0x14 + lVar19);
        if ((uVar8 & 8) == 0) {
LAB_0040c113:
          pbVar10 = (byte *)(uVar21 * 0x14 + 0xc + lVar19);
          uVar8 = *(ushort *)(lVar19 + 0x10 + uVar21 * 0x14);
          uVar15 = 0;
          uVar16 = 0;
          if (((((uVar8 & 0x20) != 0) && (uVar16 = 0, (*pbVar10 & 0x10) == 0)) &&
              ((*(char *)(param_2 + 0x20) != '\0' || (uVar16 = 0, (uVar8 & 0x21f) != 0x201)))) &&
             ((*(char *)(param_2 + 0x21) != '\0' || (uVar16 = 0, (uVar8 & 0x11f) != 0x101)))) {
            uVar16 = (ulong)((uint)((uVar8 & 0x40) == 0 || *(char *)(param_2 + 0x22) != '\0') * 2);
          }
          puVar13 = *(ushort **)(param_2 + 0x38);
          if (puVar13 != (ushort *)0x0) {
            uVar15 = *puVar13 << 8 | *puVar13 >> 8;
          }
          if (((*(uint *)(lVar19 + 4 + uVar21 * 0x14) & *(uint *)(param_2 + 0x1c)) != 0) &&
             ((*(byte *)(param_2 + 0x24) == 0 || (*(byte *)(param_2 + 0x24) == pbVar10[3])))) {
            if (*(code **)(param_2 + 0x28) == (code *)0x0) {
              if ((int)uVar16 != 0) goto LAB_0040c0bf;
            }
            else {
              cVar6 = (**(code **)(param_2 + 0x28))(puVar22,uVar15,*(undefined8 *)(param_2 + 0x30));
              if (cVar6 == '\0') goto LAB_0040c0b7;
              puVar13 = *(ushort **)(param_2 + 0x38);
            }
            if (puVar13 != (ushort *)0x0) {
              *(ushort **)(param_2 + 0x38) = puVar13 + 1;
            }
            uVar26 = *(uint *)(param_2 + 8);
            puStack_80[uStack_68] = uVar26;
            bVar2 = *(byte *)(*(long *)(lVar4 + 0x70) + 0xe + (ulong)uVar26 * 0x14);
            bVar7 = bVar2 & 0xf;
            if ((bVar2 & 0x10) != 0) {
              bVar7 = 0;
            }
            if (bVar1 < 0x20 || bVar12 == 0) {
              if (((bVar2 >> 5 != bVar14) && (0x1f < bVar2)) && (bVar7 != 0)) {
                uVar9 = 0;
                if (!bVar28) goto LAB_0040c408;
                goto LAB_0040c3d7;
              }
LAB_0040c35e:
              uVar16 = 0;
              uStack_68 = uStack_68 + 1;
              bVar28 = uStack_68 < uVar23;
              if (uStack_68 == uVar23) goto LAB_0040c408;
              uVar21 = (ulong)*(uint *)(param_2 + 8);
              uVar9 = *(uint *)(param_2 + 0x40);
              iVar25 = uVar9 - 1;
              if ((int)*(uint *)(param_2 + 8) < iVar25) goto LAB_0040c0cd;
            }
            else {
              if ((bVar14 == bVar2 >> 5) && (bVar12 == bVar7)) goto LAB_0040c35e;
              uVar9 = 0;
              if (iStack_74 == 0) {
                lVar19 = *(long *)(lVar4 + 0x78);
                uVar16 = (ulong)*(uint *)(lVar4 + 100);
                do {
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0xffffffffffffffff) goto LAB_0040c3fe;
                  uVar21 = uVar16 & 0xffffffff;
                  bVar2 = *(byte *)(lVar19 + 0xe + uVar21 * 0x14);
                  if (bVar2 >> 5 != bVar14) goto LAB_0040c3fe;
                } while (((bVar2 & 0x10) == 0) && ((bVar2 & 0xf) != 0));
                uVar8 = *(ushort *)(lVar19 + uVar21 * 0x14 + 0xc);
                iStack_74 = 2;
                if (((*(uint *)(param_2 + 0x18) & (uint)uVar8 & 0xe) != 0) ||
                   (((uVar8 & 8) != 0 &&
                    (uVar16 = hb_ot_apply_context_t::match_properties_mark
                                        (*(hb_ot_apply_context_t **)(param_2 + 0x10),
                                         *(uint *)(lVar19 + uVar21 * 0x14),(uint)uVar8,
                                         *(uint *)(param_2 + 0x18)), (char)uVar16 == '\0'))))
                goto LAB_0040c35e;
              }
              else if (iStack_74 != 1) goto LAB_0040c35e;
            }
LAB_0040c3fe:
            uVar16 = 0;
            if (bVar28) goto LAB_0040c3d7;
            goto LAB_0040c408;
          }
LAB_0040c0b7:
          if ((int)uVar16 == 0) {
            if (!bVar28) goto LAB_0040c408;
            uVar9 = *(int *)(param_2 + 8) + 1;
            goto LAB_0040c3d7;
          }
        }
        else {
          uVar16 = uVar23;
          if ((uVar26 & 0x10) == 0) {
            if (((uVar26 & 0xff00) == 0) || ((uVar26 & 0xff00) == (uVar8 & 0xff00)))
            goto LAB_0040c113;
          }
          else {
            uVar11 = GDEF::accelerator_t::mark_set_covers
                               (*(accelerator_t **)(*(long *)(param_2 + 0x10) + 0xf8),uVar26 >> 0x10
                                ,*puVar22);
            if ((char)uVar11 != '\0') goto LAB_0040c113;
          }
        }
LAB_0040c0bf:
        uVar21 = (ulong)*(uint *)(param_2 + 8);
      } while ((int)*(uint *)(param_2 + 8) < iVar25);
      if (!bVar28) goto LAB_0040c408;
      uVar9 = *(uint *)(param_2 + 0x40);
    }
LAB_0040c3d7:
    lVar4 = *(long *)(param_2 + 0xa0);
    if ((*(byte *)(lVar4 + 0x18) & 0x40) != 0) {
      uVar26 = *(uint *)(lVar4 + 0x5c);
      uVar16 = (ulong)uVar26;
      if (*(uint *)(lVar4 + 0x60) < uVar9) {
        uVar9 = *(uint *)(lVar4 + 0x60);
      }
      *(byte *)(lVar4 + 0xc0) = *(byte *)(lVar4 + 0xc0) | 0x20;
      if (uVar26 < uVar9) {
        lVar4 = *(long *)(lVar4 + 0x70);
        uVar21 = ~uVar16;
        if ((uVar9 - uVar26 & 3) != 0) {
          pbVar10 = (byte *)(lVar4 + uVar16 * 0x14 + 4);
          lVar19 = 0;
          do {
            *pbVar10 = *pbVar10 | 2;
            lVar19 = lVar19 + -1;
            pbVar10 = pbVar10 + 0x14;
          } while (-lVar19 != ((ulong)(uVar9 - uVar26) & 3));
          uVar16 = uVar16 - lVar19;
        }
        if (2 < uVar21 + uVar9) {
          lVar19 = uVar9 - uVar16;
          pbVar10 = (byte *)(lVar4 + uVar16 * 0x14 + 0x40);
          uVar16 = 0;
          do {
            pbVar10[-0x3c] = pbVar10[-0x3c] | 2;
            pbVar10[-0x28] = pbVar10[-0x28] | 2;
            pbVar10[-0x14] = pbVar10[-0x14] | 2;
            *pbVar10 = *pbVar10 | 2;
            pbVar10 = pbVar10 + 0x50;
            lVar19 = lVar19 + -4;
          } while (lVar19 != 0);
          goto LAB_0040c65c;
        }
      }
    }
    uVar16 = 0;
  }
LAB_0040c65c:
  if (puStack_80 != auStack_48) {
    free(puStack_80);
  }
LAB_0040bf82:
  return uVar16 & 0xffffffff;
}


