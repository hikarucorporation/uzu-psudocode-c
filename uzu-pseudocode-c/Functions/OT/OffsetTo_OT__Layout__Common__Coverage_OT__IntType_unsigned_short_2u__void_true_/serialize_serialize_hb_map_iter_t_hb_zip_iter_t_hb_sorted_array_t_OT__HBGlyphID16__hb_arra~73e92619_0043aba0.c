// Function : serialize_serialize<hb_map_iter_t<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,$_8_const&,(hb_function_sortedness_t)1,(void*)0>&>
// Namespace: OT:OffsetTo_OT__Layout__Common__Coverage_OT__IntType_unsigned_short_2u__void_true_
// Entry    : 0043aba0
// Prototype: ulong serialize_serialize<hb_map_iter_t<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,$_8_const&,(hb_function_sortedness_t)1,(void*)0>&>(OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true> * this, hb_serialize_context_t * param_1, undefined8 * param_2)
// Body     : 0043aba0 - 0043b460


/* bool OT::OffsetTo<OT::Layout::Common::Coverage, OT::IntType<unsigned short, 2u>, void,
   true>::serialize_serialize<hb_map_iter_t<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,
   hb_array_t<OT::HBGlyphID16> >, $_8 const&, (hb_function_sortedness_t)1,
   (void*)0>&>(hb_serialize_context_t*,
   hb_map_iter_t<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>, hb_array_t<OT::HBGlyphID16> >,
   $_8 const&, (hb_function_sortedness_t)1, (void*)0>&) */

ulong __thiscall
OT::OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>::
serialize_serialize<hb_map_iter_t<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,__8_const&,(hb_function_sortedness_t)1,(void*)0>&>
          (OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true> *this,
          hb_serialize_context_t *param_1,undefined8 *param_2)

