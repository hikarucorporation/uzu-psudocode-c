// Function : hb_ot_get_glyph_v_origin
// Namespace: 
// Entry    : 004441e0
// Prototype: undefined8 hb_ot_get_glyph_v_origin(long param_1, long * param_2, uint param_3, uint * param_4, VarRegionList * param_5)
// Body     : 004441e0 - 00444a7b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_ot_get_glyph_v_origin(hb_font_t*, void*, unsigned int, int*, int*, void*) */

undefined8 __cdecl
hb_ot_get_glyph_v_origin
          (long param_1,long *param_2,uint param_3,uint *param_4,VarRegionList *param_5)

{
  long *plVar1;
  long lVar2;
  hb_face_t *phVar3;
  pthread_mutex_t *__ptr;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  accelerator_t *paVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ushort *puVar10;
  int *piVar11;
  glyf_accelerator_t *pgVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  VarData *pVVar19;
  VarRegionList *pVVar20;
  short *psVar21;
  bool bVar22;
  float fVar23;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_70;
  undefined1 *puStack_68;
  undefined8 *local_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_40 [4];
  int local_3c;
  
  plVar1 = (long *)*param_2;
  lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
  if (lVar2 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar2 + 0x28);
  }
  pVVar20 = param_5;
  iVar5 = (**(code **)(*(long *)(param_1 + 0x90) + 0x48))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_3,uVar14);
  puVar15 = (undefined8 *)(ulong)(uint)(iVar5 / 2);
  *param_4 = iVar5 / 2;
  piVar11 = (int *)plVar1[0xd];
  if (piVar11 == (int *)0x0) {
    do {
      puVar15 = &uStack_c0;
      piVar11 = &_hb_NullPool;
      if (*plVar1 == 0) goto LAB_00444247;
      local_c8 = local_c8 & 0xffffffff00000000;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_a0 = uStack_a0 & 0xffffff00;
      local_8b = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      local_8c = 1;
                    /* try { // try from 0044467a to 00444681 has its CatchHandler @ 00444a84 */
      piVar11 = hb_sanitize_context_t::reference_table<OT::VORG>
                          ((hb_sanitize_context_t *)&local_c8,*plVar1);
      hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)&local_c8);
      if (piVar11 == (int *)0x0) {
        piVar11 = &_hb_NullPool;
        LOCK();
        bVar22 = plVar1[0xd] == 0;
        if (bVar22) {
          plVar1[0xd] = (long)&_hb_NullPool;
        }
        UNLOCK();
      }
      else {
        LOCK();
        bVar22 = plVar1[0xd] == 0;
        if (bVar22) {
          plVar1[0xd] = (long)piVar11;
        }
        UNLOCK();
      }
      if (bVar22) goto LAB_00444247;
      if (((piVar11 != (int *)0x0) && (piVar11 != &_hb_NullPool)) && (*piVar11 != 0)) {
        LOCK();
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          *piVar11 = -0xdead;
          __ptr = *(pthread_mutex_t **)(piVar11 + 2);
          if (__ptr != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &__ptr[1].__data,__ptr);
            free(__ptr);
            piVar11[2] = 0;
            piVar11[3] = 0;
          }
          if (*(code **)(piVar11 + 10) != (code *)0x0) {
                    /* try { // try from 004446f9 to 004446fa has its CatchHandler @ 00444a7c */
            (**(code **)(piVar11 + 10))(*(undefined8 *)(piVar11 + 8));
          }
          free(piVar11);
        }
      }
      piVar11 = (int *)plVar1[0xd];
      puVar15 = &uStack_c0;
    } while (piVar11 == (int *)0x0);
  }
