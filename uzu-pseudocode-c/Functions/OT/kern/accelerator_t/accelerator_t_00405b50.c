// Function : accelerator_t
// Namespace: OT:kern:accelerator_t
// Entry    : 00405b50
// Prototype: undefined accelerator_t(accelerator_t * this, hb_face_t * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00405b50 - 00406b96


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OT::kern::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::kern::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  int *piVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  void *pvVar10;
  long lVar11;
  void *pvVar12;
  undefined4 *puVar13;
  ushort uVar14;
  uint uVar15;
  ushort *puVar16;
  ulong uVar17;
  uint *puVar18;
  ushort uVar19;
  ushort uVar20;
  uint uVar21;
  StateTable<AAT::ObsoleteTypes,void> *pSVar22;
  void *pvVar23;
  KerxTable<OT::KernOT> *pKVar24;
  ulong uVar25;
  char cVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  ushort *puVar36;
  ulong uVar37;
  uint *puVar38;
  bool bVar39;
  undefined1 auVar40 [16];
  ulong local_f0;
  undefined4 local_b8 [2];
  KerxTable<OT::KernOT> *local_b0;
  KerxTable<OT::KernOT> *pKStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  char local_90;
  int local_8c;
  int *local_88;
  uint local_80;
  undefined2 local_7c;
  accelerator_t *local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined1 local_34;
  undefined1 local_33;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  local_b8[0] = 0;
  local_8c = 0;
  local_88 = (int *)0x0;
  local_b0 = (KerxTable<OT::KernOT> *)0x0;
  pKStack_a8 = (KerxTable<OT::KernOT> *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_80 = 0x10000;
  local_7c = 0;
  uVar32 = *(uint *)(param_1 + 0x18);
  local_78 = this;
  if (uVar32 == 0xffffffff) {
    piVar9 = *(int **)(param_1 + 0x78);
    if (piVar9 == (int *)0x0) {
      do {
        lVar11 = *(long *)(param_1 + 0x68);
        piVar9 = &_hb_NullPool;
        if (lVar11 == 0) {
LAB_00406b66:
          uVar32 = piVar9[6];
          goto joined_r0x00406b6d;
        }
        local_70[0] = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        local_33 = 0;
        local_44 = 0;
        uStack_3c = 0;
        local_34 = 1;
        piVar9 = &_hb_NullPool;
                    /* try { // try from 00406aa3 to 00406abd has its CatchHandler @ 00406ba1 */
        if ((*(code **)(lVar11 + 0x20) != (code *)0x0) &&
           (piVar9 = (int *)(**(code **)(lVar11 + 0x20))
                                      (lVar11,0x6d617870,*(undefined8 *)(lVar11 + 0x28)),
           piVar9 == (int *)0x0)) {
          piVar9 = &_hb_NullPool;
        }
        piVar9 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar9);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar9 == (int *)0x0) {
          piVar9 = &_hb_NullPool;
          LOCK();
          bVar39 = *(long *)(param_1 + 0x78) == 0;
          if (bVar39) {
            *(int **)(param_1 + 0x78) = &_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar39 = *(long *)(param_1 + 0x78) == 0;
          if (bVar39) {
            *(int **)(param_1 + 0x78) = piVar9;
          }
          UNLOCK();
        }
        if (bVar39) goto LAB_00406b66;
        if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            *piVar9 = -0xdead;
            ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
            if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00406b08 to 00406b0f has its CatchHandler @ 00406b9f */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar3[1].__data,ppVar3);
              free(ppVar3);
              piVar9[2] = 0;
              piVar9[3] = 0;
            }
            if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 00406b2d to 00406b2e has its CatchHandler @ 00406b97 */
              (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
            }
            free(piVar9);
          }
        }
        piVar9 = *(int **)(param_1 + 0x78);
      } while (piVar9 == (int *)0x0);
    }
    uVar32 = piVar9[6];
