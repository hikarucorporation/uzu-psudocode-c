// Function : serialize_ligature
// Namespace: OT:Layout:GSUB_impl:SubstLookup
// Entry    : 00438360
// Prototype: ulong serialize_ligature(ushort * param_1, hb_serialize_context_t * param_2, ushort param_3, ushort * param_4, ulong param_5, long param_6, uint param_7, undefined8 param_8, long param_9, uint param_10, undefined8 param_11, long param_12, uint param_13, undefined8 param_14, undefined4 * param_15, uint param_16)
// Body     : 00438360 - 0043994b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* OT::Layout::GSUB_impl::SubstLookup::serialize_ligature(hb_serialize_context_t*, unsigned int,
   hb_sorted_array_t<OT::HBGlyphID16 const>, hb_array_t<unsigned int const>,
   hb_array_t<OT::HBGlyphID16 const>, hb_array_t<unsigned int const>, hb_array_t<OT::HBGlyphID16
   const>) */

ulong __cdecl
OT::Layout::GSUB_impl::SubstLookup::serialize_ligature
          (ushort *param_1,hb_serialize_context_t *param_2,ushort param_3,ushort *param_4,
          ulong param_5,long param_6,uint param_7,undefined8 param_8,long param_9,uint param_10,
          undefined8 param_11,long param_12,uint param_13,undefined8 param_14,undefined4 *param_15,
          uint param_16)

