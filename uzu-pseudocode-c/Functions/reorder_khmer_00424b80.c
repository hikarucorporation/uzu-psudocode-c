// Function : reorder_khmer
// Namespace: 
// Entry    : 00424b80
// Prototype: undefined4 reorder_khmer(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, hb_buffer_t * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00424b80 - 00425053


/* WARNING: Unknown calling convention: __cdecl */
/* reorder_khmer(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined4 __cdecl
reorder_khmer(undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,long param_10,hb_buffer_t *param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *__src;
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  byte bVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 *__dest;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined1 in_stack_ffffffffffffff18;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar11 = 0;
  bVar9 = hb_buffer_t::message
                    (param_1_00,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                     param_11,param_10,"start reordering khmer",param_12,param_13,param_14,
                     in_stack_ffffffffffffff18);
  if (bVar9) {
    uVar16 = 0xb;
    uVar23 = 0xffffffff;
    uVar24 = 0xffffffff;
    uVar13 = hb_syllabic_insert_dotted_circles
                       (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2_00,param_3_00,param_4,
                        param_5,param_6,param_7,param_8,param_10,param_11,1,0xb,0xffffffff,
                        0xffffffff);
    uVar11 = (undefined4)uVar13;
    uVar2 = *(uint *)(param_11 + 0x60);
    local_48 = extraout_XMM0_Da_00;
    uStack_44 = extraout_XMM0_Db_00;
    if (uVar2 != 0) {
      lVar26 = *(long *)(param_11 + 0x70);
      bVar10 = *(byte *)(lVar26 + 0xf);
      uVar20 = 0;
      do {
        if (uVar2 - 1 == uVar20) {
          uVar20 = (ulong)uVar2;
          break;
        }
        uVar20 = uVar20 + 1;
      } while (bVar10 == *(byte *)(lVar26 + 0xf + (uVar20 & 0xffffffff) * 0x14));
      uVar16 = (ulong)uVar2;
      uVar27 = 0;
      do {
        uVar17 = (uint)uVar20;
        uVar23 = uVar20 & 0xffffffff;
        uVar24 = uVar20 & 0xffffffff;
        if ((bVar10 & 0xe) == 0) {
          uVar19 = (uint)uVar27;
          if (uVar19 + 1 < uVar17) {
            puVar5 = *(uint **)(param_9 + 0x88);
            uVar12 = puVar5[2] | puVar5[1] | puVar5[3];
            uVar20 = (ulong)(uVar19 + 1);
            uVar18 = ~uVar19 + uVar17 & 3;
            uVar16 = uVar20;
            if (uVar18 != 0) {
              puVar21 = (uint *)(uVar20 * 0x14 + 4 + lVar26);
              lVar22 = 0;
              do {
                *puVar21 = *puVar21 | uVar12;
                lVar22 = lVar22 + -1;
                puVar21 = puVar21 + 5;
              } while (-uVar18 != (int)lVar22);
              uVar16 = uVar20 - lVar22;
            }
            if (2 < (uVar17 - uVar19) - 2) {
              iVar15 = uVar17 - (int)uVar16;
              puVar21 = (uint *)(uVar16 * 0x14 + 0x40 + lVar26);
              do {
                puVar21[-0xf] = puVar21[-0xf] | uVar12;
                puVar21[-10] = puVar21[-10] | uVar12;
                puVar21[-5] = puVar21[-5] | uVar12;
                *puVar21 = *puVar21 | uVar12;
                puVar21 = puVar21 + 0x14;
                iVar15 = iVar15 + -4;
              } while (iVar15 != 0);
            }
            __dest = (undefined4 *)(uVar20 * 0x14 + lVar26);
            __src = (undefined8 *)(lVar26 + uVar27 * 0x14);
            uVar12 = uVar19 + 3;
            uVar18 = 0;
            do {
              uVar16 = (ulong)uVar12;
              puVar25 = (undefined8 *)(uVar20 * 0x14 + lVar26);
              cVar1 = *(char *)(lVar26 + 0x12 + uVar20 * 0x14);
              iVar15 = (int)uVar20;
              if ((cVar1 == '\x04') && (uVar18 < 3)) {
                uVar27 = uVar20 + 1;
                if (uVar27 < uVar24) {
                  if (*(char *)(lVar26 + 0x12 + uVar27 * 0x14) == '\x0f') {
                    puVar21 = (uint *)(lVar26 + 4 + uVar20 * 0x14);
                    *puVar21 = *puVar21 | *puVar5;
                    puVar21 = (uint *)(lVar26 + 4 + (uVar27 & 0xffffffff) * 0x14);
                    *puVar21 = *puVar21 | *puVar5;
                    uVar18 = iVar15 + 2;
                    if (1 < uVar18 - uVar19) {
                      hb_buffer_t::merge_clusters_impl(param_11,uVar19,uVar18);
                    }
                    puVar14 = (undefined8 *)(uVar27 * 0x14 + lVar26);
                    uVar3 = *(undefined4 *)(puVar25 + 2);
                    uVar13 = *puVar25;
                    uVar6 = puVar25[1];
                    uVar4 = *(undefined4 *)(puVar14 + 2);
                    uVar7 = *puVar14;
                    uVar8 = puVar14[1];
                    memmove((void *)((ulong)(uVar19 + 2) * 0x14 + lVar26),__src,
                            (ulong)(iVar15 - uVar19) * 0x14);
                    *(undefined4 *)(__src + 2) = uVar3;
                    *__src = uVar13;
                    __src[1] = uVar6;
                    __dest[4] = uVar4;
                    local_48 = (undefined4)uVar7;
                    uStack_44 = (undefined4)((ulong)uVar7 >> 0x20);
                    uStack_40 = (undefined4)uVar8;
                    uStack_3c = (undefined4)((ulong)uVar8 >> 0x20);
                    *__dest = local_48;
                    __dest[1] = uStack_44;
                    __dest[2] = uStack_40;
                    __dest[3] = uStack_3c;
                    if ((puVar5[4] != 0) && (uVar18 < uVar17)) {
                      puVar21 = (uint *)(lVar26 + 4 + uVar16 * 0x14);
                      *puVar21 = *puVar21 | puVar5[4];
                      uVar27 = uVar16 + 1;
                      if (uVar27 < uVar24) {
                        if ((~uVar16 + uVar24 & 1) != 0) {
                          puVar21 = (uint *)(lVar26 + 4 + uVar27 * 0x14);
                          *puVar21 = *puVar21 | puVar5[4];
                          uVar27 = uVar16 + 2;
                        }
                        if (uVar24 - 2 != uVar16) {
                          puVar21 = (uint *)(lVar26 + 0x18 + uVar27 * 0x14);
                          do {
                            puVar21[-5] = puVar21[-5] | puVar5[4];
                            *puVar21 = *puVar21 | puVar5[4];
                            uVar27 = uVar27 + 2;
                            puVar21 = puVar21 + 10;
                          } while (uVar27 < uVar24);
                        }
                      }
                    }
                    uVar18 = 2;
                  }
                  else {
                    uVar18 = uVar18 + 1;
                  }
                }
              }
              else if (cVar1 == '\x16') {
                if (1 < (1 - uVar19) + iVar15) {
                  hb_buffer_t::merge_clusters_impl(param_11,uVar19,iVar15 + 1);
                }
                uVar3 = *(undefined4 *)(puVar25 + 2);
                uVar13 = *puVar25;
                uVar6 = puVar25[1];
                memmove(__dest,__src,(ulong)(iVar15 - uVar19) * 0x14);
                local_c8 = (undefined4)uVar13;
                uStack_c4 = (undefined4)((ulong)uVar13 >> 0x20);
                uStack_c0 = (undefined4)uVar6;
                uStack_bc = (undefined4)((ulong)uVar6 >> 0x20);
                *(undefined4 *)__src = local_c8;
                *(undefined4 *)((long)__src + 4) = uStack_c4;
                *(undefined4 *)(__src + 1) = uStack_c0;
                *(undefined4 *)((long)__src + 0xc) = uStack_bc;
                *(undefined4 *)(__src + 2) = uVar3;
                local_48 = local_c8;
                uStack_44 = uStack_c4;
              }
              uVar20 = uVar20 + 1;
              uVar12 = uVar12 + 1;
            } while ((uint)uVar20 < uVar17);
            uVar16 = (ulong)*(uint *)(param_11 + 0x60);
            lVar26 = *(long *)(param_11 + 0x70);
          }
        }
        bVar10 = *(byte *)(lVar26 + 0xf + uVar24 * 0x14);
        uVar27 = (ulong)(uVar17 + 1);
        if (uVar17 + 1 < (uint)uVar16) {
          uVar27 = uVar16;
        }
        uVar20 = uVar23;
        do {
          uVar19 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar19;
          if ((uint)uVar16 <= uVar19) {
            uVar20 = uVar27;
            break;
          }
        } while (bVar10 == *(byte *)(lVar26 + 0xf + (ulong)uVar19 * 0x14));
        uVar27 = uVar23;
      } while (uVar17 < uVar2);
    }
    hb_buffer_t::message
              (CONCAT44(uStack_44,local_48),param_2_00,param_3_00,param_4,param_5,param_6,param_7,
               param_8,param_11,param_10,"end reordering khmer",uVar16,uVar23,uVar24,
               in_stack_ffffffffffffff18);
  }
  param_11[0xb8] = (hb_buffer_t)((byte)param_11[0xb8] & 0xbf);
  return uVar11;
}