joined_r0x00406b6d:
    if (uVar32 < 6) {
      puVar13 = &_hb_NullPool;
    }
    else {
      puVar13 = *(undefined4 **)(piVar9 + 4);
    }
    uVar5 = *(ushort *)(puVar13 + 1);
    uVar32 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
    if (uVar5 == 0) {
      uVar32 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar32;
  }
  local_7c = CONCAT11(local_7c._1_1_,1);
  local_80 = uVar32;
                    /* try { // try from 00405bef to 00405bf8 has its CatchHandler @ 00406bcd */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar9 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x6b65726e,*(undefined8 *)(param_1 + 0x28)),
     piVar9 == (int *)0x0)) {
    piVar9 = &_hb_NullPool;
    iVar2 = _hb_NullPool;
  }
  else {
    iVar2 = *piVar9;
  }
  if (iVar2 != 0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_90 = '\0';
  local_88 = piVar9;
LAB_00405c64:
  pKVar24 = *(KerxTable<OT::KernOT> **)(local_88 + 4);
  uVar32 = local_88[6];
  uVar25 = (ulong)uVar32;
  pKStack_a8 = pKVar24 + uVar25;
  uVar7 = (uint)(uVar25 * 0x40);
  if (uVar7 < 0x4001) {
    uVar7 = 0x4000;
  }
  pSVar22 = (StateTable<AAT::ObsoleteTypes,void> *)0x3fffffff;
  if (0x3ffffffe < uVar7) {
    uVar7 = 0x3fffffff;
  }
  if ((int)(uVar25 * 0x40 >> 0x20) == 0) {
    pSVar22 = (StateTable<AAT::ObsoleteTypes,void> *)(ulong)uVar7;
  }
  local_a0 = CONCAT44((int)pSVar22,uVar32);
  local_8c = 0;
  local_b8[0] = 0;
  uStack_98 = uStack_98 & 0xffffffff;
  local_b0 = pKVar24;
  if (pKVar24 == (KerxTable<OT::KernOT> *)0x0) {
                    /* try { // try from 004069eb to 004069f4 has its CatchHandler @ 00406bcd */
    hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b8);
    goto LAB_00405fba;
  }
  if (3 < uVar32) {
    uVar5 = *(ushort *)pKVar24 << 8 | *(ushort *)pKVar24 >> 8;
    if (uVar5 == 0) {
      auVar40 = AAT::KerxTable<OT::KernOT>::sanitize(pKVar24,(long)local_b8,pSVar22);
LAB_00405d0d:
      pSVar22 = auVar40._8_8_;
      if (auVar40[0] == '\0') goto LAB_00405d15;
    }
    else if (uVar5 == 1) {
                    /* try { // try from 00405ce9 to 00405d0c has its CatchHandler @ 00406bcf */
      auVar40 = AAT::KerxTable<OT::KernAAT>::sanitize
                          ((uint *)pKVar24,(long)local_b8,pSVar22,uVar25,param_4);
      goto LAB_00405d0d;
    }
    if (local_8c == 0) {
      cVar26 = '\x01';
      goto LAB_00405dcf;
    }
    local_8c = 0;
    if ((KerxTable<OT::KernOT> *)(local_a0 & 0xffffffff) < pKVar24 + (4 - (long)local_b0)) {
      cVar26 = '\0';
    }
    else {
      uVar5 = *(ushort *)pKVar24 << 8 | *(ushort *)pKVar24 >> 8;
      if (uVar5 == 1) {
        auVar40 = AAT::KerxTable<OT::KernAAT>::sanitize
                            ((uint *)pKVar24,(long)local_b8,pSVar22,
                             (KerxTable<OT::KernOT> *)(local_a0 & 0xffffffff),param_4);
        cVar26 = auVar40[0];
      }
      else {
        cVar26 = '\x01';
        if (uVar5 == 0) {
                    /* try { // try from 00405eb4 to 00405f12 has its CatchHandler @ 00406bcd */
          auVar40 = AAT::KerxTable<OT::KernOT>::sanitize(pKVar24,(long)local_b8,pSVar22);
          cVar26 = auVar40[0];
        }
      }
    }
    piVar4 = local_88;
    if (local_8c == 0) goto LAB_00405dcf;
    if ((local_88 != (int *)0x0) && (*local_88 != 0)) {
      LOCK();
      *local_88 = *local_88 + -1;
      UNLOCK();
      if (*local_88 == 0) {
        *local_88 = -0xdead;
        ppVar3 = *(pthread_mutex_t **)(local_88 + 2);
        if (ppVar3 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar3[1].__data,ppVar3);
          free(ppVar3);
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
        if (*(code **)(piVar4 + 10) != (code *)0x0) {
                    /* try { // try from 00405f30 to 00405f31 has its CatchHandler @ 00406bb5 */
          (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
        }
        free(piVar4);
      }
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    goto LAB_00405f58;
  }
LAB_00405d15:
  cVar26 = '\0';
  if ((local_8c == 0) || (local_90 != '\0')) goto LAB_00405dcf;
  pKVar24 = (KerxTable<OT::KernOT> *)(ulong)(uint)piVar9[6];
  if (piVar9[1] != 0) {
    if (pKVar24 == (KerxTable<OT::KernOT> *)0x0) {
      piVar9[7] = 2;
LAB_00405c40:
      local_b0 = *(KerxTable<OT::KernOT> **)(piVar9 + 4);
      pKStack_a8 = pKVar24 + (long)local_b0;
      if (local_b0 == (KerxTable<OT::KernOT> *)0x0) goto LAB_00405dcd;
    }
    else {
      if (piVar9[7] == 2) goto LAB_00405c40;
      if (piVar9[7] == 3) {
        piVar9[7] = 1;
      }
      pvVar10 = malloc((size_t)pKVar24);
      if (pvVar10 == (void *)0x0) goto LAB_00405dbf;
      memcpy(pvVar10,*(void **)(piVar9 + 4),(size_t)pKVar24);
      if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 00405d8c to 00405d8d has its CatchHandler @ 00406bcf */
        (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
      }
      piVar9[7] = 2;
      *(void **)(piVar9 + 4) = pvVar10;
      *(void **)(piVar9 + 8) = pvVar10;
      *(undefined **)(piVar9 + 10) = PTR_free_00715540;
    }
    local_90 = '\x01';
    goto LAB_00405c64;
  }
LAB_00405dbf:
  local_b0 = (KerxTable<OT::KernOT> *)0x0;
  pKStack_a8 = pKVar24;
LAB_00405dcd:
  cVar26 = '\0';
LAB_00405dcf:
  piVar4 = local_88;
  if ((local_88 != (int *)0x0) && (*local_88 != 0)) {
    LOCK();
    *local_88 = *local_88 + -1;
    UNLOCK();
    if (*local_88 == 0) {
      *local_88 = -0xdead;
      ppVar3 = *(pthread_mutex_t **)(local_88 + 2);
      if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00405dfe to 00405e05 has its CatchHandler @ 00406bcd */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar3[1].__data,ppVar3);
        free(ppVar3);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      if (*(code **)(piVar4 + 10) != (code *)0x0) {
                    /* try { // try from 00405e23 to 00405e24 has its CatchHandler @ 00406bc5 */
        (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
      }
      free(piVar4);
    }
  }
  local_88 = (int *)0x0;
  local_b0 = (KerxTable<OT::KernOT> *)0x0;
  pKStack_a8 = (KerxTable<OT::KernOT> *)0x0;
  local_a0 = local_a0 & 0xffffffff00000000;
  if (cVar26 == '\0') {
LAB_00405f58:
    local_88 = (int *)0x0;
    pKStack_a8 = (KerxTable<OT::KernOT> *)0x0;
    local_b0 = (KerxTable<OT::KernOT> *)0x0;
    if (*piVar9 != 0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        *piVar9 = -0xdead;
        ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
        if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00405f88 to 00405f8f has its CatchHandler @ 00406bcd */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar3[1].__data,ppVar3);
          free(ppVar3);
          piVar9[2] = 0;
          piVar9[3] = 0;
        }
        if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 00405fad to 00405fae has its CatchHandler @ 00406bbd */
          (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
        }
        free(piVar9);
      }
    }
    piVar9 = &_hb_NullPool;
  }
  else if (piVar9[1] != 0) {
    piVar9[1] = 0;
  }
