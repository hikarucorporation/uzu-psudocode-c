// Function : postprocess_glyphs_arabic
// Namespace: 
// Entry    : 00434070
// Prototype: undefined postprocess_glyphs_arabic(undefined8 param_1, hb_buffer_t * param_2, long param_3)
// Body     : 00434070 - 00434913


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* postprocess_glyphs_arabic(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl postprocess_glyphs_arabic(undefined8 param_1,hb_buffer_t *param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined8 *puVar26;
  int iVar27;
  ulong uVar28;
  long lVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  bool bVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  int local_b8;
  int local_ac;
  ulong local_a0;
  
  if (((byte)param_2[0xc3] & 1) != 0) {
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 != 5) {
      uVar12 = *(uint *)(param_2 + 0x60);
      if (1 < uVar12) {
        puVar18 = *(undefined8 **)(param_2 + 0x70);
        uVar19 = (ulong)(uVar12 - 1);
        puVar26 = (undefined8 *)((long)puVar18 + uVar19 * 0x14);
        uVar15 = 0;
        do {
          uVar19 = uVar19 - 1;
          uVar3 = *(undefined4 *)(puVar26 + 2);
          uVar16 = *puVar26;
          uVar8 = puVar26[1];
          *(undefined4 *)(puVar26 + 2) = *(undefined4 *)(puVar18 + 2);
          uVar9 = puVar18[1];
          *puVar26 = *puVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar18 + 2) = uVar3;
          *puVar18 = uVar16;
          puVar18[1] = uVar8;
          uVar15 = uVar15 + 1;
          puVar18 = (undefined8 *)((long)puVar18 + 0x14);
          puVar26 = (undefined8 *)((long)puVar26 + -0x14);
        } while (uVar15 < (uVar19 & 0xffffffff));
      }
      if (param_2[0x5b] != (hb_buffer_t)0x0) {
        if (*(uint *)(param_2 + 0x60) < uVar12) {
          uVar12 = *(uint *)(param_2 + 0x60);
        }
        if (1 < uVar12) {
          puVar18 = *(undefined8 **)(param_2 + 0x80);
          uVar19 = (ulong)(uVar12 - 1);
          puVar26 = (undefined8 *)((long)puVar18 + uVar19 * 0x14);
          uVar15 = 0;
          do {
            uVar19 = uVar19 - 1;
            uVar3 = *(undefined4 *)(puVar26 + 2);
            uVar16 = *puVar26;
            uVar8 = puVar26[1];
            *(undefined4 *)(puVar26 + 2) = *(undefined4 *)(puVar18 + 2);
            uVar9 = puVar18[1];
            *puVar26 = *puVar18;
            puVar26[1] = uVar9;
            *(undefined4 *)(puVar18 + 2) = uVar3;
            *puVar18 = uVar16;
            puVar18[1] = uVar8;
            uVar15 = uVar15 + 1;
            puVar18 = (undefined8 *)((long)puVar18 + 0x14);
            puVar26 = (undefined8 *)((long)puVar26 + -0x14);
          } while (uVar15 < (uVar19 & 0xffffffff));
        }
      }
    }
    uVar12 = *(int *)(param_3 + 0x28) >> 0x1f | 1;
    bVar10 = true;
    iVar13 = 0;
    bVar11 = false;
    do {
      do {
        uVar25 = *(uint *)(param_2 + 0x60);
        uVar32 = uVar25 + iVar13;
        if (uVar25 != 0) {
          lVar4 = *(long *)(param_2 + 0x70);
          lVar5 = *(long *)(param_2 + 0x80);
          local_a0 = (ulong)uVar32;
          uVar22 = uVar25;
LAB_0043420f:
          uVar19 = (ulong)(uVar22 - 1);
          if ((*(byte *)(lVar4 + 0x13 + uVar19 * 0x14) & 0xfe) == 8) {
            iVar24 = 0;
            iVar36 = 0;
            iVar34 = 0;
            uVar19 = (ulong)uVar22;
            do {
              uVar15 = (ulong)((int)uVar19 - 1);
              if ((*(byte *)(lVar4 + 0x13 + uVar15 * 0x14) & 0xfe) != 8) {
                iVar30 = 0;
                uVar20 = uVar19;
                uVar15 = uVar19;
                goto LAB_00434348;
              }
              lVar6 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
              if (lVar6 == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = *(undefined8 *)(lVar6 + 0x28);
              }
              iVar14 = (**(code **)(*(long *)(param_3 + 0x90) + 0x48))
                                 (param_3,*(undefined8 *)(param_3 + 0x98),
                                  *(undefined4 *)(lVar4 + uVar15 * 0x14),uVar16);
              bVar37 = *(char *)(lVar4 + uVar15 * 0x14 + 0x13) != '\b';
              iVar27 = iVar14;
              iVar30 = 0;
              if (!bVar37) {
                iVar27 = 0;
                iVar30 = iVar14;
              }
              iVar34 = iVar34 + iVar30;
              iVar36 = iVar36 + iVar27;
              iVar24 = iVar24 + (uint)bVar37;
              iVar30 = 0;
              uVar31 = 0;
              uVar19 = uVar15;
              uVar20 = 0;
            } while (uVar15 != 0);
            goto LAB_0043437c;
          }
          if (bVar11) {
            puVar26 = (undefined8 *)(lVar4 + uVar19 * 0x14);
            local_a0 = (ulong)((int)local_a0 - 1);
            lVar6 = local_a0 * 0x14;
            *(undefined4 *)(lVar4 + 0x10 + lVar6) = *(undefined4 *)(puVar26 + 2);
            uVar16 = puVar26[1];
            *(undefined8 *)(lVar4 + lVar6) = *puVar26;
            ((undefined8 *)(lVar4 + lVar6))[1] = uVar16;
            *(undefined4 *)(lVar5 + 0x10 + lVar6) = *(undefined4 *)(lVar5 + 0x10 + uVar19 * 0x14);
            puVar26 = (undefined8 *)(lVar5 + uVar19 * 0x14);
            uVar16 = puVar26[1];
            *(undefined8 *)(lVar5 + lVar6) = *puVar26;
            ((undefined8 *)(lVar5 + lVar6))[1] = uVar16;
          }
          goto LAB_00434206;
        }
LAB_004347d3:
        if (!bVar10) {
          *(uint *)(param_2 + 0x60) = uVar32;
          goto LAB_0043482c;
        }
        bVar10 = false;
        bVar11 = true;
        uVar25 = uVar25 + iVar13;
      } while ((uVar25 == 0) || (uVar25 < *(uint *)(param_2 + 0x68)));
      uVar16 = hb_buffer_t::enlarge(param_2,uVar25);
      bVar10 = false;
    } while ((char)uVar16 != '\0');
LAB_0043482c:
    if (iVar2 != 5) {
      uVar12 = *(uint *)(param_2 + 0x60);
      if (1 < uVar12) {
        puVar18 = *(undefined8 **)(param_2 + 0x70);
        uVar19 = (ulong)(uVar12 - 1);
        puVar26 = (undefined8 *)((long)puVar18 + uVar19 * 0x14);
        uVar15 = 0;
        do {
          uVar19 = uVar19 - 1;
          uVar3 = *(undefined4 *)(puVar26 + 2);
          uVar16 = *puVar26;
          uVar8 = puVar26[1];
          *(undefined4 *)(puVar26 + 2) = *(undefined4 *)(puVar18 + 2);
          uVar9 = puVar18[1];
          *puVar26 = *puVar18;
          puVar26[1] = uVar9;
          *(undefined4 *)(puVar18 + 2) = uVar3;
          *puVar18 = uVar16;
          puVar18[1] = uVar8;
          uVar15 = uVar15 + 1;
          puVar18 = (undefined8 *)((long)puVar18 + 0x14);
          puVar26 = (undefined8 *)((long)puVar26 + -0x14);
        } while (uVar15 < (uVar19 & 0xffffffff));
      }
      if (param_2[0x5b] != (hb_buffer_t)0x0) {
        if (*(uint *)(param_2 + 0x60) < uVar12) {
          uVar12 = *(uint *)(param_2 + 0x60);
        }
        if (1 < uVar12) {
          puVar18 = *(undefined8 **)(param_2 + 0x80);
          uVar19 = (ulong)(uVar12 - 1);
          puVar26 = (undefined8 *)((long)puVar18 + uVar19 * 0x14);
          uVar15 = 0;
          do {
            uVar19 = uVar19 - 1;
            uVar3 = *(undefined4 *)(puVar26 + 2);
            uVar16 = *puVar26;
            uVar8 = puVar26[1];
            *(undefined4 *)(puVar26 + 2) = *(undefined4 *)(puVar18 + 2);
            uVar9 = puVar18[1];
            *puVar26 = *puVar18;
            puVar26[1] = uVar9;
            *(undefined4 *)(puVar18 + 2) = uVar3;
            *puVar18 = uVar16;
            puVar18[1] = uVar8;
            uVar15 = uVar15 + 1;
            puVar18 = (undefined8 *)((long)puVar18 + 0x14);
            puVar26 = (undefined8 *)((long)puVar26 + -0x14);
          } while (uVar15 < (uVar19 & 0xffffffff));
        }
      }
    }
  }
  return;
  while( true ) {
    iVar30 = iVar30 + *(int *)(lVar5 + uVar20 * 0x14);
    uVar20 = (ulong)(uVar31 - 1);
    if (uVar31 - 1 == 0) break;
LAB_00434348:
    uVar31 = (uint)uVar20;
    uVar15 = uVar15 - 1;
    uVar20 = uVar15 & 0xffffffff;
    if (((*(byte *)(lVar4 + 0x13 + uVar20 * 0x14) & 0xfe) == 8) ||
       (((uVar1 = *(ushort *)(lVar4 + uVar20 * 0x14 + 0x10), (uVar1 & 0x20) == 0 ||
         ((*(byte *)(lVar4 + 0xc + uVar20 * 0x14) & 0x10) != 0)) &&
        ((0x780fcccU >> (uVar1 & 0x1f) & 1) == 0)))) goto LAB_0043437a;
  }
  uVar31 = 0;
