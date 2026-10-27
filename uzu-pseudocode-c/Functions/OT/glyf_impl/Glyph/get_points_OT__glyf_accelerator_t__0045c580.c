// Function : get_points<OT::glyf_accelerator_t>
// Namespace: OT:glyf_impl:Glyph
// Entry    : 0045c580
// Prototype: ulong get_points<OT::glyf_accelerator_t>(ushort * param_1, long param_2, ushort * param_3, float * param_4, byte param_5, long param_6, uint param_7, uint param_8, hb_hashmap_t<unsigned_int,unsigned_int,true> * param_9, uint param_10, uint * param_11)
// Body     : 0045c580 - 004602a6


/* WARNING: Removing unreachable block (ram,0x0045cebf) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffdf0 : 0x0045cf33 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool OT::glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>(hb_font_t*, OT::glyf_accelerator_t
   const&, contour_point_vector_t&, contour_point_vector_t*, head_maxp_info_t*, unsigned int*, bool,
   bool, bool, hb_array_t<int const>, hb_map_t*, unsigned int, unsigned int*) const */

ulong __cdecl
OT::glyf_impl::Glyph::get_points<OT::glyf_accelerator_t>
          (ushort *param_1,long param_2,ushort *param_3,float *param_4,byte param_5,long param_6,
          uint param_7,uint param_8,hb_hashmap_t<unsigned_int,unsigned_int,true> *param_9,
          uint param_10,uint *param_11)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint *puVar10;
  void *pvVar11;
  undefined1 auVar12 [12];
  undefined4 uVar13;
  pthread_mutex_t *__ptr;
  short sVar14;
  int iVar15;
  ulong *puVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  float *pfVar20;
  void *pvVar21;
  ulong uVar22;
  float *pfVar23;
  ushort *puVar24;
  ushort uVar25;
  ushort uVar26;
  float fVar27;
  int iVar28;
  ushort *puVar29;
  void **ppvVar30;
  ushort **ppuVar31;
  ulong *puVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  int *piVar38;
  ulong uVar39;
  float *pfVar40;
  long lVar41;
  uint uVar42;
  byte *pbVar43;
  ulong uVar44;
  byte bVar45;
  ushort uVar46;
  float fVar47;
  ushort *puVar48;
  void *pvVar49;
  ushort uVar50;
  int iVar51;
  uint uVar52;
  long lVar53;
  void **ppvVar54;
  int *piVar55;
  ushort uVar56;
  uint uVar57;
  ulong uVar58;
  float *pfVar59;
  byte bVar60;
  int iVar61;
  long lVar62;
  float fVar63;
  float *pfVar64;
  ulong uVar65;
  float fVar66;
  uint uVar67;
  uint *puVar68;
  float fVar69;
  ushort *puVar70;
  ushort uVar71;
  ushort *puVar72;
  hb_hashmap_t<unsigned_int,unsigned_int,true> *this;
  bool bVar73;
  bool bVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  float fVar85;
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float *local_2b0;
  void *local_280;
  void *local_270;
  uint local_230;
  void *local_218;
  float local_210;
  uint local_20c;
  undefined1 local_208 [4];
  float fStack_204;
  undefined8 uStack_200;
  ushort *local_1f8;
  uint local_1f0;
  int local_1ec;
  ulong local_1e8;
  void *local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ushort *local_1c8;
  uint local_1bc;
  ulong local_1b8;
  void *local_1b0;
  undefined1 local_1a8 [8];
  void *pvStack_1a0;
  undefined1 local_198 [8];
  void *pvStack_190;
  void **local_180;
  ulong local_178;
  uint local_170;
  int local_16c;
  undefined1 local_168 [8];
  void *apvStack_160 [2];
  float *local_150;
  float *local_148;
  ushort *local_140;
  long local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ushort *local_118;
  ushort *local_110;
  uint local_104;
  float local_100;
  uint local_fc;
  long local_f8;
  ulong local_f0;
  ulong local_e8;
  float *local_e0;
  ulong local_d8;
  ushort *local_d0;
  ushort *local_c8;
  ushort *local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  pthread_mutex_t *local_a8;
  undefined1 local_a0;
  undefined8 local_9e;
  undefined8 uStack_96;
  undefined2 local_8e;
  void *local_88;
  long local_80;
  ulong local_78;
  size_t local_70;
  long local_68;
  long local_60;
  ushort *local_58;
  ushort *local_50;
  hb_hashmap_t<unsigned_int,unsigned_int,true> *local_48;
  uint *local_40;
  long local_38;
  
  local_138 = param_6;
  if (param_10 < 0x41) {
    local_fc = 0;
    puVar68 = &local_fc;
    if (param_11 != (uint *)0x0) {
      puVar68 = param_11;
    }
    if (*puVar68 < 0x801) {
      *puVar68 = *puVar68 + 1;
      local_b0 = 1;
      local_ac = 1;
      local_a8 = (pthread_mutex_t *)0x0;
      local_a0 = 1;
      local_88 = (void *)0x0;
      local_9e = 0;
      uStack_96 = 0;
      local_8e = 0;
      local_48 = param_9;
      if (param_9 == (hb_hashmap_t<unsigned_int,unsigned_int,true> *)0x0) {
        local_48 = (hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_b0;
      }
      local_178 = (ulong)param_7;
      if (param_7 == 0) {
        local_138 = *(long *)(param_2 + 0x80);
        local_178 = (ulong)*(uint *)(param_2 + 0x78);
        local_b8 = 0;
      }
      else {
        local_b8 = (ulong)param_8;
      }
      local_40 = puVar68;
      local_38 = param_2;
      local_140 = param_3;
      local_210 = 0.0;
      local_100 = 0.0;
      local_1b0 = (void *)0x0;
      iVar61 = *(int *)(param_1 + 0xe);
      pfVar1 = param_4 + 1;
      pfVar64 = &local_100;
      if (iVar61 == 1) {
        pfVar64 = pfVar1;
      }
      fVar63 = *pfVar64;
      local_1c8 = param_1;
      if (iVar61 == 2) {
        puVar48 = *(ushort **)param_1;
        puVar29 = (ushort *)(*(long *)(param_1 + 8) + 10);
        if (puVar48 <= puVar29) {
          puVar24 = (ushort *)((ulong)*(uint *)(param_1 + 4) + (long)puVar48);
          iVar34 = (int)puVar24;
          if ((puVar29 <= puVar24) && ((iVar34 - (int)puVar29 & 0xfffffffcU) != 0)) {
            uVar25 = *puVar29;
            uVar56 = uVar25 >> 8;
            iVar15 = (uVar56 & 1) * 2;
            if ((uVar56 & 8) == 0) {
              if ((uVar56 & 0x40) == 0) {
                uVar33 = iVar15 + 0xe;
                if ((uVar56 & 0x80) == 0) {
                  uVar33 = iVar15 + 6;
                }
              }
              else {
                uVar33 = iVar15 + 10;
              }
            }
            else {
              uVar33 = iVar15 + 8;
            }
            uVar58 = (ulong)uVar33;
            if (uVar33 <= (uint)(iVar34 - (int)puVar29)) {
              do {
                if ((uVar25 & 0x100) == 0) {
                  iVar15 = (int)(char)puVar29[2];
                  iVar28 = (int)*(char *)((long)puVar29 + 5);
                }
                else {
                  iVar15 = (int)(short)(puVar29[2] << 8 | puVar29[2] >> 8);
                  iVar28 = (int)(short)(puVar29[3] << 8 | puVar29[3] >> 8);
                }
                bVar74 = (uVar25 & 0x200) != 0;
                fVar66 = 0.0;
                if (bVar74) {
                  fVar66 = (float)iVar15;
                }
                fVar27 = 0.0;
                if (bVar74) {
                  fVar27 = (float)iVar28;
                }
                if ((int)local_210 < 0) goto LAB_00460161;
                if ((uint)local_210 < (int)*pfVar64 + 4U) {
                  uVar44 = (ulong)(uint)local_210;
                  do {
                    fVar47 = (float)((uint)uVar44 + ((uint)uVar44 >> 1) + 8);
                    uVar44 = (ulong)(uint)fVar47;
                  } while ((uint)fVar47 < (int)*pfVar64 + 4U);
                  if (0x15555555 < (uint)fVar47) {
LAB_0045ec90:
                    local_210 = (float)~(uint)local_210;
                    uVar58 = 0;
                    goto LAB_0045ee71;
                  }
                  if (fVar47 == 0.0) {
                    free(local_1b0);
                    pvVar49 = (void *)0x0;
                  }
                  else {
                    pvVar49 = realloc(local_1b0,(ulong)(uint)fVar47 * 0xc);
                    if (pvVar49 == (void *)0x0) {
                      uVar44 = (ulong)(uint)local_210;
                      if ((uint)fVar47 <= (uint)local_210) goto LAB_0045cf5a;
                      goto LAB_0045ec90;
                    }
                  }
                  local_210 = fVar47;
                  local_1b0 = pvVar49;
                }
                else {
                  uVar44 = (ulong)(uint)local_210;
                }
LAB_0045cf5a:
                fVar47 = (float)uVar44;
                if ((int)*pfVar64 < (int)fVar47) {
LAB_0045cf74:
                  uVar44 = (ulong)(uint)*pfVar64;
                  *pfVar64 = (float)((int)*pfVar64 + 1);
                  *(float *)((long)local_1b0 + uVar44 * 0xc) = fVar66;
                  *(float *)((long)local_1b0 + uVar44 * 0xc + 4) = fVar27;
                  *(undefined2 *)((long)local_1b0 + uVar44 * 0xc + 8) = 0x100;
                  bVar60 = *(byte *)((long)puVar29 + 1);
                }
                else {
                  if (-1 < (int)fVar47) {
                    fVar69 = (float)((int)*pfVar64 + 1);
                    if ((uint)fVar47 < (uint)fVar69) {
                      do {
                        fVar85 = (float)((uint)uVar44 + ((uint)uVar44 >> 1) + 8);
                        uVar44 = (ulong)(uint)fVar85;
                      } while ((uint)fVar85 < (uint)fVar69);
                      if (0x15555555 < (uint)fVar85) {
LAB_0045d104:
                        local_210 = (float)~(uint)fVar47;
                        goto LAB_0045d108;
                      }
                      if (fVar85 == 0.0) {
                        free(local_1b0);
                        pvVar49 = (void *)0x0;
                      }
                      else {
                        pvVar49 = realloc(local_1b0,uVar44 * 0xc);
                        if (pvVar49 == (void *)0x0) {
                          fVar47 = local_210;
                          if ((uint)fVar85 <= (uint)local_210) goto LAB_0045cf74;
                          goto LAB_0045d104;
                        }
                      }
                      local_210 = fVar85;
                      local_1b0 = pvVar49;
                    }
                    goto LAB_0045cf74;
                  }
LAB_0045d108:
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  bVar60 = *(byte *)((long)puVar29 + 1);
                }
                if (((bVar60 & 0x20) == 0) ||
                   (puVar29 = (ushort *)((long)puVar29 + uVar58), puVar29 < puVar48)) break;
                if ((puVar24 < puVar29) || ((iVar34 - (int)puVar29 & 0xfffffffcU) == 0)) break;
                uVar25 = *puVar29;
                uVar56 = uVar25 >> 8;
                iVar15 = (uVar56 & 1) * 2;
                if ((uVar56 & 8) == 0) {
                  if ((uVar56 & 0x40) == 0) {
                    uVar33 = iVar15 + 0xe;
                    if ((uVar56 & 0x80) == 0) {
                      uVar33 = iVar15 + 6;
                    }
                    uVar58 = (ulong)uVar33;
                  }
                  else {
                    uVar58 = (ulong)(iVar15 + 10);
                  }
                }
                else {
                  uVar58 = (ulong)(iVar15 + 8);
                }
                if ((uint)(iVar34 - (int)puVar29) < (uint)uVar58) break;
              } while( true );
            }
          }
        }
      }
      else if (iVar61 == 1) {
        puVar48 = *(ushort **)(param_1 + 8);
        uVar25 = *puVar48;
        uVar56 = uVar25 << 8 | uVar25 >> 8;
        puVar29 = *(ushort **)param_1;
        puVar24 = puVar48 + (long)(short)uVar56 + 5;
        if (puVar24 < puVar29) {
LAB_00460161:
          uVar58 = 0;
          goto LAB_0045ee71;
        }
        puVar72 = (ushort *)((ulong)*(uint *)(param_1 + 4) + (long)puVar29);
        uVar58 = 0;
        if ((puVar72 < puVar24) || (((int)puVar72 - (int)puVar24 & 0xfffffffeU) == 0))
        goto LAB_0045ee71;
        fVar66 = *param_4;
        if ((int)fVar66 < 0) goto LAB_00460161;
        local_180 = (void **)CONCAT62(local_180._2_6_,uVar25);
        uVar33 = (uint)(short)uVar56;
        uVar25 = puVar48[(long)(int)uVar33 + 4] << 8 | puVar48[(long)(int)uVar33 + 4] >> 8;
        fVar27 = param_4[1];
        uVar44 = (ulong)(uint)fVar27;
        fVar47 = (float)((int)fVar27 + (uint)uVar25 + 5);
        iVar34 = uVar25 + 1;
        if ((uint)fVar47 < (uint)fVar27) {
          fVar47 = fVar27;
        }
        if (((uint)fVar66 < (uint)fVar47) || ((uint)fVar47 < (uint)fVar66 >> 2)) {
          if ((uint)fVar47 < 0x15555556) {
            if (fVar47 == 0.0) {
              free(*(void **)(param_4 + 2));
              pvVar49 = (void *)0x0;
LAB_0045c8c7:
              *(void **)(param_4 + 2) = pvVar49;
              goto LAB_0045c8d8;
            }
            pvVar49 = realloc(*(void **)(param_4 + 2),(ulong)(uint)fVar47 * 0xc);
            if (pvVar49 != (void *)0x0) goto LAB_0045c8c7;
            fVar66 = *param_4;
            if ((uint)fVar66 < (uint)fVar47) {
              fVar47 = (float)~(uint)fVar66;
              goto LAB_0045c8d8;
            }
          }
          else {
            fVar47 = (float)~(uint)fVar66;
LAB_0045c8d8:
            *param_4 = fVar47;
            fVar66 = fVar47;
          }
          uVar58 = 0;
          fVar47 = (float)((int)*pfVar1 + iVar34);
          if ((int)fVar47 < 0) {
            fVar47 = 0.0;
          }
          if ((int)fVar66 < 0) goto LAB_0045ee71;
        }
        else {
          fVar47 = (float)((int)fVar27 + iVar34);
          if ((int)fVar27 + iVar34 < 0) {
            fVar47 = 0.0;
          }
        }
        fVar69 = fVar66;
        if ((uint)fVar66 < (uint)fVar47) {
          do {
            fVar69 = (float)((int)fVar69 + ((uint)fVar69 >> 1) + 8);
          } while ((uint)fVar69 < (uint)fVar47);
          if (0x15555555 < (uint)fVar69) {
LAB_0045ec14:
            *param_4 = (float)~(uint)fVar66;
            uVar58 = 0;
            goto LAB_0045ee71;
          }
          if (fVar69 == 0.0) {
            free(*(void **)(param_4 + 2));
            pvVar49 = (void *)0x0;
          }
          else {
            pvVar49 = realloc(*(void **)(param_4 + 2),(ulong)(uint)fVar69 * 0xc);
            if (pvVar49 == (void *)0x0) {
              fVar66 = *param_4;
              if ((uint)fVar69 <= (uint)fVar66) goto LAB_0045c903;
              goto LAB_0045ec14;
            }
          }
          *(void **)(param_4 + 2) = pvVar49;
          *param_4 = fVar69;
        }
LAB_0045c903:
        param_4[1] = fVar47;
        fVar66 = (float)((int)fVar47 - (int)fVar27);
        if ((uint)fVar47 < (uint)fVar27) {
          fVar66 = 0.0;
        }
        if (uVar44 == 0) {
          fVar66 = fVar47;
        }
        if (param_5 == 0) {
          lVar41 = *(long *)(param_4 + 2);
          pvVar49 = (void *)(lVar41 + uVar44 * 0xc);
          memset(pvVar49,0,(ulong)(uint)(iVar34 * 0xc));
          if (0 < (short)uVar56) {
            if ((short)local_180 == 0x100) {
              uVar58 = 0;
            }
            else {
              uVar58 = 0;
              do {
                uVar25 = puVar48[uVar58 + 5] << 8 | puVar48[uVar58 + 5] >> 8;
                if ((uint)uVar25 < (uint)fVar66) {
                  puVar16 = (ulong *)((ulong)uVar25 * 0xc + (long)pvVar49);
                }
                else {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar16 = &_hb_CrapPool;
                }
                *(undefined1 *)((long)puVar16 + 9) = 1;
                uVar25 = puVar48[uVar58 + 6] << 8 | puVar48[uVar58 + 6] >> 8;
                if ((uint)uVar25 < (uint)fVar66) {
                  puVar16 = (ulong *)((ulong)uVar25 * 0xc + (long)pvVar49);
                }
                else {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar16 = &_hb_CrapPool;
                }
                *(undefined1 *)((long)puVar16 + 9) = 1;
                uVar58 = uVar58 + 2;
              } while ((uVar33 & 0xfffffffe) != uVar58);
            }
            if ((uVar33 & 1) != 0) {
              uVar25 = puVar48[uVar58 + 5] << 8 | puVar48[uVar58 + 5] >> 8;
              if ((uint)uVar25 < (uint)fVar66) {
                puVar16 = (ulong *)((ulong)uVar25 * 0xc + (long)pvVar49);
              }
              else {
                DAT_0071cd88 = 0;
                _hb_CrapPool = 0;
                puVar16 = &_hb_CrapPool;
              }
              *(undefined1 *)((long)puVar16 + 9) = 1;
            }
          }
          puVar48 = (ushort *)
                    ((long)puVar48 +
                    (ulong)(ushort)(*puVar24 << 8 | *puVar24 >> 8) + (long)(int)uVar33 * 2 + 0xc);
          if ((puVar48 < puVar29) || (puVar72 <= puVar48)) goto LAB_00460161;
          if ((ulong)(uint)fVar66 != 0) {
            lVar41 = lVar41 + uVar44 * 0xc;
            lVar62 = lVar41 + 8;
            uVar58 = 0;
            do {
              puVar29 = (ushort *)((long)puVar48 + 1);
              if (puVar72 < puVar29) goto LAB_00460161;
              bVar60 = (byte)*puVar48;
              uVar33 = (uint)uVar58;
              fVar27 = (float)(uVar33 + 1);
              *(byte *)((long)pvVar49 + uVar58 * 0xc + 8) = bVar60;
              if ((bVar60 & 8) == 0) {
                puVar48 = puVar29;
              }
              else {
                puVar48 = puVar48 + 1;
                if (puVar72 < puVar48) goto LAB_00460161;
                fVar47 = (float)((uint)*(byte *)puVar29 + (int)fVar27);
                if ((uint)fVar66 < (uint)*(byte *)puVar29 + (int)fVar27) {
                  fVar47 = fVar66;
                }
                if ((uint)fVar27 < (uint)fVar47) {
                  uVar58 = (ulong)(uint)fVar27;
                  uVar57 = ~uVar33 + (int)fVar47 & 3;
                  if (uVar57 != 0) {
                    pbVar43 = (byte *)(lVar62 + uVar58 * 0xc);
                    lVar17 = 0;
                    do {
                      *pbVar43 = bVar60;
                      lVar17 = lVar17 + -1;
                      pbVar43 = pbVar43 + 0xc;
                    } while (-uVar57 != (int)lVar17);
                    uVar58 = uVar58 - lVar17;
                  }
                  fVar27 = fVar47;
                  if (2 < ((int)fVar47 - uVar33) - 2) {
                    iVar34 = (int)fVar47 - (int)uVar58;
                    pbVar43 = (byte *)(lVar62 + uVar58 * 0xc + 0x24);
                    do {
                      pbVar43[-0x24] = bVar60;
                      pbVar43[-0x18] = bVar60;
                      pbVar43[-0xc] = bVar60;
                      *pbVar43 = bVar60;
                      pbVar43 = pbVar43 + 0x30;
                      iVar34 = iVar34 + -4;
                    } while (iVar34 != 0);
                  }
                }
              }
              uVar58 = (ulong)(uint)fVar27;
            } while ((uint)fVar27 < (uint)fVar66);
            lVar17 = (ulong)(uint)fVar66 * 0xc;
            lVar53 = 0;
            iVar34 = 0;
            puVar29 = puVar48;
            do {
              bVar60 = *(byte *)(lVar62 + lVar53);
              if ((bVar60 & 2) == 0) {
                if ((bVar60 & 0x10) == 0) {
                  if (puVar48 + 1 <= puVar72) {
                    iVar34 = iVar34 + (short)(*puVar48 << 8 | *puVar48 >> 8);
                    puVar48 = puVar48 + 1;
                    goto LAB_0045cae2;
                  }
                  goto LAB_00460161;
                }
              }
              else {
                puVar29 = (ushort *)((long)puVar48 + 1);
                if (puVar72 < puVar29) goto LAB_00460161;
                if ((bVar60 & 0x10) == 0) {
                  iVar34 = iVar34 - (uint)(byte)*puVar48;
                  puVar48 = puVar29;
                }
                else {
                  iVar34 = iVar34 + (uint)(byte)*puVar48;
                  puVar48 = puVar29;
                }
LAB_0045cae2:
                puVar29 = puVar48;
              }
              *(float *)(lVar41 + lVar53) = (float)iVar34;
              lVar53 = lVar53 + 0xc;
            } while (lVar17 != lVar53);
            lVar53 = 0;
            iVar34 = 0;
            do {
              bVar60 = *(byte *)(lVar62 + lVar53);
              if ((bVar60 & 4) == 0) {
                if ((bVar60 & 0x20) == 0) {
                  if (puVar72 < puVar29 + 1) goto LAB_00460161;
                  iVar34 = iVar34 + (short)(*puVar29 << 8 | *puVar29 >> 8);
                  puVar48 = puVar29 + 1;
                }
                else {
                  puVar48 = puVar29;
                }
              }
              else {
                puVar48 = (ushort *)((long)puVar29 + 1);
                if (puVar72 < puVar48) goto LAB_00460161;
                if ((bVar60 & 0x20) == 0) {
                  iVar34 = iVar34 - (uint)(byte)*puVar29;
                }
                else {
                  iVar34 = iVar34 + (uint)(byte)*puVar29;
                }
              }
              *(float *)(lVar41 + 4 + lVar53) = (float)iVar34;
              lVar53 = lVar53 + 0xc;
              puVar29 = puVar48;
            } while (lVar17 != lVar53);
          }
        }
      }
      puVar48 = local_140;
      uVar58 = 0;
      fVar66 = (float)((int)*pfVar64 + 4);
      if ((int)fVar66 < 0) {
        fVar66 = 0.0;
      }
      pfVar59 = &local_210;
      if (iVar61 == 1) {
        pfVar59 = param_4;
      }
      fVar27 = *pfVar59;
      if ((int)fVar27 < 0) goto LAB_0045ee71;
      if ((uint)fVar27 < (uint)fVar66) {
        fVar47 = fVar27;
        do {
          fVar47 = (float)((int)fVar47 + ((uint)fVar47 >> 1) + 8);
        } while ((uint)fVar47 < (uint)fVar66);
        if (0x15555555 < (uint)fVar47) {
LAB_0045d1fd:
          *pfVar59 = (float)~(uint)fVar27;
          uVar58 = 0;
          goto LAB_0045ee71;
        }
        ppvVar54 = &local_1b0;
        if (iVar61 == 1) {
          ppvVar54 = (void **)(param_4 + 2);
        }
        if (fVar47 == 0.0) {
          free(*ppvVar54);
          pvVar49 = (void *)0x0;
        }
        else {
          pvVar49 = realloc(*ppvVar54,(ulong)(uint)fVar47 * 0xc);
          if (pvVar49 == (void *)0x0) {
            fVar27 = *pfVar59;
            if ((uint)fVar47 <= (uint)fVar27) goto LAB_0045ccc7;
            goto LAB_0045d1fd;
          }
        }
        *ppvVar54 = pvVar49;
        *pfVar59 = fVar47;
      }
LAB_0045ccc7:
      fVar27 = *pfVar64;
      if (((uint)fVar27 < (uint)fVar66) && (uVar33 = ((int)fVar66 - (int)fVar27) * 0xc, uVar33 != 0)
         ) {
        ppvVar54 = &local_1b0;
        if (iVar61 == 1) {
          ppvVar54 = (void **)(param_4 + 2);
        }
        memset((void *)((ulong)(uint)fVar27 * 0xc + (long)*ppvVar54),0,(ulong)uVar33);
      }
      ppvVar54 = (void **)(param_4 + 2);
      *pfVar64 = fVar66;
      local_180 = &local_1b0;
      if (iVar61 == 1) {
        local_180 = ppvVar54;
      }
      fVar27 = (float)((int)fVar66 - 4);
      uVar33 = (int)fVar66 - (int)fVar27;
      if ((uint)fVar66 < (uint)fVar27) {
        uVar33 = 0;
      }
      uVar58 = 4;
      if (uVar33 < 4) {
        uVar58 = (ulong)uVar33;
      }
      puVar68 = *(uint **)(puVar48 + 4);
      uVar33 = *(uint *)(local_1c8 + 0xc);
      uVar44 = (ulong)uVar33;
      uVar57 = *puVar68;
      if (uVar33 < uVar57) {
        piVar18 = &_hb_NullPool;
        if (*(int **)(puVar68 + 6) != (int *)0x0) {
          piVar18 = *(int **)(puVar68 + 6);
        }
        puVar29 = (ushort *)(*(long *)(piVar18 + 4) + uVar44 * 4 + 2);
LAB_0045cdb5:
        lVar41 = *(long *)(local_1c8 + 8);
        iVar61 = (int)(short)(*(ushort *)(lVar41 + 2) << 8 | *(ushort *)(lVar41 + 2) >> 8) -
                 (int)(short)(*puVar29 << 8 | *puVar29 >> 8);
      }
      else {
        if (uVar33 < puVar68[1]) {
          piVar18 = &_hb_NullPool;
          if (*(int **)(puVar68 + 6) != (int *)0x0) {
            piVar18 = *(int **)(puVar68 + 6);
          }
          puVar29 = (ushort *)
                    ((ulong)uVar57 * 4 + *(long *)(piVar18 + 4) + (ulong)(uVar33 - uVar57) * 2);
          goto LAB_0045cdb5;
        }
        lVar41 = *(long *)(local_1c8 + 8);
        iVar61 = 0;
      }
      uVar25 = *(ushort *)(lVar41 + 8);
      puVar10 = *(uint **)(puVar48 + 8);
      uVar42 = *puVar10;
      if (uVar33 < uVar42) {
        piVar18 = &_hb_NullPool;
        if (*(int **)(puVar10 + 6) != (int *)0x0) {
          piVar18 = *(int **)(puVar10 + 6);
        }
        puVar29 = (ushort *)(*(long *)(piVar18 + 4) + uVar44 * 4 + 2);
LAB_0045ce32:
        iVar34 = (int)(short)(*puVar29 << 8 | *puVar29 >> 8);
        uVar25 = uVar25 << 8 | uVar25 >> 8;
        if (uVar33 < puVar68[1]) goto LAB_0045ce4f;
LAB_0045d22b:
        uVar57 = 0;
        if (puVar68[2] == 0) {
          uVar57 = puVar68[4];
          uVar67 = puVar10[1];
          goto joined_r0x0045eb9d;
        }
        iVar15 = (int)(short)uVar25;
        if (uVar33 < puVar10[1]) goto LAB_0045d249;
LAB_0045ce89:
        uVar42 = 0;
        if (puVar10[2] == 0) {
          uVar42 = puVar10[4];
        }
      }
      else {
        if (uVar33 < puVar10[1]) {
          piVar18 = &_hb_NullPool;
          if (*(int **)(puVar10 + 6) != (int *)0x0) {
            piVar18 = *(int **)(puVar10 + 6);
          }
          puVar29 = (ushort *)
                    ((ulong)uVar42 * 4 + *(long *)(piVar18 + 4) + (ulong)(uVar33 - uVar42) * 2);
          goto LAB_0045ce32;
        }
        iVar34 = 0;
        uVar25 = uVar25 << 8 | uVar25 >> 8;
        if (puVar68[1] <= uVar33) goto LAB_0045d22b;
LAB_0045ce4f:
        piVar18 = &_hb_NullPool;
        if (*(int **)(puVar68 + 6) != (int *)0x0) {
          piVar18 = *(int **)(puVar68 + 6);
        }
        uVar65 = (ulong)(uVar57 - 1);
        if (uVar33 <= uVar57 - 1) {
          uVar65 = uVar44;
        }
        uVar56 = *(ushort *)(*(long *)(piVar18 + 4) + uVar65 * 4);
        uVar57 = (uint)(ushort)(uVar56 << 8 | uVar56 >> 8);
        uVar67 = puVar10[1];
joined_r0x0045eb9d:
        iVar15 = (int)(short)uVar25;
        if (uVar67 <= uVar33) goto LAB_0045ce89;
LAB_0045d249:
        piVar18 = &_hb_NullPool;
        if (*(int **)(puVar10 + 6) != (int *)0x0) {
          piVar18 = *(int **)(puVar10 + 6);
        }
        uVar65 = (ulong)(uVar42 - 1);
        if (uVar33 <= uVar42 - 1) {
          uVar65 = uVar44;
        }
        uVar25 = *(ushort *)(*(long *)(piVar18 + 4) + uVar65 * 4);
        uVar42 = (uint)(ushort)(uVar25 << 8 | uVar25 >> 8);
      }
      pfVar59 = (float *)((ulong)(uint)fVar27 * 0xc + (long)*local_180);
      uVar67 = (uint)uVar58;
      if ((((uVar58 == 0) || (*pfVar59 = (float)iVar61, uVar67 == 1)) ||
          (pfVar59[3] = (float)(int)(uVar57 + iVar61), uVar67 < 3)) ||
         (pfVar59[7] = (float)(iVar34 + iVar15), uVar67 == 3)) {
        DAT_0071cd88 = 0;
        _hb_CrapPool = 0;
        puVar16 = &_hb_CrapPool;
      }
      else {
        puVar16 = (ulong *)(pfVar59 + 9);
      }
      *(float *)((long)puVar16 + 4) = (float)(int)((iVar34 + iVar15) - uVar42);
      if ((uint)local_178 != 0) {
        fVar66 = *pfVar64;
        fVar27 = (float)((int)fVar66 - (int)fVar63);
        if ((uint)fVar66 < (uint)fVar63) {
          fVar27 = 0.0;
        }
        if ((ulong)(uint)fVar63 == 0) {
          fVar27 = fVar66;
        }
        uVar65 = (ulong)(uint)fVar27;
        iVar61 = *(int *)(local_1c8 + 0xe);
        puVar48 = *(ushort **)puVar48;
        if (uVar33 < *(uint *)(puVar48 + 4)) {
          piVar18 = *(int **)puVar48;
          piVar38 = &_hb_NullPool;
          piVar55 = piVar18;
          if (piVar18 == (int *)0x0) {
            piVar55 = &_hb_NullPool;
          }
          if (0x13 < (uint)piVar55[6]) {
            piVar38 = *(int **)(piVar55 + 4);
          }
          pvVar49 = (void *)((ulong)(uint)fVar63 * 0xc + (long)*local_180);
          if ((*(byte *)((long)piVar38 + 0xf) & 1) == 0) {
            uVar25 = *(ushort *)((long)piVar38 + uVar44 * 2 + 0x14);
            uVar57 = (uint)(ushort)(uVar25 << 8 | uVar25 >> 8) * 2;
            if ((*(byte *)((long)piVar38 + 0xf) & 1) == 0) goto LAB_0045d3ab;
LAB_0045d392:
            uVar33 = piVar38[(ulong)(uVar33 + 1) + 5];
            uVar33 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                     uVar33 << 0x18;
          }
          else {
            uVar57 = piVar38[uVar44 + 5];
            uVar57 = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 | (uVar57 & 0xff00) << 8 |
                     uVar57 << 0x18;
            if ((*(byte *)((long)piVar38 + 0xf) & 1) != 0) goto LAB_0045d392;
LAB_0045d3ab:
            uVar25 = *(ushort *)((long)piVar38 + (ulong)(uVar33 + 1) * 2 + 0x14);
            uVar33 = (uint)(ushort)(uVar25 << 8 | uVar25 >> 8) * 2;
          }
          if (uVar33 < uVar57) {
LAB_0045eaf2:
            uVar44 = 0;
            puVar29 = (ushort *)0x0;
          }
          else {
            uVar42 = piVar38[4];
            uVar35 = (uVar42 >> 0x18 | (uVar42 & 0xff0000) >> 8 | (uVar42 & 0xff00) << 8 |
                     uVar42 << 0x18) + uVar57;
            uVar42 = piVar18[6] - uVar35;
            if ((uint)piVar18[6] < uVar35) {
              uVar42 = 0;
            }
            if (uVar33 - uVar57 < uVar42) {
              uVar42 = uVar33 - uVar57;
            }
            uVar44 = (ulong)uVar42;
            if ((uVar42 & 0xfffffffc) == 0) goto LAB_0045eaf2;
            puVar29 = (ushort *)((ulong)uVar35 + *(long *)(piVar18 + 4));
          }
          piVar18 = (int *)puVar29;
          if ((uVar44 & 0xfffffffc) == 0) {
            piVar18 = &_hb_NullPool;
          }
          if (*(ushort *)piVar18 != 0) {
            _local_208 = ZEXT816(0);
            piVar18 = *(int **)puVar48;
            if (piVar18 == (int *)0x0) {
              piVar18 = &_hb_NullPool;
            }
            piVar38 = &_hb_NullPool;
            if (0x13 < (uint)piVar18[6]) {
              piVar38 = *(int **)(piVar18 + 4);
            }
            uVar25 = *(ushort *)(piVar38 + 1);
            local_118 = (ushort *)&_hb_NullPool;
            if ((uVar44 & 0xfffffffc) != 0) {
              local_118 = puVar29;
            }
            uVar56 = *local_118;
            if ((uVar56 & 0x80) == 0) {
              local_1bc = 0;
            }
            else {
              uVar56 = local_118[1];
              if (uVar56 == 0) {
                piVar18 = &_hb_NullPool;
              }
              else {
                piVar18 = (int *)((ulong)(ushort)(uVar56 << 8 | uVar56 >> 8) + (long)puVar29);
              }
              local_168 = (undefined1  [8])piVar18;
              uVar19 = TupleVariationData::decompile_points
                                 ((ulong *)local_168,(uint *)local_208,
                                  (ushort *)((long)puVar29 + uVar44));
              if ((char)uVar19 == '\0') goto LAB_0045ed51;
              local_1bc = local_168._0_4_ - (int)piVar18;
              uVar56 = *local_118;
            }
            if (((uVar56 & 0xff0f) != 0) && (puVar24 = local_118 + 2, puVar29 <= puVar24)) {
              puVar72 = (ushort *)(uVar44 + (long)puVar29);
              if ((puVar24 <= puVar72) && (((int)puVar72 - (int)puVar24 & 0xfffffffcU) != 0)) {
                uVar71 = local_118[2];
                uVar26 = uVar71 << 8 | uVar71 >> 8;
                uVar7 = local_118[3];
                local_c0 = puVar29;
                local_16c = (uint)(ushort)(uVar25 << 8 | uVar25 >> 8) * 2;
                uVar33 = (uVar7 >> 5 & 2 | uVar7 >> 7 & 1) * local_16c + 4;
                if (uVar33 <= uVar26) {
                  uVar33 = (uint)uVar26;
                }
                if (uVar33 <= (uint)((int)puVar72 - (int)puVar24)) {
                  local_c8 = puVar72;
                  bVar60 = iVar61 == 1 & param_5;
                  local_d0 = puVar48;
                  piVar18 = *(int **)puVar48;
                  piVar38 = &_hb_NullPool;
                  if (piVar18 == (int *)0x0) {
                    piVar18 = &_hb_NullPool;
                  }
                  if (0x13 < (uint)piVar18[6]) {
                    piVar38 = *(int **)(piVar18 + 4);
                  }
                  uVar25 = *(ushort *)(piVar38 + 1) << 8 | *(ushort *)(piVar38 + 1) >> 8;
                  uVar33 = piVar38[2];
                  local_60 = (ulong)(uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 |
                                     (uVar33 & 0xff00) << 8 | uVar33 << 0x18) + (long)piVar38;
                  local_120 = (ulong)uVar25;
                  local_104 = (uint)(ushort)(*(ushort *)((long)piVar38 + 6) << 8 |
                                            *(ushort *)((long)piVar38 + 6) >> 8) * (uint)uVar25;
                  _local_168 = ZEXT816(0);
                  _local_198 = _local_168;
                  local_128 = 0;
                  if (-1 < (int)fVar27) {
                    local_128 = uVar65;
                  }
                  _local_1a8 = _local_168;
                  uVar33 = (int)fVar27 - 4;
                  bVar74 = bVar60 == 0;
                  local_d8 = 0x30;
                  if (bVar74) {
                    local_d8 = (ulong)(uint)((int)fVar27 * 0xc);
                  }
                  local_e0 = (float *)0x0;
                  if (!bVar74) {
                    local_e0 = (float *)(ulong)uVar33;
                  }
                  local_148 = (float *)(ulong)uVar33;
                  local_1b8 = 0;
                  if (!bVar74) {
                    local_1b8 = (ulong)uVar33;
                  }
                  local_130 = uVar65 - local_1b8;
                  uVar22 = (ulong)((uint)local_130 & 3);
                  uVar44 = 4;
                  if (uVar22 != 0) {
                    uVar44 = uVar22;
                  }
                  local_78 = uVar65 - uVar44;
                  local_70 = uVar65 * 0xc;
                  local_f0 = (local_130 - uVar44) + local_1b8;
                  local_80 = local_1b8 * 3;
                  local_68 = local_1b8 * 0xc + 4;
                  local_f8 = local_1b8 + 3;
                  local_270 = (void *)0x0;
                  local_218 = (void *)0x0;
                  local_170 = 0;
                  local_1e8 = 0;
                  local_230 = 0;
                  local_1e0 = (void *)0x0;
                  local_e8 = 0;
                  local_280 = (void *)0x0;
                  local_1d8 = 0;
                  puVar48 = (ushort *)0x0;
                  local_1d0 = 0;
                  uVar33 = 0;
                  local_20c = 0;
                  local_2b0 = (float *)0x0;
                  bVar74 = false;
                  do {
                    if ((uVar7 & 0x80) == 0) {
                      uVar25 = (uVar7 & 0xff0f) << 8 | uVar7 >> 8;
                      dVar86 = 0.0;
                      if (((uVar25 + 1) * (uint)local_120 <= local_104) &&
                         (uVar57 = (uint)uVar25, uVar57 < *(uint *)(local_d0 + 10))) {
                        puVar29 = (ushort *)(local_60 + (ulong)(uVar57 * (uint)local_120) * 2);
                        uVar42 = *(uint *)(*(long *)(local_d0 + 0xc) + (ulong)uVar57 * 8);
                        iVar61 = *(int *)(*(long *)(local_d0 + 0xc) + 4 + (ulong)uVar57 * 8);
                        if (iVar61 == -1) {
                          uVar57 = uVar42 + 1;
                          if (uVar42 + 1 == 0) {
                            uVar42 = 0;
                            uVar57 = (uint)local_120;
                          }
                          iVar61 = 1;
                        }
                        else {
                          uVar57 = iVar61 + 1;
                          iVar61 = iVar61 - uVar42;
                        }
                        uVar35 = 0;
                        goto LAB_0045d832;
                      }
                    }
                    else {
                      puVar29 = puVar24 + 2;
                      uVar42 = 0;
                      iVar61 = 1;
                      uVar35 = (uint)local_120;
                      uVar57 = (uint)local_120;
LAB_0045d832:
                      bVar73 = (uVar7 & 0x40) == 0;
                      puVar72 = puVar24 + (ulong)(uVar35 + (uint)local_120) + 2;
                      if (bVar73) {
                        puVar72 = (ushort *)0x0;
                      }
                      puVar70 = puVar24 + (ulong)uVar35 + 2;
                      if (bVar73) {
                        puVar70 = (ushort *)0x0;
                      }
                      dVar86 = _DAT_005d9000;
                      if (uVar42 < uVar57) {
                        if ((uVar7 & 0x40) == 0) {
                          auVar75._8_8_ = 0;
                          auVar75._0_8_ = _DAT_005d9000;
                          do {
                            uVar25 = puVar29[uVar42];
                            if (uVar25 != 0) {
                              uVar25 = uVar25 << 8 | uVar25 >> 8;
                              if (uVar42 < (uint)local_178) {
                                iVar34 = *(int *)(local_138 + (ulong)uVar42 * 4);
                                if (iVar34 != (short)uVar25) goto LAB_0045d8bb;
                              }
                              else {
                                iVar34 = _hb_NullPool;
                                if (_hb_NullPool != (short)uVar25) {
LAB_0045d8bb:
                                  uVar35 = (uint)(short)uVar25;
                                  dVar86 = 0.0;
                                  if ((iVar34 == 0) ||
                                     (iVar34 < (int)((int)uVar35 >> 0x1f & uVar35))) break;
                                  uVar37 = 0;
                                  if (-1 < (int)uVar35) {
                                    uVar37 = uVar35;
                                  }
                                  if ((int)uVar37 < iVar34) break;
                                  auVar75._0_8_ =
                                       auVar75._0_8_ * ((double)iVar34 / (double)(int)uVar35);
                                }
                              }
                            }
                            dVar86 = auVar75._0_8_;
                            uVar42 = uVar42 + iVar61;
                          } while (uVar42 < uVar57);
                        }
                        else {
                          auVar87._8_8_ = 0;
                          auVar87._0_8_ = _DAT_005d9000;
                          do {
                            uVar44 = (ulong)uVar42;
                            uVar25 = puVar29[uVar44];
                            if (uVar25 != 0) {
                              uVar26 = uVar25 << 8 | uVar25 >> 8;
                              if (uVar42 < (uint)local_178) {
                                iVar34 = *(int *)(local_138 + uVar44 * 4);
                                if (iVar34 != (short)uVar26) goto LAB_0045d977;
                              }
                              else {
                                iVar34 = _hb_NullPool;
                                if (_hb_NullPool != (short)uVar26) {
LAB_0045d977:
                                  iVar15 = (int)(short)uVar26;
                                  uVar8 = puVar70[uVar44];
                                  uVar50 = uVar8 << 8 | uVar8 >> 8;
                                  if ((short)uVar50 <= (short)uVar26) {
                                    uVar9 = puVar72[uVar44];
                                    uVar46 = uVar9 << 8 | uVar9 >> 8;
                                    if (((short)uVar26 <= (short)uVar46) &&
                                       ((-1 < (short)uVar50 || ((short)uVar46 < 1)))) {
                                      iVar36 = (int)(short)uVar50;
                                      dVar86 = 0.0;
                                      iVar28 = iVar34 - iVar36;
                                      if ((iVar34 < iVar36) ||
                                         (iVar51 = (int)(short)uVar46, iVar51 < iVar34)) break;
                                      if (iVar34 < iVar15) {
                                        if (uVar25 != uVar8) {
                                          iVar15 = iVar15 - iVar36;
                                          goto LAB_0045d91d;
                                        }
                                      }
                                      else if (uVar9 != uVar25) {
                                        iVar28 = iVar51 - iVar34;
                                        iVar15 = iVar51 - iVar15;
LAB_0045d91d:
                                        auVar87._0_8_ =
                                             auVar87._0_8_ * ((double)iVar28 / (double)iVar15);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            dVar86 = auVar87._0_8_;
                            uVar42 = uVar42 + iVar61;
                          } while (uVar42 < uVar57);
                        }
                      }
                    }
                    fVar63 = (float)dVar86;
                    if ((fVar63 != DAT_005d9058) || (NAN(fVar63) || NAN(DAT_005d9058))) {
                      uVar25 = local_118[1];
                      piVar18 = &_hb_NullPool;
                      if (uVar25 != 0) {
                        piVar18 = (int *)((ulong)(ushort)(uVar25 << 8 | uVar25 >> 8) +
                                         (long)local_c0);
                      }
                      puVar29 = (ushort *)((ulong)local_1bc + (long)piVar18);
                      local_110 = puVar29;
                      if (((puVar29 < local_c0) || (local_c8 < puVar29)) ||
                         (uVar25 = uVar71 << 8 | uVar71 >> 8,
                         (uint)((int)local_c8 - (int)puVar29) < (uint)uVar25)) goto LAB_0045ecce;
                      if ((uint)local_1d0 == 0) {
                        if ((int)(uint)local_1d8 < 0) goto LAB_0045ecce;
                        uVar44 = local_1d8;
                        if ((uint)local_1d8 < (uint)local_128) {
                          do {
                            uVar57 = (int)uVar44 + ((uint)(uVar44 >> 1) & 0x7fffffff) + 8;
                            uVar44 = (ulong)uVar57;
                          } while (uVar57 < (uint)local_128);
                          if (0x15555555 < uVar57) {
LAB_0045ecb2:
                            local_1d8 = (ulong)~(uint)local_1d8;
                            goto LAB_0045ecce;
                          }
                          if (uVar57 == 0) {
                            free(puVar48);
                            local_1d8 = 0;
                            puVar48 = (ushort *)0x0;
                          }
                          else {
                            puVar72 = realloc(puVar48,uVar44 * 0xc);
                            if (puVar72 == (ushort *)0x0) {
                              if ((uint)local_1d8 < uVar57) goto LAB_0045ecb2;
                            }
                            else {
                              local_1d8 = uVar44;
                              puVar48 = puVar72;
                            }
                          }
                        }
                        if (local_d8 != 0) {
                          memset(puVar48 + (long)local_e0 * 6,0,local_d8);
                        }
                        local_1d0 = local_128;
                      }
                      puVar68 = (uint *)((long)puVar29 + (ulong)uVar25);
                      ppvVar30 = (void **)&uStack_200;
                      pfVar20 = &fStack_204;
                      if ((puVar24[1] & 0x20) != 0) {
                        uVar19 = TupleVariationData::decompile_points
                                           ((ulong *)&local_110,(uint *)local_168,(ushort *)puVar68)
                        ;
                        ppvVar30 = apvStack_160;
                        pfVar20 = (float *)(local_168 + 4);
                        if ((char)uVar19 == '\0') goto LAB_0045ecce;
                      }
                      uVar44 = (ulong)(uint)*pfVar20;
                      fVar66 = *pfVar20;
                      if (uVar44 == 0) {
                        fVar66 = fVar27;
                      }
                      fVar47 = 0.0;
                      if (-1 < (int)fVar66) {
                        fVar47 = fVar66;
                      }
                      uVar13 = local_198._0_4_;
                      if ((int)local_198._0_4_ < 0) goto LAB_0045ecce;
                      pvVar11 = *ppvVar30;
                      if ((uint)local_198._0_4_ < (uint)fVar47) {
                        uVar22 = (ulong)(uint)local_198._0_4_;
                        do {
                          fVar69 = (float)((uint)uVar22 + ((uint)uVar22 >> 1) + 8);
                          uVar22 = (ulong)(uint)fVar69;
                        } while ((uint)fVar69 < (uint)fVar47);
                        if (0x3fffffff < (uint)fVar69) {
LAB_0045ec9c:
                          local_198._0_4_ = ~uVar13;
                          goto LAB_0045ecce;
                        }
                        if (fVar69 == 0.0) {
                          free(local_270);
                          pvVar21 = (void *)0x0;
                        }
                        else {
                          pvVar21 = realloc(local_270,uVar22 << 2);
                          if (pvVar21 == (void *)0x0) {
                            if ((uint)fVar69 <= (uint)uVar13) goto LAB_0045dbe7;
                            goto LAB_0045ec9c;
                          }
                        }
                        pvStack_190 = pvVar21;
                        local_198._0_4_ = fVar69;
                        local_270 = pvVar21;
                      }
LAB_0045dbe7:
                      local_198._4_4_ = fVar47;
                      uVar19 = TupleValues::decompile<int>
                                         ((ulong *)&local_110,(long)local_198,puVar68);
                      if ((char)uVar19 == '\0') goto LAB_0045ecce;
                      uVar13 = local_1a8._0_4_;
                      if ((int)local_1a8._0_4_ < 0) goto LAB_0045ecce;
                      if ((uint)local_1a8._0_4_ < (uint)fVar47) {
                        uVar22 = (ulong)(uint)local_1a8._0_4_;
                        do {
                          fVar69 = (float)((uint)uVar22 + ((uint)uVar22 >> 1) + 8);
                          uVar22 = (ulong)(uint)fVar69;
                        } while ((uint)fVar69 < (uint)fVar47);
                        if (0x3fffffff < (uint)fVar69) {
LAB_0045eca7:
                          local_1a8._0_4_ = ~uVar13;
                          goto LAB_0045ecce;
                        }
                        if (fVar69 == 0.0) {
                          free(local_218);
                          pvVar21 = (void *)0x0;
                        }
                        else {
                          pvVar21 = realloc(local_218,uVar22 << 2);
                          if (pvVar21 == (void *)0x0) {
                            if ((uint)fVar69 <= (uint)uVar13) goto LAB_0045dc25;
                            goto LAB_0045eca7;
                          }
                        }
                        pvStack_1a0 = pvVar21;
                        local_1a8._0_4_ = fVar69;
                        local_218 = pvVar21;
                      }
LAB_0045dc25:
                      local_1a8._4_4_ = fVar47;
                      uVar19 = TupleValues::decompile<int>
                                         ((ulong *)&local_110,(long)local_1a8,puVar68);
                      if ((char)uVar19 == '\0') goto LAB_0045ecce;
                      if (uVar44 == 0) {
                        if ((fVar63 != DAT_005d9038) || (NAN(fVar63) || NAN(DAT_005d9038))) {
                          if ((uint)(float)local_1b8 < (uint)fVar27) {
                            uVar22 = local_1b8;
                            if (4 < local_130) {
                              pfVar20 = (float *)(puVar48 + local_f8 * 6 + 2);
                              do {
                                piVar18 = (int *)((long)pvStack_190 + uVar22 * 4);
                                iVar61 = piVar18[1];
                                iVar34 = piVar18[2];
                                iVar15 = piVar18[3];
                                pfVar20[-10] = (float)*piVar18 * fVar63 + pfVar20[-10];
                                pfVar20[-7] = (float)iVar61 * fVar63 + pfVar20[-7];
                                pfVar20[-4] = (float)iVar34 * fVar63 + pfVar20[-4];
                                pfVar20[-1] = (float)iVar15 * fVar63 + pfVar20[-1];
                                piVar18 = (int *)((long)pvStack_1a0 + uVar22 * 4);
                                iVar61 = piVar18[1];
                                iVar34 = piVar18[2];
                                iVar15 = piVar18[3];
                                pfVar20[-9] = (float)*piVar18 * fVar63 + pfVar20[-9];
                                pfVar20[-6] = (float)iVar61 * fVar63 + pfVar20[-6];
                                pfVar20[-3] = (float)iVar34 * fVar63 + pfVar20[-3];
                                *pfVar20 = (float)iVar15 * fVar63 + *pfVar20;
                                uVar22 = uVar22 + 4;
                                pfVar20 = pfVar20 + 0xc;
                              } while (local_f0 != uVar22);
                              uVar22 = local_f0;
                            }
                            pfVar20 = (float *)(puVar48 + uVar22 * 6 + 2);
                            do {
                              pfVar20[-1] = (float)*(int *)((long)pvStack_190 + uVar22 * 4) * fVar63
                                            + pfVar20[-1];
                              *pfVar20 = (float)*(int *)((long)pvStack_1a0 + uVar22 * 4) * fVar63 +
                                         *pfVar20;
                              uVar22 = uVar22 + 1;
                              pfVar20 = pfVar20 + 3;
                            } while (uVar65 != uVar22);
                            goto LAB_0045e20f;
                          }
                        }
                        else if ((uint)(float)local_1b8 < (uint)fVar27) {
                          uVar22 = local_1b8;
                          if (4 < local_130) {
                            pfVar20 = (float *)(puVar48 + local_f8 * 6 + 2);
                            do {
                              piVar18 = (int *)((long)pvStack_190 + uVar22 * 4);
                              iVar61 = piVar18[1];
                              iVar34 = piVar18[2];
                              iVar15 = piVar18[3];
                              pfVar20[-10] = pfVar20[-10] + (float)*piVar18;
                              pfVar20[-7] = pfVar20[-7] + (float)iVar61;
                              pfVar20[-4] = pfVar20[-4] + (float)iVar34;
                              pfVar20[-1] = pfVar20[-1] + (float)iVar15;
                              piVar18 = (int *)((long)pvStack_1a0 + uVar22 * 4);
                              iVar61 = piVar18[1];
                              iVar34 = piVar18[2];
                              iVar15 = piVar18[3];
                              pfVar20[-9] = pfVar20[-9] + (float)*piVar18;
                              pfVar20[-6] = pfVar20[-6] + (float)iVar61;
                              pfVar20[-3] = pfVar20[-3] + (float)iVar34;
                              *pfVar20 = *pfVar20 + (float)iVar15;
                              uVar22 = uVar22 + 4;
                              pfVar20 = pfVar20 + 0xc;
                            } while (local_78 != uVar22);
                            uVar22 = local_f0;
                          }
                          pfVar20 = (float *)(puVar48 + uVar22 * 6 + 2);
                          do {
                            pfVar20[-1] = (float)*(int *)((long)pvStack_190 + uVar22 * 4) +
                                          pfVar20[-1];
                            *pfVar20 = (float)*(int *)((long)pvStack_1a0 + uVar22 * 4) + *pfVar20;
                            uVar22 = uVar22 + 1;
                            pfVar20 = pfVar20 + 3;
                          } while (uVar65 != uVar22);
LAB_0045e20f:
                          local_270 = pvStack_190;
                          local_218 = pvStack_1a0;
                          goto LAB_0045e226;
                        }
                      }
                      else {
                        if ((int)local_e8 == 0 && bVar60 == 0) {
                          uVar57 = local_230 + (int)fVar27;
                          if ((int)uVar57 < 0) {
                            uVar57 = 0;
                          }
                          if ((int)(uint)local_1e8 < 0) goto LAB_0045ecce;
                          uVar22 = local_1e8;
                          if ((uint)local_1e8 < uVar57) {
                            do {
                              uVar42 = (int)uVar22 + ((uint)(uVar22 >> 1) & 0x7fffffff) + 8;
                              uVar22 = (ulong)uVar42;
                            } while (uVar42 < uVar57);
                            if (uVar42 < 0x15555556) {
                              if (uVar42 == 0) {
                                free(local_1e0);
                                pvVar21 = (void *)0x0;
                                uVar22 = 0;
                              }
                              else {
                                pvVar21 = realloc(local_1e0,uVar22 * 0xc);
                                if (pvVar21 == (void *)0x0) {
                                  if (uVar42 <= (uint)local_1e8) goto LAB_0045dcb4;
                                  goto LAB_0045ea40;
                                }
                              }
                              local_1e8 = uVar22;
                              local_1e0 = pvVar21;
                              goto LAB_0045dcb4;
                            }
LAB_0045ea40:
                            uVar57 = (uint)local_1e8;
                            local_1e8 = (ulong)~uVar57;
                            if (-1 < (int)uVar57) goto LAB_0045ecce;
                          }
                          else {
LAB_0045dcb4:
                            if (uVar65 != 0) {
                              memcpy((void *)((long)local_1e0 + (ulong)local_230 * 0xc),pvVar49,
                                     local_70);
                            }
                            local_230 = uVar57;
                            if ((int)(uint)local_1e8 < 0) goto LAB_0045ecce;
                          }
                          local_e8 = (ulong)local_230;
                          local_280 = local_1e0;
                        }
                        if ((bVar74) && ((uint)(float)local_1b8 < (uint)fVar27)) {
                          lVar41 = local_68;
                          uVar22 = local_130;
                          do {
                            *(float *)((long)pvVar49 + lVar41 + -4) =
                                 *(float *)((long)puVar48 + lVar41 + -4) +
                                 *(float *)((long)pvVar49 + lVar41 + -4);
                            *(float *)((long)pvVar49 + lVar41) =
                                 *(float *)((long)puVar48 + lVar41) +
                                 *(float *)((long)pvVar49 + lVar41);
                            lVar41 = lVar41 + 0xc;
                            uVar22 = uVar22 - 1;
                          } while (uVar22 != 0);
                        }
                        if (local_d8 != 0) {
                          memset(puVar48 + (long)local_e0 * 6,0,local_d8);
                        }
                        if ((fVar63 != DAT_005d9038) || (NAN(fVar63) || NAN(DAT_005d9038))) {
                          if (fVar66 != 0.0) {
                            uVar22 = 0;
                            do {
                              if (uVar22 < uVar44) {
                                uVar57 = *(uint *)((long)pvVar11 + uVar22 * 4);
                                uVar39 = (ulong)uVar57;
                                if (uVar57 < (uint)local_1d0) goto LAB_0045de1f;
                              }
                              else {
                                _hb_CrapPool = _hb_CrapPool & 0xffffffff00000000;
                                uVar39 = 0;
                                if ((uint)local_1d0 != 0) {
LAB_0045de1f:
                                  if ((bVar60 & (uint)uVar39 < (uint)local_148) == 0) {
                                    *(byte *)(puVar48 + uVar39 * 6 + 4) = 1;
                                    *(float *)(puVar48 + uVar39 * 6) =
                                         (float)*(int *)((long)pvStack_190 + uVar22 * 4) * fVar63 +
                                         *(float *)(puVar48 + uVar39 * 6);
                                    *(float *)(puVar48 + uVar39 * 6 + 2) =
                                         (float)*(int *)((long)pvStack_1a0 + uVar22 * 4) * fVar63 +
                                         *(float *)(puVar48 + uVar39 * 6 + 2);
                                  }
                                }
                              }
                              uVar22 = uVar22 + 1;
                            } while ((uint)fVar66 != uVar22);
                            goto LAB_0045e0b5;
                          }
                        }
                        else if (fVar66 != 0.0) {
                          uVar22 = 0;
                          do {
                            if (uVar22 < uVar44) {
                              uVar57 = *(uint *)((long)pvVar11 + uVar22 * 4);
                              uVar39 = (ulong)uVar57;
                              if (uVar57 < (uint)local_1d0) goto LAB_0045e04b;
                            }
                            else {
                              _hb_CrapPool = _hb_CrapPool & 0xffffffff00000000;
                              uVar39 = 0;
                              if ((uint)local_1d0 != 0) {
LAB_0045e04b:
                                if ((bVar60 & (uint)uVar39 < (uint)local_148) == 0) {
                                  *(byte *)(puVar48 + uVar39 * 6 + 4) = 1;
                                  *(float *)(puVar48 + uVar39 * 6) =
                                       (float)*(int *)((long)pvStack_190 + uVar22 * 4) +
                                       *(float *)(puVar48 + uVar39 * 6);
                                  *(float *)(puVar48 + uVar39 * 6 + 2) =
                                       (float)*(int *)((long)pvStack_1a0 + uVar22 * 4) +
                                       *(float *)(puVar48 + uVar39 * 6 + 2);
                                }
                              }
                            }
                            uVar22 = uVar22 + 1;
                          } while ((uint)fVar66 != uVar22);
LAB_0045e0b5:
                          local_218 = pvStack_1a0;
                          local_270 = pvStack_190;
                        }
LAB_0045e226:
                        if (uVar44 != 0 && bVar60 == 0) {
                          if (local_20c == 0) {
                            if (uVar65 == 0) {
                              if ((int)uVar33 < 0) goto LAB_0045ecce;
                            }
                            else {
                              uVar22 = 0;
                              uVar44 = 0;
                              do {
                                while (uVar57 = (uint)uVar44,
                                      *(char *)((long)pvVar49 + uVar22 * 0xc + 9) == '\0') {
LAB_0045e937:
                                  uVar22 = uVar22 + 1;
                                  if (uVar22 == uVar65) goto LAB_0045e967;
                                }
                                uVar35 = uVar57 + 1;
                                pfVar20 = local_2b0;
                                uVar42 = uVar33;
                                if ((int)uVar33 <= (int)uVar57) {
                                  if ((int)uVar33 < 0) {
LAB_0045e92d:
                                    _hb_CrapPool = _hb_CrapPool & 0xffffffff00000000;
                                    goto LAB_0045e937;
                                  }
                                  if (uVar33 < uVar35) {
                                    uVar37 = uVar33;
                                    do {
                                      uVar37 = uVar37 + (uVar37 >> 1) + 8;
                                    } while (uVar37 < uVar35);
                                    if (0x3fffffff < uVar37) {
LAB_0045e90d:
                                      uVar33 = ~uVar33;
                                      goto LAB_0045e92d;
                                    }
                                    if (uVar37 == 0) {
                                      free(local_2b0);
                                      pfVar20 = (float *)0x0;
                                      uVar42 = 0;
                                    }
                                    else {
                                      pfVar20 = realloc(local_2b0,(ulong)uVar37 << 2);
                                      uVar42 = uVar37;
                                      if (pfVar20 == (float *)0x0) {
                                        pfVar20 = local_2b0;
                                        uVar42 = uVar33;
                                        if (uVar33 < uVar37) goto LAB_0045e90d;
                                      }
                                    }
                                  }
                                }
                                uVar33 = uVar42;
                                pfVar20[uVar44] = (float)uVar22;
                                uVar22 = uVar22 + 1;
                                local_2b0 = pfVar20;
                                uVar44 = (ulong)uVar35;
                                uVar57 = uVar35;
                              } while (uVar22 != uVar65);
LAB_0045e967:
                              if ((int)uVar33 < 0) goto LAB_0045ecce;
                              if (uVar57 != 0) {
                                local_20c = uVar57;
                                goto LAB_0045e24b;
                              }
                            }
                            local_20c = 0;
                          }
                          else {
LAB_0045e24b:
                            local_150 = local_2b0 + local_20c;
                            local_58 = puVar48 + 0x16;
                            local_50 = puVar48 + 4;
                            pfVar20 = local_2b0;
                            uVar57 = 0;
                            do {
                              fVar63 = *pfVar20;
                              uVar42 = (int)fVar63 + 1;
                              iVar61 = 0;
                              if (uVar57 < uVar42) {
                                uVar22 = (ulong)uVar57;
                                uVar44 = uVar42 - uVar22;
                                uVar39 = (ulong)((uint)uVar44 & 3);
                                iVar61 = 0;
                                if (2 < ~uVar22 + (ulong)uVar42) {
                                  puVar29 = puVar48 + 0x16 + uVar22 * 6;
                                  lVar41 = 0;
                                  iVar61 = 0;
                                  do {
                                    iVar61 = (uint)(byte)*puVar29 +
                                             (uint)(byte)puVar29[-6] +
                                             (uint)(byte)puVar29[-0xc] +
                                             (uint)(byte)puVar29[-0x12] + iVar61;
                                    lVar41 = lVar41 + -4;
                                    puVar29 = puVar29 + 0x18;
                                  } while (-lVar41 != (uVar44 & 0xfffffffffffffffc));
                                  uVar22 = uVar22 - lVar41;
                                }
                                if (uVar39 != 0) {
                                  lVar41 = 0;
                                  do {
                                    iVar61 = iVar61 + (uint)*(byte *)((long)(puVar48 + 4) +
                                                                     lVar41 + uVar22 * 0xc);
                                    lVar41 = lVar41 + 0xc;
                                  } while (uVar39 * 0xc != lVar41);
                                }
                              }
                              uVar35 = (((int)fVar63 - uVar57) - iVar61) + 1;
                              if ((uVar35 != 0) &&
                                 (uVar44 = (ulong)uVar57, uVar35 <= (int)fVar63 - uVar57)) {
                                do {
                                  do {
                                    uVar22 = uVar44;
                                    uVar37 = (int)(float)uVar22 + 1;
                                    if ((uint)fVar63 <= (uint)(float)uVar22) {
                                      uVar37 = uVar57;
                                    }
                                    uVar44 = (ulong)uVar37;
                                  } while (((byte)puVar48[uVar22 * 6 + 4] == 0) ||
                                          ((byte)puVar48[(ulong)uVar37 * 6 + 4] != 0));
                                  bVar45 = 1;
                                  uVar44 = uVar22;
                                  do {
                                    uVar37 = (int)(float)uVar44 + 1;
                                    if ((uint)fVar63 <= (uint)(float)uVar44) {
                                      uVar37 = uVar57;
                                    }
                                    uVar44 = (ulong)uVar37;
                                    bVar74 = bVar45 != 0;
                                    bVar45 = (byte)puVar48[uVar44 * 6 + 4];
                                  } while ((bVar74) || (bVar74 = bVar45 == 0, bVar45 = 0, bVar74));
                                  lVar41 = uVar22 * 0xc;
                                  lVar62 = uVar22 * 6;
                                  lVar17 = uVar22 * 6;
                                  while( true ) {
                                    uVar52 = (int)(float)uVar22 + 1;
                                    if ((uint)fVar63 <= (uint)(float)uVar22) {
                                      uVar52 = uVar57;
                                    }
                                    uVar22 = (ulong)uVar52;
                                    if (uVar52 == uVar37) break;
                                    fVar66 = *(float *)((long)local_280 + lVar41);
                                    fVar47 = *(float *)((long)local_280 + uVar44 * 0xc);
                                    fVar69 = *(float *)(puVar48 + lVar62);
                                    fVar85 = *(float *)(puVar48 + uVar44 * 6);
                                    if ((fVar66 != fVar47) || (NAN(fVar66) || NAN(fVar47))) {
                                      fVar2 = *(float *)((long)local_280 + uVar22 * 0xc);
                                      if (fVar2 <= (float)(~-(uint)(fVar66 <= fVar47) & (uint)fVar47
                                                          | -(uint)(fVar66 <= fVar47) & (uint)fVar66
                                                          )) {
                                        fVar69 = (float)(~-(uint)(fVar66 < fVar47) & (uint)fVar85 |
                                                        (uint)fVar69 & -(uint)(fVar66 < fVar47));
                                      }
                                      else if ((float)(~-(uint)(fVar47 <= fVar66) & (uint)fVar47 |
                                                      -(uint)(fVar47 <= fVar66) & (uint)fVar66) <=
                                               fVar2) {
                                        fVar69 = (float)(~-(uint)(fVar47 < fVar66) & (uint)fVar85 |
                                                        (uint)fVar69 & -(uint)(fVar47 < fVar66));
                                      }
                                      else {
                                        fVar69 = (fVar85 - fVar69) *
                                                 ((fVar2 - fVar66) / (fVar47 - fVar66)) + fVar69;
                                      }
                                    }
                                    else {
                                      fVar69 = (float)(-(uint)(fVar85 == fVar69) & (uint)fVar69);
                                    }
                                    *(float *)(puVar48 + uVar22 * 6) = fVar69;
                                    fVar66 = *(float *)((long)local_280 + lVar41 + 4);
                                    fVar47 = *(float *)((long)local_280 + uVar44 * 0xc + 4);
                                    fVar69 = *(float *)(puVar48 + lVar17 + 2);
                                    fVar85 = *(float *)(puVar48 + uVar44 * 6 + 2);
                                    if ((fVar66 != fVar47) || (NAN(fVar66) || NAN(fVar47))) {
                                      fVar2 = *(float *)((long)local_280 + uVar22 * 0xc + 4);
                                      if (fVar2 <= (float)(~-(uint)(fVar66 <= fVar47) & (uint)fVar47
                                                          | -(uint)(fVar66 <= fVar47) & (uint)fVar66
                                                          )) {
                                        fVar69 = (float)(~-(uint)(fVar66 < fVar47) & (uint)fVar85 |
                                                        (uint)fVar69 & -(uint)(fVar66 < fVar47));
                                      }
                                      else if ((float)(~-(uint)(fVar47 <= fVar66) & (uint)fVar47 |
                                                      -(uint)(fVar47 <= fVar66) & (uint)fVar66) <=
                                               fVar2) {
                                        fVar69 = (float)(~-(uint)(fVar47 < fVar66) & (uint)fVar85 |
                                                        (uint)fVar69 & -(uint)(fVar47 < fVar66));
                                      }
                                      else {
                                        fVar69 = (fVar85 - fVar69) *
                                                 ((fVar2 - fVar66) / (fVar47 - fVar66)) + fVar69;
                                      }
                                    }
                                    else {
                                      fVar69 = (float)(-(uint)(fVar85 == fVar69) & (uint)fVar69);
                                    }
                                    *(float *)(puVar48 + uVar22 * 6 + 2) = fVar69;
                                    uVar35 = uVar35 - 1;
                                    if (uVar35 == 0) goto LAB_0045e290;
                                  }
                                } while( true );
                              }
LAB_0045e290:
                              pfVar20 = pfVar20 + 1;
                              uVar57 = uVar42;
                            } while (pfVar20 != local_2b0 + local_20c);
                          }
                        }
                      }
                      uVar71 = *puVar24;
                      uVar7 = puVar24[1];
                      uVar56 = *local_118;
                      bVar74 = true;
                    }
                    local_170 = local_170 + 1;
                    if ((ushort)((uVar56 & 0xff0f) << 8 | uVar56 >> 8) <= local_170)
                    goto LAB_0045ea86;
                    uVar57 = (uVar7 >> 5 & 2 | uVar7 >> 7 & 1) * local_16c;
                    puVar29 = (ushort *)((long)puVar24 + (ulong)uVar57 + 4);
                    if (puVar29 < local_c0) goto LAB_0045ea86;
                    if ((local_c8 < puVar29) || (((int)local_c8 - (int)puVar29 & 0xfffffffcU) == 0))
                    goto LAB_0045ea86;
                    local_1bc = local_1bc + (ushort)(uVar71 << 8 | uVar71 >> 8);
                    uVar71 = *puVar29;
                    uVar25 = uVar71 << 8 | uVar71 >> 8;
                    uVar7 = *(ushort *)((long)puVar24 + (ulong)uVar57 + 6);
                    uVar57 = (uVar7 >> 5 & 2 | uVar7 >> 7 & 1) * local_16c + 4;
                    if (uVar57 <= uVar25) {
                      uVar57 = (uint)uVar25;
                    }
                    puVar24 = puVar29;
                    if ((uint)((int)local_c8 - (int)puVar29) < uVar57) goto LAB_0045ea86;
                  } while( true );
                }
              }
            }
            goto LAB_0045ed51;
          }
        }
      }
      goto LAB_0045ed7a;
    }
  }
  uVar58 = 0;
  goto LAB_0045eed2;
LAB_0045ea86:
  if ((bVar74) && ((uint)(float)local_1b8 < (uint)fVar27)) {
    lVar62 = uVar65 - local_1b8;
    lVar41 = local_80 * 4 + 4;
    do {
      *(float *)((long)pvVar49 + lVar41 + -4) =
           *(float *)((long)puVar48 + lVar41 + -4) + *(float *)((long)pvVar49 + lVar41 + -4);
      *(float *)((long)pvVar49 + lVar41) =
           *(float *)((long)puVar48 + lVar41) + *(float *)((long)pvVar49 + lVar41);
      lVar41 = lVar41 + 0xc;
      lVar62 = lVar62 + -1;
    } while (lVar62 != 0);
  }
LAB_0045ecce:
  if (local_1a8._0_4_ != 0) {
    free(local_218);
  }
  if (local_198._0_4_ != 0) {
    free(local_270);
  }
  if (local_168._0_4_ != 0) {
    free(apvStack_160[0]);
  }
  if (uVar33 != 0) {
    free(local_2b0);
  }
  if ((uint)local_1d8 != 0) {
    free(puVar48);
  }
  if ((uint)local_1e8 != 0) {
    free(local_1e0);
  }
LAB_0045ed51:
  if (local_208 != (undefined1  [4])0x0) {
    free(uStack_200);
  }
LAB_0045ed7a:
  if (*(int *)(local_1c8 + 0xe) == 0) {
    fVar63 = *param_4;
    uVar44 = (ulong)(uint)param_4[1];
    fVar66 = (float)((int)param_4[1] + uVar67);
    if ((int)fVar66 < 0) {
      fVar66 = 0.0;
    }
    if (-1 < (int)fVar63) {
      if ((uint)fVar66 <= (uint)fVar63) goto LAB_0045ee1a;
      fVar27 = fVar63;
      do {
        fVar27 = (float)((int)fVar27 + ((uint)fVar27 >> 1) + 8);
      } while ((uint)fVar27 < (uint)fVar66);
      if ((uint)fVar27 < 0x15555556) {
        pvVar49 = *ppvVar54;
        if (fVar27 == 0.0) goto LAB_0046028a;
LAB_004601b2:
        pvVar49 = realloc(pvVar49,(ulong)(uint)fVar27 * 0xc);
        if (pvVar49 != (void *)0x0) goto LAB_00460291;
        fVar63 = *param_4;
        if ((uint)fVar27 <= (uint)fVar63) goto LAB_0045ee1a;
      }
LAB_004601e1:
      *param_4 = (float)~(uint)fVar63;
    }
  }
  else if (*(int *)(local_1c8 + 0xe) == 2) {
    puVar29 = *(ushort **)local_1c8;
    puVar48 = (ushort *)(*(long *)(local_1c8 + 8) + 10);
    if (puVar29 <= puVar48) {
      local_1c8 = (ushort *)((ulong)*(uint *)(local_1c8 + 4) + (long)puVar29);
      if ((puVar48 <= local_1c8) && (((int)local_1c8 - (int)puVar48 & 0xfffffffcU) != 0)) {
        uVar25 = *puVar48 >> 8;
        iVar61 = (uVar25 & 1) * 2;
        if ((uVar25 & 8) == 0) {
          if ((uVar25 & 0x40) == 0) {
            uVar33 = iVar61 + 0xe;
            if ((uVar25 & 0x80) == 0) {
              uVar33 = iVar61 + 6;
            }
          }
          else {
            uVar33 = iVar61 + 10;
          }
        }
        else {
          uVar33 = iVar61 + 8;
        }
        if (uVar33 <= (uint)((int)local_1c8 - (int)puVar48)) {
          this = (hb_hashmap_t<unsigned_int,unsigned_int,true> *)&local_b0;
          if (param_9 != (hb_hashmap_t<unsigned_int,unsigned_int,true> *)0x0) {
            this = param_9;
          }
          local_1d0 = (ulong)(param_10 + 1);
          local_148 = pfVar59 + 3;
          local_150 = pfVar59 + 6;
          fVar63 = 0.0;
          do {
            uVar25 = puVar48[1] << 8 | puVar48[1] >> 8;
            uVar57 = CONCAT22(0,uVar25);
            local_168._0_4_ = uVar57;
            lVar41 = *(long *)(this + 0x28);
            uVar57 = uVar57 * -0x61c8864f;
            uVar42 = (uint)uVar25;
            if (lVar41 != 0) {
              uVar44 = (ulong)(uVar57 & 0x3fffffff) % (ulong)*(uint *)(this + 0x20);
              uVar35 = *(uint *)(lVar41 + 4 + uVar44 * 0xc);
              if ((uVar35 & 2) == 0) goto LAB_0045f048;
              if (*(uint *)(lVar41 + uVar44 * 0xc) != uVar42) {
                iVar61 = 1;
                do {
                  uVar44 = (ulong)(*(uint *)(this + 0x1c) & (int)uVar44 + iVar61);
                  uVar35 = *(uint *)(lVar41 + 4 + uVar44 * 0xc);
                  if ((uVar35 & 2) == 0) goto LAB_0045f048;
                  iVar61 = iVar61 + 1;
                } while (*(uint *)(lVar41 + uVar44 * 0xc) != uVar42);
              }
              if ((uVar35 & 1) == 0) goto LAB_0045f048;
              goto LAB_0045fce9;
            }
LAB_0045f048:
            hb_hashmap_t<unsigned_int,unsigned_int,true>::
            set_with_hash<unsigned_int_const&,unsigned_int_const&>(this,(int *)local_168,uVar57);
            fVar66 = *pfVar1;
            uVar44 = (ulong)(uint)fVar66;
            if ((param_5 == 0) || ((*puVar48 & 2) != 0)) {
              if (uVar42 < *(uint *)(local_140 + 0xe)) {
                piVar18 = *(int **)(local_140 + 0x10);
                if (piVar18 == (int *)0x0) {
                  piVar18 = &_hb_NullPool;
                }
                uVar65 = (ulong)uVar42;
                if ((char)local_140[0xc] == '\0') {
                  uVar35 = *(uint *)(*(long *)(piVar18 + 4) + uVar65 * 4);
                  uVar37 = *(uint *)(*(long *)(piVar18 + 4) + 4 + uVar65 * 4);
                  uVar35 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                           uVar35 << 0x18;
                  uVar37 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                           uVar37 << 0x18;
                  uStack_200._0_4_ = uVar37 - uVar35;
                  if (uVar35 <= uVar37) goto LAB_0045f132;
                }
                else {
                  uVar25 = *(ushort *)(*(long *)(piVar18 + 4) + uVar65 * 2);
                  uVar56 = *(ushort *)(*(long *)(piVar18 + 4) + 2 + uVar65 * 2);
                  uVar52 = (uint)(ushort)(uVar25 << 8 | uVar25 >> 8);
                  uVar35 = uVar52 * 2;
                  uVar37 = (uint)(ushort)(uVar56 << 8 | uVar56 >> 8) * 2;
                  uStack_200._0_4_ = uVar37 + uVar52 * -2;
                  if (uVar35 <= uVar37) {
LAB_0045f132:
                    piVar18 = *(int **)(local_140 + 0x14);
                    if (piVar18 == (int *)0x0) {
                      piVar18 = &_hb_NullPool;
                    }
                    if (uVar37 <= (uint)piVar18[6]) {
                      local_1f8 = (ushort *)((ulong)uVar35 + *(long *)(piVar18 + 4));
                      if ((uint)uStack_200 < 10) {
                        local_1f8 = (ushort *)&_hb_NullPool;
                      }
                      uVar25 = *local_1f8;
                      if (uVar25 == 0) {
                        local_1ec = 0;
                      }
                      else {
                        local_1ec = 2 - (uint)(0 < (short)(uVar25 << 8 | uVar25 >> 8));
                      }
                      _local_208 = (ushort *)((ulong)uVar35 + *(long *)(piVar18 + 4));
                      uStack_200._4_4_ = 0;
                      local_1f0 = uVar42;
                      goto LAB_0045f195;
                    }
                  }
                }
                _local_208 = ZEXT816(0);
                local_1ec = 0;
                local_1f8 = (ushort *)&_hb_NullPool;
                local_1f0 = 0xffffffff;
              }
              else {
                _local_208 = ZEXT816(0);
                local_1ec = 0;
                local_1f0 = 0xffffffff;
                local_1f8 = (ushort *)&_hb_NullPool;
              }
LAB_0045f195:
                    /* try { // try from 0045f1ab to 0045f203 has its CatchHandler @ 004602a7 */
              uVar65 = get_points<OT::glyf_accelerator_t>
                                 ((ushort *)local_208,local_38,local_140,param_4,param_5,local_138,
                                  (uint)local_178,(uint)local_b8,local_48,(uint)local_1d0,local_40);
              if ((char)uVar65 == '\0') {
                hb_hashmap_t<unsigned_int,unsigned_int,true>::del(this,uVar42);
                goto LAB_00460161;
              }
              fVar27 = *pfVar1;
              fVar47 = (float)((int)fVar27 - (int)fVar66);
              if ((uint)fVar27 < (uint)fVar66) {
                fVar47 = 0.0;
              }
              pvVar49 = *ppvVar54;
              if (fVar66 == 0.0) {
                fVar47 = fVar27;
              }
              uVar65 = (ulong)(uint)fVar47;
              pfVar20 = (float *)((long)pvVar49 + uVar44 * 0xc);
              fVar27 = fVar47;
              if ((*puVar48 & 2) != 0) {
                if ((uint)fVar47 < 4) {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar16 = &_hb_CrapPool;
                }
                else {
                  puVar16 = (ulong *)(pfVar20 + (ulong)((int)fVar47 - 4) * 3);
                }
                puVar32 = (ulong *)pfVar59;
                if (uVar58 == 0) {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar32 = &_hb_CrapPool;
                }
                *(float *)((long)puVar32 + 8) = *(float *)((long)puVar16 + 8);
                *puVar32 = *puVar16;
                if ((uint)fVar47 < 3) {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar16 = &_hb_CrapPool;
                }
                else {
                  puVar16 = (ulong *)(pfVar20 + (ulong)((int)fVar47 - 3) * 3);
                }
                puVar32 = (ulong *)local_148;
                if (uVar67 < 2) {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar32 = &_hb_CrapPool;
                }
                *(float *)((long)puVar32 + 8) = *(float *)((long)puVar16 + 8);
                *puVar32 = *puVar16;
                if ((uint)fVar47 < 2) {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar16 = &_hb_CrapPool;
                }
                else {
                  puVar16 = (ulong *)(pfVar20 + (ulong)((int)fVar47 - 2) * 3);
                }
                puVar32 = (ulong *)local_150;
                if (uVar67 < 3) {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar32 = &_hb_CrapPool;
                }
                *(float *)((long)puVar32 + 8) = *(float *)((long)puVar16 + 8);
                *puVar32 = *puVar16;
                if (fVar47 == 0.0) {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar16 = &_hb_CrapPool;
                  fVar27 = 0.0;
                }
                else {
                  puVar16 = (ulong *)(pfVar20 + (ulong)((int)fVar47 - 1) * 3);
                }
                puVar32 = (ulong *)(pfVar59 + 9);
                if (uVar67 < 4) {
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar32 = &_hb_CrapPool;
                }
                *(float *)((long)puVar32 + 8) = *(float *)((long)puVar16 + 8);
                *puVar32 = *puVar16;
              }
              if (fVar27 == 0.0) {
                fVar27 = 0.0;
              }
              else {
                fStack_204 = _UNK_005dd404;
                local_208 = (undefined1  [4])_DAT_005dd400;
                uStack_200._4_4_ = _UNK_005dd40c;
                uStack_200._0_4_ = (uint)_UNK_005dd408;
                uVar25 = *puVar48 >> 8;
                uVar22 = (ulong)(uVar25 & 1);
                if ((uVar25 & 8) == 0) {
                  if ((uVar25 & 0x40) == 0) {
                    if ((uVar25 & 0x80) == 0) goto LAB_0045f3e6;
                    uVar22 = *(ulong *)(puVar48 + uVar22 + 3);
                    auVar76._8_8_ = 0;
                    auVar76._0_8_ = uVar22;
                    auVar87 = psllw(auVar76,8);
                    auVar84._8_6_ = 0;
                    auVar84._0_8_ = uVar22;
                    auVar84[0xe] = (char)(uVar22 >> 0x38);
                    auVar84[0xf] = auVar87[7];
                    auVar83._14_2_ = auVar84._14_2_;
                    auVar83._8_5_ = 0;
                    auVar83._0_8_ = uVar22;
                    auVar83[0xd] = auVar87[6];
                    auVar82._13_3_ = auVar83._13_3_;
                    auVar82._8_4_ = 0;
                    auVar82._0_8_ = uVar22;
                    auVar82[0xc] = (char)(uVar22 >> 0x30);
                    auVar81._12_4_ = auVar82._12_4_;
                    auVar81._8_3_ = 0;
                    auVar81._0_8_ = uVar22;
                    auVar81[0xb] = auVar87[5];
                    auVar80._11_5_ = auVar81._11_5_;
                    auVar80._8_2_ = 0;
                    auVar80._0_8_ = uVar22;
                    auVar80[10] = (char)(uVar22 >> 0x28);
                    auVar79._10_6_ = auVar80._10_6_;
                    auVar79[8] = 0;
                    auVar79._0_8_ = uVar22;
                    auVar79[9] = auVar87[4];
                    auVar78._9_7_ = auVar79._9_7_;
                    auVar78[8] = (char)(uVar22 >> 0x20);
                    auVar78._0_8_ = uVar22;
                    auVar12._4_8_ = auVar78._8_8_;
                    auVar12[3] = auVar87[3];
                    auVar12[2] = (char)(uVar22 >> 0x18);
                    auVar12[1] = auVar87[2];
                    auVar12[0] = (char)(uVar22 >> 0x10);
                    auVar77._4_12_ = auVar12;
                    auVar77[3] = auVar87[1];
                    auVar77[2] = (char)(uVar22 >> 8);
                    auVar77[0] = (undefined1)uVar22;
                    auVar77[1] = auVar87[0];
                    fStack_204 = (float)(auVar12._0_4_ >> 0x10) * _UNK_005de1e4;
                    local_208 = (undefined1  [4])((float)(auVar77._0_4_ >> 0x10) * _DAT_005de1e0);
                    uStack_200._0_4_ = (uint)((float)(auVar78._8_4_ >> 0x10) * _UNK_005de1e8);
                    uStack_200._4_4_ = (float)(auVar81._12_4_ >> 0x10) * _UNK_005de1ec;
                    fVar66 = *pfVar64;
                  }
                  else {
                    local_208 = (undefined1  [4])
                                ((float)(int)(short)(puVar48[uVar22 + 3] << 8 |
                                                    puVar48[uVar22 + 3] >> 8) * DAT_005de5ac);
                    uStack_200._4_4_ =
                         (float)(int)(short)(puVar48[uVar22 + 4] << 8 | puVar48[uVar22 + 4] >> 8) *
                         DAT_005de5ac;
                    fVar66 = *pfVar64;
                  }
                  if ((uint)fVar66 <= (uint)fVar63) goto LAB_0045f4ec;
LAB_0045f3f0:
                  puVar16 = (ulong *)((ulong)(uint)fVar63 * 0xc + (long)*local_180);
                  uVar35 = *puVar48 & 0x18;
                  sVar14 = (short)uVar35;
                }
                else {
                  fVar66 = (float)(int)(short)(puVar48[uVar22 + 3] << 8 | puVar48[uVar22 + 3] >> 8)
                           * DAT_005de5ac;
                  uStack_200._4_4_ = fVar66;
                  local_208 = (undefined1  [4])fVar66;
LAB_0045f3e6:
                  if ((uint)fVar63 < (uint)*pfVar64) goto LAB_0045f3f0;
LAB_0045f4ec:
                  DAT_0071cd88 = 0;
                  _hb_CrapPool = 0;
                  puVar16 = &_hb_CrapPool;
                  uVar35 = *puVar48 & 0x18;
                  sVar14 = (short)uVar35;
                }
                fVar66 = local_208;
                fVar69 = local_208._4_4_;
                fVar85 = local_208._8_4_;
                fVar2 = local_208._12_4_;
                if (sVar14 == 8) {
                  pfVar23 = (float *)(ulong)uVar35;
                  fVar3 = *(float *)puVar16;
                  fVar4 = *(float *)((long)puVar16 + 4);
                  if (((fVar3 == 0.0) && (!NAN(fVar3))) || ((fVar4 == 0.0 && (!NAN(fVar4))))) {
                    if ((fVar3 != 0.0) || (NAN(fVar3))) {
                      if ((fVar47 != 0.0) && (*pfVar20 = fVar3 + *pfVar20, fVar47 != 1.4013e-45)) {
                        pfVar23 = (float *)(uVar65 * 0xc);
                        pfVar40 = (float *)&DAT_0000000c;
                        do {
                          *(float *)((long)pfVar20 + (long)pfVar40) =
                               *(float *)puVar16 + *(float *)((long)pfVar20 + (long)pfVar40);
                          pfVar40 = pfVar40 + 3;
                        } while (pfVar23 != pfVar40);
                      }
                    }
                    else if ((((fVar4 != 0.0) || (NAN(fVar4))) && (fVar47 != 0.0)) &&
                            (*(float *)((long)pvVar49 + uVar44 * 0xc + 4) =
                                  fVar4 + *(float *)((long)pvVar49 + uVar44 * 0xc + 4),
                            fVar47 != 1.4013e-45)) {
                      pfVar23 = (float *)(uVar65 * 0xc + -0xc);
                      lVar41 = (long)pvVar49 + uVar44 * 0xc + 0x10;
                      pfVar40 = (float *)0x0;
                      do {
                        *(float *)(lVar41 + (long)pfVar40) =
                             *(float *)((long)puVar16 + 4) + *(float *)(lVar41 + (long)pfVar40);
                        pfVar40 = pfVar40 + 3;
                      } while (pfVar23 != pfVar40);
                    }
                  }
                  else if (fVar47 != 0.0) {
                    *pfVar20 = fVar3 + *pfVar20;
                    *(float *)((long)pvVar49 + uVar44 * 0xc + 4) =
                         fVar4 + *(float *)((long)pvVar49 + uVar44 * 0xc + 4);
                    if (fVar47 != 1.4013e-45) {
                      pfVar23 = pfVar20 + uVar65 * 3;
                      pfVar40 = pfVar20 + 3;
                      do {
                        fVar3 = *(float *)((long)puVar16 + 4);
                        *pfVar40 = *(float *)puVar16 + *pfVar40;
                        pfVar40[1] = fVar3 + pfVar40[1];
                        pfVar40 = pfVar40 + 3;
                      } while (pfVar40 != pfVar23);
                    }
                  }
                  auVar89._4_4_ = -(uint)(fVar69 != _UNK_005dd404);
                  auVar89._0_4_ = -(uint)(fVar66 != _DAT_005dd400);
                  auVar89._8_4_ = -(uint)(fVar85 != _UNK_005dd408);
                  auVar89._12_4_ = -(uint)(fVar2 != _UNK_005dd40c);
                  iVar61 = movmskps((int)pfVar23,auVar89);
                  if ((iVar61 != 0) && (fVar47 != 0.0)) {
                    fVar3 = *pfVar20;
                    fVar4 = *(float *)((long)pvVar49 + uVar44 * 0xc + 4);
                    *(float *)((long)pvVar49 + uVar44 * 0xc + 4) = fVar69 * fVar3 + fVar2 * fVar4;
                    *pfVar20 = fVar3 * fVar66 + fVar85 * fVar4;
                    if (fVar47 != 1.4013e-45) {
                      ppuVar31 = (ushort **)(pfVar20 + 3);
                      uVar22 = uVar65 * 0xc - 0x18;
                      if ((0x2f < uVar22) &&
                         ((lVar41 = uVar22 / 0xc + 1, &local_1f8 <= ppuVar31 ||
                          (pfVar20 + lVar41 * 3 + 2 <= local_208)))) {
                        uVar22 = (ulong)((uint)lVar41 & 3);
                        if (uVar22 == 0) {
                          uVar22 = 4;
                        }
                        pfVar23 = (float *)((long)pvVar49 + uVar44 * 0xc + 0x34);
                        lVar62 = lVar41 - uVar22;
                        do {
                          fVar47 = pfVar23[-9];
                          fVar3 = pfVar23[-6];
                          fVar4 = *pfVar23;
                          fVar5 = pfVar23[-3];
                          pfVar23[-9] = pfVar23[-10] * fVar69 + fVar47 * fVar2;
                          pfVar23[-6] = pfVar23[-7] * fVar69 + fVar3 * fVar2;
                          pfVar23[-3] = pfVar23[-4] * fVar69 + fVar5 * fVar2;
                          *pfVar23 = pfVar23[-1] * fVar69 + fVar4 * fVar2;
                          pfVar23[-10] = fVar66 * pfVar23[-10] + fVar85 * fVar47;
                          pfVar23[-7] = fVar66 * pfVar23[-7] + fVar85 * fVar3;
                          pfVar23[-4] = fVar66 * pfVar23[-4] + fVar85 * fVar5;
                          pfVar23[-1] = fVar66 * pfVar23[-1] + fVar85 * fVar4;
                          pfVar23 = pfVar23 + 0xc;
                          lVar62 = lVar62 + -4;
                        } while (lVar62 != 0);
                        ppuVar31 = (ushort **)((long)ppuVar31 + (lVar41 - uVar22) * 0xc);
                      }
                      do {
                        fVar47 = *(float *)((long)ppuVar31 + 4);
                        *(float *)((long)ppuVar31 + 4) =
                             *(float *)ppuVar31 * fVar69 + fVar47 * fVar2;
                        *(float *)ppuVar31 = fVar66 * *(float *)ppuVar31 + fVar85 * fVar47;
                        ppuVar31 = (ushort **)((long)ppuVar31 + 0xc);
                      } while (ppuVar31 != (ushort **)(pfVar20 + uVar65 * 3));
                    }
                  }
                }
                else {
                  auVar88._4_4_ = -(uint)(fVar69 != _UNK_005dd404);
                  auVar88._0_4_ = -(uint)(fVar66 != _DAT_005dd400);
                  auVar88._8_4_ = -(uint)(fVar85 != _UNK_005dd408);
                  auVar88._12_4_ = -(uint)(fVar2 != _UNK_005dd40c);
                  iVar61 = movmskps(uVar35,auVar88);
                  if ((iVar61 != 0) && (fVar47 != 0.0)) {
                    fVar3 = *pfVar20;
                    fVar4 = *(float *)((long)pvVar49 + uVar44 * 0xc + 4);
                    *(float *)((long)pvVar49 + uVar44 * 0xc + 4) = fVar69 * fVar3 + fVar2 * fVar4;
                    *pfVar20 = fVar3 * fVar66 + fVar85 * fVar4;
                    if (fVar47 != 1.4013e-45) {
                      ppuVar31 = (ushort **)(pfVar20 + 3);
                      uVar22 = uVar65 * 0xc - 0x18;
                      if ((0x2f < uVar22) &&
                         ((lVar41 = uVar22 / 0xc + 1, &local_1f8 <= ppuVar31 ||
                          (pfVar20 + lVar41 * 3 + 2 <= local_208)))) {
                        uVar22 = (ulong)((uint)lVar41 & 3);
                        if (uVar22 == 0) {
                          uVar22 = 4;
                        }
                        pfVar23 = (float *)((long)pvVar49 + uVar44 * 0xc + 0x34);
                        lVar62 = lVar41 - uVar22;
                        do {
                          fVar3 = pfVar23[-9];
                          fVar4 = pfVar23[-6];
                          fVar5 = *pfVar23;
                          fVar6 = pfVar23[-3];
                          pfVar23[-9] = pfVar23[-10] * fVar69 + fVar3 * fVar2;
                          pfVar23[-6] = pfVar23[-7] * fVar69 + fVar4 * fVar2;
                          pfVar23[-3] = pfVar23[-4] * fVar69 + fVar6 * fVar2;
                          *pfVar23 = pfVar23[-1] * fVar69 + fVar5 * fVar2;
                          pfVar23[-10] = fVar66 * pfVar23[-10] + fVar85 * fVar3;
                          pfVar23[-7] = fVar66 * pfVar23[-7] + fVar85 * fVar4;
                          pfVar23[-4] = fVar66 * pfVar23[-4] + fVar85 * fVar6;
                          pfVar23[-1] = fVar66 * pfVar23[-1] + fVar85 * fVar5;
                          pfVar23 = pfVar23 + 0xc;
                          lVar62 = lVar62 + -4;
                        } while (lVar62 != 0);
                        ppuVar31 = (ushort **)((long)ppuVar31 + (lVar41 - uVar22) * 0xc);
                      }
                      do {
                        fVar3 = *(float *)((long)ppuVar31 + 4);
                        *(float *)((long)ppuVar31 + 4) = *(float *)ppuVar31 * fVar69 + fVar3 * fVar2
                        ;
                        *(float *)ppuVar31 = fVar66 * *(float *)ppuVar31 + fVar85 * fVar3;
                        ppuVar31 = (ushort **)((long)ppuVar31 + 0xc);
                      } while (ppuVar31 != (ushort **)(pfVar20 + uVar65 * 3));
                    }
                  }
                  fVar66 = *(float *)puVar16;
                  fVar69 = *(float *)((long)puVar16 + 4);
                  if (((fVar66 == 0.0) && (!NAN(fVar66))) || ((fVar69 == 0.0 && (!NAN(fVar69))))) {
                    if ((fVar66 != 0.0) || (NAN(fVar66))) {
                      if ((fVar47 != 0.0) && (*pfVar20 = fVar66 + *pfVar20, fVar47 != 1.4013e-45)) {
                        lVar41 = 0xc;
                        do {
                          *(float *)((long)pfVar20 + lVar41) =
                               *(float *)puVar16 + *(float *)((long)pfVar20 + lVar41);
                          lVar41 = lVar41 + 0xc;
                        } while (uVar65 * 0xc != lVar41);
                      }
                    }
                    else if ((((fVar69 != 0.0) || (NAN(fVar69))) && (fVar47 != 0.0)) &&
                            (*(float *)((long)pvVar49 + uVar44 * 0xc + 4) =
                                  fVar69 + *(float *)((long)pvVar49 + uVar44 * 0xc + 4),
                            fVar47 != 1.4013e-45)) {
                      lVar41 = uVar44 * 0xc + 0x10;
                      lVar62 = 0;
                      do {
                        *(float *)((long)pvVar49 + lVar62 + lVar41) =
                             *(float *)((long)puVar16 + 4) +
                             *(float *)((long)pvVar49 + lVar62 + lVar41);
                        lVar62 = lVar62 + 0xc;
                      } while (uVar65 * 0xc + -0xc != lVar62);
                    }
                  }
                  else if (fVar47 != 0.0) {
                    *pfVar20 = fVar66 + *pfVar20;
                    *(float *)((long)pvVar49 + uVar44 * 0xc + 4) =
                         fVar69 + *(float *)((long)pvVar49 + uVar44 * 0xc + 4);
                    if (fVar47 != 1.4013e-45) {
                      pfVar23 = pfVar20 + 3;
                      do {
                        fVar66 = *(float *)((long)puVar16 + 4);
                        *pfVar23 = *(float *)puVar16 + *pfVar23;
                        pfVar23[1] = fVar66 + pfVar23[1];
                        pfVar23 = pfVar23 + 3;
                      } while (pfVar23 != pfVar20 + uVar65 * 3);
                    }
                  }
                }
              }
              if (((*puVar48 & 0x200) == 0) && (param_5 == 0)) {
                if ((*puVar48 & 0x100) == 0) {
                  fVar47 = (float)(uint)(byte)puVar48[2];
                  fVar69 = (float)(uint)*(byte *)((long)puVar48 + 5);
                }
                else {
                  fVar47 = (float)(uint)(ushort)(puVar48[2] << 8 | puVar48[2] >> 8);
                  fVar69 = (float)(uint)(ushort)(puVar48[3] << 8 | puVar48[3] >> 8);
                }
                fVar66 = *pfVar1;
                if (((uint)fVar47 < (uint)fVar66) && ((uint)fVar69 < (uint)fVar27)) {
                  fVar85 = *(float *)((long)*ppvVar54 + (ulong)(uint)fVar47 * 0xc) -
                           pfVar20[(ulong)(uint)fVar69 * 3];
                  fVar27 = *(float *)((long)*ppvVar54 + (ulong)(uint)fVar47 * 0xc + 4) -
                           pfVar20[(ulong)(uint)fVar69 * 3 + 1];
                  if (((fVar85 == 0.0) && (!NAN(fVar85))) || ((fVar27 == 0.0 && (!NAN(fVar27))))) {
                    if ((fVar85 != 0.0) || (NAN(fVar85))) {
                      lVar41 = 0;
                      do {
                        *(float *)((long)pfVar20 + lVar41) =
                             *(float *)((long)pfVar20 + lVar41) + fVar85;
                        lVar41 = lVar41 + 0xc;
                      } while (uVar65 * 0xc != lVar41);
                    }
                    else if ((fVar27 != 0.0) || (NAN(fVar27))) {
                      lVar41 = uVar44 * 0xc + 4;
                      lVar62 = 0;
                      do {
                        *(float *)((long)pvVar49 + lVar62 + lVar41) =
                             *(float *)((long)pvVar49 + lVar62 + lVar41) + fVar27;
                        lVar62 = lVar62 + 0xc;
                      } while (uVar65 * 0xc != lVar62);
                    }
                  }
                  else {
                    pfVar23 = pfVar20 + uVar65 * 3;
                    do {
                      *pfVar20 = *pfVar20 + fVar85;
                      pfVar20[1] = pfVar20[1] + fVar27;
                      pfVar20 = pfVar20 + 3;
                    } while (pfVar20 != pfVar23);
                  }
                }
              }
              else {
                fVar66 = *pfVar1;
              }
            }
            fVar27 = (float)((int)fVar66 - 4);
            if ((int)fVar27 < 0) {
              fVar27 = 0.0;
            }
            fVar47 = *param_4;
            if (-1 < (int)fVar47) {
              if ((uint)fVar47 < (uint)fVar27) {
                fVar69 = fVar47;
                do {
                  fVar69 = (float)((int)fVar69 + ((uint)fVar69 >> 1) + 8);
                } while ((uint)fVar69 < (uint)fVar27);
                if (0x15555555 < (uint)fVar69) {
LAB_0045ff3c:
                  *param_4 = (float)~(uint)fVar47;
                  goto joined_r0x0045fea4;
                }
                if (fVar69 == 0.0) {
                  free(*ppvVar54);
                  pvVar49 = (void *)0x0;
                }
                else {
                  pvVar49 = realloc(*ppvVar54,(ulong)(uint)fVar69 * 0xc);
                  if (pvVar49 == (void *)0x0) {
                    fVar47 = *param_4;
                    if ((uint)fVar69 <= (uint)fVar47) goto LAB_0045fc54;
                    fVar66 = *pfVar1;
                    goto LAB_0045ff3c;
                  }
                }
                *(void **)(param_4 + 2) = pvVar49;
                *param_4 = fVar69;
              }
LAB_0045fc54:
              fVar66 = *pfVar1;
              if (((uint)fVar66 < (uint)fVar27) &&
                 (uVar35 = ((int)fVar27 - (int)fVar66) * 0xc, uVar35 != 0)) {
                memset((void *)((ulong)(uint)fVar66 * 0xc + (long)*ppvVar54),0,(ulong)uVar35);
              }
              *pfVar1 = fVar27;
              fVar66 = fVar27;
            }
joined_r0x0045fea4:
            if (200000 < (uint)fVar66) {
              lVar41 = *(long *)(this + 0x28);
              if (lVar41 == 0) goto LAB_00460161;
              uVar58 = (ulong)(uVar57 & 0x3fffffff) % (ulong)*(uint *)(this + 0x20);
              uVar33 = *(uint *)(lVar41 + 4 + uVar58 * 0xc);
              if ((uVar33 & 2) == 0) goto LAB_00460161;
              if (*(uint *)(lVar41 + uVar58 * 0xc) == uVar42) goto LAB_0046015d;
              iVar61 = 1;
              goto LAB_00460145;
            }
            fVar63 = (float)((int)fVar63 + 1);
            lVar41 = *(long *)(this + 0x28);
            if (lVar41 == 0) {
LAB_0045fce9:
              bVar60 = *(byte *)((long)puVar48 + 1);
            }
            else {
              uVar44 = (ulong)(uVar57 & 0x3fffffff) % (ulong)*(uint *)(this + 0x20);
              uVar57 = *(uint *)(lVar41 + 4 + uVar44 * 0xc);
              if ((uVar57 & 2) == 0) goto LAB_0045fce9;
              if (*(uint *)(lVar41 + uVar44 * 0xc) != uVar42) {
                iVar61 = 1;
                do {
                  uVar44 = (ulong)(*(uint *)(this + 0x1c) & (int)uVar44 + iVar61);
                  uVar57 = *(uint *)(lVar41 + 4 + uVar44 * 0xc);
                  if ((uVar57 & 2) == 0) goto LAB_0045fdb0;
                  iVar61 = iVar61 + 1;
                } while (*(uint *)(lVar41 + uVar44 * 0xc) != uVar42);
              }
              if ((uVar57 & 1) == 0) {
LAB_0045fdb0:
                bVar60 = *(byte *)((long)puVar48 + 1);
              }
              else {
                *(uint *)(lVar41 + 4 + uVar44 * 0xc) = uVar57 & 0xfffffffe;
                *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
                bVar60 = *(byte *)((long)puVar48 + 1);
              }
            }
            if ((bVar60 & 0x20) == 0) break;
            puVar24 = (ushort *)((ulong)uVar33 + (long)puVar48);
            if (puVar24 < puVar29) break;
            if ((local_1c8 < puVar24) || (((int)local_1c8 - (int)puVar24 & 0xfffffffcU) == 0))
            break;
            uVar25 = *puVar24 >> 8;
            iVar61 = (uVar25 & 1) * 2;
            if ((uVar25 & 8) == 0) {
              if ((uVar25 & 0x40) == 0) {
                uVar33 = iVar61 + 0xe;
                if ((uVar25 & 0x80) == 0) {
                  uVar33 = iVar61 + 6;
                }
              }
              else {
                uVar33 = iVar61 + 10;
              }
            }
            else {
              uVar33 = iVar61 + 8;
            }
            if (((uint)((int)local_1c8 - (int)puVar24) < uVar33) ||
               (bVar74 = puVar48 == (ushort *)0x0, puVar48 = puVar24, bVar74)) break;
          } while( true );
        }
      }
    }
    fVar63 = *param_4;
    uVar44 = (ulong)(uint)param_4[1];
    fVar66 = (float)((int)param_4[1] + uVar67);
    if ((int)fVar66 < 0) {
      fVar66 = 0.0;
    }
    if (-1 < (int)fVar63) {
      if ((uint)fVar63 < (uint)fVar66) {
        fVar27 = fVar63;
        do {
          fVar27 = (float)((int)fVar27 + ((uint)fVar27 >> 1) + 8);
        } while ((uint)fVar27 < (uint)fVar66);
        if (0x15555555 < (uint)fVar27) goto LAB_004601e1;
        pvVar49 = *ppvVar54;
        if (fVar27 != 0.0) goto LAB_004601b2;
LAB_0046028a:
        free(pvVar49);
        pvVar49 = (void *)0x0;
LAB_00460291:
        *(void **)(param_4 + 2) = pvVar49;
        *param_4 = fVar27;
      }
LAB_0045ee1a:
      *pfVar1 = fVar66;
      if (uVar58 != 0) {
        memcpy((void *)(uVar44 * 0xc + (long)*ppvVar54),pfVar59,uVar58 * 0xc);
      }
    }
  }
  if (param_10 == 0) {
    if (uVar58 == 0) {
      DAT_0071cd88 = 0;
      _hb_CrapPool = 0;
    }
    else {
      fVar63 = *pfVar59;
      if (((fVar63 != 0.0) || (NAN(fVar63))) && (fVar66 = *pfVar1, (ulong)(uint)fVar66 != 0)) {
        pvVar49 = *ppvVar54;
        lVar41 = 0;
        do {
          *(float *)((long)pvVar49 + lVar41) = *(float *)((long)pvVar49 + lVar41) - fVar63;
          lVar41 = lVar41 + 0xc;
        } while ((ulong)(uint)fVar66 * 0xc != lVar41);
      }
    }
  }
  uVar58 = CONCAT71((int7)((ulong)puVar48 >> 8),-1 < (int)*param_4);
  goto LAB_0045ee71;
  while (iVar61 = iVar61 + 1, *(uint *)(lVar41 + uVar58 * 0xc) != uVar42) {
LAB_00460145:
    uVar58 = (ulong)((int)uVar58 + iVar61 & *(uint *)(this + 0x1c));
    uVar33 = *(uint *)(lVar41 + 4 + uVar58 * 0xc);
    if ((uVar33 & 2) == 0) goto LAB_00460161;
  }
LAB_0046015d:
  if ((uVar33 & 1) == 0) goto LAB_00460161;
  *(uint *)(lVar41 + 4 + uVar58 * 0xc) = uVar33 & 0xfffffffe;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  uVar58 = 0;
LAB_0045ee71:
  if (local_210 != 0.0) {
    free(local_1b0);
  }
  __ptr = local_a8;
  local_b0 = 0xffff2153;
  if (local_a8 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0045eea4 to 0045eeab has its CatchHandler @ 004602d6 */
    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
               &local_a8[1].__data,local_a8);
    free(__ptr);
    local_a8 = (pthread_mutex_t *)0x0;
  }
  if (local_88 != (void *)0x0) {
    free(local_88);
  }
LAB_0045eed2:
  return uVar58 & 0xffffffff;
}