{
  hb_serialize_context_t *phVar1;
  hb_serialize_context_t *phVar2;
  hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false> *this;
  ulong uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  short sVar13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  ushort uVar16;
  undefined8 uVar17;
  undefined2 *puVar18;
  ulong uVar19;
  uint *puVar20;
  int *piVar21;
  chunk_t *pcVar22;
  short *psVar23;
  ushort *puVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  int iVar28;
  undefined4 *puVar29;
  ushort uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  uint uVar35;
  void *pvVar36;
  undefined4 *puVar37;
  bool bVar38;
  void *pvVar39;
  long lVar40;
  uint uVar41;
  undefined8 *puVar42;
  bool bVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  ulong uVar51;
  undefined1 auVar52 [14];
  undefined1 auVar53 [16];
  undefined1 auVar54 [14];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint local_e0;
  undefined4 *local_b0;
  long local_a8;
  long local_a0;
  chunk_t *local_98;
  uint local_90;
  uint local_8c;
  undefined2 *local_88;
  long local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ushort *local_60;
  long local_58;
  ushort *local_50;
  undefined8 *local_48;
  ulong local_40;
  ushort *local_38;
  
  local_58 = param_6;
  uVar17 = Lookup::serialize(param_1,(long)param_2,4,param_3);
  if ((char)uVar17 != '\0') {
    local_60 = param_1;
    puVar18 = (undefined2 *)
              hb_serialize_context_t::push<OT::Layout::GSUB_impl::SubstLookupSubTable>(param_2);
    phVar1 = param_2 + 0x2c;
    if (*(int *)(param_2 + 0x2c) == 0) {
      pvVar39 = *(void **)(param_2 + 8);
      uVar32 = (long)puVar18 + (2 - (long)pvVar39);
      if ((uVar32 < 0x80000000) && ((long)uVar32 <= *(long *)(param_2 + 0x10) - (long)pvVar39)) {
        phVar2 = param_2 + 8;
        if ((int)uVar32 != 0) {
          memset(pvVar39,0,uVar32);
          pvVar39 = *(void **)phVar2;
        }
        *(ulong *)phVar2 = uVar32 + (long)pvVar39;
        if ((pvVar39 != (void *)0x0) && (*puVar18 = 0x100, *(uint *)phVar1 == 0)) {
          pvVar39 = *(void **)(param_2 + 8);
          uVar32 = (long)puVar18 + (6 - (long)pvVar39);
          if ((0x7fffffff < uVar32) || (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar32))
          goto LAB_00439784;
          if ((int)uVar32 != 0) {
            memset(pvVar39,0,uVar32);
            pvVar39 = *(void **)phVar2;
          }
          pvVar36 = (void *)(uVar32 + (long)pvVar39);
          *(void **)phVar2 = pvVar36;
          if ((pvVar39 == (void *)0x0) || (*(uint *)phVar1 != 0)) goto LAB_004391d4;
          uVar32 = (long)puVar18 + (6 - (long)pvVar36);
          if ((0x7fffffff < uVar32) || (*(long *)(param_2 + 0x10) - (long)pvVar36 < (long)uVar32))
          goto LAB_00439784;
          if ((int)uVar32 != 0) {
            memset(pvVar36,0,uVar32);
            pvVar36 = *(void **)phVar2;
          }
          *(ulong *)phVar2 = uVar32 + (long)pvVar36;
          if (pvVar36 != (void *)0x0) {
            uVar16 = (ushort)param_5 << 8 | (ushort)param_5 >> 8;
            puVar18[2] = uVar16;
            if ((param_5 & 0xffff0000) == 0) {
              if (*(uint *)phVar1 == 0) {
                pvVar39 = *(void **)(param_2 + 8);
                uVar32 = (long)puVar18 + ((param_5 & 0xffff) * 2 - (long)pvVar39) + 6;
                if ((0x7fffffff < uVar32) ||
                   (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar32)) goto LAB_00439784;
                if ((int)uVar32 != 0) {
                  memset(pvVar39,0,uVar32);
                  pvVar39 = *(void **)phVar2;
                }
                *(ulong *)phVar2 = uVar32 + (long)pvVar39;
                if (pvVar39 == (void *)0x0) goto LAB_004391d4;
                local_b0 = param_15;
                local_a0 = param_12;
                local_e0 = param_10;
                local_a8 = param_9;
                local_80 = (param_5 & 0xffff) * 2 + 2;
                uVar32 = param_5 & 0xffffffff;
                local_78 = 1;
                if (1 < uVar32) {
                  local_78 = uVar32;
                }
                this = (hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>
                        *)(param_2 + 0x38);
                uVar33 = 0;
                local_88 = puVar18;
                local_70 = param_5;
                do {
                  if (uVar33 < param_7) {
                    puVar20 = (uint *)(local_58 + uVar33 * 4);
                  }
                  else {
                    puVar20 = &_hb_NullPool;
                  }
                  uVar31 = *puVar20;
                  if (uVar33 < (ushort)(puVar18[2] << 8 | (ushort)puVar18[2] >> 8)) {
                    puVar42 = (undefined8 *)(puVar18 + uVar33 + 3);
                  }
                  else {
                    _hb_CrapPool._0_2_ = 0;
                    puVar42 = &_hb_CrapPool;
                  }
                  uVar41 = local_e0;
                  if (uVar31 < local_e0) {
                    uVar41 = uVar31;
                  }
                  uVar19 = (ulong)uVar41;
                  uVar35 = param_13;
                  if (uVar31 < param_13) {
                    uVar35 = uVar31;
                  }
                  local_40 = (ulong)uVar35;
                  *(undefined2 *)puVar42 = 0;
                  local_90 = param_13;
                  local_68 = uVar33;
                  if (*(uint *)phVar1 != 0) {
LAB_00439105:
                    pcVar22 = *(chunk_t **)(param_2 + 0x48);
                    if (pcVar22 != (chunk_t *)0x0) {
                      uVar35 = *(uint *)phVar1;
LAB_00439115:
                      if (((uVar35 >> 1 | (uint)((uVar35 & 1) != 0) << 0x1f) < 9) &&
                         ((0x113U >> (uVar35 >> 1 & 0x1f) & 1) != 0)) {
                        *(long *)(param_2 + 0x48) = *(long *)(pcVar22 + 0x30);
                        lVar27 = *(long *)(param_2 + 0x20);
                        if (lVar27 == 0) {
                          lVar27 = *(long *)pcVar22;
                        }
                        if (uVar35 == 0) {
                          lVar40 = *(long *)(pcVar22 + 8);
                          *(long *)(param_2 + 8) = lVar27;
                          *(long *)(param_2 + 0x10) = lVar40;
                          hb_serialize_context_t::discard_stale_objects(param_2);
                        }
                        *(undefined8 *)(param_2 + 0x20) = 0;
                        if (*(int *)(pcVar22 + 0x10) != 0) {
                          *(undefined4 *)(pcVar22 + 0x14) = 0;
                          free(*(void **)(pcVar22 + 0x18));
                        }
                        *(undefined1 (*) [16])(pcVar22 + 0x10) = (undefined1  [16])0x0;
                        if (*(int *)(pcVar22 + 0x20) != 0) {
                          *(undefined4 *)(pcVar22 + 0x24) = 0;
                          free(*(void **)(pcVar22 + 0x28));
                        }
                        *(undefined1 (*) [16])(pcVar22 + 0x20) = (undefined1  [16])0x0;
                        *(long *)pcVar22 = *(long *)(param_2 + 0x30);
                        *(chunk_t **)(param_2 + 0x30) = pcVar22;
                      }
                    }
                    goto LAB_004391d4;
                  }
                  pcVar22 = *(chunk_t **)(param_2 + 0x30);
                  if (pcVar22 == (chunk_t *)0x0) {
                    uVar33 = hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>
                             ::alloc((uint *)this,*(int *)(param_2 + 0x3c) + 1);
                    if ((char)uVar33 != '\0') {
                      pcVar22 = malloc(0x700);
                      local_98 = pcVar22;
                      if (pcVar22 != (chunk_t *)0x0) {
                        hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>
                        ::push<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*&>
                                  (this,&local_98);
                        pcVar22 = hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t::thread
                                            (pcVar22);
                        *(chunk_t **)(param_2 + 0x30) = pcVar22;
                        goto LAB_0043869e;
                      }
                    }
                    if (*(uint *)phVar1 == 0) {
                      *(uint *)phVar1 = 1;
                    }
                    goto LAB_00439105;
                  }
LAB_0043869e:
                  *(long *)(param_2 + 0x30) = *(long *)pcVar22;
                  *(long *)(pcVar22 + 0x20) = 0;
                  *(long *)(pcVar22 + 0x28) = 0;
                  *(long *)(pcVar22 + 0x10) = 0;
                  *(long *)(pcVar22 + 0x18) = 0;
                  *(long *)pcVar22 = 0;
                  *(long *)(pcVar22 + 8) = 0;
                  *(long *)(pcVar22 + 0x30) = 0;
                  lVar27 = *(long *)(param_2 + 0x10);
                  *(long *)pcVar22 = *(long *)(param_2 + 8);
                  *(long *)(pcVar22 + 8) = lVar27;
                  *(long *)(pcVar22 + 0x30) = *(long *)(param_2 + 0x48);
                  *(chunk_t **)(param_2 + 0x48) = pcVar22;
                  uVar35 = *(uint *)(param_2 + 0x2c);
                  if (uVar35 != 0) goto LAB_00439115;
                  puVar24 = *(ushort **)(param_2 + 8);
                  uVar35 = 4;
                  if (*(long *)(param_2 + 0x10) - (long)puVar24 < 2) goto LAB_00439767;
                  *puVar24 = 0;
                  lVar27 = *(long *)phVar2;
                  pvVar39 = (void *)(lVar27 + 2);
                  *(void **)phVar2 = pvVar39;
                  if ((lVar27 == 0) || (*(uint *)phVar1 != 0)) goto LAB_00439105;
                  uVar33 = (long)puVar24 + (2 - (long)pvVar39);
                  if ((0x7fffffff < uVar33) ||
                     (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar33)) {
LAB_00439767:
                    *(uint *)phVar1 = uVar35;
                    goto LAB_00439105;
                  }
                  if ((int)uVar33 == 0) {
                    *(ulong *)phVar2 = (long)pvVar39 + uVar33;
                  }
                  else {
                    memset(pvVar39,0,uVar33);
                    lVar27 = *(long *)phVar2;
                    *(ulong *)phVar2 = uVar33 + lVar27;
                    if (lVar27 == 0) goto LAB_00439105;
                  }
                  *puVar24 = (ushort)uVar41 << 8 | (ushort)uVar41 >> 8;
                  if (0xffff < uVar41) {
                    uVar35 = *(uint *)phVar1 | 0x10;
                    goto LAB_00439767;
                  }
                  if (*(uint *)phVar1 != 0) goto LAB_00439105;
                  pvVar39 = *(void **)(param_2 + 8);
                  uVar33 = (long)puVar24 + ((uVar19 & 0xffff) * 2 - (long)pvVar39) + 2;
                  if ((0x7fffffff < uVar33) ||
                     (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar33)) goto LAB_00439767;
                  if ((int)uVar33 != 0) {
                    memset(pvVar39,0,uVar33);
                    pvVar39 = *(void **)phVar2;
                  }
                  *(ulong *)phVar2 = uVar33 + (long)pvVar39;
                  if (pvVar39 == (void *)0x0) goto LAB_00439105;
                  if (uVar19 != 0) {
                    uVar33 = 0;
                    local_50 = puVar24;
                    local_48 = puVar42;
                    do {
                      if (uVar33 < local_40) {
                        piVar21 = (int *)(local_a0 + uVar33 * 4);
                      }
                      else {
                        piVar21 = &_hb_NullPool;
                      }
                      iVar28 = *piVar21;
                      if (iVar28 < 1) {
                        iVar28 = 1;
                      }
                      uVar41 = iVar28 - 1;
                      if (uVar33 < (ushort)(*puVar24 << 8 | *puVar24 >> 8)) {
                        local_38 = puVar24 + uVar33 + 1;
                      }
                      else {
                        _hb_CrapPool._0_2_ = 0;
                        local_38 = (ushort *)&_hb_CrapPool;
                      }
                      uVar35 = param_16;
                      if (uVar41 < param_16) {
                        uVar35 = uVar41;
                      }
                      *local_38 = 0;
                      local_8c = param_16;
                      if (*(uint *)phVar1 != 0) {
LAB_00439036:
                        pcVar22 = *(chunk_t **)(param_2 + 0x48);
                        if (pcVar22 == (chunk_t *)0x0) goto LAB_004391d4;
                        uVar35 = *(uint *)phVar1;
                        if ((8 < (uVar35 >> 1 | (uint)((uVar35 & 1) != 0) << 0x1f)) ||
                           ((0x113U >> (uVar35 >> 1 & 0x1f) & 1) == 0)) goto LAB_00439115;
                        *(long *)(param_2 + 0x48) = *(long *)(pcVar22 + 0x30);
                        lVar27 = *(long *)(param_2 + 0x20);
                        if (lVar27 == 0) {
                          lVar27 = *(long *)pcVar22;
                        }
                        if (uVar35 == 0) {
                          lVar40 = *(long *)(pcVar22 + 8);
                          *(long *)(param_2 + 8) = lVar27;
                          *(long *)(param_2 + 0x10) = lVar40;
                          hb_serialize_context_t::discard_stale_objects(param_2);
                        }
                        *(undefined8 *)(param_2 + 0x20) = 0;
                        if (*(int *)(pcVar22 + 0x10) != 0) {
                          *(undefined4 *)(pcVar22 + 0x14) = 0;
                          free(*(void **)(pcVar22 + 0x18));
                        }
                        *(undefined1 (*) [16])(pcVar22 + 0x10) = (undefined1  [16])0x0;
                        if (*(int *)(pcVar22 + 0x20) != 0) {
                          *(undefined4 *)(pcVar22 + 0x24) = 0;
                          free(*(void **)(pcVar22 + 0x28));
                        }
                        *(undefined1 (*) [16])(pcVar22 + 0x20) = (undefined1  [16])0x0;
                        *(long *)pcVar22 = *(long *)(param_2 + 0x30);
                        *(chunk_t **)(param_2 + 0x30) = pcVar22;
                        goto LAB_00439105;
                      }
                      pcVar22 = *(chunk_t **)(param_2 + 0x30);
                      if (pcVar22 == (chunk_t *)0x0) {
                        uVar34 = hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>
                                 ::alloc((uint *)this,*(int *)(param_2 + 0x3c) + 1);
                        if ((char)uVar34 != '\0') {
                          pcVar22 = malloc(0x700);
                          local_98 = pcVar22;
                          if (pcVar22 != (chunk_t *)0x0) {
                            hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>
                            ::push<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*&>
                                      (this,&local_98);
                            pcVar22 = hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t::
                                      thread(pcVar22);
                            *(chunk_t **)(param_2 + 0x30) = pcVar22;
                            goto LAB_004388bc;
                          }
                        }
                        if (*(uint *)phVar1 == 0) {
                          *(uint *)phVar1 = 1;
                        }
                        goto LAB_00439036;
                      }
LAB_004388bc:
                      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)pcVar22;
                      *(undefined1 (*) [16])(pcVar22 + 0x20) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(pcVar22 + 0x10) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])pcVar22 = (undefined1  [16])0x0;
                      *(undefined8 *)(pcVar22 + 0x30) = 0;
                      uVar17 = *(undefined8 *)(param_2 + 0x10);
                      *(undefined8 *)pcVar22 = *(undefined8 *)(param_2 + 8);
                      *(undefined8 *)(pcVar22 + 8) = uVar17;
                      *(undefined8 *)(pcVar22 + 0x30) = *(undefined8 *)(param_2 + 0x48);
                      *(chunk_t **)(param_2 + 0x48) = pcVar22;
                      if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00439036;
                      puVar5 = *(undefined4 **)(param_2 + 8);
                      uVar26 = 4;
                      if (*(long *)(param_2 + 0x10) - (long)puVar5 < 4) {
LAB_00439033:
                        *(uint *)phVar1 = uVar26;
                        goto LAB_00439036;
                      }
                      uVar4 = *(undefined2 *)(local_a8 + uVar33 * 2);
                      *puVar5 = 0;
                      lVar27 = *(long *)phVar2;
                      *(long *)phVar2 = lVar27 + 4;
                      if ((lVar27 == 0) || (*(undefined2 *)puVar5 = uVar4, *(uint *)phVar1 != 0))
                      goto LAB_00439036;
                      pvVar39 = *(void **)(param_2 + 8);
                      uVar34 = (long)puVar5 + (4 - (long)pvVar39);
                      if ((0x7fffffff < uVar34) ||
                         (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar34))
                      goto LAB_00439033;
                      if ((int)uVar34 != 0) {
                        memset(pvVar39,0,uVar34);
                        pvVar39 = *(void **)phVar2;
                      }
                      *(ulong *)phVar2 = uVar34 + (long)pvVar39;
                      if (pvVar39 == (void *)0x0) goto LAB_00439036;
                      uVar25 = uVar35 + 1;
                      uVar30 = (ushort)uVar25;
                      *(ushort *)((long)puVar5 + 2) = uVar30 << 8 | uVar30 >> 8;
                      if (0xffff < uVar25) {
                        uVar26 = *(uint *)phVar1 | 0x10;
                        goto LAB_00439033;
                      }
                      if (*(uint *)phVar1 != 0) goto LAB_00439036;
                      uVar34 = (ulong)((uVar25 & 0xffff) * 2);
                      if (uVar30 == 0) {
                        uVar34 = 2;
                      }
                      lVar27 = *(long *)(param_2 + 8);
                      uVar34 = (long)puVar5 + (uVar34 - lVar27) + 2;
                      if ((0x7fffffff < uVar34) ||
                         (*(long *)(param_2 + 0x10) - lVar27 < (long)uVar34)) goto LAB_00439033;
                      *(ulong *)phVar2 = uVar34 + lVar27;
                      if (lVar27 == 0) goto LAB_00439036;
                      if (uVar35 != 0) {
                        puVar37 = local_b0;
                        if (uVar35 == 1) {
                          uVar26 = 1;
                          uVar34 = 0;
                        }
                        else {
                          uVar34 = 0;
                          uVar26 = uVar35;
                          do {
                            while( true ) {
                              bVar43 = uVar26 == 0;
                              iVar28 = uVar26 - 1;
                              puVar29 = &_hb_NullPool;
                              if (!bVar43) {
                                puVar29 = puVar37;
                              }
                              *(undefined2 *)((long)puVar5 + uVar34 * 2 + 4) =
                                   *(undefined2 *)puVar29;
                              if (bVar43) {
                                iVar28 = 0;
                              }
                              puVar37 = (undefined4 *)((long)puVar37 + (ulong)!bVar43 * 2);
                              uVar26 = iVar28 - 1;
                              puVar29 = &_hb_NullPool;
                              if (iVar28 != 0) {
                                puVar29 = puVar37;
                              }
                              *(undefined2 *)((long)puVar5 + uVar34 * 2 + 6) =
                                   *(undefined2 *)puVar29;
                              uVar34 = uVar34 + 2;
                              if (iVar28 == 0) break;
                              puVar37 = (undefined4 *)((long)puVar37 + 2);
                              if ((uVar35 & 0xfffffffe) == uVar34) goto LAB_00438a3a;
                            }
                            uVar26 = 0;
                          } while ((uVar35 & 0xfffffffe) != uVar34);
                        }
LAB_00438a3a:
                        if ((uVar35 & 1) != 0) {
                          puVar29 = &_hb_NullPool;
                          if (uVar26 != 0) {
                            puVar29 = puVar37;
                          }
                          *(undefined2 *)((long)puVar5 + uVar34 * 2 + 4) = *(undefined2 *)puVar29;
                        }
                      }
                      uVar34 = hb_serialize_context_t::pop_pack(param_2,'\x01');
                      puVar24 = local_50;
                      uVar35 = local_8c;
                      if (((uint)uVar34 != 0) && (*(int *)(param_2 + 0x2c) == 0)) {
                        puVar20 = (uint *)hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                          ::push((hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                                  *)(*(long *)(param_2 + 0x48) + 0x10));
                        if (*(int *)(*(long *)(param_2 + 0x48) + 0x10) < 0) {
                          *phVar1 = (hb_serialize_context_t)((byte)*phVar1 | 1);
                        }
                        puVar20[2] = (uint)uVar34;
                        *puVar20 = *puVar20 & 0xffffffc0 | 2;
                        puVar20[1] = (int)local_38 - **(int **)(param_2 + 0x48);
                        *puVar20 = 2;
                      }
                      if (uVar35 < uVar41) {
                        uVar41 = uVar35;
                      }
                      param_16 = uVar35 - uVar41;
                      local_b0 = (undefined4 *)((long)local_b0 + (ulong)uVar41 * 2);
                      uVar33 = uVar33 + 1;
                      puVar42 = local_48;
                    } while (uVar33 != uVar19);
                  }
                  uVar33 = hb_serialize_context_t::pop_pack(param_2,'\x01');
                  uVar19 = local_70;
                  puVar18 = local_88;
                  if (((uint)uVar33 != 0) && (*(int *)(param_2 + 0x2c) == 0)) {
                    puVar20 = (uint *)hb_vector_t<hb_serialize_context_t::object_t::link_t,false>::
                                      push((hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                            *)(*(long *)(param_2 + 0x48) + 0x10));
                    if (*(int *)(*(long *)(param_2 + 0x48) + 0x10) < 0) {
                      *phVar1 = (hb_serialize_context_t)((byte)*phVar1 | 1);
                    }
                    puVar20[2] = (uint)uVar33;
                    *puVar20 = *puVar20 & 0xffffffc0 | 2;
                    puVar20[1] = (int)puVar42 - **(int **)(param_2 + 0x48);
                    *puVar20 = 2;
                  }
                  uVar41 = uVar31;
                  if (local_e0 < uVar31) {
                    uVar41 = local_e0;
                  }
                  if (local_90 < uVar31) {
                    uVar31 = local_90;
                  }
                  local_e0 = local_e0 - uVar41;
                  local_a8 = local_a8 + (ulong)uVar41 * 2;
                  param_13 = local_90 - uVar31;
                  local_a0 = local_a0 + (ulong)uVar31 * 4;
                  uVar33 = local_68 + 1;
                } while (uVar33 != local_78);
                puVar18[1] = 0;
                psVar23 = (short *)hb_serialize_context_t::push<OT::Layout::Common::Coverage>
                                             (param_2);
                if (*(int *)(param_2 + 0x2c) != 0) goto LAB_004397ca;
                pvVar39 = *(void **)(param_2 + 8);
                uVar33 = (long)psVar23 + (2 - (long)pvVar39);
                if (uVar33 < 0x80000000) {
                  uVar31 = 4;
                  if (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar33) goto LAB_004397c7;
                  uVar31 = 4;
                  if ((int)uVar33 != 0) {
                    memset(pvVar39,0,uVar33);
                    pvVar39 = *(void **)phVar2;
                  }
                  *(ulong *)phVar2 = uVar33 + (long)pvVar39;
                  if (pvVar39 != (void *)0x0) {
                    if (uVar32 == 0) {
                      uVar41 = 0;
                      bVar43 = true;
                    }
                    else {
                      uVar41 = 0xfffffffe;
                      lVar27 = 0;
                      iVar28 = 0;
                      bVar38 = false;
                      do {
                        uVar30 = *(ushort *)((long)param_4 + lVar27) << 8 |
                                 *(ushort *)((long)param_4 + lVar27) >> 8;
                        bVar43 = bVar38;
                        if (uVar30 < uVar41) {
                          bVar43 = true;
                        }
                        if (uVar41 == 0xfffffffe) {
                          bVar43 = bVar38;
                        }
                        uVar35 = uVar41 + 1;
                        uVar41 = (uint)uVar30;
                        iVar28 = iVar28 + (uint)(uVar35 != uVar41);
                        lVar27 = lVar27 + 2;
                        bVar38 = bVar43;
                      } while (uVar32 * 2 != lVar27);
                      bVar43 = !bVar43;
                      uVar41 = iVar28 * 3;
                    }
                    uVar35 = (uint)uVar19;
                    iVar28 = 2 - (uint)(byte)(uVar35 <= uVar41 & bVar43);
                    sVar13 = (short)iVar28;
                    *psVar23 = sVar13 * 0x100;
                    if (sVar13 == 2) {
                      if (*(uint *)phVar1 == 0) {
                        pvVar39 = *(void **)(param_2 + 8);
                        uVar33 = (long)psVar23 + (4 - (long)pvVar39);
                        if ((0x7fffffff < uVar33) ||
                           (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar33))
                        goto LAB_004397c7;
                        if ((int)uVar33 != 0) {
                          memset(pvVar39,0,uVar33);
                          pvVar39 = *(void **)phVar2;
                        }
                        pvVar36 = (void *)(uVar33 + (long)pvVar39);
                        *(void **)phVar2 = pvVar36;
                        if (pvVar39 != (void *)0x0) {
                          if (uVar32 == 0) {
                            uVar41 = 0;
                          }
                          else {
                            uVar33 = uVar32 - 1 & 0x7fffffffffffffff;
                            if (uVar33 < 7) {
                              uVar35 = 0xfffffffe;
                              uVar41 = 0;
                              puVar24 = param_4;
                            }
                            else {
                              uVar33 = uVar33 + 1;
                              uVar19 = uVar33 & 0xfffffffffffffff8;
                              uVar34 = 0;
                              iVar47 = 0;
                              iVar48 = 0;
                              iVar49 = 0;
                              iVar50 = 0;
                              iVar28 = 0;
                              iVar44 = 0;
                              iVar45 = 0;
                              iVar46 = 0;
                              auVar53 = _DAT_005de0c0;
                              do {
                                uVar3 = *(ulong *)(param_4 + uVar34);
                                auVar55._8_8_ = 0;
                                auVar55._0_8_ = uVar3;
                                auVar54._0_2_ = (ushort)uVar3 >> 8;
                                auVar54._2_2_ = (ushort)(uVar3 >> 0x10) >> 8;
                                auVar54._4_2_ = (ushort)(uVar3 >> 0x20) >> 8;
                                auVar54._6_2_ = (ushort)(uVar3 >> 0x38);
                                auVar54._8_6_ = 0;
                                auVar56 = psllw(auVar55,8);
                                auVar54 = auVar56._0_14_ | auVar54;
                                auVar7._10_2_ = 0;
                                auVar7._0_10_ = auVar54._0_10_;
                                auVar7._12_2_ = auVar54._6_2_;
                                auVar9._8_2_ = auVar54._4_2_;
                                auVar9._0_8_ = auVar54._0_8_;
                                auVar9._10_4_ = auVar7._10_4_;
                                auVar14._6_8_ = 0;
                                auVar14._0_6_ = auVar9._8_6_;
                                uVar26 = auVar54._0_4_;
                                auVar11._4_2_ = auVar54._2_2_;
                                auVar11._0_4_ = uVar26;
                                auVar11._6_8_ = SUB148(auVar14 << 0x40,6);
                                uVar41 = auVar7._10_4_ >> 0x10;
                                uVar51 = CONCAT44(uVar26,auVar53._12_4_) & 0xffffffffffff;
                                uVar3 = *(ulong *)(param_4 + uVar34 + 4);
                                auVar56._8_8_ = 0;
                                auVar56._0_8_ = uVar3;
                                auVar52._0_2_ = (ushort)uVar3 >> 8;
                                auVar52._2_2_ = (ushort)(uVar3 >> 0x10) >> 8;
                                auVar52._4_2_ = (ushort)(uVar3 >> 0x20) >> 8;
                                auVar52._6_2_ = (ushort)(uVar3 >> 0x38);
                                auVar52._8_6_ = 0;
                                auVar53 = psllw(auVar56,8);
                                auVar52 = auVar53._0_14_ | auVar52;
                                auVar8._10_2_ = 0;
                                auVar8._0_10_ = auVar52._0_10_;
                                auVar8._12_2_ = auVar52._6_2_;
                                auVar10._8_2_ = auVar52._4_2_;
                                auVar10._0_8_ = auVar52._0_8_;
                                auVar10._10_4_ = auVar8._10_4_;
                                auVar15._6_8_ = 0;
                                auVar15._0_6_ = auVar10._8_6_;
                                auVar12._4_2_ = auVar52._2_2_;
                                auVar12._0_4_ = auVar52._0_4_;
                                auVar12._6_8_ = SUB148(auVar15 << 0x40,6);
                                auVar53._0_4_ = auVar52._0_4_ & 0xffff;
                                auVar53._4_10_ = auVar12._4_10_;
                                auVar53._14_2_ = 0;
                                uVar35 = (uint)auVar52._6_2_;
                                iVar47 = (iVar47 - (uint)((int)uVar51 + 1U == (uVar26 & 0xffff))) +
                                         1;
                                iVar48 = (iVar48 - (uint)((int)(uVar51 >> 0x20) + 1 == auVar11._4_4_
                                                         )) + 1;
                                iVar49 = (iVar49 - (uint)(auVar11._4_4_ + 1 == auVar9._8_4_)) + 1;
                                iVar50 = (iVar50 - (uint)(auVar9._8_4_ + 1U == uVar41)) + 1;
                                iVar28 = (iVar28 - (uint)(uVar41 + 1 == auVar53._0_4_)) + 1;
                                iVar44 = (iVar44 - (uint)(auVar52._0_2_ + 1 == auVar12._4_4_)) + 1;
                                iVar45 = (iVar45 - (uint)(auVar12._4_4_ + 1 == auVar10._8_4_)) + 1;
                                iVar46 = (iVar46 - (uint)(auVar10._8_4_ + 1U == uVar35)) + 1;
                                uVar34 = uVar34 + 8;
                              } while (uVar19 != uVar34);
                              uVar41 = iVar46 + iVar50 + iVar44 + iVar48 +
                                       iVar45 + iVar49 + iVar28 + iVar47;
                              if (uVar33 == uVar19) goto LAB_00439458;
                              puVar24 = param_4 + uVar19;
                            }
                            do {
                              uVar26 = uVar35 + 1;
                              uVar35 = (uint)(ushort)(*puVar24 << 8 | *puVar24 >> 8);
                              uVar41 = uVar41 + (uVar26 != uVar35);
                              puVar24 = puVar24 + 1;
                            } while (puVar24 != param_4 + uVar32);
                          }
LAB_00439458:
                          if (*(uint *)phVar1 == 0) {
                            uVar33 = (long)psVar23 + (4 - (long)pvVar36);
                            if ((0x7fffffff < uVar33) ||
                               (*(long *)(param_2 + 0x10) - (long)pvVar36 < (long)uVar33))
                            goto LAB_004397c7;
                            if ((int)uVar33 != 0) {
                              memset(pvVar36,0,uVar33);
                              pvVar36 = *(void **)phVar2;
                            }
                            *(ulong *)phVar2 = uVar33 + (long)pvVar36;
                            if (pvVar36 != (void *)0x0) {
                              psVar23[1] = (ushort)uVar41 << 8 | (ushort)uVar41 >> 8;
                              uVar26 = *(uint *)phVar1;
                              if (0xffff < uVar41) goto LAB_004397c1;
                              if (uVar26 == 0) {
                                pvVar39 = *(void **)(param_2 + 8);
                                uVar33 = (long)psVar23 + ((ulong)(uVar41 * 6) - (long)pvVar39) + 4;
                                if ((0x7fffffff < uVar33) ||
                                   (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar33))
                                goto LAB_004397c7;
                                if ((int)uVar33 != 0) {
                                  memset(pvVar39,0,uVar33);
                                  pvVar39 = *(void **)phVar2;
                                }
                                *(ulong *)phVar2 = uVar33 + (long)pvVar39;
                                if (pvVar39 != (void *)0x0) {
                                  if ((uVar41 != 0) && (uVar32 != 0)) {
                                    lVar27 = uVar32 * 2;
                                    uVar32 = 0xffffffff;
                                    lVar40 = 0;
                                    bVar43 = false;
                                    uVar31 = 0xfffffffe;
                                    do {
                                      uVar16 = param_4[lVar40];
                                      uVar41 = (uint)(ushort)(uVar16 << 8 | uVar16 >> 8);
                                      if (uVar31 + 1 != uVar41) {
                                        if ((uVar31 != 0xfffffffe) && (uVar41 < uVar31 + 1)) {
                                          bVar43 = true;
                                        }
                                        uVar32 = (ulong)((int)uVar32 + 1);
                                        psVar23[uVar32 * 3 + 2] = uVar16;
                                        psVar23[uVar32 * 3 + 4] =
                                             (ushort)lVar40 << 8 | (ushort)lVar40 >> 8;
                                      }
                                      psVar23[uVar32 * 3 + 3] = uVar16;
                                      lVar40 = lVar40 + 1;
                                      lVar27 = lVar27 + -2;
                                      uVar31 = uVar41;
                                    } while (lVar27 != 0);
                                    if ((bVar43) && (uVar16 = psVar23[1], uVar16 != 0)) {
                                      sort_r_simple<>((undefined1 *)(psVar23 + 2),
                                                      (ulong)(ushort)(uVar16 << 8 | uVar16 >> 8),6,
                                                      Common::RangeRecord<OT::Layout::SmallTypes>::
                                                      cmp_range);
                                    }
                                  }
                                  goto LAB_00439675;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    else if ((iVar28 == 1) && (*(uint *)phVar1 == 0)) {
                      pvVar39 = *(void **)(param_2 + 8);
                      uVar33 = (long)psVar23 + (4 - (long)pvVar39);
                      if ((0x7fffffff < uVar33) ||
                         (*(long *)(param_2 + 0x10) - (long)pvVar39 < (long)uVar33))
                      goto LAB_004397c7;
                      if ((int)uVar33 != 0) {
                        memset(pvVar39,0,uVar33);
                        pvVar39 = *(void **)phVar2;
                      }
                      *(ulong *)phVar2 = uVar33 + (long)pvVar39;
                      if (pvVar39 != (void *)0x0) {
                        psVar23[1] = uVar16;
                        uVar26 = *(uint *)phVar1;
                        if (0xffff < uVar35) {
LAB_004397c1:
                          uVar31 = uVar26 | 0x10;
                          goto LAB_004397c7;
                        }
                        if (uVar26 == 0) {
                          lVar27 = *(long *)(param_2 + 8);
                          uVar33 = (long)psVar23 + (local_80 - lVar27) + 2;
                          if ((0x7fffffff < uVar33) ||
                             (*(long *)(param_2 + 0x10) - lVar27 < (long)uVar33)) goto LAB_004397c7;
                          *(ulong *)phVar2 = uVar33 + lVar27;
                          if (lVar27 == 0) goto LAB_004397ca;
                          if (uVar35 != 0) {
                            if ((int)param_5 == 1) {
                              uVar31 = 1;
                              lVar27 = 0;
                            }
                            else {
                              lVar40 = uVar32 - (uVar35 & 1);
                              lVar27 = 0;
                              do {
                                while( true ) {
                                  bVar43 = (int)uVar19 == 0;
                                  iVar28 = (int)uVar19 + -1;
                                  puVar24 = (ushort *)&_hb_NullPool;
                                  if (!bVar43) {
                                    puVar24 = param_4;
                                  }
                                  psVar23[lVar27 + 2] = *puVar24;
                                  if (bVar43) {
                                    iVar28 = 0;
                                  }
                                  param_4 = param_4 + !bVar43;
                                  uVar31 = iVar28 - 1;
                                  uVar19 = (ulong)uVar31;
                                  puVar24 = (ushort *)&_hb_NullPool;
                                  if (iVar28 != 0) {
                                    puVar24 = param_4;
                                  }
                                  psVar23[lVar27 + 3] = *puVar24;
                                  lVar27 = lVar27 + 2;
                                  if (iVar28 == 0) break;
                                  param_4 = param_4 + 1;
                                  if (lVar40 == lVar27) goto LAB_0043900d;
                                }
                                uVar19 = 0;
                                uVar31 = 0;
                              } while (lVar40 != lVar27);
                            }
LAB_0043900d:
                            if ((ulong)(uVar35 & 1) != 0) {
                              if (uVar31 == 0) {
                                param_4 = (ushort *)&_hb_NullPool;
                              }
                              psVar23[lVar27 + 2] = *param_4;
                            }
                          }
LAB_00439675:
                          uVar32 = hb_serialize_context_t::pop_pack(param_2,'\x01');
                          puVar24 = local_60;
                          puVar18 = local_88;
                          if (((uint)uVar32 != 0) && (*(int *)(param_2 + 0x2c) == 0)) {
                            iVar28 = (int)local_88;
                            puVar20 = (uint *)hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                              ::push((
                                                  hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                                  *)(*(long *)(param_2 + 0x48) + 0x10));
                            if (*(int *)(*(long *)(param_2 + 0x48) + 0x10) < 0) {
                              *phVar1 = (hb_serialize_context_t)((byte)*phVar1 | 1);
                            }
                            puVar20[2] = (uint)uVar32;
                            *puVar20 = *puVar20 & 0xffffffc0 | 2;
                            uVar31 = (iVar28 + 2) - **(int **)(param_2 + 0x48);
                            puVar18 = (undefined2 *)(ulong)uVar31;
                            puVar20[1] = uVar31;
                            *puVar20 = 2;
                          }
                          if (puVar24[2] == 0) {
                            _hb_CrapPool._0_2_ = 0;
                            iVar28 = 0x71cd80;
                          }
                          else {
                            iVar28 = (int)puVar24 + 6;
                          }
                          uVar32 = hb_serialize_context_t::pop_pack(param_2,'\x01');
                          uVar33 = CONCAT71((int7)((ulong)puVar18 >> 8),1);
                          if (((uint)uVar32 != 0) && (*(int *)(param_2 + 0x2c) == 0)) {
                            puVar20 = (uint *)hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                              ::push((
                                                  hb_vector_t<hb_serialize_context_t::object_t::link_t,false>
                                                  *)(*(long *)(param_2 + 0x48) + 0x10));
                            if (*(int *)(*(long *)(param_2 + 0x48) + 0x10) < 0) {
                              *phVar1 = (hb_serialize_context_t)((byte)*phVar1 | 1);
                            }
                            puVar20[2] = (uint)uVar32;
                            *puVar20 = *puVar20 & 0xffffffc0 | 2;
                            puVar20[1] = iVar28 - **(int **)(param_2 + 0x48);
                            *puVar20 = 2;
                          }
                          goto LAB_00439294;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar31 = 4;
LAB_004397c7:
                  *(uint *)phVar1 = uVar31;
                }
LAB_004397ca:
                plVar6 = *(long **)(param_2 + 0x48);
                if (plVar6 != (long *)0x0) {
                  uVar31 = *(uint *)phVar1;
                  if (((uVar31 >> 1 | (uint)((uVar31 & 1) != 0) << 0x1f) < 9) &&
                     ((0x113U >> (uVar31 >> 1 & 0x1f) & 1) != 0)) {
                    *(long *)(param_2 + 0x48) = plVar6[6];
                    lVar27 = *(long *)(param_2 + 0x20);
                    if (lVar27 == 0) {
                      lVar27 = *plVar6;
                    }
                    if (uVar31 == 0) {
                      lVar40 = plVar6[1];
                      *(long *)(param_2 + 8) = lVar27;
                      *(long *)(param_2 + 0x10) = lVar40;
                      hb_serialize_context_t::discard_stale_objects(param_2);
                    }
                    *(undefined8 *)(param_2 + 0x20) = 0;
                    if ((int)plVar6[2] != 0) {
                      *(undefined4 *)((long)plVar6 + 0x14) = 0;
                      free((void *)plVar6[3]);
                    }
                    *(undefined1 (*) [16])(plVar6 + 2) = (undefined1  [16])0x0;
                    if ((int)plVar6[4] != 0) {
                      *(undefined4 *)((long)plVar6 + 0x24) = 0;
                      free((void *)plVar6[5]);
                    }
                    *(undefined1 (*) [16])(plVar6 + 4) = (undefined1  [16])0x0;
                    *plVar6 = *(long *)(param_2 + 0x30);
                    *(long **)(param_2 + 0x30) = plVar6;
                  }
                }
              }
            }
            else {
              *(uint *)phVar1 = *(uint *)phVar1 | 0x10;
            }
          }
        }
      }
      else {
LAB_00439784:
        *(uint *)phVar1 = 4;
      }
    }
LAB_004391d4:
    plVar6 = *(long **)(param_2 + 0x48);
    if (plVar6 != (long *)0x0) {
      uVar31 = *(uint *)phVar1;
      uVar33 = 0;
      if ((8 < (uVar31 >> 1 | (uint)((uVar31 & 1) != 0) << 0x1f)) ||
         ((0x113U >> (uVar31 >> 1 & 0x1f) & 1) == 0)) goto LAB_00439294;
      *(long *)(param_2 + 0x48) = plVar6[6];
      lVar27 = *(long *)(param_2 + 0x20);
      if (lVar27 == 0) {
        lVar27 = *plVar6;
      }
      if (uVar31 == 0) {
        lVar40 = plVar6[1];
        *(long *)(param_2 + 8) = lVar27;
        *(long *)(param_2 + 0x10) = lVar40;
        hb_serialize_context_t::discard_stale_objects(param_2);
      }
      *(undefined8 *)(param_2 + 0x20) = 0;
      if ((int)plVar6[2] != 0) {
        *(undefined4 *)((long)plVar6 + 0x14) = 0;
        free((void *)plVar6[3]);
      }
      *(undefined1 (*) [16])(plVar6 + 2) = (undefined1  [16])0x0;
      if ((int)plVar6[4] != 0) {
        *(undefined4 *)((long)plVar6 + 0x24) = 0;
        free((void *)plVar6[5]);
      }
      *(undefined1 (*) [16])(plVar6 + 4) = (undefined1  [16])0x0;
      *plVar6 = *(long *)(param_2 + 0x30);
      *(long **)(param_2 + 0x30) = plVar6;
    }
  }
  uVar33 = 0;
LAB_00439294:
  return uVar33 & 0xffffffff;
}


