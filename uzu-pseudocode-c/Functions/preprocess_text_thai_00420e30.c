// Function : preprocess_text_thai
// Namespace: 
// Entry    : 00420e30
// Prototype: undefined preprocess_text_thai(long param_1, hb_buffer_t * param_2, long param_3)
// Body     : 00420e30 - 0042172e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* preprocess_text_thai(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl preprocess_text_thai(long param_1,hb_buffer_t *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  undefined2 *puVar12;
  uint uVar13;
  void *__src;
  void *__dest;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  undefined1 *puVar22;
  ushort *puVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined8 local_58;
  ulong uStack_50;
  undefined4 local_48;
  ulong local_40;
  long local_38;
  
  *(undefined2 *)(param_2 + 0x5a) = 1;
  *(undefined4 *)(param_2 + 100) = 0;
  __src = *(void **)(param_2 + 0x70);
  *(void **)(param_2 + 0x78) = __src;
  uVar13 = *(uint *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (uVar13 != 0) {
    uVar25 = 0;
    do {
      iVar6 = (int)uVar25;
      uVar5 = *(uint *)((long)__src + uVar25 * 0x14);
      if ((uVar5 & 0xffffff7f) == 0xe33) {
        hb_buffer_t::output_glyph(param_2,uVar5 + 0x1a);
        uVar25 = (ulong)(*(int *)(param_2 + 100) - 1);
        if (*(int *)(param_2 + 100) == 0) {
          uVar25 = 0;
        }
        puVar23 = (ushort *)(*(long *)(param_2 + 0x78) + 0x10 + uVar25 * 0x14);
        *puVar23 = *puVar23 | 0x80;
        uVar7 = hb_buffer_t::replace_glyph(param_2,uVar5 - 1);
        if ((char)uVar7 == '\0') break;
        uVar24 = *(uint *)(param_2 + 100);
        uVar5 = uVar24 - 2;
        uVar25 = (ulong)uVar5;
        *(ushort *)(*(long *)(param_2 + 0x78) + 0x10 + uVar25 * 0x14) =
             *(ushort *)(*(long *)(param_2 + 0x78) + 0x10 + uVar25 * 0x14) & 0xe0 | 0xc;
        if (uVar5 != 0) {
          lVar14 = uVar25 * 0x14;
          iVar18 = 3;
          iVar6 = 2;
          iVar10 = 0;
          do {
            uVar21 = *(uint *)(*(long *)(param_2 + 0x78) + -0x14 + lVar14);
            if (((uVar21 & 0xffffff7c) != 0xe34) && ((uVar21 & 0xffffff7f) - 0xe4f < 0xfffffff8)) {
              if ((int)uVar21 < 0xeb1) {
                if ((uVar21 != 0xe31) && (uVar21 != 0xe3b)) goto LAB_00421035;
              }
              else if ((uVar21 != 0xebb) && (uVar21 != 0xeb1)) {
LAB_00421035:
                if (uVar24 <= uVar24 - iVar10) {
                  if (*(int *)(param_2 + 0x1c) == 0) {
                    hb_buffer_t::merge_out_clusters(param_2,uVar24 - iVar18,uVar24);
                  }
                  goto LAB_00420f42;
                }
                uVar21 = uVar24 - iVar6;
                goto LAB_00421052;
              }
            }
            iVar18 = iVar18 + 1;
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 1;
            lVar14 = lVar14 + -0x14;
          } while (lVar14 != 0);
          uVar21 = 0;
          if (2 < uVar24) {
LAB_00421052:
            local_40 = CONCAT44(local_40._4_4_,uVar21);
            hb_buffer_t::merge_out_clusters(param_2,uVar21,uVar24);
            lVar14 = *(long *)(param_2 + 0x78);
            local_48 = *(undefined4 *)(lVar14 + 0x10 + uVar25 * 0x14);
            puVar3 = (ulong *)(lVar14 + uVar25 * 0x14);
            local_58 = *puVar3;
            uStack_50 = puVar3[1];
            lVar11 = (local_40 & 0xffffffff) * 0x14;
            memmove((void *)(lVar14 + lVar11 + 0x14),(void *)(lVar14 + lVar11),
                    (ulong)(uVar5 - (int)local_40) * 0x14);
            lVar14 = *(long *)(param_2 + 0x78);
            puVar3 = (ulong *)(lVar14 + lVar11);
            *puVar3 = local_58;
            puVar3[1] = uStack_50;
            *(undefined4 *)(lVar14 + 0x10 + lVar11) = local_48;
          }
        }
      }
      else {
        iVar10 = iVar6;
        if (param_2[0x5a] != (hb_buffer_t)0x0) {
          __dest = *(void **)(param_2 + 0x78);
          if ((__dest != __src) || (*(int *)(param_2 + 100) != iVar6)) {
            uVar5 = *(int *)(param_2 + 100) + 1;
            if ((uVar5 == 0) || (uVar5 < *(uint *)(param_2 + 0x68))) {
              if (__dest == __src) goto LAB_00420ec9;
            }
            else {
              uVar7 = hb_buffer_t::enlarge(param_2,uVar5);
              if ((char)uVar7 == '\0') break;
              __src = *(void **)(param_2 + 0x70);
              __dest = *(void **)(param_2 + 0x78);
              if (__dest == __src) {
LAB_00420ec9:
                uVar5 = *(uint *)(param_2 + 100);
                if (*(int *)(param_2 + 0x5c) + 1U < uVar5 + 1) {
                  __dest = *(void **)(param_2 + 0x80);
                  *(void **)(param_2 + 0x78) = __dest;
                  if ((ulong)uVar5 != 0) {
                    memcpy(__dest,__src,(ulong)uVar5 * 0x14);
                    __src = *(void **)(param_2 + 0x70);
                    __dest = *(void **)(param_2 + 0x78);
                  }
                }
                else {
                  __dest = __src;
                }
              }
            }
            uVar5 = *(uint *)(param_2 + 0x5c);
            uVar24 = *(uint *)(param_2 + 100);
            *(undefined4 *)((long)__dest + (ulong)uVar24 * 0x14 + 0x10) =
                 *(undefined4 *)((long)__src + (ulong)uVar5 * 0x14 + 0x10);
            puVar1 = (undefined8 *)((long)__src + (ulong)uVar5 * 0x14);
            uVar7 = puVar1[1];
            puVar2 = (undefined8 *)((long)__dest + (ulong)uVar24 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            iVar10 = *(int *)(param_2 + 0x5c);
            iVar6 = *(int *)(param_2 + 100);
          }
          *(int *)(param_2 + 100) = iVar6 + 1;
        }
        *(int *)(param_2 + 0x5c) = iVar10 + 1;
      }
LAB_00420f42:
      uVar25 = (ulong)*(uint *)(param_2 + 0x5c);
      if (uVar13 <= *(uint *)(param_2 + 0x5c)) break;
      __src = *(void **)(param_2 + 0x70);
    } while( true );
  }
  hb_buffer_t::sync(param_2);
  if (((*(int *)(param_1 + 4) == 0x54686169) && (*(char *)(param_1 + 0x30) == '\0')) &&
     (local_40 = (ulong)*(uint *)(param_2 + 0x60), local_40 != 0)) {
    lVar14 = *(long *)(param_2 + 0x70);
    uVar25 = 0;
    uVar5 = 2;
    uVar13 = 3;
    uVar24 = 0;
    do {
      uVar21 = *(uint *)(lVar14 + uVar25 * 0x14);
      uVar29 = (uint)uVar25;
      if (uVar21 == 0xe31) {
LAB_004211c2:
        lVar11 = 0;
LAB_004211c4:
        iVar6 = *(int *)(thai_above_state_machine + lVar11 * 8 + (ulong)uVar13 * 0x18);
        if (iVar6 == 0) {
          iVar6 = *(int *)(thai_below_state_machine + lVar11 * 8 + (ulong)uVar5 * 0x18);
        }
        uVar8 = uVar25 & 0xffffffff;
        if (*(uint *)(param_2 + 0x60) < uVar25) {
          uVar8 = (ulong)*(uint *)(param_2 + 0x60);
        }
        uVar21 = (uint)uVar8;
        lVar17 = uVar25 * 5;
        if (1 < uVar21 - uVar24) {
          param_2[0xc0] = (hb_buffer_t)((byte)param_2[0xc0] | 0x20);
          lVar17 = *(long *)(param_2 + 0x70);
          uVar29 = 0xffffffff;
          if (uVar21 != uVar24) {
            if (*(int *)(param_2 + 0x1c) == 2) {
              if (uVar24 < uVar21) {
                uVar19 = (ulong)uVar24;
                uVar20 = uVar8 - uVar19;
                uVar29 = 0xffffffff;
                if (8 < uVar20) {
                  uVar15 = (ulong)((uint)uVar20 & 7);
                  if (uVar15 == 0) {
                    uVar15 = 8;
                  }
                  lVar16 = (uVar15 + uVar19) - uVar8;
                  puVar9 = (uint *)(lVar17 + uVar19 * 0x14 + 0x94);
                  uVar33 = 0xffffffff;
                  uVar29 = 0xffffffff;
                  uVar30 = 0xffffffff;
                  uVar26 = 0xffffffff;
                  uVar27 = 0xffffffff;
                  uVar32 = 0xffffffff;
                  uVar35 = 0xffffffff;
                  uVar28 = 0xffffffff;
                  do {
                    uVar31 = -(uint)((int)(uVar29 ^ _DAT_006524b0) <
                                    (int)(puVar9[-0x23] ^ _DAT_006524b0));
                    uVar34 = -(uint)((int)(uVar30 ^ _UNK_006524b4) <
                                    (int)(puVar9[-0x1e] ^ _UNK_006524b4));
                    uVar36 = -(uint)((int)(uVar33 ^ _UNK_006524b8) <
                                    (int)(puVar9[-0x19] ^ _UNK_006524b8));
                    uVar37 = -(uint)((int)(uVar26 ^ _UNK_006524bc) <
                                    (int)(puVar9[-0x14] ^ _UNK_006524bc));
                    uVar29 = ~uVar31 & puVar9[-0x23] | uVar29 & uVar31;
                    uVar30 = ~uVar34 & puVar9[-0x1e] | uVar30 & uVar34;
                    uVar33 = ~uVar36 & puVar9[-0x19] | uVar33 & uVar36;
                    uVar26 = ~uVar37 & puVar9[-0x14] | uVar26 & uVar37;
                    uVar31 = -(uint)((int)(uVar32 ^ _DAT_006524b0) <
                                    (int)(puVar9[-0xf] ^ _DAT_006524b0));
                    uVar34 = -(uint)((int)(uVar35 ^ _UNK_006524b4) <
                                    (int)(puVar9[-10] ^ _UNK_006524b4));
                    uVar36 = -(uint)((int)(uVar27 ^ _UNK_006524b8) <
                                    (int)(puVar9[-5] ^ _UNK_006524b8));
                    uVar37 = -(uint)((int)(uVar28 ^ _UNK_006524bc) < (int)(*puVar9 ^ _UNK_006524bc))
                    ;
                    uVar32 = ~uVar31 & puVar9[-0xf] | uVar32 & uVar31;
                    uVar35 = ~uVar34 & puVar9[-10] | uVar35 & uVar34;
                    uVar27 = ~uVar36 & puVar9[-5] | uVar27 & uVar36;
                    uVar28 = ~uVar37 & *puVar9 | uVar28 & uVar37;
                    puVar9 = puVar9 + 0x28;
                    lVar16 = lVar16 + 8;
                  } while (lVar16 != 0);
                  uVar19 = uVar19 + (uVar20 - uVar15);
                  uVar31 = -(uint)((int)(uVar29 ^ _DAT_006524b0) < (int)(uVar32 ^ _DAT_006524b0));
                  uVar34 = -(uint)((int)(uVar30 ^ _UNK_006524b4) < (int)(uVar35 ^ _UNK_006524b4));
                  uVar36 = -(uint)((int)(uVar33 ^ _UNK_006524b8) < (int)(uVar27 ^ _UNK_006524b8));
                  uVar37 = -(uint)((int)(uVar26 ^ _UNK_006524bc) < (int)(uVar28 ^ _UNK_006524bc));
                  uVar32 = ~uVar31 & uVar32 | uVar29 & uVar31;
                  uVar35 = ~uVar34 & uVar35 | uVar30 & uVar34;
                  uVar33 = ~uVar36 & uVar27 | uVar33 & uVar36;
                  uVar26 = ~uVar37 & uVar28 | uVar26 & uVar37;
                  uVar29 = -(uint)((int)(uVar32 ^ _DAT_006524b0) < (int)(uVar33 ^ _DAT_006524b0));
                  uVar30 = -(uint)((int)(uVar35 ^ _UNK_006524b4) < (int)(uVar26 ^ _UNK_006524b4));
                  uVar29 = ~uVar29 & uVar33 | uVar32 & uVar29;
                  uVar30 = ~uVar30 & uVar26 | uVar35 & uVar30;
                  uVar33 = -(uint)((int)(uVar29 ^ _DAT_006524b0) < (int)(uVar30 ^ _DAT_006524b0));
                  uVar29 = ~uVar33 & uVar30 | uVar29 & uVar33;
                }
                lVar16 = uVar8 - uVar19;
                puVar9 = (uint *)(lVar17 + uVar19 * 0x14 + 8);
                do {
                  if (*puVar9 < uVar29) {
                    uVar29 = *puVar9;
                  }
                  puVar9 = puVar9 + 5;
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
              }
            }
            else {
              uVar29 = *(uint *)(lVar17 + 8 + (ulong)uVar24 * 0x14);
              uVar30 = *(uint *)(lVar17 + 8 + (ulong)(uVar21 - 1) * 0x14);
              if (uVar30 < uVar29) {
                uVar29 = uVar30;
              }
            }
          }
          local_38 = uVar25 * 5;
          hb_buffer_t::_infos_set_glyph_flags(param_2,lVar17,uVar24,uVar21,uVar29,3);
          lVar17 = local_38;
        }
        uVar13 = *(uint *)((ulong)uVar13 * 0x18 + 0x5fa004 + lVar11 * 8);
        uVar5 = *(uint *)((ulong)uVar5 * 0x18 + 0x5fa064 + lVar11 * 8);
        uVar29 = uVar24;
        if (iVar6 == 4) {
          uVar21 = *(uint *)(lVar14 + (ulong)uVar24 * 0x14);
          puVar22 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::RD_mappings;
          if (uVar21 == 0xe0d) {
LAB_00421468:
            local_58 = (ulong)local_58._4_4_ << 0x20;
            lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            if (lVar11 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined8 *)(lVar11 + 0x10);
            }
            iVar6 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                              (param_3,*(undefined8 *)(param_3 + 0x98),*(undefined2 *)(puVar22 + 2),
                               &local_58,uVar7);
            if (iVar6 == 0) {
              local_58 = local_58 & 0xffffffff00000000;
              lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
              if (lVar11 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(lVar11 + 0x10);
              }
              iVar6 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                (param_3,*(undefined8 *)(param_3 + 0x98),
                                 *(undefined2 *)(puVar22 + 4),&local_58,uVar7);
              if (iVar6 == 0) goto LAB_00421695;
              puVar23 = (ushort *)(puVar22 + 4);
            }
            else {
              puVar23 = (ushort *)(puVar22 + 2);
            }
            uVar21 = (uint)*puVar23;
          }
          else if (uVar21 == 0xe10) {
            puVar22 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::RD_mappings + 6;
            goto LAB_00421468;
          }
LAB_00421695:
          *(uint *)(lVar14 + (ulong)uVar24 * 0x14) = uVar21;
          goto LAB_00421179;
        }
        puVar9 = (uint *)(lVar14 + lVar17 * 4);
        uVar24 = *puVar9;
        switch(iVar6) {
        case 0:
          goto switchD_004214bf_caseD_0;
        case 1:
          puVar12 = &thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SD_mappings;
          uVar4 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SD_mappings;
          break;
        case 2:
          puVar12 = &thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SL_mappings;
          uVar4 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SL_mappings;
          break;
        case 3:
          puVar12 = &thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SDL_mappings;
          uVar4 = thai_pua_shape(unsigned_int,thai_action_t,hb_font_t*)::SDL_mappings;
          break;
        default:
          puVar12 = (undefined2 *)0x0;
          uVar4 = _DAT_00000000;
        }
        if (uVar4 != 0) {
          puVar23 = puVar12 + 2;
          do {
            if (uVar24 == uVar4) {
              local_58 = (ulong)local_58._4_4_ << 0x20;
              lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
              if (lVar11 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(undefined8 *)(lVar11 + 0x10);
              }
              iVar6 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                (param_3,*(undefined8 *)(param_3 + 0x98),puVar23[-1],&local_58,uVar7
                                );
              if (iVar6 == 0) {
                local_58 = local_58 & 0xffffffff00000000;
                lVar11 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                if (lVar11 == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = *(undefined8 *)(lVar11 + 0x10);
                }
                iVar6 = (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                  (param_3,*(undefined8 *)(param_3 + 0x98),*puVar23,&local_58,uVar7)
                ;
                if (iVar6 == 0) break;
              }
              else {
                puVar23 = puVar23 + -1;
              }
              uVar24 = (uint)*puVar23;
              break;
            }
            uVar4 = puVar23[1];
            puVar23 = puVar23 + 3;
          } while (uVar4 != 0);
        }
switchD_004214bf_caseD_0:
        *puVar9 = uVar24;
      }
      else {
        lVar11 = 0;
        if ((uVar21 & 0xfffffffc) == 0xe34) goto LAB_004211c4;
        if ((uVar21 - 0xe47 < 8) && ((0xc1U >> (uVar21 - 0xe47 & 0x1f) & 1) != 0))
        goto LAB_004211c2;
        lVar11 = 1;
        if ((uVar21 - 0xe38 < 3) || (lVar11 = 2, uVar21 - 0xe48 < 5)) goto LAB_004211c4;
        uVar13 = uVar21 - 0xe0d;
        if (uVar13 < 0x13) {
          lVar11 = 1;
          if ((0x54000U >> (uVar13 & 0x1f) & 1) == 0) {
            if ((9U >> (uVar13 & 0x1f) & 1) == 0) goto LAB_004216ef;
            lVar11 = 2;
          }
        }
        else {
LAB_004216ef:
          lVar11 = 3;
          if ((uVar21 & 0xfffffffe) != 0xe0e) {
            lVar11 = (ulong)(0x2d < uVar21 - 0xe01) << 2;
          }
        }
        uVar13 = *(uint *)(thai_above_start_state + lVar11 * 4);
        uVar5 = *(uint *)(thai_below_start_state + lVar11 * 4);
      }
LAB_00421179:
      uVar25 = uVar25 + 1;
      uVar24 = uVar29;
    } while (uVar25 != local_40);
  }
  return;
}


