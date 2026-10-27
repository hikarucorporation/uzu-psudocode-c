// Function : hb_ot_layout_lookup_would_substitute
// Namespace: 
// Entry    : 0042ce60
// Prototype: bool hb_ot_layout_lookup_would_substitute(long param_1, uint param_2, uint * param_3, uint param_4, int param_5)
// Body     : 0042ce60 - 0042e139


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hb_ot_layout_lookup_would_substitute
               (long param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  Coverage *pCVar11;
  ulong uVar12;
  ushort *puVar13;
  ulong *__ptr;
  accelerator_t<OT::Layout::GSUB> *paVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  undefined4 *puVar19;
  ushort *puVar20;
  Coverage *pCVar21;
  ushort uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  ChainRuleSet<OT::Layout::SmallTypes> *pCVar28;
  Coverage *pCVar29;
  Coverage *pCVar30;
  Coverage *pCVar31;
  ulong uVar32;
  bool bVar33;
  bool bVar34;
  uint local_dc;
  ushort *local_d8;
  uint local_ac;
  uint local_9c;
  undefined4 local_88 [2];
  long local_80;
  uint *local_78;
  uint local_70;
  char local_6c;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  Coverage *pCStack_50;
  Coverage *local_48;
  Coverage *pCStack_40;
  
  paVar14 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  while (paVar14 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) {
LAB_0042e12e:
      paVar14 = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
      break;
    }
    paVar14 = calloc(1,0x18);
    if (paVar14 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      LOCK();
      bVar34 = *(long *)(param_1 + 0x130) == 0;
      if (bVar34) {
        *(long *)(param_1 + 0x130) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar34) goto LAB_0042e12e;
    }
    else {
      OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(paVar14,lVar2);
      LOCK();
      bVar34 = *(long *)(param_1 + 0x130) == 0;
      if (bVar34) {
        *(long *)(param_1 + 0x130) = (long)paVar14;
      }
      UNLOCK();
      if (bVar34) break;
      OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(paVar14);
      free(paVar14);
    }
    paVar14 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  }
  if (*(uint *)(paVar14 + 8) <= param_2) {
    return false;
  }
  local_6c = param_5 != 0;
  local_88[0] = 0;
  paVar14 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_4;
  while (paVar14 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) {
LAB_0042df48:
      paVar14 = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
      break;
    }
    paVar14 = calloc(1,0x18);
    if (paVar14 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      LOCK();
      bVar34 = *(long *)(param_1 + 0x130) == 0;
      if (bVar34) {
        *(long *)(param_1 + 0x130) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar34) goto LAB_0042df48;
    }
    else {
      OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(paVar14,lVar2);
      LOCK();
      bVar34 = *(long *)(param_1 + 0x130) == 0;
      if (bVar34) {
        *(long *)(param_1 + 0x130) = (long)paVar14;
      }
      UNLOCK();
      if (bVar34) break;
      OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(paVar14);
      free(paVar14);
    }
    paVar14 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  }
  puVar19 = *(undefined4 **)paVar14;
  local_d8 = (ushort *)&_hb_NullPool;
  if (puVar19 == (undefined4 *)0x0) {
    puVar19 = &_hb_NullPool;
  }
  psVar10 = (short *)&_hb_NullPool;
  if (3 < (uint)puVar19[6]) {
    psVar10 = *(short **)(puVar19 + 4);
  }
  uVar32 = (ulong)param_2;
  if (*psVar10 == 0x100) {
    uVar6 = psVar10[4];
    local_d8 = (ushort *)&_hb_NullPool;
    puVar20 = (ushort *)&_hb_NullPool;
    if (uVar6 != 0) {
      puVar20 = (ushort *)((long)psVar10 + (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8));
    }
    if (param_2 < (ushort)(*puVar20 << 8 | *puVar20 >> 8)) {
      uVar6 = puVar20[uVar32 + 1];
      if (uVar6 == 0) {
        paVar14 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
        local_d8 = (ushort *)&_hb_NullPool;
        goto joined_r0x0042e022;
      }
      local_d8 = (ushort *)((long)puVar20 + (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8));
    }
  }
  paVar14 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
