// Function : arabic_fallback_plan_create
// Namespace: 
// Entry    : 00435490
// Prototype: uint * arabic_fallback_plan_create(long param_1, long param_2)
// Body     : 00435490 - 004373f4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* arabic_fallback_plan_create(hb_ot_shape_plan_t const*, hb_font_t*) */

uint * __cdecl arabic_fallback_plan_create(long param_1,long param_2)

{
  long *plVar1;
  short sVar2;
  ushort uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  uint *__ptr;
  ushort *puVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ushort *puVar12;
  uint *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  size_t sVar17;
  long lVar18;
  ulong uVar19;
  void *pvVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  hb_serialize_context_t *this;
  ushort uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  ulong uVar31;
  size_t sVar32;
  bool bVar33;
  bool bVar34;
  ulong local_19e0;
  uint local_19cc;
  uint *local_19c8;
  undefined1 *local_19c0;
  ushort *local_19b8;
  undefined1 *local_19b0;
  undefined1 *local_19a8;
  uint local_199c;
  undefined8 local_1998;
  undefined8 uStack_1990;
  undefined8 local_1988;
  long lStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined4 local_1968;
  undefined4 local_1964;
  undefined8 local_1960;
  char local_1958;
  undefined8 local_1956;
  undefined8 uStack_194e;
  undefined2 local_1946;
  undefined8 local_1940;
  uint local_1938 [18];
  uint *local_18f0;
  undefined8 local_18e8;
  void *local_18e0;
  void *local_18d8;
  undefined1 *local_18d0;
  void *local_18c8;
  uint local_18bc;
  long *local_18b8;
  undefined8 uStack_18b0;
  undefined8 local_18a8;
  long *plStack_18a0;
  undefined8 local_1898;
  undefined8 uStack_1890;
  undefined4 local_1888;
  undefined4 local_1884;
  undefined8 local_1880;
  char local_1878;
  undefined8 local_1876;
  undefined8 uStack_186e;
  undefined2 local_1866;
  undefined8 local_1860;
  ushort local_16e8 [24];
  undefined8 local_16b8;
  long local_16b0;
  void *local_16a8;
  undefined1 *local_16a0;
  uint local_168c;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  long lStack_1670;
  undefined8 local_1668;
  undefined8 uStack_1660;
  undefined4 local_1658;
  undefined4 local_1654;
  undefined8 local_1650;
  char local_1648;
  undefined8 local_1646;
  undefined8 uStack_163e;
  undefined2 local_1636;
  undefined8 local_1630;
  ushort local_12c8 [40];
  ushort local_1278 [256];
  uint local_1078 [44];
  undefined1 local_fc8 [32];
  undefined1 local_fa8 [636];
  undefined1 local_d2c [3316];
  undefined1 local_38 [8];
  
  __ptr = calloc(1,0x98);
  if (__ptr != (uint *)0x0) {
    iVar6 = *(int *)(param_1 + 0x3c);
    if (0 < iVar6) {
      plVar1 = (long *)(param_2 + 0x90);
      puVar15 = (undefined8 *)(param_2 + 0x98);
      uVar27 = 0;
      puVar28 = shaping_table;
      local_19cc = 0;
      local_19e0 = 0;
      if (0 < iVar6) goto LAB_00435548;
LAB_004373a0:
      __ptr[local_19e0 + 2] = 0;
LAB_004373ae:
      do {
        uVar27 = uVar27 + 1;
        if (uVar27 == 7) {
          *__ptr = local_19cc;
          *(undefined1 *)(__ptr + 1) = 1;
          if (local_19cc != 0) {
            return __ptr;
          }
          break;
        }
        iVar6 = *(int *)(param_1 + 0x3c);
        puVar28 = puVar28 + 2;
        local_19e0 = (ulong)local_19cc;
        if (iVar6 < 1) goto LAB_004373a0;
LAB_00435548:
        iVar6 = iVar6 + -1;
        iVar24 = 0;
        while( true ) {
          while( true ) {
            uVar23 = (uint)(iVar6 + iVar24) >> 1;
            uVar21 = *(uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar23 * 0x24);
            if (uVar21 <= *(uint *)("tiniidemaniflosigilrgilrgilr" + uVar27 * 4)) break;
            iVar6 = uVar23 - 1;
            if (iVar6 < iVar24) goto LAB_004373a0;
          }
          if (*(uint *)("tiniidemaniflosigilrgilrgilr" + uVar27 * 4) <= uVar21) break;
          iVar24 = uVar23 + 1;
          if (iVar6 < iVar24) goto LAB_004373a0;
        }
        uVar21 = *(uint *)(*(long *)(param_1 + 0x40) + 0x1c + (ulong)uVar23 * 0x24);
        __ptr[local_19e0 + 2] = uVar21;
        if (uVar21 != 0) {
          iVar6 = (int)uVar27;
          if (uVar27 < 4) {
            lVar18 = 0;
            uVar21 = 0;
            do {
              sVar2 = *(short *)(puVar28 + lVar18 * 8);
              if (sVar2 != 0) {
                local_1078[0] = 0;
                iVar6 = (**(code **)(*plVar1 + 0x30))
                                  (param_2,*puVar15,(int)lVar18 + 0x621,local_1078);
                if (iVar6 != 0) {
                  local_18e8 = (uint *)((ulong)local_18e8 & 0xffffffff00000000);
                  iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,sVar2,&local_18e8);
                  if (((iVar6 != 0) && (local_1078[0] != (uint)local_18e8)) &&
                     (((uint)local_18e8 | local_1078[0]) < 0x10000)) {
                    local_16e8[(ulong)uVar21 + 0x18] =
                         (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                    local_1278[uVar21] = (ushort)local_18e8 << 8 | (ushort)local_18e8 >> 8;
                    uVar21 = uVar21 + 1;
                  }
                }
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 != 0xb3);
            if (uVar21 == 0) {
              (__ptr + local_19e0 * 2 + 10)[0] = 0;
              (__ptr + local_19e0 * 2 + 10)[1] = 0;
              goto LAB_004373ae;
            }
            puVar29 = (undefined1 *)(ulong)uVar21;
            if (uVar21 != 1) {
              puVar16 = (undefined1 *)0x1;
              uVar19 = 0;
              do {
                uVar25 = local_16e8[(long)(puVar16 + 0x18)];
                uVar10 = uVar19;
                do {
                  if (uVar10 == 0xffffffffffffffff) {
                    puVar30 = (undefined1 *)0x0;
                    if (puVar16 != (undefined1 *)0x0) goto LAB_00435a00;
                    goto LAB_00435a6a;
                  }
                  uVar3 = local_16e8[(uVar10 & 0xffffffff) + 0x18];
                  uVar10 = uVar10 - 1;
                } while (((ushort)(uVar25 << 8 | uVar25 >> 8) <= (ushort)(uVar3 << 8 | uVar3 >> 8))
                        && (uVar25 != uVar3));
                puVar30 = (undefined1 *)(ulong)((int)uVar10 + 2);
                if (puVar16 != puVar30) {
LAB_00435a00:
                  uVar10 = (ulong)((int)puVar30 + 1);
                  sVar17 = (ulong)(uint)((int)puVar16 - (int)puVar30) * 2;
                  memmove(local_16e8 + uVar10 + 0x18,local_16e8 + (long)(puVar30 + 0x18),sVar17);
                  local_16e8[(long)(puVar30 + 0x18)] = uVar25;
                  uVar25 = local_1278[(long)puVar16];
                  memmove(local_1278 + uVar10,local_1278 + (long)puVar30,sVar17);
                  local_1278[(long)puVar30] = uVar25;
                }
LAB_00435a6a:
                puVar16 = puVar16 + 1;
                uVar19 = uVar19 + 1;
              } while (puVar16 != puVar29);
            }
            local_18e8 = local_1078;
            local_18d0 = local_d2c;
            local_1898 = 0;
            uStack_1890 = 0;
            local_18a8 = 0;
            plStack_18a0 = (long *)0x0;
            local_18b8 = (long *)0x0;
            uStack_18b0 = 0;
            local_1888 = 1;
            local_1884 = 1;
            local_1880 = 0;
            local_1878 = '\x01';
            local_1860 = 0;
            local_1876 = 0;
            uStack_186e = 0;
            local_1866 = 0;
                    /* try { // try from 004357b1 to 004357b8 has its CatchHandler @ 0043770a */
            hb_serialize_context_t::reset((hb_serialize_context_t *)&local_18e8);
            puVar7 = (ushort *)
                     hb_serialize_context_t::push<OT::Layout::GSUB_impl::SubstLookup>
                               ((hb_serialize_context_t *)&local_18e8);
            uVar8 = OT::Lookup::serialize(puVar7,(long)&local_18e8,1,8);
            bVar34 = true;
            if ((char)uVar8 != '\0') {
              puVar9 = (undefined2 *)
                       hb_serialize_context_t::push<OT::Layout::GSUB_impl::SubstLookupSubTable>
                                 ((hb_serialize_context_t *)&local_18e8);
              uVar23 = local_18bc;
              if (local_18bc == 0) {
                uVar19 = (long)puVar9 + (2 - (long)local_18e0);
                if ((uVar19 < 0x80000000) && ((long)uVar19 <= (long)local_18d8 - (long)local_18e0))
                {
                  pvVar20 = local_18e0;
                  if ((int)uVar19 != 0) {
                    memset(local_18e0,0,uVar19);
                    pvVar20 = local_18e0;
                  }
                  local_18e0 = (void *)(uVar19 + (long)pvVar20);
                  uVar23 = local_18bc;
                  if (pvVar20 != (void *)0x0) {
                    local_19c8 = (uint *)&local_16b8;
                    local_19c0 = puVar29;
                    local_19b0 = puVar29;
                    if (uVar21 == 0) {
LAB_00435e23:
                      *puVar9 = 0x200;
                      local_19b8 = local_1278;
                      local_19a8 = &hb_first;
                      if (local_18bc == 0) {
                        uVar19 = (long)puVar9 + (6 - (long)local_18e0);
                        if (uVar19 < 0x80000000) {
                          uVar23 = 4;
                          if ((long)uVar19 <= (long)local_18d8 - (long)local_18e0) {
                            pvVar20 = local_18e0;
                            if ((int)uVar19 != 0) {
                              memset(local_18e0,0,uVar19);
                              pvVar20 = local_18e0;
                            }
                            uVar22 = 4;
                            local_18e0 = (void *)(uVar19 + (long)pvVar20);
                            uVar23 = local_18bc;
                            if (pvVar20 != (void *)0x0) {
                              if (local_18bc == 0) {
                                uVar19 = (long)puVar9 + (6 - (long)local_18e0);
                                uVar23 = uVar22;
                                if (uVar19 < 0x80000000) {
                                  if ((long)uVar19 <= (long)local_18d8 - (long)local_18e0) {
                                    if ((int)uVar19 != 0) {
                                      memset(local_18e0,0,uVar19);
                                    }
                                    pvVar20 = (void *)(uVar19 + (long)local_18e0);
                                    bVar34 = local_18e0 != (void *)0x0;
                                    local_18e0 = pvVar20;
                                    uVar23 = local_18bc;
                                    if (bVar34) {
                                      puVar9[2] = (ushort)uVar21 << 8 | (ushort)uVar21 >> 8;
                                      if (uVar21 < 0x10000) {
                                        if (local_18bc == 0) {
                                          uVar19 = (long)puVar9 +
                                                   ((ulong)((uVar21 & 0xffff) * 2) - (long)pvVar20)
                                                   + 6;
                                          uVar23 = uVar22;
                                          if (uVar19 < 0x80000000) {
                                            if ((long)uVar19 <= (long)local_18d8 - (long)pvVar20) {
                                              local_18e0 = (void *)(uVar19 + (long)pvVar20);
                                              uVar23 = local_18bc;
                                              if (pvVar20 != (void *)0x0) {
                                                if (uVar21 != 0) {
                                                  puVar12 = local_1278;
                                                  puVar16 = (undefined1 *)0x0;
                                                  uVar23 = uVar21;
                                                  do {
                                                    if (uVar23 == 0) {
                                                      _hb_CrapPool._0_2_ = 0;
                                                      if (uVar21 == 0) goto LAB_00436036;
LAB_00435fe8:
                                                      uVar25 = *puVar12;
                                                    }
                                                    else {
                                                      if (uVar21 != 0) goto LAB_00435fe8;
LAB_00436036:
                                                      _hb_CrapPool._0_2_ = 0;
                                                      uVar25 = 0;
                                                    }
                                                    bVar34 = uVar21 != 0;
                                                    uVar22 = uVar21 - 1;
                                                    puVar9[(long)(puVar16 + 3)] = uVar25;
                                                    bVar33 = uVar23 != 0;
                                                    uVar21 = uVar23 - 1;
                                                    uVar23 = 0;
                                                    if (bVar33) {
                                                      uVar23 = uVar21;
                                                    }
                                                    puVar16 = puVar16 + 1;
                                                    uVar21 = 0;
                                                    if (bVar34) {
                                                      uVar21 = uVar22;
                                                    }
                                                    puVar12 = puVar12 + bVar34;
                                                  } while (puVar29 != puVar16);
                                                }
                    /* try { // try from 00436188 to 00436197 has its CatchHandler @ 004376f2 */
                                                uVar19 = OT::
                                                  OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>
                                                  ::
                                                  serialize_serialize<hb_map_iter_t<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,__8_const&,(hb_function_sortedness_t)1,(void*)0>&>
                                                            ((
                                                  OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>
                                                  *)(puVar9 + 1),
                                                  (hb_serialize_context_t *)&local_18e8,&local_19c8)
                                                ;
                                                uVar23 = local_18bc;
                                                if ((char)uVar19 != '\0') goto LAB_004361aa;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        uVar23 = local_18bc | 0x10;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          uVar23 = 4;
                        }
                      }
                    }
                    else {
                      uVar25 = (local_1278[0] << 8 | local_1278[0] >> 8) -
                               ((ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8);
                      if (uVar21 != 1) {
                        lVar18 = 1;
                        do {
                          if (uVar25 != (ushort)((local_1278[lVar18] << 8 | local_1278[lVar18] >> 8)
                                                - (local_16e8[lVar18 + 0x18] << 8 |
                                                  local_16e8[lVar18 + 0x18] >> 8)))
                          goto LAB_00435e23;
                          lVar18 = lVar18 + 1;
                        } while (uVar21 != (uint)lVar18);
                      }
                      *puVar9 = 0x100;
                      local_19b8 = local_1278;
                      local_19a8 = &hb_first;
                      if (local_18bc == 0) {
                        uVar19 = (long)puVar9 + (6 - (long)local_18e0);
                        if ((uVar19 < 0x80000000) &&
                           ((long)uVar19 <= (long)local_18d8 - (long)local_18e0)) {
                          if ((int)uVar19 != 0) {
                            memset(local_18e0,0,uVar19);
                          }
                          pvVar20 = (void *)(uVar19 + (long)local_18e0);
                          bVar34 = local_18e0 != (void *)0x0;
                          local_18e0 = pvVar20;
                          uVar23 = local_18bc;
                          if (bVar34) {
                    /* try { // try from 0043599d to 004359ac has its CatchHandler @ 004376f2 */
                            uVar19 = OT::
                                     OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>
                                     ::
                                     serialize_serialize<hb_map_iter_t<hb_zip_iter_t<hb_sorted_array_t<OT::HBGlyphID16>,hb_array_t<OT::HBGlyphID16>>,__8_const&,(hb_function_sortedness_t)1,(void*)0>&>
                                               ((OffsetTo<OT::Layout::Common::Coverage,OT::IntType<unsigned_short,2u>,void,true>
                                                 *)(puVar9 + 1),
                                                (hb_serialize_context_t *)&local_18e8,&local_19c8);
                            uVar23 = local_18bc;
                            if ((char)uVar19 != '\0') {
                              puVar9[2] = uVar25 * 0x100 | uVar25 >> 8;
LAB_004361aa:
                              if (puVar7[2] == 0) {
                                _hb_CrapPool._0_2_ = 0;
                                iVar6 = 0x71cd80;
                              }
                              else {
                                iVar6 = (int)puVar7 + 6;
                              }
                              uVar19 = hb_serialize_context_t::pop_pack
                                                 ((hb_serialize_context_t *)&local_18e8,'\x01');
                              bVar34 = false;
                              if (((uint)uVar19 != 0) && (local_18bc == 0)) {
                                puVar13 = (uint *)hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                                  ::push((
                                                  hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                                  *)(plStack_18a0 + 2));
                                if ((int)plStack_18a0[2] < 0) {
                                  local_18bc = local_18bc | 1;
                                }
                                puVar13[2] = (uint)uVar19;
                                *puVar13 = *puVar13 & 0xffffffc0 | 2;
                                puVar13[1] = iVar6 - (int)*plStack_18a0;
                                *puVar13 = 2;
                                bVar34 = false;
                              }
                              goto LAB_004371c0;
                            }
                          }
                        }
                        else {
                          local_18bc = 4;
                          uVar23 = local_18bc;
                        }
                      }
                    }
                  }
                }
                else {
                  local_18bc = 4;
                  uVar23 = local_18bc;
                }
              }
              local_18bc = uVar23;
              plVar4 = plStack_18a0;
              bVar34 = true;
              if (plStack_18a0 != (long *)0x0) {
                bVar34 = true;
                if (((local_18bc >> 1 | (uint)((local_18bc & 1) != 0) << 0x1f) < 9) &&
                   ((0x113U >> (local_18bc >> 1 & 0x1f) & 1) != 0)) {
                  pvVar20 = local_18c8;
                  if (local_18c8 == (void *)0x0) {
                    pvVar20 = (void *)*plStack_18a0;
                  }
                  plVar5 = (long *)plStack_18a0[6];
                  if (local_18bc == 0) {
                    local_18d8 = (void *)plStack_18a0[1];
                    local_18e0 = pvVar20;
                    plStack_18a0 = (long *)plStack_18a0[6];
                    hb_serialize_context_t::discard_stale_objects
                              ((hb_serialize_context_t *)&local_18e8);
                    plVar5 = plStack_18a0;
                  }
                  plStack_18a0 = plVar5;
                  local_18c8 = (void *)0x0;
                  if ((int)plVar4[2] != 0) {
                    *(int *)((long)plVar4 + 0x14) = 0;
                    free((void *)plVar4[3]);
                  }
                  plVar4[2] = 0;
                  plVar4[3] = 0;
                  if ((int)plVar4[4] != 0) {
                    *(int *)((long)plVar4 + 0x24) = 0;
                    free((void *)plVar4[5]);
                  }
                  plVar4[4] = 0;
                  plVar4[5] = 0;
                  *plVar4 = (long)local_18b8;
                  local_18b8 = plVar4;
                  bVar34 = true;
                }
              }
            }
LAB_004371c0:
            if (((local_18bc == 0) && ((int)local_1898 < 0)) ||
               ((local_18bc == 0 && (local_1878 == '\0')))) {
              local_18bc = 1;
LAB_004371e7:
              puVar7 = (ushort *)0x0;
            }
            else {
              uVar21 = local_18bc;
              if (plStack_18a0 != (long *)0x0) {
                if (local_18bc != 0) {
                  if ((local_18bc & 2) != 0) {
                    local_18bc = local_18bc | 1;
                  }
                  goto LAB_004371e7;
                }
                uVar21 = 0;
                if (1 < local_1898._4_4_) {
                  hb_serialize_context_t::pop_pack((hb_serialize_context_t *)&local_18e8,'\0');
                  hb_serialize_context_t::resolve_links((hb_serialize_context_t *)&local_18e8);
                  uVar21 = local_18bc;
                }
              }
              pvVar20 = local_18d8;
              puVar13 = local_18e8;
              if (bVar34 || uVar21 != 0) goto LAB_004371e7;
              sVar32 = (long)local_18e0 - (long)local_18e8;
              sVar17 = (long)local_18d0 - (long)local_18d8;
              if (((int)(sVar17 + sVar32) == 0) ||
                 (puVar7 = malloc(sVar17 + sVar32 & 0xffffffff), puVar7 == (ushort *)0x0)) {
                puVar7 = (ushort *)0x0;
              }
              else {
                if (sVar32 != 0) {
                  memcpy(puVar7,puVar13,sVar32);
                }
                if (sVar17 != 0) {
                  memcpy((void *)((long)puVar7 + sVar32),pvVar20,sVar17);
                }
              }
            }
            this = (hb_serialize_context_t *)&local_18e8;
LAB_004371ec:
            hb_serialize_context_t::~hb_serialize_context_t(this);
          }
          else {
            if (iVar6 == 4) {
              local_1078[0] = 0;
              lVar18 = *(long *)(*plVar1 + 0x10);
              if (lVar18 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined8 *)(lVar18 + 0x10);
              }
              iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfedf,local_1078,uVar8);
              if (iVar6 == 0) {
LAB_00436931:
                puVar7 = (ushort *)0x0;
                goto LAB_004371f1;
              }
              local_12c8[0] = (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
              local_1938[0] = 0;
              local_1078[0] = 0;
              iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfd88,local_1078);
              if (iVar6 == 0) {
                uVar10 = 0;
                uVar19 = 0;
              }
              else {
                local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfee4,&local_16b8);
                uVar10 = 0;
                uVar19 = 0;
                if (iVar6 != 0) {
                  local_18e8 = (uint *)CONCAT62(local_18e8._2_6_,
                                                (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8);
                  local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                  iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfea4,&local_16b8);
                  if (iVar6 == 0) {
                    uVar19 = 1;
                  }
                  else {
                    local_18e8._0_4_ =
                         CONCAT22((ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8,
                                  (undefined2)local_18e8);
                    local_1278[0] = 3;
                    local_1278[1] = 0;
                    local_19c8 = (uint *)CONCAT62(local_19c8._2_6_,
                                                  (ushort)local_1078[0] << 8 |
                                                  (ushort)local_1078[0] >> 8);
                    local_1938[0] = 1;
                    uVar19 = 2;
                    uVar10 = 1;
                  }
                }
              }
              local_1078[0] = 0;
              iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xf201,local_1078);
              if (iVar6 != 0) {
                local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfee0,&local_16b8);
                if (iVar6 != 0) {
                  *(ushort *)((long)&local_18e8 + uVar19 * 2) =
                       (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8;
                  local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                  uVar21 = (int)uVar19 + 1;
                  iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfeea,&local_16b8);
                  if (iVar6 != 0) {
                    *(ushort *)((long)&local_18e8 + (ulong)uVar21 * 2) =
                         (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8;
                    (local_1278 + uVar10 * 2)[0] = 3;
                    (local_1278 + uVar10 * 2)[1] = 0;
                    *(ushort *)((long)&local_19c8 + uVar10 * 2) =
                         (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                    local_1938[0] = (int)uVar10 + 1;
                    uVar10 = (ulong)local_1938[0];
                    uVar21 = (int)uVar19 + 2;
                  }
                  uVar19 = (ulong)uVar21;
                }
              }
              local_1078[0] = 0;
              iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xf211,local_1078);
              if (iVar6 == 0) {
LAB_00436de8:
                uVar23 = (uint)uVar19;
                if ((int)uVar10 == 0) {
                  puVar7 = (ushort *)0x0;
                  goto LAB_004371f1;
                }
              }
              else {
                local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfee4,&local_16b8);
                if (iVar6 == 0) goto LAB_00436de8;
                *(ushort *)((long)&local_18e8 + uVar19 * 2) =
                     (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8;
                local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                uVar21 = (int)uVar19 + 1;
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfea0,&local_16b8);
                if (iVar6 == 0) {
                  uVar19 = (ulong)uVar21;
                  goto LAB_00436de8;
                }
                uVar23 = (int)uVar19 + 2;
                *(ushort *)((long)&local_18e8 + (ulong)uVar21 * 2) =
                     (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8;
                (local_1278 + uVar10 * 2)[0] = 3;
                (local_1278 + uVar10 * 2)[1] = 0;
                *(ushort *)((long)&local_19c8 + uVar10 * 2) =
                     (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                local_1938[0] = (int)uVar10 + 1;
                uVar10 = (ulong)local_1938[0];
              }
              local_16b8 = local_1078;
              local_16a0 = local_fc8;
              local_1668 = 0;
              uStack_1660 = 0;
              local_1678 = 0;
              lStack_1670 = 0;
              local_1688 = 0;
              uStack_1680 = 0;
              local_1658 = 1;
              local_1654 = 1;
              local_1650 = 0;
              local_1648 = '\x01';
              local_1630 = 0;
              local_1646 = 0;
              uStack_163e = 0;
              local_1636 = 0;
                    /* try { // try from 00436e6c to 00436e7b has its CatchHandler @ 00437507 */
              hb_serialize_context_t::reset((hb_serialize_context_t *)&local_16b8);
              puVar7 = (ushort *)
                       hb_serialize_context_t::push<OT::Layout::GSUB_impl::SubstLookup>
                                 ((hb_serialize_context_t *)&local_16b8);
                    /* try { // try from 00436e84 to 00436ede has its CatchHandler @ 00437502 */
              uVar19 = OT::Layout::GSUB_impl::SubstLookup::serialize_ligature
                                 (puVar7,(hb_serialize_context_t *)&local_16b8,8,local_12c8,1,
                                  (long)local_1938,1,0,(long)&local_19c8,(uint)uVar10,0,
                                  (long)local_1278,(uint)uVar10,0,(undefined4 *)&local_18e8,uVar23);
              if (((local_168c == 0) && ((int)local_1668 < 0)) ||
                 ((local_168c == 0 && (local_1648 == '\0')))) {
                local_168c = 1;
LAB_00436f0f:
                puVar7 = (ushort *)0x0;
              }
              else {
                uVar21 = local_168c;
                if (lStack_1670 != 0) {
                  if (local_168c != 0) {
                    if ((local_168c & 2) != 0) {
                      local_168c = local_168c | 1;
                    }
                    puVar7 = (ushort *)0x0;
                    goto LAB_00436f19;
                  }
                  uVar21 = 0;
                  if (1 < local_1668._4_4_) {
                    hb_serialize_context_t::pop_pack((hb_serialize_context_t *)&local_16b8,'\0');
                    hb_serialize_context_t::resolve_links((hb_serialize_context_t *)&local_16b8);
                    uVar21 = local_168c;
                  }
                }
                pvVar20 = local_16a8;
                puVar13 = local_16b8;
                if ((char)uVar19 == '\0') {
                  puVar7 = (ushort *)0x0;
                }
                else {
                  puVar7 = (ushort *)0x0;
                  if (uVar21 == 0) {
                    sVar32 = local_16b0 - (long)local_16b8;
                    sVar17 = (long)local_16a0 - (long)local_16a8;
                    if (((int)(sVar17 + sVar32) == 0) ||
                       (puVar7 = malloc(sVar17 + sVar32 & 0xffffffff), puVar7 == (ushort *)0x0))
                    goto LAB_00436f0f;
                    if (sVar32 != 0) {
                      memcpy(puVar7,puVar13,sVar32);
                    }
                    if (sVar17 != 0) {
                      memcpy((void *)((long)puVar7 + sVar32),pvVar20,sVar17);
                    }
                  }
                }
              }
LAB_00436f19:
              this = (hb_serialize_context_t *)&local_16b8;
              goto LAB_004371ec;
            }
            if (iVar6 != 5) {
              if (iVar6 == 6) {
                local_1078[0] = 0;
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0x651,local_1078);
                if (iVar6 == 0) goto LAB_00436931;
                local_12c8[0] = (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                local_1938[0] = 0;
                local_1078[0] = 0;
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfc5e,local_1078);
                uVar19 = 0;
                if (iVar6 != 0) {
                  local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                  iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0x64c,&local_16b8);
                  if (iVar6 != 0) {
                    local_19c8 = (uint *)CONCAT62(local_19c8._2_6_,
                                                  (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8)
                    ;
                    local_1278[0] = 2;
                    local_1278[1] = 0;
                    local_18e8 = (uint *)CONCAT62(local_18e8._2_6_,
                                                  (ushort)local_1078[0] << 8 |
                                                  (ushort)local_1078[0] >> 8);
                    local_1938[0] = 1;
                    uVar19 = 1;
                  }
                }
                local_1078[0] = 0;
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfc60,local_1078);
                uVar10 = uVar19;
                if (iVar6 != 0) {
                  local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                  iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0x64e,&local_16b8);
                  if (iVar6 != 0) {
                    local_1938[0] = (int)uVar19 + 1;
                    uVar10 = (ulong)local_1938[0];
                    *(ushort *)((long)&local_19c8 + uVar19 * 2) =
                         (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8;
                    (local_1278 + uVar19 * 2)[0] = 2;
                    (local_1278 + uVar19 * 2)[1] = 0;
                    *(ushort *)((long)&local_18e8 + uVar19 * 2) =
                         (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                  }
                }
                local_1078[0] = 0;
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfc61,local_1078);
                uVar19 = uVar10;
                if (iVar6 != 0) {
                  local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                  iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0x64f,&local_16b8);
                  if (iVar6 != 0) {
                    local_1938[0] = (int)uVar10 + 1;
                    uVar19 = (ulong)local_1938[0];
                    *(ushort *)((long)&local_19c8 + uVar10 * 2) =
                         (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8;
                    (local_1278 + uVar10 * 2)[0] = 2;
                    (local_1278 + uVar10 * 2)[1] = 0;
                    *(ushort *)((long)&local_18e8 + uVar10 * 2) =
                         (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                  }
                }
                local_1078[0] = 0;
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xfc62,local_1078);
                uVar10 = uVar19;
                if (iVar6 != 0) {
                  local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                  iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0x650,&local_16b8);
                  if (iVar6 != 0) {
                    local_1938[0] = (int)uVar19 + 1;
                    uVar10 = (ulong)local_1938[0];
                    *(ushort *)((long)&local_19c8 + uVar19 * 2) =
                         (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8;
                    (local_1278 + uVar19 * 2)[0] = 2;
                    (local_1278 + uVar19 * 2)[1] = 0;
                    *(ushort *)((long)&local_18e8 + uVar19 * 2) =
                         (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                  }
                }
                local_1078[0] = 0;
                iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0xf2ee,local_1078);
                if (iVar6 == 0) {
LAB_00436811:
                  if ((int)uVar10 == 0) goto LAB_00436931;
                }
                else {
                  local_16b8 = (uint *)((ulong)local_16b8 & 0xffffffff00000000);
                  iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,0x64b,&local_16b8);
                  if (iVar6 == 0) goto LAB_00436811;
                  local_1938[0] = (int)uVar10 + 1;
                  *(ushort *)((long)&local_19c8 + uVar10 * 2) =
                       (ushort)local_16b8 << 8 | (ushort)local_16b8 >> 8;
                  (local_1278 + uVar10 * 2)[0] = 2;
                  (local_1278 + uVar10 * 2)[1] = 0;
                  *(ushort *)((long)&local_18e8 + uVar10 * 2) =
                       (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                  uVar10 = (ulong)local_1938[0];
                }
                local_16b8 = local_1078;
                local_16a0 = local_fa8;
                local_1668 = 0;
                uStack_1660 = 0;
                local_1678 = 0;
                lStack_1670 = 0;
                local_1688 = 0;
                uStack_1680 = 0;
                local_1658 = 1;
                local_1654 = 1;
                local_1650 = 0;
                local_1648 = '\x01';
                local_1630 = 0;
                local_1646 = 0;
                uStack_163e = 0;
                local_1636 = 0;
                    /* try { // try from 00436894 to 004368a3 has its CatchHandler @ 004375f2 */
                hb_serialize_context_t::reset((hb_serialize_context_t *)&local_16b8);
                puVar7 = (ushort *)
                         hb_serialize_context_t::push<OT::Layout::GSUB_impl::SubstLookup>
                                   ((hb_serialize_context_t *)&local_16b8);
                    /* try { // try from 004368ac to 004368f9 has its CatchHandler @ 004375e2 */
                uVar21 = (uint)uVar10;
                uVar19 = OT::Layout::GSUB_impl::SubstLookup::serialize_ligature
                                   (puVar7,(hb_serialize_context_t *)&local_16b8,0,local_12c8,1,
                                    (long)local_1938,1,0,(long)&local_18e8,uVar21,0,(long)local_1278
                                    ,uVar21,0,(undefined4 *)&local_19c8,uVar21);
                if (((local_168c == 0) && ((int)local_1668 < 0)) ||
                   ((local_168c == 0 && (local_1648 == '\0')))) {
                  local_168c = 1;
LAB_0043692a:
                  puVar7 = (ushort *)0x0;
                }
                else {
                  uVar21 = local_168c;
                  if (lStack_1670 == 0) {
LAB_0043697a:
                    pvVar20 = local_16a8;
                    puVar13 = local_16b8;
                    if ((char)uVar19 == '\0') goto LAB_0043692a;
                    puVar7 = (ushort *)0x0;
                    if (uVar21 == 0) {
                      sVar32 = local_16b0 - (long)local_16b8;
                      sVar17 = (long)local_16a0 - (long)local_16a8;
                      if (((int)(sVar17 + sVar32) == 0) ||
                         (puVar7 = malloc(sVar17 + sVar32 & 0xffffffff), puVar7 == (ushort *)0x0)) {
                        puVar7 = (ushort *)0x0;
                      }
                      else {
                        if (sVar32 != 0) {
                          memcpy(puVar7,puVar13,sVar32);
                        }
                        if (sVar17 != 0) {
                          memcpy((void *)((long)puVar7 + sVar32),pvVar20,sVar17);
                        }
                      }
                    }
                  }
                  else {
                    if (local_168c == 0) {
                      uVar21 = 0;
                      if (1 < local_1668._4_4_) {
                        hb_serialize_context_t::pop_pack((hb_serialize_context_t *)&local_16b8,'\0')
                        ;
                        hb_serialize_context_t::resolve_links((hb_serialize_context_t *)&local_16b8)
                        ;
                        uVar21 = local_168c;
                      }
                      goto LAB_0043697a;
                    }
                    if ((local_168c & 2) != 0) {
                      local_168c = local_168c | 1;
                    }
                    puVar7 = (ushort *)0x0;
                  }
                }
                goto LAB_00436f19;
              }
              (__ptr + local_19e0 * 2 + 10)[0] = 0;
              (__ptr + local_19e0 * 2 + 10)[1] = 0;
              goto LAB_004373ae;
            }
            lVar18 = 0;
            puVar9 = &ligature_table;
            uVar19 = 0;
            do {
              local_1078[0] = 0;
              iVar6 = (**(code **)(*plVar1 + 0x30))(param_2,*puVar15,*puVar9,local_1078);
              if (iVar6 != 0) {
                local_16e8[uVar19] = (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                (local_12c8 + uVar19 * 2)[0] = 0;
                (local_12c8 + uVar19 * 2)[1] = 0;
                local_1938[uVar19] = (uint)lVar18;
                uVar19 = (ulong)((int)uVar19 + 1);
              }
              lVar18 = lVar18 + 1;
              puVar9 = puVar9 + 0x1d;
            } while (lVar18 != 0x12);
            uVar21 = (uint)uVar19;
            if (1 < uVar21) {
              uVar10 = 1;
              uVar31 = 0;
              do {
                uVar25 = local_16e8[uVar10];
                uVar11 = uVar31;
                do {
                  if (uVar11 == 0xffffffffffffffff) {
                    uVar11 = 0;
                    if (uVar10 != 0) goto LAB_00435c00;
                    goto LAB_00435c6d;
                  }
                  uVar3 = local_16e8[uVar11 & 0xffffffff];
                  uVar11 = uVar11 - 1;
                } while (((ushort)(uVar25 << 8 | uVar25 >> 8) <= (ushort)(uVar3 << 8 | uVar3 >> 8))
                        && (uVar25 != uVar3));
                uVar11 = (ulong)((int)uVar11 + 2);
                if (uVar10 != uVar11) {
LAB_00435c00:
                  uVar22 = (int)uVar11 + 1;
                  uVar26 = (ulong)(uint)((int)uVar10 - (int)uVar11);
                  memmove(local_16e8 + uVar22,local_16e8 + uVar11,uVar26 * 2);
                  local_16e8[uVar11] = uVar25;
                  uVar23 = local_1938[uVar10];
                  memmove(local_1938 + uVar22,local_1938 + uVar11,uVar26 << 2);
                  local_1938[uVar11] = uVar23;
                }
LAB_00435c6d:
                uVar10 = uVar10 + 1;
                uVar31 = uVar31 + 1;
              } while (uVar10 != uVar19);
            }
            if (uVar21 != 0) {
              uVar11 = 0;
              uVar31 = 0;
              uVar10 = 0;
              do {
                uVar23 = local_1938[uVar11];
                lVar18 = 1;
                uVar26 = uVar10;
                do {
                  local_1078[0] = 0;
                  iVar6 = (**(code **)(*plVar1 + 0x30))
                                    (param_2,*puVar15,
                                     (&ligature_table)[(ulong)uVar23 * 0x1d + lVar18 * 2],local_1078
                                    );
                  uVar10 = uVar26;
                  if ((iVar6 != 0) &&
                     (*(short *)(&UNK_005f7f5e + lVar18 * 4 + (ulong)uVar23 * 0x3a) != 0)) {
                    local_19c8 = (uint *)((ulong)local_19c8 & 0xffffffff00000000);
                    iVar6 = (**(code **)(*plVar1 + 0x30))
                                      (param_2,*puVar15,
                                       *(short *)(&UNK_005f7f5e + lVar18 * 4 + (ulong)uVar23 * 0x3a)
                                       ,&local_19c8);
                    if (iVar6 != 0) {
                      uVar10 = (ulong)((int)uVar26 + 1);
                      *(ushort *)((long)&local_18e8 + uVar26 * 2) =
                           (ushort)local_19c8 << 8 | (ushort)local_19c8 >> 8;
                      (local_16e8 + uVar31 * 2 + 0x18)[0] = 2;
                      (local_16e8 + uVar31 * 2 + 0x18)[1] = 0;
                      local_1278[uVar31] = (ushort)local_1078[0] << 8 | (ushort)local_1078[0] >> 8;
                      *(int *)(local_12c8 + uVar11 * 2) = *(int *)(local_12c8 + uVar11 * 2) + 1;
                      uVar31 = (ulong)((int)uVar31 + 1);
                    }
                  }
                  lVar18 = lVar18 + 1;
                  uVar26 = uVar10;
                } while (lVar18 != 0xf);
                uVar11 = uVar11 + 1;
              } while (uVar11 != uVar19);
              uVar23 = (uint)uVar31;
              if (uVar23 == 0) {
                puVar7 = (ushort *)0x0;
                goto LAB_004371f1;
              }
              local_19c8 = local_1078;
              local_19b0 = local_38;
              local_1978 = 0;
              uStack_1970 = 0;
              local_1988 = 0;
              lStack_1980 = 0;
              local_1998 = 0;
              uStack_1990 = 0;
              local_1968 = 1;
              local_1964 = 1;
              local_1960 = 0;
              local_1958 = '\x01';
              local_1940 = 0;
              local_1956 = 0;
              uStack_194e = 0;
              local_1946 = 0;
                    /* try { // try from 004360bb to 004360c7 has its CatchHandler @ 00437402 */
              hb_serialize_context_t::reset((hb_serialize_context_t *)&local_19c8);
              puVar7 = (ushort *)
                       hb_serialize_context_t::push<OT::Layout::GSUB_impl::SubstLookup>
                                 ((hb_serialize_context_t *)&local_19c8);
                    /* try { // try from 004360e2 to 00436135 has its CatchHandler @ 004373f5 */
              uVar19 = OT::Layout::GSUB_impl::SubstLookup::serialize_ligature
                                 (puVar7,(hb_serialize_context_t *)&local_19c8,8,local_16e8,uVar19,
                                  (long)local_12c8,uVar21,0,(long)local_1278,uVar23,0,
                                  (long)&local_16b8,uVar23,0,(undefined4 *)&local_18e8,(uint)uVar10)
              ;
              if (((local_199c == 0) && ((int)local_1978 < 0)) ||
                 ((local_199c == 0 && (local_1958 == '\0')))) {
                local_199c = 1;
                puVar7 = (ushort *)0x0;
                this = (hb_serialize_context_t *)&local_19c8;
              }
              else {
                uVar21 = local_199c;
                if (lStack_1980 == 0) {
LAB_00436a50:
                  puVar12 = local_19b8;
                  if ((char)uVar19 == '\0') {
                    puVar7 = (ushort *)0x0;
                    this = (hb_serialize_context_t *)&local_19c8;
                    goto LAB_004371ec;
                  }
                  puVar7 = (ushort *)0x0;
                  if (uVar21 == 0) {
                    sVar32 = (long)local_19c0 - (long)local_19c8;
                    sVar17 = (long)local_19b0 - (long)local_19b8;
                    if ((int)(sVar17 + sVar32) != 0) {
                      local_18f0 = local_19c8;
                      puVar7 = malloc(sVar17 + sVar32 & 0xffffffff);
                      if (puVar7 != (ushort *)0x0) {
                        if (sVar32 != 0) {
                          memcpy(puVar7,local_18f0,sVar32);
                        }
                        if (sVar17 != 0) {
                          memcpy((void *)((long)puVar7 + sVar32),puVar12,sVar17);
                        }
                        goto LAB_00437049;
                      }
                    }
                    puVar7 = (ushort *)0x0;
                  }
                }
                else {
                  if (local_199c == 0) {
                    uVar21 = 0;
                    if (1 < local_1978._4_4_) {
                      hb_serialize_context_t::pop_pack((hb_serialize_context_t *)&local_19c8,'\0');
                      hb_serialize_context_t::resolve_links((hb_serialize_context_t *)&local_19c8);
                      uVar21 = local_199c;
                    }
                    goto LAB_00436a50;
                  }
                  if ((local_199c & 2) != 0) {
                    local_199c = local_199c | 1;
                  }
                  puVar7 = (ushort *)0x0;
                }
LAB_00437049:
                this = (hb_serialize_context_t *)&local_19c8;
              }
              goto LAB_004371ec;
            }
            puVar7 = (ushort *)0x0;
          }
LAB_004371f1:
          *(ushort **)(__ptr + local_19e0 * 2 + 10) = puVar7;
          if (puVar7 != (ushort *)0x0) {
            puVar14 = OT::hb_ot_layout_lookup_accelerator_t::
                      create<OT::Layout::GSUB_impl::SubstLookup>(puVar7);
            *(ulong **)(__ptr + local_19e0 * 2 + 0x18) = puVar14;
            local_19cc = local_19cc + 1;
          }
        }
      } while( true );
    }
    free(__ptr);
  }
  return &_hb_NullPool;
}