LAB_00444247:
  if ((uint)piVar11[6] < 8) {
    psVar21 = (short *)&_hb_NullPool;
    if ((short)_hb_NullPool == 0 && _hb_NullPool._2_2_ == 0) goto LAB_004443e2;
  }
  else {
    psVar21 = *(short **)(piVar11 + 4);
    if (*psVar21 == 0 && psVar21[1] == 0) {
LAB_004443e2:
      local_88 = 0;
      uStack_80 = 0;
      pgVar12 = (glyf_accelerator_t *)plVar1[0xf];
      while (pgVar12 == (glyf_accelerator_t *)0x0) {
        phVar3 = (hb_face_t *)*plVar1;
        if (phVar3 == (hb_face_t *)0x0) {
LAB_004447a4:
          pgVar12 = (glyf_accelerator_t *)&_hb_NullPool;
          break;
        }
        pgVar12 = calloc(1,0x30);
        if (pgVar12 == (glyf_accelerator_t *)0x0) {
          LOCK();
          bVar22 = plVar1[0xf] == 0;
          if (bVar22) {
            plVar1[0xf] = (long)&_hb_NullPool;
          }
          UNLOCK();
          if (bVar22) goto LAB_004447a4;
        }
        else {
          OT::glyf_accelerator_t::glyf_accelerator_t(pgVar12,phVar3,extraout_RDX_00,puVar15,pVVar20)
          ;
          LOCK();
          bVar22 = plVar1[0xf] == 0;
          if (bVar22) {
            plVar1[0xf] = (long)pgVar12;
          }
          UNLOCK();
          if (bVar22) break;
          OT::glyf_accelerator_t::~glyf_accelerator_t(pgVar12);
          free(pgVar12);
        }
        pgVar12 = (glyf_accelerator_t *)plVar1[0xf];
      }
      piVar11 = (int *)&local_88;
      uVar9 = OT::glyf_accelerator_t::get_extents(pgVar12,param_1,param_3,piVar11);
      if ((char)uVar9 == '\0') {
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x10);
        if (puVar15 == (undefined8 *)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *puVar15;
        }
        iVar5 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                          (param_1,*(undefined8 *)(param_1 + 0x98),&local_c8,uVar14);
        if (iVar5 == 0) {
          local_c8._0_4_ = (int)((double)*(int *)(param_1 + 0x2c) * DAT_005de638);
        }
        else {
        }
        goto LAB_00444584;
      }
      paVar7 = (accelerator_t *)plVar1[0xc];
      while (paVar7 == (accelerator_t *)0x0) {
        phVar3 = (hb_face_t *)*plVar1;
        if (phVar3 == (hb_face_t *)0x0) {
LAB_00444821:
          paVar7 = (accelerator_t *)&_hb_NullPool;
          break;
        }
        paVar7 = calloc(1,0x28);
        if (paVar7 == (accelerator_t *)0x0) {
          LOCK();
          bVar22 = plVar1[0xc] == 0;
          if (bVar22) {
            plVar1[0xc] = (long)&_hb_NullPool;
          }
          UNLOCK();
          if (bVar22) goto LAB_00444821;
        }
        else {
          OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
                    (paVar7,phVar3,extraout_RDX_01,piVar11,pVVar20);
          LOCK();
          bVar22 = plVar1[0xc] == 0;
          if (bVar22) {
            plVar1[0xc] = (long)paVar7;
          }
          UNLOCK();
          if (bVar22) break;
          OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::~accelerator_t(paVar7);
          free(paVar7);
        }
        paVar7 = (accelerator_t *)plVar1[0xc];
      }
      uVar17 = *(uint *)(param_1 + 0x78);
      if (uVar17 == 0) {
        uVar17 = *(uint *)paVar7;
        if (param_3 < uVar17) {
          puVar8 = &_hb_NullPool;
          if (*(undefined4 **)(paVar7 + 0x18) != (undefined4 *)0x0) {
            puVar8 = *(undefined4 **)(paVar7 + 0x18);
          }
          puVar10 = (ushort *)(*(long *)(puVar8 + 4) + (ulong)param_3 * 4 + 2);
        }
        else {
          if (*(uint *)(paVar7 + 4) <= param_3) goto LAB_0044497d;
          puVar8 = &_hb_NullPool;
          if (*(undefined4 **)(paVar7 + 0x18) != (undefined4 *)0x0) {
            puVar8 = *(undefined4 **)(paVar7 + 0x18);
          }
          puVar10 = (ushort *)
                    ((ulong)uVar17 * 4 + *(long *)(puVar8 + 4) + (ulong)(param_3 - uVar17) * 2);
        }
        uVar4 = *puVar10 << 8 | *puVar10 >> 8;
        goto LAB_00444957;
      }
      puVar8 = *(undefined4 **)(paVar7 + 0x20);
      puVar16 = &_hb_NullPool;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = &_hb_NullPool;
      }
      if (0x17 < (uint)puVar8[6]) {
        puVar16 = *(undefined4 **)(puVar8 + 4);
      }
      uVar13 = puVar16[3];
      if (uVar13 == 0) {
LAB_004448a0:
        lVar2 = *(long *)(param_1 + 0x20);
        pgVar12 = *(glyf_accelerator_t **)(lVar2 + 0xe0);
        while (pgVar12 == (glyf_accelerator_t *)0x0) {
          phVar3 = *(hb_face_t **)(lVar2 + 0x68);
          if (phVar3 == (hb_face_t *)0x0) {
LAB_00444a74:
            pgVar12 = (glyf_accelerator_t *)&_hb_NullPool;
            break;
          }
          pgVar12 = calloc(1,0x30);
          if (pgVar12 == (glyf_accelerator_t *)0x0) {
            LOCK();
            bVar22 = *(long *)(lVar2 + 0xe0) == 0;
            if (bVar22) {
              *(long *)(lVar2 + 0xe0) = (long)&_hb_NullPool;
            }
            UNLOCK();
            if (bVar22) goto LAB_00444a74;
          }
          else {
            OT::glyf_accelerator_t::glyf_accelerator_t
                      (pgVar12,phVar3,extraout_RDX_02,piVar11,pVVar20);
            LOCK();
            bVar22 = *(long *)(lVar2 + 0xe0) == 0;
            if (bVar22) {
              *(long *)(lVar2 + 0xe0) = (long)pgVar12;
            }
            UNLOCK();
            if (bVar22) break;
            OT::glyf_accelerator_t::~glyf_accelerator_t(pgVar12);
            free(pgVar12);
          }
          pgVar12 = *(glyf_accelerator_t **)(lVar2 + 0xe0);
        }
        if (*(uint *)(pgVar12 + 0x1c) <= param_3) {
LAB_0044497d:
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x10);
          if (puVar15 == (undefined8 *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *puVar15;
          }
          iVar5 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                            (param_1,*(undefined8 *)(param_1 + 0x98),&local_c8,uVar14);
          if (iVar5 == 0) {
            local_c8._0_4_ = (int)((double)*(int *)(param_1 + 0x2c) * DAT_005de638);
            local_c8._4_4_ = (int)local_c8 - *(int *)(param_1 + 0x2c);
          }
          else {
          }
          *(int *)param_5 =
               (((int)local_c8 - local_c8._4_4_) + uStack_80._4_4_ >> 1) + local_88._4_4_;
          return 1;
        }
        puStack_68 = local_40;
        local_60 = &local_c8;
        uStack_58 = uStack_58 & 0xffffff00;
        uStack_54 = (undefined4)_DAT_005de0e0;
        uStack_50 = (undefined4)((ulong)_DAT_005de0e0 >> 0x20);
        uStack_4c = (undefined4)_UNK_005de0e8;
        uStack_48 = (undefined4)((ulong)_UNK_005de0e8 >> 0x20);
        local_70 = param_1;
        uVar9 = OT::glyf_accelerator_t::get_points<OT::glyf_accelerator_t::points_aggregator_t>
                          ((ushort *)pgVar12,param_1,param_3);
        if ((char)uVar9 == '\0') goto LAB_0044497d;
        fVar23 = floorf(uStack_b0._4_4_ + DAT_005d9044);
        uVar4 = (ushort)(int)(fVar23 - (float)local_3c);
        goto LAB_00444957;
      }
      lVar2 = *(long *)(param_1 + 0x80);
      uVar6 = OT::DeltaSetIndexMap::map
                        ((DeltaSetIndexMap *)
                         ((ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8
                                 | uVar13 << 0x18) + (long)puVar16),param_3);
      uVar13 = puVar16[1];
      if (uVar13 == 0) {
        puVar16 = &_hb_NullPool;
      }
      else {
        puVar16 = (undefined4 *)
                  ((long)puVar16 +
                  (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                         uVar13 << 0x18));
      }
      uVar13 = uVar6 >> 0x10;
      piVar11 = (int *)(ulong)uVar13;
      if (uVar13 < (ushort)(*(ushort *)((long)puVar16 + 6) << 8 |
                           *(ushort *)((long)puVar16 + 6) >> 8)) {
        uVar13 = puVar16[(ulong)uVar13 + 2];
        pVVar20 = (VarRegionList *)&_hb_NullPool;
        pVVar19 = (VarData *)&_hb_NullPool;
        if (uVar13 != 0) {
          pVVar19 = (VarData *)
                    ((ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                            uVar13 << 0x18) + (long)puVar16);
        }
        uVar13 = *(uint *)((long)puVar16 + 2);
        if (uVar13 != 0) {
          pVVar20 = (VarRegionList *)
                    ((long)puVar16 +
                    (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                           uVar13 << 0x18));
        }
        piVar11 = (int *)(ulong)uVar17;
        fVar23 = OT::VarData::get_delta(pVVar19,uVar6 & 0xffff,lVar2,uVar17,pVVar20,0);
        uVar17 = *(uint *)paVar7;
        fVar23 = fVar23 + DAT_005d9044;
        if (uVar17 <= param_3) goto LAB_00444855;
LAB_004444e4:
        puVar8 = &_hb_NullPool;
        if (*(undefined4 **)(paVar7 + 0x18) != (undefined4 *)0x0) {
          puVar8 = *(undefined4 **)(paVar7 + 0x18);
        }
        puVar10 = (ushort *)(*(long *)(puVar8 + 4) + (ulong)param_3 * 4 + 2);
      }
      else {
        uVar17 = *(uint *)paVar7;
        fVar23 = DAT_005d9044;
        if (param_3 < uVar17) goto LAB_004444e4;
LAB_00444855:
        if (*(uint *)(paVar7 + 4) <= param_3) goto LAB_004448a0;
        puVar8 = &_hb_NullPool;
        if (*(undefined4 **)(paVar7 + 0x18) != (undefined4 *)0x0) {
          puVar8 = *(undefined4 **)(paVar7 + 0x18);
        }
        puVar10 = (ushort *)
                  ((ulong)uVar17 * 4 + *(long *)(puVar8 + 4) + (ulong)(param_3 - uVar17) * 2);
      }
      uVar4 = *puVar10;
      fVar23 = floorf(fVar23);
      uVar4 = (ushort)(int)((float)(int)(short)(uVar4 << 8 | uVar4 >> 8) + fVar23);