LAB_00405fba:
  *(int **)local_78 = piVar9;
  puVar36 = (ushort *)&_hb_NullPool;
  if (piVar9 == (int *)0x0) {
    piVar9 = &_hb_NullPool;
  }
  if (3 < (uint)piVar9[6]) {
    puVar36 = *(ushort **)(piVar9 + 4);
  }
  if (*(int *)(param_1 + 0x18) == -1) {
                    /* try { // try from 00406a31 to 00406a35 has its CatchHandler @ 00406bb3 */
    hb_face_t::load_num_glyphs(param_1);
  }
  uVar5 = *puVar36 << 8 | *puVar36 >> 8;
  if (uVar5 == 1) {
    uVar32 = *(uint *)(puVar36 + 2);
    if (uVar32 != 0) {
      uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 | uVar32 << 0x18;
      puVar38 = (uint *)(puVar36 + 4);
      if (uVar32 < 2) {
        uVar32 = 1;
      }
      local_f0 = 0;
      uVar7 = 0;
      pvVar10 = (void *)0x0;
      pvVar23 = (void *)0x0;
      uVar33 = 0;
      uVar21 = 0;
      uVar15 = 0;
      do {
        pvVar12 = pvVar10;
        uVar31 = uVar33;
        uVar25 = local_f0;
        switch(*(undefined1 *)((long)puVar38 + 5)) {
        case 0:
          uVar5 = (ushort)puVar38[2];
          if (uVar5 == 0) goto switchD_004064fb_default;
          puVar18 = puVar38 + 4;
          uVar27 = 0;
          uVar37 = 0;
          uVar34 = 0;
          uVar29 = 0;
          uVar35 = 0;
          uVar28 = 0;
          do {
            uVar6 = (ushort)*puVar18;
            uVar14 = *(ushort *)((long)puVar18 + 2);
            uVar20 = uVar6 << 8 | uVar6 >> 8;
            uVar27 = uVar27 | 1L << ((ulong)(uVar20 >> 4) & 0x3f);
            uVar37 = uVar37 | 1L << ((ulong)uVar20 & 0x3f);
            uVar34 = uVar34 | 1L << ((ulong)((uVar6 & 0xff) >> 1) & 0x3f);
            uVar6 = uVar14 << 8 | uVar14 >> 8;
            uVar29 = uVar29 | 1L << ((ulong)(uVar6 >> 4) & 0x3f);
            uVar35 = uVar35 | 1L << ((ulong)uVar6 & 0x3f);
            uVar28 = uVar28 | 1L << ((ulong)((uVar14 & 0xff) >> 1) & 0x3f);
            puVar18 = (uint *)((long)puVar18 + 6);
          } while (puVar18 !=
                   (uint *)((long)puVar38 + (ulong)(ushort)(uVar5 << 8 | uVar5 >> 8) * 6 + 0x10));
          break;
        case 1:
          uVar17 = (ulong)(ushort)(*(ushort *)((long)puVar38 + 10) << 8 |
                                  *(ushort *)((long)puVar38 + 10) >> 8);
          uVar5 = *(ushort *)((long)puVar38 + uVar17 + 10);
          if (uVar5 == 0) goto switchD_004064fb_default;
          uVar6 = uVar5 << 8 | uVar5 >> 8;
          uVar5 = *(ushort *)((long)puVar38 + uVar17 + 8);
          uVar8 = 1;
          if (1 < uVar6) {
            uVar8 = (uint)uVar6;
          }
          uVar27 = 0;
          uVar35 = 0;
          uVar28 = 0;
          uVar30 = 0;
          do {
            if (*(char *)((long)puVar38 + uVar30 + uVar17 + 0xc) != '\x01') {
              uVar34 = (ushort)(uVar5 << 8 | uVar5 >> 8) + uVar30;
              uVar27 = uVar27 | 1L << (uVar34 >> 4 & 0x3f);
              uVar35 = uVar35 | 1L << (uVar34 & 0x3f);
              uVar28 = uVar28 | 1L << (uVar34 >> 9 & 0x3f);
            }
            uVar30 = uVar30 + 1;
            uVar34 = uVar28;
            uVar29 = uVar27;
            uVar37 = uVar35;
          } while (uVar8 != uVar30);
          break;
        case 2:
          uVar35 = (ulong)(ushort)(*(ushort *)((long)puVar38 + 10) << 8 |
                                  *(ushort *)((long)puVar38 + 10) >> 8);
          uVar5 = *(ushort *)((long)puVar38 + uVar35 + 2);
          if (uVar5 == 0) {
            uVar27 = 0;
            uVar37 = 0;
            uVar34 = 0;
          }
          else {
            uVar5 = uVar5 << 8 | uVar5 >> 8;
            uVar8 = 1;
            if (1 < uVar5) {
              uVar8 = (uint)uVar5;
            }
            uVar27 = 0;
            uVar37 = 0;
            uVar34 = 0;
            uVar28 = 0;
            do {
              if (*(short *)((long)puVar38 + uVar28 * 2 + uVar35 + 4) != 0x100) {
                uVar17 = (ushort)(*(ushort *)((long)puVar38 + uVar35) << 8 |
                                 *(ushort *)((long)puVar38 + uVar35) >> 8) + uVar28;
                uVar27 = uVar27 | 1L << (uVar17 >> 4 & 0x3f);
                uVar37 = uVar37 | 1L << (uVar17 & 0x3f);
                uVar34 = uVar34 | 1L << (uVar17 >> 9 & 0x3f);
              }
              uVar28 = uVar28 + 1;
            } while (uVar8 != uVar28);
          }
          uVar17 = (ulong)(ushort)((ushort)puVar38[3] << 8 | (ushort)puVar38[3] >> 8);
          uVar5 = *(ushort *)((long)puVar38 + uVar17 + 2);
          if (uVar5 == 0) {
            uVar35 = 0;
            uVar28 = 0;
            uVar29 = 0;
          }
          else {
            uVar5 = uVar5 << 8 | uVar5 >> 8;
            uVar8 = 1;
            if (1 < uVar5) {
              uVar8 = (uint)uVar5;
            }
            uVar29 = 0;
            uVar35 = 0;
            uVar28 = 0;
            uVar30 = 0;
            do {
              if (*(short *)((long)puVar38 + uVar30 * 2 + uVar17 + 4) != 0x100) {
                uVar1 = (ushort)(*(ushort *)((long)puVar38 + uVar17) << 8 |
                                *(ushort *)((long)puVar38 + uVar17) >> 8) + uVar30;
                uVar29 = uVar29 | 1L << (uVar1 >> 4 & 0x3f);
                uVar35 = uVar35 | 1L << (uVar1 & 0x3f);
                uVar28 = uVar28 | 1L << (uVar1 >> 9 & 0x3f);
              }
              uVar30 = uVar30 + 1;
            } while (uVar8 != uVar30);
          }
          break;
        case 3:
          uVar5 = (ushort)puVar38[2];
          if (uVar5 == 0) goto switchD_004064fb_default;
          uVar8 = (ushort)(uVar5 << 8 | uVar5 >> 8) - 1;
          uVar27 = (2L << ((byte)(uVar8 >> 4) & 0x3f)) - 1;
          if (0x3ef < uVar8) {
            uVar27 = 0xffffffffffffffff;
          }
          uVar35 = (2L << ((byte)uVar8 & 0x3f)) - 1;
          if (0x3e < uVar8) {
            uVar35 = 0xffffffffffffffff;
          }
          uVar28 = (2L << ((byte)(uVar8 >> 9) & 0x3f)) - 1;
          if (0x7dff < uVar8) {
            uVar28 = 0xffffffffffffffff;
          }
          goto joined_r0x004066ab;
        default:
switchD_004064fb_default:
          uVar27 = 0;
          uVar35 = 0;
          uVar28 = 0;
joined_r0x004066ab:
          uVar34 = uVar28;
          uVar29 = uVar27;
          uVar37 = uVar35;
          if ((int)uVar33 <= (int)uVar21) goto LAB_0040676d;
          goto LAB_004068c1;
        }
        if ((int)uVar21 < (int)uVar33) {
LAB_004068c1:
          local_f0 = uVar25;
          pvVar23 = pvVar12;
          uVar7 = uVar21 + 1;
          lVar11 = (ulong)uVar21 * 0x30;
          *(ulong *)((long)pvVar23 + lVar11 + 0x18) = uVar29;
          *(ulong *)((long)pvVar23 + lVar11 + 0x20) = uVar35;
          *(ulong *)((long)pvVar23 + lVar11 + 0x28) = uVar28;
          *(ulong *)((long)pvVar23 + lVar11) = uVar27;
          *(ulong *)((long)pvVar23 + lVar11 + 8) = uVar37;
          *(ulong *)((long)pvVar23 + lVar11 + 0x10) = uVar34;
          pvVar10 = pvVar23;
          uVar33 = uVar31;
          uVar21 = uVar7;
        }
        else {
LAB_0040676d:
          if (-1 < (int)uVar33) {
            if (uVar33 < uVar21 + 1) {
              uVar25 = (ulong)uVar33;
              do {
                uVar31 = (uint)uVar25 + ((uint)uVar25 >> 1) + 8;
                uVar25 = (ulong)uVar31;
              } while (uVar31 < uVar21 + 1);
              if (0x5555555 < uVar31) {
LAB_00406937:
                uVar33 = ~uVar33;
                local_f0 = (ulong)uVar33;
                goto LAB_0040695d;
              }
              pvVar12 = realloc(pvVar23,uVar25 * 0x30);
              if (pvVar12 == (void *)0x0) {
                bVar39 = uVar33 < uVar31;
                pvVar12 = pvVar10;
                uVar31 = uVar33;
                uVar25 = local_f0;
                if (bVar39) goto LAB_00406937;
              }
            }
            goto LAB_004068c1;
          }
LAB_0040695d:
          DAT_0071cda0 = 0;
          _DAT_0071cda8 = 0;
          DAT_0071cd90 = 0;
          _DAT_0071cd98 = 0;
          _hb_CrapPool = 0;
          _DAT_0071cd88 = 0;
        }
        uVar31 = *puVar38;
        puVar38 = (uint *)((long)puVar38 +
                          (ulong)(uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8
                                 | uVar31 << 0x18));
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar32);
      goto LAB_004069a9;
    }
  }
  else if ((uVar5 == 0) && (uVar5 = puVar36[1], uVar5 != 0)) {
    uVar6 = uVar5 << 8 | uVar5 >> 8;
    puVar36 = puVar36 + 2;
    uVar5 = 1;
    if (1 < uVar6) {
      uVar5 = uVar6;
    }
    local_f0 = 0;
    uVar7 = 0;
    pvVar10 = (void *)0x0;
    pvVar23 = (void *)0x0;
    uVar32 = 0;
    uVar33 = 0;
    uVar21 = 0;
    do {
      switch((char)puVar36[2]) {
      case '\0':
        uVar6 = puVar36[3];
        if (uVar6 == 0) break;
        puVar16 = puVar36 + 7;
        uVar25 = 0;
        uVar27 = 0;
        uVar34 = 0;
        uVar28 = 0;
        uVar37 = 0;
        uVar35 = 0;
        do {
          uVar14 = *puVar16;
          uVar20 = puVar16[1];
          uVar19 = uVar14 << 8 | uVar14 >> 8;
          uVar25 = uVar25 | 1L << ((ulong)(uVar19 >> 4) & 0x3f);
          uVar27 = uVar27 | 1L << ((ulong)uVar19 & 0x3f);
          uVar34 = uVar34 | 1L << ((ulong)((uVar14 & 0xff) >> 1) & 0x3f);
          uVar14 = uVar20 << 8 | uVar20 >> 8;
          uVar28 = uVar28 | 1L << ((ulong)(uVar14 >> 4) & 0x3f);
          uVar37 = uVar37 | 1L << ((ulong)uVar14 & 0x3f);
          uVar35 = uVar35 | 1L << ((ulong)((uVar20 & 0xff) >> 1) & 0x3f);
          puVar16 = puVar16 + 3;
        } while (puVar16 != puVar36 + (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8) * 3 + 7);
        goto LAB_004062c0;
      case '\x01':
        uVar17 = (ulong)(ushort)(puVar36[4] << 8 | puVar36[4] >> 8);
        uVar6 = *(ushort *)((long)puVar36 + uVar17 + 8);
        if (uVar6 != 0) {
          uVar14 = uVar6 << 8 | uVar6 >> 8;
          uVar6 = *(ushort *)((long)puVar36 + uVar17 + 6);
          uVar15 = 1;
          if (1 < uVar14) {
            uVar15 = (uint)uVar14;
          }
          uVar25 = 0;
          uVar27 = 0;
          uVar35 = 0;
          uVar29 = 0;
          do {
            if (*(char *)((long)puVar36 + uVar29 + uVar17 + 10) != '\x01') {
              uVar28 = (ushort)(uVar6 << 8 | uVar6 >> 8) + uVar29;
              uVar25 = uVar25 | 1L << (uVar28 >> 4 & 0x3f);
              uVar27 = uVar27 | 1L << (uVar28 & 0x3f);
              uVar35 = uVar35 | 1L << (uVar28 >> 9 & 0x3f);
            }
            uVar29 = uVar29 + 1;
            uVar28 = uVar25;
            uVar34 = uVar35;
            uVar37 = uVar27;
          } while (uVar15 != uVar29);
          goto LAB_004062c0;
        }
        break;
      case '\x02':
        uVar35 = (ulong)(ushort)(puVar36[4] << 8 | puVar36[4] >> 8);
        uVar6 = *(ushort *)((long)puVar36 + uVar35 + 2);
        if (uVar6 == 0) {
          uVar25 = 0;
          uVar27 = 0;
          uVar34 = 0;
        }
        else {
          uVar6 = uVar6 << 8 | uVar6 >> 8;
          uVar15 = 1;
          if (1 < uVar6) {
            uVar15 = (uint)uVar6;
          }
          uVar25 = 0;
          uVar27 = 0;
          uVar34 = 0;
          uVar28 = 0;
          do {
            if (*(short *)((long)puVar36 + uVar28 * 2 + uVar35 + 4) != 0x100) {
              uVar37 = (ushort)(*(ushort *)((long)puVar36 + uVar35) << 8 |
                               *(ushort *)((long)puVar36 + uVar35) >> 8) + uVar28;
              uVar25 = uVar25 | 1L << (uVar37 >> 4 & 0x3f);
              uVar27 = uVar27 | 1L << (uVar37 & 0x3f);
              uVar34 = uVar34 | 1L << (uVar37 >> 9 & 0x3f);
            }
            uVar28 = uVar28 + 1;
          } while (uVar15 != uVar28);
        }
        uVar17 = (ulong)(ushort)(puVar36[5] << 8 | puVar36[5] >> 8);
        uVar6 = *(ushort *)((long)puVar36 + uVar17 + 2);
        if (uVar6 != 0) {
          uVar6 = uVar6 << 8 | uVar6 >> 8;
          uVar15 = 1;
          if (1 < uVar6) {
            uVar15 = (uint)uVar6;
          }
          uVar28 = 0;
          uVar37 = 0;
          uVar35 = 0;
          uVar29 = 0;
          do {
            if (*(short *)((long)puVar36 + uVar29 * 2 + uVar17 + 4) != 0x100) {
              uVar30 = (ushort)(*(ushort *)((long)puVar36 + uVar17) << 8 |
                               *(ushort *)((long)puVar36 + uVar17) >> 8) + uVar29;
              uVar28 = uVar28 | 1L << (uVar30 >> 4 & 0x3f);
              uVar37 = uVar37 | 1L << (uVar30 & 0x3f);
              uVar35 = uVar35 | 1L << (uVar30 >> 9 & 0x3f);
            }
            uVar29 = uVar29 + 1;
          } while (uVar15 != uVar29);
          goto LAB_004062c0;
        }
        goto LAB_004062b7;
      case '\x03':
        uVar6 = puVar36[3];
        if (uVar6 != 0) {
          uVar15 = (ushort)(uVar6 << 8 | uVar6 >> 8) - 1;
          uVar25 = (2L << ((byte)(uVar15 >> 4) & 0x3f)) - 1;
          if (0x3ef < uVar15) {
            uVar25 = 0xffffffffffffffff;
          }
          uVar27 = (2L << ((byte)uVar15 & 0x3f)) - 1;
          if (0x3e < uVar15) {
            uVar27 = 0xffffffffffffffff;
          }
          uVar35 = (2L << ((byte)(uVar15 >> 9) & 0x3f)) - 1;
          if (0x7dff < uVar15) {
            uVar35 = 0xffffffffffffffff;
          }
          uVar28 = uVar25;
          uVar34 = uVar35;
          uVar37 = uVar27;
          goto LAB_004062c0;
        }
      }
      uVar25 = 0;
      uVar27 = 0;
      uVar34 = 0;
LAB_004062b7:
      uVar35 = 0;
      uVar28 = 0;
      uVar37 = 0;
LAB_004062c0:
      uVar31 = uVar33 + 1;
      pvVar12 = pvVar10;
      uVar15 = uVar32;
      uVar17 = local_f0;
      if ((int)uVar33 < (int)uVar32) {
LAB_004062db:
        local_f0 = uVar17;
        pvVar23 = pvVar12;
        lVar11 = (ulong)uVar33 * 0x30;
        *(ulong *)((long)pvVar23 + lVar11 + 0x18) = uVar28;
        *(ulong *)((long)pvVar23 + lVar11 + 0x20) = uVar37;
        *(ulong *)((long)pvVar23 + lVar11 + 0x28) = uVar35;
        *(ulong *)((long)pvVar23 + lVar11) = uVar25;
        *(ulong *)((long)pvVar23 + lVar11 + 8) = uVar27;
        *(ulong *)((long)pvVar23 + lVar11 + 0x10) = uVar34;
        pvVar10 = pvVar23;
        uVar7 = uVar31;
        uVar32 = uVar15;
        uVar33 = uVar31;
      }
      else {
        if (-1 < (int)uVar32) {
          if (uVar32 < uVar31) {
            uVar17 = (ulong)uVar32;
            do {
              uVar15 = (uint)uVar17 + ((uint)uVar17 >> 1) + 8;
              uVar17 = (ulong)uVar15;
            } while (uVar15 < uVar31);
            if (0x5555555 < uVar15) {
LAB_0040643d:
              uVar32 = ~uVar32;
              local_f0 = (ulong)uVar32;
              goto LAB_0040645a;
            }
            pvVar12 = realloc(pvVar23,uVar17 * 0x30);
            if (pvVar12 == (void *)0x0) {
              bVar39 = uVar32 < uVar15;
              pvVar12 = pvVar10;
              uVar15 = uVar32;
              uVar17 = local_f0;
              if (bVar39) goto LAB_0040643d;
            }
          }
          goto LAB_004062db;
        }
LAB_0040645a:
        DAT_0071cda0 = 0;
        _DAT_0071cda8 = 0;
        DAT_0071cd90 = 0;
        _DAT_0071cd98 = 0;
        _hb_CrapPool = 0;
        _DAT_0071cd88 = 0;
      }
      puVar36 = (ushort *)((long)puVar36 + (ulong)(ushort)(puVar36[1] << 8 | puVar36[1] >> 8));
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar5);
    goto LAB_004069a9;
  }
  local_f0._0_4_ = 0;
  uVar7 = 0;
  pvVar10 = (void *)0x0;
LAB_004069a9:
  iVar2 = *(int *)(local_78 + 8);
  *(undefined4 *)(local_78 + 8) = (undefined4)local_f0;
  *(uint *)(local_78 + 0xc) = uVar7;
  pvVar23 = *(void **)(local_78 + 0x10);
  *(void **)(local_78 + 0x10) = pvVar10;
  if (iVar2 != 0) {
    free(pvVar23);
  }
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b8);
  return;
}