joined_r0x0042e022:
  while (paVar14 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
    lVar2 = *(long *)(param_1 + 0x68);
    if (lVar2 == 0) {
LAB_0042e0a4:
      paVar14 = (accelerator_t<OT::Layout::GSUB> *)&_hb_NullPool;
      break;
    }
    paVar14 = calloc(1,0x18);
    if (paVar14 == (accelerator_t<OT::Layout::GSUB> *)0x0) {
      LOCK();
      bVar34 = *(long *)(param_1 + 0x130) == 0;
      if (bVar34) {
        *(long *)(param_1 + 0x130) = (long)&_hb_NullPool;
      }
      UNLOCK();
      if (bVar34) goto LAB_0042e0a4;
    }
    else {
      OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::accelerator_t(paVar14,lVar2);
      LOCK();
      bVar34 = *(long *)(param_1 + 0x130) == 0;
      if (bVar34) {
        *(long *)(param_1 + 0x130) = (long)paVar14;
      }
      UNLOCK();
      if (bVar34) break;
      OT::GSUBGPOS::accelerator_t<OT::Layout::GSUB>::~accelerator_t(paVar14);
      free(paVar14);
    }
    paVar14 = *(accelerator_t<OT::Layout::GSUB> **)(param_1 + 0x130);
  }
  if (*(uint *)(paVar14 + 8) <= param_2) {
    return false;
  }
  __ptr = *(ulong **)(*(long *)(paVar14 + 0x10) + uVar32 * 8);
  while (__ptr == (ulong *)0x0) {
    puVar19 = *(undefined4 **)paVar14;
    if (puVar19 == (undefined4 *)0x0) {
      puVar19 = &_hb_NullPool;
    }
    psVar10 = (short *)&_hb_NullPool;
    if (3 < (uint)puVar19[6]) {
      psVar10 = *(short **)(puVar19 + 4);
    }
    puVar20 = (ushort *)&_hb_NullPool;
    if (*psVar10 == 0x100) {
      uVar6 = psVar10[4];
      puVar13 = (ushort *)&_hb_NullPool;
      if (uVar6 != 0) {
        puVar13 = (ushort *)((long)psVar10 + (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8));
      }
      puVar20 = (ushort *)&_hb_NullPool;
      if (param_2 < (ushort)(*puVar13 << 8 | *puVar13 >> 8)) {
        uVar6 = puVar13[uVar32 + 1];
        puVar20 = (ushort *)&_hb_NullPool;
        if (uVar6 != 0) {
          puVar20 = (ushort *)((long)puVar13 + (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8));
        }
      }
    }
    __ptr = OT::hb_ot_layout_lookup_accelerator_t::create<OT::Layout::GSUB_impl::SubstLookup>
                      (puVar20);
    if (__ptr == (ulong *)0x0) {
      return false;
    }
    plVar1 = (long *)(*(long *)(paVar14 + 0x10) + uVar32 * 8);
    LOCK();
    bVar34 = *plVar1 == 0;
    if (bVar34) {
      *plVar1 = (long)__ptr;
    }
    UNLOCK();
    if (bVar34) break;
    free(__ptr);
    __ptr = *(ulong **)(*(long *)(paVar14 + 0x10) + uVar32 * 8);
  }
  uVar4 = local_70;
  puVar3 = local_78;
  if (local_70 != 0) {
    uVar18 = *local_78;
    if (((((*__ptr >> ((ulong)(uVar18 >> 4) & 0x3f) & 1) != 0) &&
         ((__ptr[1] >> ((ulong)uVar18 & 0x3f) & 1) != 0)) &&
        ((__ptr[2] >> ((ulong)(uVar18 >> 9) & 0x3f) & 1) != 0)) && (uVar6 = local_d8[2], uVar6 != 0)
       ) {
      uVar22 = *local_d8 << 8 | *local_d8 >> 8;
      uVar15 = uVar6 << 8 | uVar6 >> 8;
      uVar18 = 1;
      if (1 < uVar15) {
        uVar18 = (uint)uVar15;
      }
      bVar34 = true;
      uVar32 = 0;
      local_9c = local_70;
      local_ac = local_70;
      local_dc = local_70;
      uVar9 = local_70;
      do {
        pCVar30 = (Coverage *)&_hb_NullPool;
        pCVar29 = pCVar30;
        if (uVar32 < (ushort)(uVar6 << 8 | uVar6 >> 8)) {
          pCVar29 = (Coverage *)(local_d8 + 2 + uVar32 + 1);
        }
        uVar6 = *(ushort *)pCVar29;
        uVar16 = uVar22;
        pCVar29 = pCVar30;
        if (uVar6 != 0) {
          pCVar29 = (Coverage *)((ulong)(ushort)(uVar6 << 8 | uVar6 >> 8) + (long)local_d8);
        }
        while (uVar16 == 7) {
          if (*(ushort *)pCVar29 != 0x100) goto switchD_0042d0b8_caseD_7;
          uVar8 = *(uint *)(pCVar29 + 4);
          pCVar11 = pCVar30;
          if (uVar8 != 0) {
            pCVar11 = pCVar29 + (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                                uVar8 << 0x18);
          }
          uVar16 = *(ushort *)(pCVar29 + 2) << 8 | *(ushort *)(pCVar29 + 2) >> 8;
          pCVar29 = pCVar11;
        }
        switch(uVar16) {
        case 1:
          uVar6 = *(ushort *)pCVar29 << 8 | *(ushort *)pCVar29 >> 8;
          if (uVar6 == 2) {
            uVar8 = local_9c;
          }
          else {
            uVar8 = uVar4;
            if (uVar6 != 1) break;
          }
          local_dc = uVar8;
          local_ac = local_dc;
          local_9c = local_dc;
          uVar9 = local_dc;
          if (local_dc == 1) {
            uVar6 = *(ushort *)(pCVar29 + 2);
            pCVar29 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
            if (uVar6 == 0) {
              pCVar29 = (Coverage *)&_hb_NullPool;
            }
            uVar8 = OT::Layout::Common::Coverage::get_coverage(pCVar29,*puVar3);
            local_9c = 1;
            local_ac = 1;
            local_dc = 1;
joined_r0x0042d3ee:
            uVar9 = 1;
            if (uVar8 != 0xffffffff) {
              return bVar34;
            }
          }
          break;
        case 2:
          if (*(ushort *)pCVar29 == 0x100) {
            if (local_ac != 1) {
              local_dc = local_ac;
              goto LAB_0042d78b;
            }
            uVar6 = *(ushort *)(pCVar29 + 2);
            if (uVar6 != 0) {
              pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
            }
            uVar8 = OT::Layout::Common::Coverage::get_coverage(pCVar30,*puVar3);
            local_ac = 1;
LAB_0042d182:
            local_dc = 1;
            goto joined_r0x0042d3ee;
          }
          break;
        case 3:
          if (*(ushort *)pCVar29 == 0x100) {
            if (local_dc == 1) {
              uVar6 = *(ushort *)(pCVar29 + 2);
              if (uVar6 != 0) {
                pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar8 = OT::Layout::Common::Coverage::get_coverage(pCVar30,*puVar3);
              goto LAB_0042d182;
            }
LAB_0042d78b:
            uVar9 = local_dc;
          }
          break;
        case 4:
          if (*(ushort *)pCVar29 == 0x100) {
            uVar6 = *(ushort *)(pCVar29 + 2);
            if (uVar6 != 0) {
              pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
            }
            uVar8 = OT::Layout::Common::Coverage::get_coverage(pCVar30,*puVar3);
            if (uVar8 != 0xffffffff) {
              pCVar30 = (Coverage *)&_hb_NullPool;
              if (uVar8 < (ushort)(*(ushort *)(pCVar29 + 4) << 8 | *(ushort *)(pCVar29 + 4) >> 8)) {
                pCVar30 = pCVar29 + (ulong)uVar8 * 2 + 6;
              }
              uVar6 = *(ushort *)pCVar30;
              pCVar30 = (Coverage *)&_hb_NullPool;
              if (uVar6 != 0) {
                pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar6 = *(ushort *)pCVar30;
              if (uVar6 != 0) {
                uVar9 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
                uVar12 = 2;
                if (2 < local_dc) {
                  uVar12 = (ulong)local_dc;
                }
                pCVar29 = pCVar30;
                do {
                  pCVar29 = pCVar29 + 2;
                  uVar6 = *(ushort *)pCVar29;
                  pCVar11 = (Coverage *)&_hb_NullPool;
                  if (uVar6 != 0) {
                    pCVar11 = pCVar30 + (ushort)(uVar6 << 8 | uVar6 >> 8);
                  }
                  uVar6 = *(ushort *)(pCVar11 + 2);
                  if (local_dc == (ushort)(uVar6 << 8 | uVar6 >> 8)) {
                    if (local_dc < 2) {
                      return bVar34;
                    }
                    pCVar31 = pCVar11 + 4;
                    uVar24 = 1;
                    while( true ) {
                      pCVar21 = (Coverage *)&_hb_NullPool;
                      if (uVar24 < (ushort)(uVar6 << 8 | uVar6 >> 8)) {
                        pCVar21 = pCVar31;
                      }
                      if (puVar3[uVar24] !=
                          (uint)(ushort)(*(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8)) break;
                      if ((2 - uVar12) + uVar24 == 1) {
                        return bVar34;
                      }
                      uVar6 = *(ushort *)(pCVar11 + 2);
                      pCVar31 = pCVar31 + 2;
                      uVar24 = uVar24 + 1;
                    }
                  }
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
                goto LAB_0042d913;
              }
            }
          }
          break;
        case 5:
          uVar6 = *(ushort *)pCVar29 << 8 | *(ushort *)pCVar29 >> 8;
          if (uVar6 == 3) {
            uVar6 = *(ushort *)(pCVar29 + 2) << 8 | *(ushort *)(pCVar29 + 2) >> 8;
            if (local_dc != uVar6) goto LAB_0042d78b;
            if (uVar6 < 2) {
              return bVar34;
            }
            uVar16 = *(ushort *)(pCVar29 + 8);
            if (uVar16 != 0) {
              pCVar30 = pCVar29 + (ushort)(uVar16 << 8 | uVar16 >> 8);
            }
            uVar9 = OT::Layout::Common::Coverage::get_coverage(pCVar30,puVar3[1]);
            if (uVar9 == 0xffffffff) {
LAB_0042d913:
              uVar9 = local_dc;
            }
            else {
              lVar2 = 0;
              do {
                lVar25 = lVar2;
                pCVar30 = (Coverage *)&_hb_NullPool;
                if ((ulong)uVar6 - 2 == lVar25) {
                  return bVar34;
                }
                uVar16 = *(ushort *)(pCVar29 + lVar25 * 2 + 10);
                if (uVar16 != 0) {
                  pCVar30 = pCVar29 + (ushort)(uVar16 << 8 | uVar16 >> 8);
                }
                uVar9 = OT::Layout::Common::Coverage::get_coverage(pCVar30,puVar3[lVar25 + 2]);
                lVar2 = lVar25 + 1;
              } while (uVar9 != 0xffffffff);
              bVar33 = lVar25 + 2U < (ulong)uVar6;
LAB_0042d77b:
              uVar9 = local_dc;
              if (!bVar33) {
                return bVar34;
              }
            }
          }
          else {
            if (uVar6 == 2) {
              uVar6 = *(ushort *)(pCVar29 + 4);
              pCVar11 = pCVar30;
              if (uVar6 != 0) {
                pCVar11 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar8 = *puVar3;
              uVar6 = *(ushort *)pCVar11 << 8 | *(ushort *)pCVar11 >> 8;
              if (uVar6 == 2) {
                uVar6 = *(ushort *)(pCVar11 + 2);
                pCVar30 = (Coverage *)&_hb_Null_OT_RangeRecord;
                if (uVar6 != 0) {
                  iVar23 = (ushort)(uVar6 << 8 | uVar6 >> 8) - 1;
                  iVar27 = 0;
                  do {
                    while( true ) {
                      uVar26 = (uint)(iVar23 + iVar27) >> 1;
                      lVar2 = (ulong)uVar26 * 6;
                      if (uVar8 < (ushort)(*(ushort *)(pCVar11 + lVar2 + 4) << 8 |
                                          *(ushort *)(pCVar11 + lVar2 + 4) >> 8)) break;
                      if (uVar8 <= (ushort)(*(ushort *)(pCVar11 + lVar2 + 6) << 8 |
                                           *(ushort *)(pCVar11 + lVar2 + 6) >> 8)) {
                        pCVar30 = pCVar11 + (ulong)uVar26 * 6 + 4;
                        goto LAB_0042d941;
                      }
                      iVar27 = uVar26 + 1;
                      if (iVar23 < iVar27) goto LAB_0042d883;
                    }
                    iVar23 = uVar26 - 1;
                  } while (iVar27 <= iVar23);
LAB_0042d883:
                  pCVar30 = (Coverage *)&_hb_Null_OT_RangeRecord;
                }
LAB_0042d941:
                pCVar30 = pCVar30 + 4;
LAB_0042d945:
                uVar12 = (ulong)(ushort)(*(ushort *)pCVar30 << 8 | *(ushort *)pCVar30 >> 8);
              }
              else {
                uVar12 = 0;
                if (uVar6 == 1) {
                  uVar8 = uVar8 - (ushort)(*(ushort *)(pCVar11 + 2) << 8 |
                                          *(ushort *)(pCVar11 + 2) >> 8);
                  if (uVar8 < (ushort)(*(ushort *)(pCVar11 + 4) << 8 | *(ushort *)(pCVar11 + 4) >> 8
                                      )) {
                    pCVar30 = pCVar11 + (ulong)uVar8 * 2 + 6;
                  }
                  goto LAB_0042d945;
                }
              }
              pCVar30 = (Coverage *)&_hb_NullPool;
              if ((uint)uVar12 <
                  (uint)(ushort)(*(ushort *)(pCVar29 + 6) << 8 | *(ushort *)(pCVar29 + 6) >> 8)) {
                pCVar30 = pCVar29 + uVar12 * 2 + 8;
              }
              uVar6 = *(ushort *)pCVar30;
              pCVar30 = (Coverage *)&_hb_NullPool;
              if (uVar6 != 0) {
                pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar6 = *(ushort *)pCVar30;
              if (uVar6 == 0) {
                break;
              }
              uVar9 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
              pCVar29 = pCVar30;
              do {
                pCVar29 = pCVar29 + 2;
                uVar6 = *(ushort *)pCVar29;
                pCVar31 = (Coverage *)&_hb_NullPool;
                if (uVar6 != 0) {
                  pCVar31 = pCVar30 + (ushort)(uVar6 << 8 | uVar6 >> 8);
                }
                uVar6 = *(ushort *)pCVar31 << 8 | *(ushort *)pCVar31 >> 8;
                if (local_dc == uVar6) {
                  if (uVar6 < 2) {
                    return bVar34;
                  }
                  uVar8 = puVar3[1];
                  uVar16 = *(ushort *)pCVar11 << 8 | *(ushort *)pCVar11 >> 8;
                  if (uVar16 == 2) {
                    uVar16 = *(ushort *)(pCVar11 + 2);
                    pCVar21 = (Coverage *)&_hb_Null_OT_RangeRecord;
                    if (uVar16 != 0) {
                      iVar23 = (ushort)(uVar16 << 8 | uVar16 >> 8) - 1;
                      iVar27 = 0;
                      do {
                        while( true ) {
                          uVar26 = (uint)(iVar23 + iVar27) >> 1;
                          lVar2 = (ulong)uVar26 * 6;
                          if (uVar8 < (ushort)(*(ushort *)(pCVar11 + lVar2 + 4) << 8 |
                                              *(ushort *)(pCVar11 + lVar2 + 4) >> 8)) break;
                          if (uVar8 <= (ushort)(*(ushort *)(pCVar11 + lVar2 + 6) << 8 |
                                               *(ushort *)(pCVar11 + lVar2 + 6) >> 8)) {
                            pCVar21 = pCVar11 + (ulong)uVar26 * 6 + 4;
                            goto LAB_0042db05;
                          }
                          iVar27 = uVar26 + 1;
                          if (iVar23 < iVar27) goto LAB_0042dae9;
                        }
                        iVar23 = uVar26 - 1;
                      } while (iVar27 <= iVar23);
LAB_0042dae9:
                      pCVar21 = (Coverage *)&_hb_Null_OT_RangeRecord;
                    }
LAB_0042db05:
                    pCVar21 = pCVar21 + 4;
LAB_0042db09:
                    uVar17 = *(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8;
                  }
                  else {
                    uVar17 = 0;
                    if (uVar16 == 1) {
                      uVar8 = uVar8 - (ushort)(*(ushort *)(pCVar11 + 2) << 8 |
                                              *(ushort *)(pCVar11 + 2) >> 8);
                      pCVar21 = (Coverage *)&_hb_NullPool;
                      if (uVar8 < (ushort)(*(ushort *)(pCVar11 + 4) << 8 |
                                          *(ushort *)(pCVar11 + 4) >> 8)) {
                        pCVar21 = pCVar11 + (ulong)uVar8 * 2 + 6;
                      }
                      goto LAB_0042db09;
                    }
                  }
                  if (uVar17 == (ushort)(*(ushort *)(pCVar31 + 4) << 8 |
                                        *(ushort *)(pCVar31 + 4) >> 8)) {
                    uVar12 = 2;
                    do {
                      uVar24 = uVar12;
                      if (uVar24 == uVar6) {
                        return bVar34;
                      }
                      uVar8 = puVar3[uVar24];
                      uVar16 = *(ushort *)pCVar11 << 8 | *(ushort *)pCVar11 >> 8;
                      if (uVar16 == 2) {
                        uVar16 = *(ushort *)(pCVar11 + 2);
                        pCVar21 = (Coverage *)&_hb_Null_OT_RangeRecord;
                        if (uVar16 != 0) {
                          iVar27 = (ushort)(uVar16 << 8 | uVar16 >> 8) - 1;
                          iVar23 = 0;
                          do {
                            while( true ) {
                              uVar26 = (uint)(iVar27 + iVar23) >> 1;
                              lVar2 = (ulong)uVar26 * 6;
                              if (uVar8 < (ushort)(*(ushort *)(pCVar11 + lVar2 + 4) << 8 |
                                                  *(ushort *)(pCVar11 + lVar2 + 4) >> 8)) break;
                              if (uVar8 <= (ushort)(*(ushort *)(pCVar11 + lVar2 + 6) << 8 |
                                                   *(ushort *)(pCVar11 + lVar2 + 6) >> 8)) {
                                pCVar21 = pCVar11 + (ulong)uVar26 * 6 + 4;
                                goto LAB_0042db39;
                              }
                              iVar23 = uVar26 + 1;
                              if (iVar27 < iVar23) goto LAB_0042db2b;
                            }
                            iVar27 = uVar26 - 1;
                          } while (iVar23 <= iVar27);
LAB_0042db2b:
                          pCVar21 = (Coverage *)&_hb_Null_OT_RangeRecord;
                        }
LAB_0042db39:
                        pCVar21 = pCVar21 + 4;
LAB_0042db3d:
                        uVar17 = *(ushort *)pCVar21 << 8 | *(ushort *)pCVar21 >> 8;
                      }
                      else {
                        uVar17 = 0;
                        if (uVar16 == 1) {
                          uVar8 = uVar8 - (ushort)(*(ushort *)(pCVar11 + 2) << 8 |
                                                  *(ushort *)(pCVar11 + 2) >> 8);
                          pCVar21 = (Coverage *)&_hb_NullPool;
                          if (uVar8 < (ushort)(*(ushort *)(pCVar11 + 4) << 8 |
                                              *(ushort *)(pCVar11 + 4) >> 8)) {
                            pCVar21 = pCVar11 + (ulong)uVar8 * 2 + 6;
                          }
                          goto LAB_0042db3d;
                        }
                      }
                      uVar12 = uVar24 + 1;
                    } while (uVar17 == (ushort)(*(ushort *)(pCVar31 + uVar24 * 2 + 2) << 8 |
                                               *(ushort *)(pCVar31 + uVar24 * 2 + 2) >> 8));
                    if (uVar6 <= uVar24) {
                      return bVar34;
                    }
                  }
                }
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
              uVar9 = local_dc;
            }
            else {
              if (uVar6 != 1) break;
              uVar6 = *(ushort *)(pCVar29 + 2);
              if (uVar6 != 0) {
                pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar8 = OT::Layout::Common::Coverage::get_coverage(pCVar30,*puVar3);
              pCVar30 = (Coverage *)&_hb_NullPool;
              if (uVar8 < (ushort)(*(ushort *)(pCVar29 + 4) << 8 | *(ushort *)(pCVar29 + 4) >> 8)) {
                pCVar30 = pCVar29 + (ulong)uVar8 * 2 + 6;
              }
              uVar6 = *(ushort *)pCVar30;
              pCVar30 = (Coverage *)&_hb_NullPool;
              if (uVar6 != 0) {
                pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar6 = *(ushort *)pCVar30;
              if (uVar6 != 0) {
                uVar9 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
                pCVar29 = pCVar30;
                do {
                  pCVar29 = pCVar29 + 2;
                  uVar6 = *(ushort *)pCVar29;
                  pCVar11 = (Coverage *)&_hb_NullPool;
                  if (uVar6 != 0) {
                    pCVar11 = pCVar30 + (ushort)(uVar6 << 8 | uVar6 >> 8);
                  }
                  uVar6 = *(ushort *)pCVar11 << 8 | *(ushort *)pCVar11 >> 8;
                  if (local_dc == uVar6) {
                    if (uVar6 < 2) {
                      return bVar34;
                    }
                    if (puVar3[1] ==
                        (uint)(ushort)(*(ushort *)(pCVar11 + 4) << 8 | *(ushort *)(pCVar11 + 4) >> 8
                                      )) {
                      uVar12 = 1;
                      do {
                        if (uVar12 + (2 - (ulong)uVar6) == 1) {
                          return bVar34;
                        }
                        lVar2 = uVar12 * 2;
                        uVar24 = uVar12 + 1;
                        lVar25 = uVar12 + 1;
                        uVar12 = uVar24;
                      } while (puVar3[lVar25] ==
                               (uint)(ushort)(*(ushort *)(pCVar11 + lVar2 + 4) << 8 |
                                             *(ushort *)(pCVar11 + lVar2 + 4) >> 8));
                      if (uVar6 <= uVar24) {
                        return bVar34;
                      }
                    }
                  }
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
                goto LAB_0042d913;
              }
            }
          }
          break;
        case 6:
          uVar6 = *(ushort *)pCVar29 << 8 | *(ushort *)pCVar29 >> 8;
          if (uVar6 == 3) {
            uVar6 = *(ushort *)(pCVar29 + 2);
            uVar24 = (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8);
            uVar16 = *(ushort *)(pCVar29 + uVar24 * 2 + 4) << 8 |
                     *(ushort *)(pCVar29 + uVar24 * 2 + 4) >> 8;
            uVar12 = (ulong)uVar16;
            if ((uVar6 == 0 && *(short *)(pCVar29 + uVar12 * 2 + uVar24 * 2 + 6) == 0) ||
               (local_6c == '\0')) {
              if (local_dc == uVar16) {
                if (uVar16 < 2) {
                  return bVar34;
                }
                uVar6 = *(ushort *)(pCVar29 + uVar24 * 2 + 8);
                if (uVar6 != 0) {
                  pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
                }
                uVar9 = OT::Layout::Common::Coverage::get_coverage(pCVar30,puVar3[1]);
                if (uVar9 != 0xffffffff) {
                  lVar2 = 0;
                  do {
                    lVar25 = lVar2;
                    pCVar30 = (Coverage *)&_hb_NullPool;
                    if (uVar12 - 2 == lVar25) {
                      return bVar34;
                    }
                    uVar6 = *(ushort *)(pCVar29 + lVar25 * 2 + uVar24 * 2 + 10);
                    if (uVar6 != 0) {
                      pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
                    }
                    uVar9 = OT::Layout::Common::Coverage::get_coverage(pCVar30,puVar3[lVar25 + 2]);
                    lVar2 = lVar25 + 1;
                  } while (uVar9 != 0xffffffff);
                  bVar33 = lVar25 + 2U < uVar12;
                  goto LAB_0042d77b;
                }
                goto LAB_0042d913;
              }
              goto LAB_0042d78b;
            }
          }
          else {
            if (uVar6 == 2) {
              uVar6 = *(ushort *)(pCVar29 + 6);
              local_48 = pCVar30;
              if (uVar6 != 0) {
                local_48 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar6 = *(ushort *)(pCVar29 + 4);
              uVar16 = *(ushort *)(pCVar29 + 8);
              uVar8 = *puVar3;
              uVar17 = *(ushort *)local_48 << 8 | *(ushort *)local_48 >> 8;
              if (uVar17 == 2) {
                uVar17 = *(ushort *)(local_48 + 2);
                pCVar30 = (Coverage *)&_hb_Null_OT_RangeRecord;
                if (uVar17 != 0) {
                  iVar23 = (ushort)(uVar17 << 8 | uVar17 >> 8) - 1;
                  iVar27 = 0;
                  do {
                    while( true ) {
                      uVar26 = (uint)(iVar23 + iVar27) >> 1;
                      lVar2 = (ulong)uVar26 * 6;
                      if (uVar8 < (ushort)(*(ushort *)(local_48 + lVar2 + 4) << 8 |
                                          *(ushort *)(local_48 + lVar2 + 4) >> 8)) break;
                      if (uVar8 <= (ushort)(*(ushort *)(local_48 + lVar2 + 6) << 8 |
                                           *(ushort *)(local_48 + lVar2 + 6) >> 8)) {
                        pCVar30 = local_48 + (ulong)uVar26 * 6 + 4;
                        goto LAB_0042dc88;
                      }
                      iVar27 = uVar26 + 1;
                      if (iVar23 < iVar27) goto LAB_0042d8f4;
                    }
                    iVar23 = uVar26 - 1;
                  } while (iVar27 <= iVar23);
LAB_0042d8f4:
                  pCVar30 = (Coverage *)&_hb_Null_OT_RangeRecord;
                }
LAB_0042dc88:
                pCVar30 = pCVar30 + 4;
LAB_0042dc8c:
                uVar12 = (ulong)(ushort)(*(ushort *)pCVar30 << 8 | *(ushort *)pCVar30 >> 8);
              }
              else {
                uVar12 = 0;
                if (uVar17 == 1) {
                  uVar8 = uVar8 - (ushort)(*(ushort *)(local_48 + 2) << 8 |
                                          *(ushort *)(local_48 + 2) >> 8);
                  if (uVar8 < (ushort)(*(ushort *)(local_48 + 4) << 8 |
                                      *(ushort *)(local_48 + 4) >> 8)) {
                    pCVar30 = local_48 + (ulong)uVar8 * 2 + 6;
                  }
                  goto LAB_0042dc8c;
                }
              }
              pCVar30 = (Coverage *)&_hb_NullPool;
              if ((uint)uVar12 <
                  (uint)(ushort)(*(ushort *)(pCVar29 + 10) << 8 | *(ushort *)(pCVar29 + 10) >> 8)) {
                pCVar30 = pCVar29 + uVar12 * 2 + 0xc;
              }
              pCStack_40 = (Coverage *)&_hb_NullPool;
              if (uVar16 != 0) {
                pCStack_40 = pCVar29 + (ushort)(uVar16 << 8 | uVar16 >> 8);
              }
              pCStack_50 = (Coverage *)&_hb_NullPool;
              if (uVar6 != 0) {
                pCStack_50 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar6 = *(ushort *)pCVar30;
              pCVar28 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
              if (uVar6 != 0) {
                pCVar28 = (ChainRuleSet<OT::Layout::SmallTypes> *)
                          (pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8));
              }
              local_58 = PTR_match_class_00712a80;
              local_68 = PTR_match_class_00712a70;
              puStack_60 = PTR_match_class_00712a78;
              uVar7 = OT::ChainRuleSet<OT::Layout::SmallTypes>::would_apply
                                (pCVar28,(long)local_88,(long)&local_68);
              cVar5 = (char)uVar7;
            }
            else {
              if (uVar6 != 1) break;
              uVar6 = *(ushort *)(pCVar29 + 2);
              if (uVar6 != 0) {
                pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
              }
              uVar8 = OT::Layout::Common::Coverage::get_coverage(pCVar30,*puVar3);
              pCVar30 = (Coverage *)&_hb_NullPool;
              if (uVar8 < (ushort)(*(ushort *)(pCVar29 + 4) << 8 | *(ushort *)(pCVar29 + 4) >> 8)) {
                pCVar30 = pCVar29 + (ulong)uVar8 * 2 + 6;
              }
              uVar6 = *(ushort *)pCVar30;
              pCVar28 = (ChainRuleSet<OT::Layout::SmallTypes> *)&_hb_NullPool;
              if (uVar6 != 0) {
                pCVar28 = (ChainRuleSet<OT::Layout::SmallTypes> *)
                          (pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8));
              }
              local_48 = _DAT_00712ab8;
              pCStack_40 = _UNK_00712ac0;
              local_58 = PTR_match_glyph_00712aa8;
              pCStack_50 = _UNK_00712ab0;
              local_68 = PTR_match_glyph_00712a98;
              puStack_60 = PTR_match_glyph_00712aa0;
              uVar7 = OT::ChainRuleSet<OT::Layout::SmallTypes>::would_apply
                                (pCVar28,(long)local_88,(long)&local_68);
              cVar5 = (char)uVar7;
            }
            if (cVar5 != '\0') {
              return bVar34;
            }
          }
          break;
        case 8:
          if ((*(ushort *)pCVar29 == 0x100) && (uVar9 == 1)) {
            uVar6 = *(ushort *)(pCVar29 + 2);
            if (uVar6 != 0) {
              pCVar30 = pCVar29 + (ushort)(uVar6 << 8 | uVar6 >> 8);
            }
            uVar8 = OT::Layout::Common::Coverage::get_coverage(pCVar30,*puVar3);
            goto joined_r0x0042d3ee;
          }
        }
switchD_0042d0b8_caseD_7:
        uVar32 = uVar32 + 1;
        bVar34 = uVar32 < uVar15;
        if (uVar32 == uVar18) {
          return bVar34;
        }
        uVar6 = local_d8[2];
      } while( true );
    }
  }
  return false;
}


