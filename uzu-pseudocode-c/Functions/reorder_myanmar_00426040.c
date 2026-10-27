// Function : reorder_myanmar
// Namespace: 
// Entry    : 00426040
// Prototype: ulong reorder_myanmar(undefined8 param_1, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, long param_10, hb_buffer_t * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00426040 - 00426967


/* WARNING: Unknown calling convention: __cdecl */
/* reorder_myanmar(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

ulong __cdecl
reorder_myanmar(undefined8 param_1,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,long param_10,hb_buffer_t *param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  byte bVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar17;
  int iVar16;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  char cVar22;
  uint uVar23;
  ulong uVar24;
  char *pcVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  uint uVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar37;
  undefined1 uVar38;
  undefined4 uVar39;
  undefined8 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong local_70;
  
  uVar10 = 0;
  bVar8 = hb_buffer_t::message
                    (param_1,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,param_11,
                     param_10,"start reordering myanmar",param_12,param_13,param_14,uVar38);
  if (bVar8) {
    uVar14 = 0xb;
    lVar32 = 0xffffffff;
    uVar34 = 0xffffffff;
    uVar10 = hb_syllabic_insert_dotted_circles
                       (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2_00,param_3_00,param_4,
                        param_5,param_6,param_7,param_8,param_10,param_11,1,0xb,0xffffffff,
                        0xffffffff);
    uVar3 = *(uint *)(param_11 + 0x60);
    uVar36 = extraout_XMM0_Da_00;
    uVar37 = extraout_XMM0_Db_00;
    if (uVar3 != 0) {
      lVar32 = *(long *)(param_11 + 0x70);
      bVar9 = *(byte *)(lVar32 + 0xf);
      uVar15 = 0;
      do {
        if (uVar3 - 1 == uVar15) {
          uVar15 = (ulong)uVar3;
          break;
        }
        uVar15 = uVar15 + 1;
      } while (bVar9 == *(byte *)(lVar32 + 0xf + (uVar15 & 0xffffffff) * 0x14));
      local_70 = 0;
      do {
        uVar14 = uVar15 & 0xffffffff;
        uVar33 = (uint)uVar15;
        if ((bVar9 & 0xe) == 0) {
          uVar27 = (uint)local_70;
          uVar23 = uVar27 + 3;
          uVar35 = uVar27;
          if (((uVar33 < uVar23) || (*(char *)(lVar32 + 0x12 + local_70 * 0x14) != '\x0f')) ||
             (*(char *)(lVar32 + 0x12 + (ulong)(uVar27 + 1) * 0x14) != ' ')) {
LAB_004261b0:
            iVar17 = 0;
            iVar16 = 0;
            uVar23 = uVar27;
            if (uVar33 <= uVar27) goto LAB_00426177;
LAB_004261bb:
            pbVar11 = (byte *)(lVar32 + (ulong)uVar23 * 0x14 + 0x12);
            do {
              if ((((pbVar11[-6] & 0x20) == 0) && (*pbVar11 < 0x20)) &&
                 (uVar35 = uVar23, (1 << (*pbVar11 & 0x1f) & 0x48c06U) != 0)) break;
              uVar23 = uVar23 + 1;
              pbVar11 = pbVar11 + 0x14;
              uVar35 = uVar27;
            } while (uVar33 != uVar23);
            uVar23 = iVar17 + uVar27;
            if (uVar27 < uVar23) goto LAB_00426221;
LAB_00426183:
            uVar34 = local_70;
            if (uVar35 <= uVar27) goto LAB_0042618b;
LAB_004262c9:
            uVar23 = uVar35 - (int)uVar34;
            uVar19 = ~uVar34;
            if ((uVar23 & 7) != 0) {
              puVar21 = (undefined1 *)(lVar32 + uVar34 * 0x14 + 0x13);
              lVar12 = 0;
              do {
                *puVar21 = 3;
                lVar12 = lVar12 + -1;
                puVar21 = puVar21 + 0x14;
              } while (-lVar12 != ((ulong)uVar23 & 7));
              uVar34 = uVar34 - lVar12;
            }
            if (6 < uVar19 + uVar35) {
              lVar12 = uVar35 - uVar34;
              puVar21 = (undefined1 *)(lVar32 + uVar34 * 0x14 + 0x9f);
              do {
                puVar21[-0x8c] = 3;
                puVar21[-0x78] = 3;
                puVar21[-100] = 3;
                puVar21[-0x50] = 3;
                puVar21[-0x3c] = 3;
                puVar21[-0x28] = 3;
                puVar21[-0x14] = 3;
                *puVar21 = 3;
                puVar21 = puVar21 + 0xa0;
                lVar12 = lVar12 + -8;
              } while (lVar12 != 0);
            }
            uVar34 = (ulong)uVar35;
            if (uVar35 < uVar33) goto LAB_0042636a;
LAB_00426194:
            uVar35 = (uint)uVar34;
          }
          else {
            iVar17 = 3;
            iVar16 = 3;
            if (*(char *)(lVar32 + 0x12 + (ulong)(uVar27 + 2) * 0x14) != '\x04') goto LAB_004261b0;
            if (uVar23 < uVar33) goto LAB_004261bb;
LAB_00426177:
            uVar23 = iVar16 + uVar27;
            if (uVar23 <= uVar27) goto LAB_00426183;
LAB_00426221:
            uVar34 = local_70;
            if ((uVar23 - uVar27 & 7) != 0) {
              puVar21 = (undefined1 *)(lVar32 + local_70 * 0x14 + 0x13);
              lVar12 = 0;
              do {
                *puVar21 = 5;
                lVar12 = lVar12 + -1;
                puVar21 = puVar21 + 0x14;
              } while (-lVar12 != ((ulong)(uVar23 - uVar27) & 7));
              uVar34 = local_70 - lVar12;
            }
            if (6 < ~local_70 + (ulong)uVar23) {
              lVar12 = uVar23 - uVar34;
              puVar21 = (undefined1 *)(lVar32 + uVar34 * 0x14 + 0x9f);
              do {
                puVar21[-0x8c] = 5;
                puVar21[-0x78] = 5;
                puVar21[-100] = 5;
                puVar21[-0x50] = 5;
                puVar21[-0x3c] = 5;
                puVar21[-0x28] = 5;
                puVar21[-0x14] = 5;
                *puVar21 = 5;
                puVar21 = puVar21 + 0xa0;
                lVar12 = lVar12 + -8;
              } while (lVar12 != 0);
            }
            uVar34 = (ulong)uVar23;
            if (uVar23 < uVar35) goto LAB_004262c9;
LAB_0042618b:
            if (uVar33 <= (uint)uVar34) goto LAB_00426194;
LAB_0042636a:
            *(undefined1 *)(lVar32 + 0x13 + uVar34 * 0x14) = 4;
            uVar35 = (int)uVar34 + 1;
            uVar34 = (ulong)uVar35;
          }
          if (uVar35 < uVar33) {
            lVar12 = uVar14 - uVar34;
            uVar19 = uVar34 + 0xffffffff;
            pcVar25 = (char *)(lVar32 + uVar34 * 0x14 + 0x13);
            cVar22 = '\x05';
            do {
              cVar2 = pcVar25[-1];
              if (cVar2 == '\x16') {
                *pcVar25 = '\x02';
              }
              else if (cVar2 == '(') {
                *pcVar25 = *(char *)(lVar32 + 0x13 + (uVar19 & 0xffffffff) * 0x14);
              }
              else if (cVar2 == '$') {
                *pcVar25 = '\x03';
              }
              else if ((cVar22 == '\x05') && (cVar2 == '\x15')) {
LAB_0042640a:
                *pcVar25 = '\b';
                cVar22 = '\b';
              }
              else if (cVar22 == '\b') {
                if (cVar2 == '\t') {
                  *pcVar25 = '\a';
                  cVar22 = '\b';
                }
                else {
                  if (cVar2 == '\x15') goto LAB_0042640a;
                  *pcVar25 = '\t';
                  cVar22 = '\t';
                }
              }
              else {
                *pcVar25 = cVar22;
              }
              uVar19 = uVar19 + 1;
              pcVar25 = pcVar25 + 0x14;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          if (uVar27 + 1 < uVar33) {
            uVar35 = uVar27 + 2;
            uVar19 = (ulong)(uVar27 + 1);
            uVar34 = local_70;
            do {
              uVar26 = uVar19;
              uVar19 = uVar26;
              if (uVar27 < (uint)uVar26) {
                uVar19 = local_70;
              }
              uVar19 = uVar19 & 0xffffffff;
              uVar24 = uVar26;
              uVar23 = uVar35;
              do {
                if (uVar24 <= local_70) goto joined_r0x00426557;
                uVar24 = uVar24 - 1;
                uVar23 = uVar23 - 1;
              } while (*(byte *)(*(long *)(param_11 + 0x70) + 0x13 + uVar26 * 0x14) <
                       *(byte *)(*(long *)(param_11 + 0x70) + 0x13 + (uVar24 & 0xffffffff) * 0x14));
              uVar19 = (ulong)uVar23;
joined_r0x00426557:
              if (uVar26 != uVar19) {
                uVar23 = (int)uVar34 + 2;
                uVar13 = (uint)uVar19;
                if (1 < uVar23 - uVar13) {
                  hb_buffer_t::merge_clusters_impl(param_11,uVar13,uVar23);
                }
                lVar12 = *(long *)(param_11 + 0x70);
                uVar36 = *(undefined4 *)(lVar12 + 0x10 + uVar26 * 0x14);
                puVar30 = (undefined8 *)(lVar12 + uVar26 * 0x14);
                uVar5 = *puVar30;
                uVar6 = puVar30[1];
                lVar4 = uVar19 * 0x14;
                memmove((void *)(lVar12 + (ulong)(uVar13 + 1) * 0x14),(void *)(lVar12 + lVar4),
                        (ulong)((uint)uVar26 - uVar13) * 0x14);
                lVar12 = *(long *)(param_11 + 0x70);
                uVar39 = (undefined4)uVar5;
                uStack_84 = (undefined4)((ulong)uVar5 >> 0x20);
                uStack_80 = (undefined4)uVar6;
                uStack_7c = (undefined4)((ulong)uVar6 >> 0x20);
                puVar1 = (undefined4 *)(lVar12 + lVar4);
                *puVar1 = uVar39;
                puVar1[1] = uStack_84;
                puVar1[2] = uStack_80;
                puVar1[3] = uStack_7c;
                *(undefined4 *)(lVar12 + 0x10 + lVar4) = uVar36;
                uVar36 = uVar39;
                uVar37 = uStack_84;
                local_88 = uVar5;
              }
              uVar35 = uVar35 + 1;
              uVar19 = uVar26 + 1;
              uVar34 = uVar26;
            } while ((uint)(uVar26 + 1) < uVar33);
          }
          uVar34 = uVar15;
          if (uVar27 < uVar33) {
            uVar19 = local_70;
            uVar26 = uVar15;
            if ((uVar33 - uVar27 & 1) != 0) {
              uVar26 = local_70;
              if (*(char *)(lVar32 + 0x13 + local_70 * 0x14) != '\x02') {
                uVar26 = uVar15;
              }
              uVar19 = local_70 + 1;
            }
            uVar26 = uVar26 & 0xffffffff;
            if (~local_70 + uVar14 != 0) {
              pcVar25 = (char *)(uVar19 * 0x14 + 0x27 + lVar32);
              uVar24 = uVar26;
              do {
                uVar29 = uVar19 & 0xffffffff;
                if ((uint)uVar24 != uVar33) {
                  uVar29 = uVar24;
                }
                if (pcVar25[-0x14] == '\x02') {
                  uVar26 = uVar19 & 0xffffffff;
                  uVar24 = uVar29;
                }
                uVar27 = (int)uVar19 + 1;
                uVar35 = (uint)uVar24;
                uVar23 = uVar27;
                if (uVar35 != uVar33) {
                  uVar23 = uVar35;
                }
                if (*pcVar25 == '\x02') {
                  uVar26 = (ulong)uVar27;
                  uVar35 = uVar23;
                  uVar24 = (ulong)uVar23;
                }
                uVar19 = uVar19 + 2;
                pcVar25 = pcVar25 + 0x28;
              } while (uVar19 != uVar14);
              uVar23 = (uint)uVar26;
              if (uVar35 < uVar23) {
                uVar31 = uVar23 + 1;
                uVar27 = *(uint *)(param_11 + 0x60);
                uVar13 = uVar35;
                if (uVar27 < uVar35) {
                  uVar13 = uVar27;
                }
                if (uVar31 <= uVar27) {
                  uVar27 = uVar31;
                }
                if ((uVar13 + 2 <= uVar27) && (uVar13 < uVar27 - 1)) {
                  uVar19 = (ulong)(uVar27 - 1);
                  uVar26 = (ulong)uVar13;
                  puVar30 = (undefined8 *)(*(long *)(param_11 + 0x70) + uVar26 * 0x14);
                  puVar20 = (undefined8 *)(*(long *)(param_11 + 0x70) + uVar19 * 0x14);
                  do {
                    uVar19 = uVar19 - 1;
                    uVar39 = *(undefined4 *)(puVar20 + 2);
                    uVar5 = *puVar20;
                    uVar6 = puVar20[1];
                    *(undefined4 *)(puVar20 + 2) = *(undefined4 *)(puVar30 + 2);
                    uVar7 = puVar30[1];
                    *puVar20 = *puVar30;
                    puVar20[1] = uVar7;
                    *(undefined4 *)(puVar30 + 2) = uVar39;
                    uVar39 = (undefined4)uVar5;
                    uStack_84 = (undefined4)((ulong)uVar5 >> 0x20);
                    uStack_80 = (undefined4)uVar6;
                    uStack_7c = (undefined4)((ulong)uVar6 >> 0x20);
                    *(undefined4 *)puVar30 = uVar39;
                    *(undefined4 *)((long)puVar30 + 4) = uStack_84;
                    *(undefined4 *)(puVar30 + 1) = uStack_80;
                    *(undefined4 *)((long)puVar30 + 0xc) = uStack_7c;
                    uVar26 = uVar26 + 1;
                    puVar30 = (undefined8 *)((long)puVar30 + 0x14);
                    puVar20 = (undefined8 *)((long)puVar20 + -0x14);
                    uVar36 = uVar39;
                    uVar37 = uStack_84;
                    local_88 = uVar5;
                  } while (uVar26 < (uVar19 & 0xffffffff));
                }
                if (param_11[0x5b] != (hb_buffer_t)0x0) {
                  uVar27 = *(uint *)(param_11 + 0x60);
                  uVar13 = uVar35;
                  if (uVar27 < uVar35) {
                    uVar13 = uVar27;
                  }
                  if (uVar27 < uVar31) {
                    uVar31 = uVar27;
                  }
                  if ((uVar13 + 2 <= uVar31) && (uVar13 < uVar31 - 1)) {
                    uVar19 = (ulong)(uVar31 - 1);
                    uVar26 = (ulong)uVar13;
                    puVar20 = (undefined8 *)(uVar26 * 0x14 + *(long *)(param_11 + 0x80));
                    puVar30 = (undefined8 *)(*(long *)(param_11 + 0x80) + uVar19 * 0x14);
                    do {
                      uVar19 = uVar19 - 1;
                      uVar39 = *(undefined4 *)(puVar30 + 2);
                      uVar5 = *puVar30;
                      uVar6 = puVar30[1];
                      *(undefined4 *)(puVar30 + 2) = *(undefined4 *)(puVar20 + 2);
                      uVar7 = puVar20[1];
                      *puVar30 = *puVar20;
                      puVar30[1] = uVar7;
                      *(undefined4 *)(puVar20 + 2) = uVar39;
                      uVar39 = (undefined4)uVar5;
                      uStack_84 = (undefined4)((ulong)uVar5 >> 0x20);
                      uStack_80 = (undefined4)uVar6;
                      uStack_7c = (undefined4)((ulong)uVar6 >> 0x20);
                      *(undefined4 *)puVar20 = uVar39;
                      *(undefined4 *)((long)puVar20 + 4) = uStack_84;
                      *(undefined4 *)(puVar20 + 1) = uStack_80;
                      *(undefined4 *)((long)puVar20 + 0xc) = uStack_7c;
                      uVar26 = uVar26 + 1;
                      puVar20 = (undefined8 *)((long)puVar20 + 0x14);
                      puVar30 = (undefined8 *)((long)puVar30 + -0x14);
                      uVar36 = uVar39;
                      uVar37 = uStack_84;
                      local_88 = uVar5;
                    } while (uVar26 < (uVar19 & 0xffffffff));
                  }
                }
                if (uVar35 <= uVar23) {
                  uVar35 = (uint)uVar24;
                  uVar19 = uVar24;
                  do {
                    uVar35 = uVar35 + 1;
                    uVar13 = (int)uVar19 + 1;
                    uVar27 = (uint)uVar24;
                    if (*(char *)(lVar32 + 0x12 + uVar19 * 0x14) == '\x16') {
                      uVar31 = *(uint *)(param_11 + 0x60);
                      uVar18 = uVar27;
                      if (uVar31 < uVar27) {
                        uVar18 = uVar31;
                      }
                      uVar28 = uVar13;
                      if (uVar31 < uVar13) {
                        uVar28 = uVar31;
                      }
                      if ((uVar18 + 2 <= uVar28) && (uVar18 < uVar28 - 1)) {
                        uVar34 = (ulong)uVar18;
                        puVar30 = (undefined8 *)(*(long *)(param_11 + 0x70) + uVar34 * 0x14);
                        if (uVar35 <= uVar31) {
                          uVar31 = uVar35;
                        }
                        uVar19 = (ulong)(uVar31 - 1);
                        puVar20 = (undefined8 *)(*(long *)(param_11 + 0x70) + uVar19 * 0x14);
                        do {
                          uVar19 = uVar19 - 1;
                          uVar39 = *(undefined4 *)(puVar20 + 2);
                          uVar5 = *puVar20;
                          uVar6 = puVar20[1];
                          *(undefined4 *)(puVar20 + 2) = *(undefined4 *)(puVar30 + 2);
                          uVar7 = puVar30[1];
                          *puVar20 = *puVar30;
                          puVar20[1] = uVar7;
                          *(undefined4 *)(puVar30 + 2) = uVar39;
                          uVar39 = (undefined4)uVar5;
                          uStack_84 = (undefined4)((ulong)uVar5 >> 0x20);
                          uStack_80 = (undefined4)uVar6;
                          uStack_7c = (undefined4)((ulong)uVar6 >> 0x20);
                          *(undefined4 *)puVar30 = uVar39;
                          *(undefined4 *)((long)puVar30 + 4) = uStack_84;
                          *(undefined4 *)(puVar30 + 1) = uStack_80;
                          *(undefined4 *)((long)puVar30 + 0xc) = uStack_7c;
                          uVar34 = uVar34 + 1;
                          puVar30 = (undefined8 *)((long)puVar30 + 0x14);
                          puVar20 = (undefined8 *)((long)puVar20 + -0x14);
                          uVar36 = uVar39;
                          uVar37 = uStack_84;
                          local_88 = uVar5;
                        } while (uVar34 < (uVar19 & 0xffffffff));
                      }
                      uVar31 = uVar13;
                      if (param_11[0x5b] != (hb_buffer_t)0x0) {
                        uVar18 = *(uint *)(param_11 + 0x60);
                        if (uVar18 < uVar27) {
                          uVar27 = uVar18;
                        }
                        uVar28 = uVar13;
                        if (uVar18 < uVar13) {
                          uVar28 = uVar18;
                        }
                        if ((uVar27 + 2 <= uVar28) && (uVar27 < uVar28 - 1)) {
                          uVar34 = (ulong)uVar27;
                          puVar30 = (undefined8 *)(*(long *)(param_11 + 0x80) + uVar34 * 0x14);
                          if (uVar35 <= uVar18) {
                            uVar18 = uVar35;
                          }
                          uVar19 = (ulong)(uVar18 - 1);
                          puVar20 = (undefined8 *)(*(long *)(param_11 + 0x80) + uVar19 * 0x14);
                          do {
                            uVar19 = uVar19 - 1;
                            uVar39 = *(undefined4 *)(puVar20 + 2);
                            uVar5 = *puVar20;
                            uVar6 = puVar20[1];
                            *(undefined4 *)(puVar20 + 2) = *(undefined4 *)(puVar30 + 2);
                            uVar7 = puVar30[1];
                            *puVar20 = *puVar30;
                            puVar20[1] = uVar7;
                            *(undefined4 *)(puVar30 + 2) = uVar39;
                            uVar39 = (undefined4)uVar5;
                            uStack_84 = (undefined4)((ulong)uVar5 >> 0x20);
                            uStack_80 = (undefined4)uVar6;
                            uStack_7c = (undefined4)((ulong)uVar6 >> 0x20);
                            *(undefined4 *)puVar30 = uVar39;
                            *(undefined4 *)((long)puVar30 + 4) = uStack_84;
                            *(undefined4 *)(puVar30 + 1) = uStack_80;
                            *(undefined4 *)((long)puVar30 + 0xc) = uStack_7c;
                            uVar34 = uVar34 + 1;
                            puVar30 = (undefined8 *)((long)puVar30 + 0x14);
                            puVar20 = (undefined8 *)((long)puVar20 + -0x14);
                          } while (uVar34 < (uVar19 & 0xffffffff));
                          uVar36 = uVar39;
                          uVar37 = uStack_84;
                          local_88 = uVar5;
                        }
                      }
                    }
                    else {
                      uVar31 = uVar27;
                    }
                    uVar24 = (ulong)uVar31;
                    uVar19 = (ulong)uVar13;
                    uVar34 = uVar24;
                  } while (uVar13 <= uVar23);
                }
              }
            }
          }
        }
        uVar35 = *(uint *)(param_11 + 0x60);
        lVar32 = *(long *)(param_11 + 0x70);
        bVar9 = *(byte *)(lVar32 + 0xf + uVar14 * 0x14);
        uVar23 = uVar33 + 1;
        if (uVar33 + 1 < uVar35) {
          uVar23 = uVar35;
        }
        uVar14 = uVar15 & 0xffffffff;
        do {
          uVar27 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar27;
          if (uVar35 <= uVar27) {
            uVar14 = (ulong)uVar23;
            break;
          }
        } while (bVar9 == *(byte *)(lVar32 + 0xf + (ulong)uVar27 * 0x14));
        local_70 = uVar15 & 0xffffffff;
        uVar15 = uVar14;
      } while (uVar33 < uVar3);
    }
    uVar10 = uVar10 & 0xffffffff;
    hb_buffer_t::message
              (CONCAT44(uVar37,uVar36),param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8
               ,param_11,param_10,"end reordering myanmar",uVar14,lVar32,uVar34,uVar38);
  }
  param_11[0xb8] = (hb_buffer_t)((byte)param_11[0xb8] & 0x3f);
  return uVar10;
}