LAB_00444957:
      *(int *)param_5 =
           (int)((ulong)((long)(short)uVar4 * *(long *)(param_1 + 0x60) + 0x8000) >> 0x10) +
           local_88._4_4_;
      return 1;
    }
  }
  do {
    while( true ) {
      paVar7 = (accelerator_t *)plVar1[0xc];
      if (paVar7 != (accelerator_t *)0x0) goto LAB_004442cc;
      phVar3 = (hb_face_t *)*plVar1;
      if (phVar3 == (hb_face_t *)0x0) goto LAB_004442c5;
      paVar7 = calloc(1,0x28);
      if (paVar7 == (accelerator_t *)0x0) break;
      OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
                (paVar7,phVar3,extraout_RDX,puVar15,pVVar20);
      LOCK();
      bVar22 = plVar1[0xc] == 0;
      if (bVar22) {
        plVar1[0xc] = (long)paVar7;
      }
      UNLOCK();
      if (bVar22) goto LAB_004442cc;
      OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::~accelerator_t(paVar7);
      free(paVar7);
    }
    puVar15 = (undefined8 *)&_hb_NullPool;
    LOCK();
    bVar22 = plVar1[0xc] == 0;
    if (bVar22) {
      plVar1[0xc] = (long)&_hb_NullPool;
    }
    UNLOCK();
  } while (!bVar22);