{
  long lVar1;
  ushort uVar2;
  long *plVar3;
  short sVar4;
  ushort *puVar5;
  ushort uVar6;
  short *psVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint *puVar10;
  ushort uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  void *pvVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  bool bVar23;
  uint uVar24;
  ushort *puVar25;
  uint uVar26;
  void *__s;
  bool bVar27;
  ulong local_88;
  ulong local_80;
  uint local_74;
  
  *(undefined2 *)this = 0;
  psVar7 = (short *)hb_serialize_context_t::push<OT::Layout::Common::Coverage>(param_1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    pvVar18 = *(void **)(param_1 + 8);
    uVar15 = (long)psVar7 + (2 - (long)pvVar18);
    if ((0x7fffffff < uVar15) || (*(long *)(param_1 + 0x10) - (long)pvVar18 < (long)uVar15)) {
      local_74 = 4;
      goto LAB_0043b30e;
    }
    local_74 = 4;
    local_88 = param_2[1];
    local_80 = param_2[3];
    puVar25 = (ushort *)*param_2;
    lVar12 = param_2[2];
    if ((int)uVar15 != 0) {
      memset(pvVar18,0,uVar15);
      pvVar18 = *(void **)(param_1 + 8);
    }
    *(ulong *)(param_1 + 8) = uVar15 + (long)pvVar18;
    if (pvVar18 != (void *)0x0) {
      uVar16 = (uint)local_88;
      uVar26 = uVar16;
      if ((uint)local_80 < uVar16) {
        uVar26 = (uint)local_80;
      }
      puVar5 = puVar25 + (local_88 & 0xffffffff);
      lVar1 = lVar12 + (local_80 & 0xffffffff) * 2;
      if (uVar16 == 0) {
        iVar21 = 0;
        bVar23 = false;
      }
      else {
        bVar23 = false;
        uVar20 = 0xfffffffe;
        iVar21 = 0;
        uVar15 = local_80;
        puVar9 = puVar25;
        uVar19 = local_88;
        lVar22 = lVar12;
        do {
          iVar14 = (int)uVar15;
          if ((lVar22 == lVar1) && (iVar14 == 0)) break;
          iVar17 = (int)uVar19;
          if ((iVar17 == 0) || (puVar8 = puVar9, iVar14 == 0)) {
            puVar8 = (ushort *)&_hb_CrapPool;
            if (iVar17 != 0) {
              puVar8 = puVar9;
            }
            _hb_CrapPool._0_2_ = 0;
          }
          uVar6 = *puVar8 << 8 | *puVar8 >> 8;
          bVar27 = bVar23;
          if (uVar6 < uVar20) {
            bVar27 = true;
          }
          if (uVar20 == 0xfffffffe) {
            bVar27 = bVar23;
          }
          bVar23 = bVar27;
          uVar13 = uVar20 + 1;
          uVar20 = (uint)uVar6;
          uVar19 = 0;
          if (iVar17 != 0) {
            uVar19 = (ulong)(iVar17 - 1);
          }
          uVar24 = 0;
          if (iVar14 != 0) {
            uVar24 = iVar14 - 1;
          }
          iVar21 = iVar21 + (uint)(uVar13 != uVar20);
          puVar9 = puVar9 + (iVar17 != 0);
          lVar22 = lVar22 + (ulong)(iVar14 != 0) * 2;
          uVar15 = (ulong)uVar24;
        } while ((puVar9 != puVar5) || (uVar15 = (ulong)uVar24, (int)uVar19 != 0));
      }
      iVar21 = 2 - (uint)(uVar26 <= (uint)(iVar21 * 3) && !bVar23);
      sVar4 = (short)iVar21;
      *psVar7 = sVar4 * 0x100;
      if (sVar4 == 2) {
        if (*(int *)(param_1 + 0x2c) == 0) {
          pvVar18 = *(void **)(param_1 + 8);
          uVar15 = (long)psVar7 + (4 - (long)pvVar18);
          if ((0x7fffffff < uVar15) || (*(long *)(param_1 + 0x10) - (long)pvVar18 < (long)uVar15))
          goto LAB_0043b30e;
          if ((int)uVar15 != 0) {
            memset(pvVar18,0,uVar15);
            pvVar18 = *(void **)(param_1 + 8);
          }
          __s = (void *)(uVar15 + (long)pvVar18);
          *(void **)(param_1 + 8) = __s;
          if (pvVar18 != (void *)0x0) {
            if (uVar16 == 0) {
              uVar26 = 0;
            }
            else {
              uVar20 = 0xfffffffe;
              uVar26 = 0;
              uVar19 = local_80 & 0xffffffff;
              uVar15 = local_88 & 0xffffffff;
              lVar22 = lVar12;
              puVar9 = puVar25;
              do {
                iVar21 = (int)uVar19;
                if ((lVar22 == lVar1) && (iVar21 == 0)) break;
                iVar14 = (int)uVar15;
                if ((iVar14 == 0) || (puVar8 = puVar9, iVar21 == 0)) {
                  puVar8 = (ushort *)&_hb_CrapPool;
                  if (iVar14 != 0) {
                    puVar8 = puVar9;
                  }
                  _hb_CrapPool._0_2_ = 0;
                }
                uVar13 = uVar20 + 1;
                uVar20 = (uint)(ushort)(*puVar8 << 8 | *puVar8 >> 8);
                uVar15 = 0;
                if (iVar14 != 0) {
                  uVar15 = (ulong)(iVar14 - 1);
                }
                uVar24 = 0;
                if (iVar21 != 0) {
                  uVar24 = iVar21 - 1;
                }
                uVar26 = uVar26 + (uVar13 != uVar20);
                puVar9 = puVar9 + (iVar14 != 0);
                lVar22 = lVar22 + (ulong)(iVar21 != 0) * 2;
                uVar19 = (ulong)uVar24;
              } while ((puVar9 != puVar5) || (uVar19 = (ulong)uVar24, (int)uVar15 != 0));
            }
            if (*(int *)(param_1 + 0x2c) == 0) {
              uVar15 = (long)psVar7 + (4 - (long)__s);
              if ((0x7fffffff < uVar15) || (*(long *)(param_1 + 0x10) - (long)__s < (long)uVar15))
              goto LAB_0043b30e;
              if ((int)uVar15 != 0) {
                memset(__s,0,uVar15);
                __s = *(void **)(param_1 + 8);
              }
              *(ulong *)(param_1 + 8) = uVar15 + (long)__s;
              if (__s != (void *)0x0) {
                psVar7[1] = (ushort)uVar26 << 8 | (ushort)uVar26 >> 8;
                uVar20 = *(uint *)(param_1 + 0x2c);
                if (0xffff < uVar26) goto LAB_0043b3d8;
                if (uVar20 == 0) {
                  pvVar18 = *(void **)(param_1 + 8);
                  uVar15 = (long)psVar7 + ((ulong)(uVar26 * 6) - (long)pvVar18) + 4;
                  if ((0x7fffffff < uVar15) ||
                     (*(long *)(param_1 + 0x10) - (long)pvVar18 < (long)uVar15)) goto LAB_0043b30e;
                  if ((int)uVar15 != 0) {
                    memset(pvVar18,0,uVar15);
                    pvVar18 = *(void **)(param_1 + 8);
                  }
                  uVar15 = uVar15 + (long)pvVar18;
                  *(ulong *)(param_1 + 8) = uVar15;
                  if (pvVar18 != (void *)0x0) {
                    if ((uVar26 != 0) && (uVar16 != 0)) {
                      uVar15 = 0xfffffffe;
                      uVar19 = 0xffffffff;
                      uVar6 = 0;
                      bVar23 = false;
                      do {
                        do {
                          if ((lVar12 == lVar1) && ((int)local_80 == 0)) goto LAB_0043b28c;
                          if (((int)local_88 == 0) || (puVar9 = puVar25, (int)local_80 == 0)) {
                            puVar9 = (ushort *)&_hb_CrapPool;
                            if ((int)local_88 != 0) {
                              puVar9 = puVar25;
                            }
                            _hb_CrapPool._0_2_ = 0;
                          }
                          uVar2 = *puVar9;
                          uVar26 = (int)uVar15 + 1;
                          uVar11 = uVar2 << 8 | uVar2 >> 8;
                          uVar16 = (uint)uVar11;
                          if (uVar26 != uVar11) {
                            if (((int)uVar15 != -2) && (uVar11 <= uVar26 && uVar26 != uVar16)) {
                              bVar23 = true;
                            }
                            uVar19 = (ulong)((int)uVar19 + 1);
                            psVar7[uVar19 * 3 + 2] = uVar2;
                            psVar7[uVar19 * 3 + 4] = uVar6 << 8 | uVar6 >> 8;
                          }
                          bVar27 = (int)local_80 != 0;
                          uVar20 = (int)local_80 - 1;
                          psVar7[uVar19 * 3 + 3] = uVar2;
                          uVar26 = 0;
                          if ((int)local_88 != 0) {
                            uVar26 = (int)local_88 - 1;
                          }
                          local_80 = 0;
                          if (bVar27) {
                            local_80 = (ulong)uVar20;
                          }
                          puVar25 = puVar25 + ((int)local_88 != 0);
                          lVar12 = lVar12 + (ulong)bVar27 * 2;
                          uVar6 = uVar6 + 1;
                          uVar15 = (ulong)uVar16;
                          local_88 = (ulong)uVar26;
                        } while (puVar25 != puVar5);
                        uVar15 = (ulong)uVar16;
                        local_88 = (ulong)uVar26;
                      } while (uVar26 != 0);
LAB_0043b28c:
                      if ((bVar23) && (uVar6 = psVar7[1], uVar6 != 0)) {
                        sort_r_simple<>((undefined1 *)(psVar7 + 2),
                                        (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8),6,
                                        Layout::Common::RangeRecord<OT::Layout::SmallTypes>::
                                        cmp_range);
                      }
                    }
                    goto LAB_0043b295;
                  }
                }
              }
            }
          }
        }
      }
      else if ((iVar21 == 1) && (*(int *)(param_1 + 0x2c) == 0)) {
        pvVar18 = *(void **)(param_1 + 8);
        uVar15 = (long)psVar7 + (4 - (long)pvVar18);
        if ((uVar15 < 0x80000000) && ((long)uVar15 <= *(long *)(param_1 + 0x10) - (long)pvVar18)) {
          if ((int)uVar15 != 0) {
            memset(pvVar18,0,uVar15);
            pvVar18 = *(void **)(param_1 + 8);
          }
          uVar15 = uVar15 + (long)pvVar18;
          *(ulong *)(param_1 + 8) = uVar15;
          if (pvVar18 != (void *)0x0) {
            psVar7[1] = (ushort)uVar26 << 8 | (ushort)uVar26 >> 8;
            uVar20 = *(uint *)(param_1 + 0x2c);
            if (0xffff < uVar26) {
LAB_0043b3d8:
              local_74 = uVar20 | 0x10;
              goto LAB_0043b30e;
            }
            if (uVar20 == 0) {
              lVar12 = *(long *)(param_1 + 8);
              uVar19 = (long)psVar7 + ((ulong)((uVar26 & 0xffff) * 2) - lVar12) + 4;
              if ((0x7fffffff < uVar19) || (*(long *)(param_1 + 0x10) - lVar12 < (long)uVar19))
              goto LAB_0043b30e;
              *(ulong *)(param_1 + 8) = uVar19 + lVar12;
              if (lVar12 != 0) {
                if (uVar26 != 0) {
                  uVar19 = 0;
                  uVar15 = local_88;
                  do {
                    iVar14 = (int)uVar15;
                    iVar21 = (int)local_80;
                    puVar5 = puVar25;
                    if (iVar14 == 0) {
                      _hb_CrapPool._0_2_ = 0;
                      puVar5 = (ushort *)&_hb_CrapPool;
                    }
                    if (iVar21 == 0) {
                      _hb_CrapPool._0_2_ = 0;
                    }
                    local_80 = 0;
                    psVar7[uVar19 + 2] = *puVar5;
                    uVar15 = 0;
                    if (iVar14 != 0) {
                      uVar15 = (ulong)(iVar14 - 1);
                    }
                    uVar19 = uVar19 + 1;
                    if (iVar21 != 0) {
                      local_80 = (ulong)(iVar21 - 1);
                    }
                    puVar25 = puVar25 + (iVar14 != 0);
                  } while (uVar26 != uVar19);
                }
LAB_0043b295:
                uVar19 = hb_serialize_context_t::pop_pack(param_1,'\x01');
                uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
                if (((uint)uVar19 != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
                  puVar10 = (uint *)hb_vector_t<hb_serialize_context_t::object_t::link_t,false>::
                                    push((hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                          *)(*(long *)(param_1 + 0x48) + 0x10));
                  if (*(int *)(*(long *)(param_1 + 0x48) + 0x10) < 0) {
                    param_1[0x2c] = (hb_serialize_context_t)((byte)param_1[0x2c] | 1);
                  }
                  puVar10[2] = (uint)uVar19;
                  *puVar10 = *puVar10 & 0xffffffc0 | 2;
                  puVar10[1] = (int)this - **(int **)(param_1 + 0x48);
                  *puVar10 = 2;
                }
                goto LAB_0043b3c7;
              }
            }
          }
        }
        else {
LAB_0043b30e:
          *(uint *)(param_1 + 0x2c) = local_74;
        }
      }
    }
  }
  plVar3 = *(long **)(param_1 + 0x48);
  if (plVar3 != (long *)0x0) {
    uVar26 = *(uint *)(param_1 + 0x2c);
    uVar15 = 0;
    if ((8 < (uVar26 >> 1 | (uint)((uVar26 & 1) != 0) << 0x1f)) ||
       ((0x113U >> (uVar26 >> 1 & 0x1f) & 1) == 0)) goto LAB_0043b3c7;
    *(long *)(param_1 + 0x48) = plVar3[6];
    lVar12 = *(long *)(param_1 + 0x20);
    if (lVar12 == 0) {
      lVar12 = *plVar3;
    }
    if (uVar26 == 0) {
      lVar1 = plVar3[1];
      *(long *)(param_1 + 8) = lVar12;
      *(long *)(param_1 + 0x10) = lVar1;
      hb_serialize_context_t::discard_stale_objects(param_1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    if ((int)plVar3[2] != 0) {
      *(undefined4 *)((long)plVar3 + 0x14) = 0;
      free((void *)plVar3[3]);
    }
    plVar3[2] = 0;
    plVar3[3] = 0;
    if ((int)plVar3[4] != 0) {
      *(undefined4 *)((long)plVar3 + 0x24) = 0;
      free((void *)plVar3[5]);
    }
    plVar3[4] = 0;
    plVar3[5] = 0;
    *plVar3 = *(long *)(param_1 + 0x30);
    *(long **)(param_1 + 0x30) = plVar3;
  }
  uVar15 = 0;
LAB_0043b3c7:
  return uVar15 & 0xffffffff;
}