LAB_0043437a:
  uVar20 = uVar19;
LAB_0043437c:
  iVar30 = iVar30 - iVar34;
  iVar34 = iVar30 * uVar12;
  iVar36 = iVar36 * uVar12;
  local_b8 = 0;
  if ((0 < iVar36) && (local_b8 = 0, iVar36 < iVar34)) {
    local_b8 = iVar34 / iVar36 + -1;
  }
  iVar27 = local_b8 + 1;
  uVar7 = (uint)uVar20;
  if ((iVar27 * iVar36 < iVar34) && (0 < iVar24)) {
    iVar36 = (local_b8 + 2) * iVar36;
    local_ac = iVar36 - iVar34;
    if (local_ac == 0 || iVar36 < iVar34) {
      local_ac = 0;
    }
    else {
      local_ac = local_ac / (iVar27 * iVar24);
      iVar30 = 0;
    }
    local_b8 = iVar27;
    if (bVar10) goto LAB_004341ed;
LAB_00434428:
    uVar17 = *(uint *)(param_2 + 0x60);
    if (uVar22 <= *(uint *)(param_2 + 0x60)) {
      uVar17 = uVar22;
    }
    if (1 < uVar17 - uVar31) {
      param_2[0xc0] = (hb_buffer_t)((byte)param_2[0xc0] | 0x20);
      lVar6 = *(long *)(param_2 + 0x70);
      uVar41 = 0xffffffff;
      if (uVar17 != uVar31) {
        if (*(int *)(param_2 + 0x1c) == 2) {
          if (uVar31 < uVar17) {
            uVar15 = (ulong)uVar31;
            uVar19 = (ulong)uVar17;
            uVar33 = uVar19 - uVar15;
            uVar41 = 0xffffffff;
            if (8 < uVar33) {
              uVar28 = (ulong)((uint)uVar33 & 7);
              if (uVar28 == 0) {
                uVar28 = 8;
              }
              lVar29 = (uVar28 + uVar15) - uVar19;
              puVar21 = (uint *)(lVar6 + uVar15 * 0x14 + 0x94);
              uVar45 = 0xffffffff;
              uVar41 = 0xffffffff;
              uVar42 = 0xffffffff;
              uVar38 = 0xffffffff;
              uVar39 = 0xffffffff;
              uVar44 = 0xffffffff;
              uVar47 = 0xffffffff;
              uVar40 = 0xffffffff;
              do {
                uVar43 = -(uint)((int)(uVar41 ^ _DAT_006524b0) <
                                (int)(puVar21[-0x23] ^ _DAT_006524b0));
                uVar46 = -(uint)((int)(uVar42 ^ _UNK_006524b4) <
                                (int)(puVar21[-0x1e] ^ _UNK_006524b4));
                uVar48 = -(uint)((int)(uVar45 ^ _UNK_006524b8) <
                                (int)(puVar21[-0x19] ^ _UNK_006524b8));
                uVar49 = -(uint)((int)(uVar38 ^ _UNK_006524bc) <
                                (int)(puVar21[-0x14] ^ _UNK_006524bc));
                uVar41 = ~uVar43 & puVar21[-0x23] | uVar41 & uVar43;
                uVar42 = ~uVar46 & puVar21[-0x1e] | uVar42 & uVar46;
                uVar45 = ~uVar48 & puVar21[-0x19] | uVar45 & uVar48;
                uVar38 = ~uVar49 & puVar21[-0x14] | uVar38 & uVar49;
                uVar43 = -(uint)((int)(uVar44 ^ _DAT_006524b0) <
                                (int)(puVar21[-0xf] ^ _DAT_006524b0));
                uVar46 = -(uint)((int)(uVar47 ^ _UNK_006524b4) < (int)(puVar21[-10] ^ _UNK_006524b4)
                                );
                uVar48 = -(uint)((int)(uVar39 ^ _UNK_006524b8) < (int)(puVar21[-5] ^ _UNK_006524b8))
                ;
                uVar49 = -(uint)((int)(uVar40 ^ _UNK_006524bc) < (int)(*puVar21 ^ _UNK_006524bc));
                uVar44 = ~uVar43 & puVar21[-0xf] | uVar44 & uVar43;
                uVar47 = ~uVar46 & puVar21[-10] | uVar47 & uVar46;
                uVar39 = ~uVar48 & puVar21[-5] | uVar39 & uVar48;
                uVar40 = ~uVar49 & *puVar21 | uVar40 & uVar49;
                puVar21 = puVar21 + 0x28;
                lVar29 = lVar29 + 8;
              } while (lVar29 != 0);
              uVar15 = uVar15 + (uVar33 - uVar28);
              uVar43 = -(uint)((int)(uVar41 ^ _DAT_006524b0) < (int)(uVar44 ^ _DAT_006524b0));
              uVar46 = -(uint)((int)(uVar42 ^ _UNK_006524b4) < (int)(uVar47 ^ _UNK_006524b4));
              uVar48 = -(uint)((int)(uVar45 ^ _UNK_006524b8) < (int)(uVar39 ^ _UNK_006524b8));
              uVar49 = -(uint)((int)(uVar38 ^ _UNK_006524bc) < (int)(uVar40 ^ _UNK_006524bc));
              uVar44 = ~uVar43 & uVar44 | uVar41 & uVar43;
              uVar47 = ~uVar46 & uVar47 | uVar42 & uVar46;
              uVar45 = ~uVar48 & uVar39 | uVar45 & uVar48;
              uVar38 = ~uVar49 & uVar40 | uVar38 & uVar49;
              uVar41 = -(uint)((int)(uVar44 ^ _DAT_006524b0) < (int)(uVar45 ^ _DAT_006524b0));
              uVar42 = -(uint)((int)(uVar47 ^ _UNK_006524b4) < (int)(uVar38 ^ _UNK_006524b4));
              uVar41 = ~uVar41 & uVar45 | uVar44 & uVar41;
              uVar42 = ~uVar42 & uVar38 | uVar47 & uVar42;
              uVar45 = -(uint)((int)(uVar41 ^ _DAT_006524b0) < (int)(uVar42 ^ _DAT_006524b0));
              uVar41 = ~uVar45 & uVar42 | uVar41 & uVar45;
            }
            lVar29 = uVar19 - uVar15;
            puVar21 = (uint *)(lVar6 + uVar15 * 0x14 + 8);
            do {
              if (*puVar21 < uVar41) {
                uVar41 = *puVar21;
              }
              puVar21 = puVar21 + 5;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
          }
        }
        else {
          uVar41 = *(uint *)(lVar6 + 8 + (ulong)uVar31 * 0x14);
          uVar42 = *(uint *)(lVar6 + 8 + (ulong)(uVar17 - 1) * 0x14);
          if (uVar42 < uVar41) {
            uVar41 = uVar42;
          }
        }
      }
      hb_buffer_t::_infos_set_glyph_flags(param_2,lVar6,uVar31,uVar17,uVar41,3);
    }
    if (uVar7 < uVar22) {
      iVar30 = iVar30 / 2;
      uVar19 = (ulong)uVar22;
      do {
        uVar19 = uVar19 - 1;
        lVar6 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
        if (lVar6 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined8 *)(lVar6 + 0x28);
        }
        iVar24 = (**(code **)(*(long *)(param_3 + 0x90) + 0x48))
                           (param_3,*(undefined8 *)(param_3 + 0x98),
                            *(undefined4 *)(lVar4 + uVar19 * 0x14),uVar16);
        lVar6 = uVar19 * 0x14;
        iVar36 = 1;
        if (*(char *)(lVar4 + 0x13 + lVar6) == '\t') {
          iVar36 = local_b8 + 1;
        }
        *(undefined4 *)(lVar5 + lVar6) = 0;
        if (iVar36 != 0) {
          puVar26 = (undefined8 *)(lVar4 + uVar19 * 0x14);
          puVar18 = (undefined8 *)(lVar6 + lVar5);
          iVar27 = 0;
          iVar34 = -1;
          do {
            iVar14 = local_ac;
            if (iVar27 == 0) {
              iVar14 = 0;
            }
            iVar23 = (iVar30 - iVar24) + iVar14;
            iVar35 = iVar30;
            if (iVar2 == 5) {
              iVar35 = iVar23;
            }
            *(int *)(lVar5 + uVar19 * 0x14 + 8) = iVar35;
            lVar6 = (ulong)(uint)((int)local_a0 + iVar34) * 0x14;
            *(undefined4 *)(lVar4 + 0x10 + lVar6) = *(undefined4 *)(puVar26 + 2);
            uVar16 = puVar26[1];
            *(undefined8 *)(lVar4 + lVar6) = *puVar26;
            ((undefined8 *)(lVar4 + lVar6))[1] = uVar16;
            *(undefined4 *)(lVar5 + 0x10 + lVar6) = *(undefined4 *)(puVar18 + 2);
            iVar30 = (iVar24 + iVar30) - iVar14;
            if (iVar2 == 5) {
              iVar30 = iVar23;
            }
            uVar16 = puVar18[1];
            *(undefined8 *)(lVar5 + lVar6) = *puVar18;
            ((undefined8 *)(lVar5 + lVar6))[1] = uVar16;
            iVar27 = iVar27 + 1;
            iVar34 = iVar34 + -1;
          } while (iVar36 != iVar27);
          local_a0 = (ulong)(uint)((int)local_a0 - iVar27);
        }
      } while (uVar20 < uVar19);
      uVar22 = uVar7 + 1;
      goto LAB_00434206;
    }
  }
  else {
    local_ac = 0;
    if (!bVar10) goto LAB_00434428;
LAB_004341ed:
    iVar13 = iVar13 + local_b8 * iVar24;
  }
  uVar22 = uVar7 + 1;
LAB_00434206:
  uVar22 = uVar22 - 1;
  if (uVar22 == 0) goto LAB_004347d3;
  goto LAB_0043420f;
}