LAB_004442c5:
  paVar7 = (accelerator_t *)&_hb_NullPool;
LAB_004442cc:
  puVar8 = *(undefined4 **)(paVar7 + 0x20);
  puVar16 = &_hb_NullPool;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = &_hb_NullPool;
  }
  if (0x17 < (uint)puVar8[6]) {
    puVar16 = *(undefined4 **)(puVar8 + 4);
  }
  uVar17 = *(uint *)(param_1 + 0x78);
  fVar23 = 0.0;
  if ((uVar17 != 0) && (uVar13 = puVar16[5], uVar13 != 0)) {
    lVar2 = *(long *)(param_1 + 0x80);
    uVar6 = OT::DeltaSetIndexMap::map
                      ((DeltaSetIndexMap *)
                       ((ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                               uVar13 << 0x18) + (long)puVar16),param_3);
    uVar13 = puVar16[1];
    if (uVar13 == 0) {
      puVar16 = &_hb_NullPool;
    }
    else {
      puVar16 = (undefined4 *)
                ((long)puVar16 +
                (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                       uVar13 << 0x18));
    }
    fVar23 = 0.0;
    if (uVar6 >> 0x10 <
        (uint)(ushort)(*(ushort *)((long)puVar16 + 6) << 8 | *(ushort *)((long)puVar16 + 6) >> 8)) {
      uVar13 = puVar16[(ulong)(uVar6 >> 0x10) + 2];
      pVVar20 = (VarRegionList *)&_hb_NullPool;
      pVVar19 = (VarData *)&_hb_NullPool;
      if (uVar13 != 0) {
        pVVar19 = (VarData *)
                  ((ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                          uVar13 << 0x18) + (long)puVar16);
      }
      uVar13 = *(uint *)((long)puVar16 + 2);
      if (uVar13 != 0) {
        pVVar20 = (VarRegionList *)
                  ((long)puVar16 +
                  (ulong)(uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                         uVar13 << 0x18));
      }
      fVar23 = OT::VarData::get_delta(pVVar19,uVar6 & 0xffff,lVar2,uVar17,pVVar20,0);
    }
  }
  uVar4 = psVar21[3];
  if (uVar4 != 0) {
    uVar4 = uVar4 << 8 | uVar4 >> 8;
    iVar5 = uVar4 - 1;
    iVar18 = 0;
    do {
      while( true ) {
        uVar17 = (uint)(iVar5 + iVar18) >> 1;
        uVar13 = (uint)(ushort)(psVar21[(ulong)uVar17 * 2 + 4] << 8 |
                               (ushort)psVar21[(ulong)uVar17 * 2 + 4] >> 8);
        if (param_3 < uVar13) break;
        if (uVar13 == param_3) {
          if (uVar17 < uVar4) {
            psVar21 = psVar21 + (ulong)uVar17 * 2 + 4;
          }
          else {
            psVar21 = (short *)&_hb_NullPool;
          }
          puVar10 = (ushort *)(psVar21 + 1);
          goto LAB_0044455c;
        }
        iVar18 = uVar17 + 1;
        if (iVar5 < iVar18) goto LAB_004443be;
      }
      iVar5 = uVar17 - 1;
    } while (iVar18 <= iVar5);
  }
LAB_004443be:
  puVar10 = (ushort *)(psVar21 + 2);
LAB_0044455c:
  fVar23 = floorf((fVar23 + (float)(int)(short)(*puVar10 << 8 | *puVar10 >> 8)) *
                  *(float *)(param_1 + 0x50) + DAT_005d9044);
  local_c8._0_4_ = (int)fVar23;
LAB_00444584:
  *(int *)param_5 = (int)local_c8;
  return 1;
}


