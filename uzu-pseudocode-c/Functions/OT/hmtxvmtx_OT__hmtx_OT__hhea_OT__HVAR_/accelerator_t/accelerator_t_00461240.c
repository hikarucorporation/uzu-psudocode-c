// Function : accelerator_t
// Namespace: OT:hmtxvmtx_OT__hmtx_OT__hhea_OT__HVAR_:accelerator_t
// Entry    : 00461240
// Prototype: undefined accelerator_t(accelerator_t * this, hb_face_t * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00461240 - 00461c6b


/* OT::hmtxvmtx<OT::hmtx, OT::hhea, OT::HVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  int iVar1;
  pthread_mutex_t *ppVar2;
  long lVar3;
  int *piVar4;
  undefined *puVar5;
  hb_face_t *this_00;
  accelerator_t *paVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  ulong uVar11;
  void *__dest;
  undefined4 *puVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 extraout_RDX;
  uint uVar15;
  char cVar16;
  HVARVVAR *pHVar17;
  undefined7 uVar18;
  undefined1 uVar19;
  bool bVar20;
  undefined4 local_c8 [2];
  HVARVVAR *local_c0;
  HVARVVAR *pHStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  char local_a0;
  uint local_9c;
  int *local_98;
  uint local_90;
  undefined2 local_8c;
  pthread_mutex_t *local_88;
  hb_face_t *local_80;
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
  
  uVar18 = (undefined7)((ulong)param_4 >> 8);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  local_c8[0] = 0;
  local_9c = 0;
  local_98 = (int *)0x0;
  local_c0 = (HVARVVAR *)0x0;
  pHStack_b8 = (HVARVVAR *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_90 = 0x10000;
  local_8c = 0;
  uVar9 = *(uint *)(param_1 + 0x18);
  if (uVar9 == 0xffffffff) {
    piVar10 = *(int **)(param_1 + 0x78);
    if (piVar10 == (int *)0x0) {
      do {
        lVar3 = *(long *)(param_1 + 0x68);
        piVar10 = &_hb_NullPool;
        if (lVar3 == 0) goto LAB_00461908;
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
        piVar10 = &_hb_NullPool;
                    /* try { // try from 00461a61 to 00461a7b has its CatchHandler @ 00461c82 */
        if ((*(code **)(lVar3 + 0x20) != (code *)0x0) &&
           (piVar10 = (int *)(**(code **)(lVar3 + 0x20))
                                       (lVar3,0x6d617870,*(undefined8 *)(lVar3 + 0x28)),
           piVar10 == (int *)0x0)) {
          piVar10 = &_hb_NullPool;
        }
        piVar10 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                            ((hb_sanitize_context_t *)local_70,piVar10);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar10 == (int *)0x0) {
          piVar10 = &_hb_NullPool;
          LOCK();
          bVar20 = *(long *)(param_1 + 0x78) == 0;
          if (bVar20) {
            *(int **)(param_1 + 0x78) = &_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar20 = *(long *)(param_1 + 0x78) == 0;
          if (bVar20) {
            *(int **)(param_1 + 0x78) = piVar10;
          }
          UNLOCK();
        }
        if (bVar20) goto LAB_00461908;
        if (((piVar10 != (int *)0x0) && (piVar10 != &_hb_NullPool)) && (*piVar10 != 0)) {
          LOCK();
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (*piVar10 == 0) {
            *piVar10 = -0xdead;
            local_88 = *(pthread_mutex_t **)(piVar10 + 2);
            if (local_88 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00461ad3 to 00461ad7 has its CatchHandler @ 00461c7e */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &local_88[1].__data,local_88);
              free(local_88);
              piVar10[2] = 0;
              piVar10[3] = 0;
            }
            if (*(code **)(piVar10 + 10) != (code *)0x0) {
                    /* try { // try from 00461af7 to 00461af8 has its CatchHandler @ 00461c76 */
              (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
            }
            free(piVar10);
          }
        }
        piVar10 = *(int **)(param_1 + 0x78);
      } while (piVar10 == (int *)0x0);
    }
LAB_00461908:
    if ((uint)piVar10[6] < 6) {
      puVar12 = &_hb_NullPool;
    }
    else {
      puVar12 = *(undefined4 **)(piVar10 + 4);
    }
    uVar7 = *(ushort *)(puVar12 + 1);
    uVar9 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar9;
  }
  local_8c = CONCAT11(local_8c._1_1_,1);
  local_90 = uVar9;
                    /* try { // try from 004612c1 to 00461388 has its CatchHandler @ 00461cb1 */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar10 = (int *)(**(code **)(param_1 + 0x20))
                                 (param_1,0x686d7478,*(undefined8 *)(param_1 + 0x28)),
     piVar10 == (int *)0x0)) {
    piVar10 = &_hb_NullPool;
    iVar1 = _hb_NullPool;
  }
  else {
    iVar1 = *piVar10;
  }
  if (iVar1 != 0) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  local_a0 = 0;
  local_c0 = *(HVARVVAR **)(piVar10 + 4);
  local_b0._0_4_ = piVar10[6];
  pHStack_b8 = (HVARVVAR *)((ulong)(uint)local_b0 + (long)local_c0);
  lVar3 = (ulong)(uint)local_b0 * 0x40;
  uVar19 = (int)((ulong)lVar3 >> 0x20) != 0;
  uVar8 = (uint)lVar3;
  uVar9 = 0x4000;
  if (0x4000 < uVar8) {
    uVar9 = uVar8;
  }
  if (0x3ffffffe < uVar9) {
    uVar9 = 0x3fffffff;
  }
  local_b0._4_4_ = 0x3fffffff;
  if (!(bool)uVar19) {
    local_b0._4_4_ = uVar9;
  }
  local_9c = 0;
  local_c8[0] = 0;
  uStack_a8 = uStack_a8 & 0xffffffff;
  local_98 = piVar10;
  if (local_c0 == (HVARVVAR *)0x0) {
                    /* try { // try from 0046191b to 00461922 has its CatchHandler @ 00461cb1 */
    hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_c8);
  }
  else {
    if (*piVar10 != 0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        *piVar10 = -0xdead;
        ppVar2 = *(pthread_mutex_t **)(piVar10 + 2);
        if (ppVar2 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar2[1].__data,ppVar2);
          free(ppVar2);
          piVar10[2] = 0;
          piVar10[3] = 0;
        }
        if (*(code **)(piVar10 + 10) != (code *)0x0) {
                    /* try { // try from 004613a6 to 004613a7 has its CatchHandler @ 00461ca9 */
          (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
        }
        free(piVar10);
      }
    }
    local_98 = (int *)0x0;
    local_c0 = (HVARVVAR *)0x0;
    pHStack_b8 = (HVARVVAR *)0x0;
    local_b0._0_4_ = 0;
    if (piVar10[1] != 0) {
      piVar10[1] = 0;
    }
  }
  *(int **)(this + 0x18) = piVar10;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_c8);
  local_c8[0] = 0;
  local_9c = 0;
  local_98 = (int *)0x0;
  local_c0 = (HVARVVAR *)0x0;
  pHStack_b8 = (HVARVVAR *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_90 = 0x10000;
  local_8c = 0;
  uVar9 = *(uint *)(param_1 + 0x18);
  if (uVar9 == 0xffffffff) {
    piVar10 = *(int **)(param_1 + 0x78);
    if (piVar10 == (int *)0x0) {
      do {
        lVar3 = *(long *)(param_1 + 0x68);
        piVar10 = &_hb_NullPool;
        if (lVar3 == 0) goto LAB_00461938;
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
        piVar10 = &_hb_NullPool;
                    /* try { // try from 00461b90 to 00461baa has its CatchHandler @ 00461c80 */
        if ((*(code **)(lVar3 + 0x20) != (code *)0x0) &&
           (piVar10 = (int *)(**(code **)(lVar3 + 0x20))
                                       (lVar3,0x6d617870,*(undefined8 *)(lVar3 + 0x28)),
           piVar10 == (int *)0x0)) {
          piVar10 = &_hb_NullPool;
        }
        piVar10 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                            ((hb_sanitize_context_t *)local_70,piVar10);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar10 == (int *)0x0) {
          piVar10 = &_hb_NullPool;
          LOCK();
          bVar20 = *(long *)(param_1 + 0x78) == 0;
          if (bVar20) {
            *(int **)(param_1 + 0x78) = &_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar20 = *(long *)(param_1 + 0x78) == 0;
          if (bVar20) {
            *(int **)(param_1 + 0x78) = piVar10;
          }
          UNLOCK();
        }
        if (bVar20) goto LAB_00461938;
        if (((piVar10 != (int *)0x0) && (piVar10 != &_hb_NullPool)) && (*piVar10 != 0)) {
          LOCK();
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (*piVar10 == 0) {
            *piVar10 = -0xdead;
            local_88 = *(pthread_mutex_t **)(piVar10 + 2);
            if (local_88 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00461c02 to 00461c06 has its CatchHandler @ 00461c74 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &local_88[1].__data,local_88);
              free(local_88);
              piVar10[2] = 0;
              piVar10[3] = 0;
            }
            if (*(code **)(piVar10 + 10) != (code *)0x0) {
                    /* try { // try from 00461c26 to 00461c27 has its CatchHandler @ 00461c6c */
              (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
            }
            free(piVar10);
          }
        }
        piVar10 = *(int **)(param_1 + 0x78);
      } while (piVar10 == (int *)0x0);
    }
LAB_00461938:
    if ((uint)piVar10[6] < 6) {
      puVar12 = &_hb_NullPool;
    }
    else {
      puVar12 = *(undefined4 **)(piVar10 + 4);
    }
    uVar7 = *(ushort *)(puVar12 + 1);
    uVar9 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar9;
  }
  local_8c = CONCAT11(local_8c._1_1_,1);
  local_90 = uVar9;
  local_80 = param_1;
  local_78 = this;
                    /* try { // try from 00461457 to 00461460 has its CatchHandler @ 00461cb3 */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar10 = (int *)(**(code **)(param_1 + 0x20))
                                 (param_1,0x48564152,*(undefined8 *)(param_1 + 0x28)),
     piVar10 == (int *)0x0)) {
    piVar10 = &_hb_NullPool;
    iVar1 = _hb_NullPool;
  }
  else {
    iVar1 = *piVar10;
  }
  if (iVar1 != 0) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  puVar5 = PTR_free_00715540;
  local_a0 = '\0';
  local_98 = piVar10;
  while( true ) {
    pHVar17 = *(HVARVVAR **)(local_98 + 4);
    uVar11 = (ulong)(uint)local_98[6];
    bVar20 = (int)(uVar11 * 0x40 >> 0x20) != 0;
    uVar9 = (uint)(uVar11 * 0x40);
    if (uVar9 < 0x4001) {
      uVar9 = 0x4000;
    }
    pHStack_b8 = pHVar17 + uVar11;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar8 = 0x3fffffff;
    if (!bVar20) {
      uVar8 = uVar9;
    }
    local_b0 = CONCAT44(uVar8,local_98[6]);
    local_9c = 0;
    local_c8[0] = 0;
    uStack_a8 = uStack_a8 & 0xffffffff;
    local_c0 = pHVar17;
    if (pHVar17 == (HVARVVAR *)0x0) {
                    /* try { // try from 004618bf to 004618c6 has its CatchHandler @ 00461cb3 */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_c8);
      goto LAB_004617c0;
    }
                    /* try { // try from 0046153f to 00461549 has its CatchHandler @ 00461cb5 */
    uVar11 = HVARVVAR::sanitize(pHVar17,(long)local_c8,(ulong)bVar20,uVar11,CONCAT71(uVar18,uVar19))
    ;
    uVar14 = (ulong)local_9c;
    piVar4 = local_98;
    if ((char)uVar11 != '\0') {
      if (local_9c == 0) {
        cVar16 = '\x01';
        goto joined_r0x004616d1;
      }
      local_9c = 0;
                    /* try { // try from 0046160a to 0046165b has its CatchHandler @ 00461cb3 */
      uVar11 = HVARVVAR::sanitize(pHVar17,(long)local_c8,extraout_RDX,uVar14,CONCAT71(uVar18,uVar19)
                                 );
      piVar4 = local_98;
      if (local_9c == 0) {
        cVar16 = (char)uVar11;
        goto joined_r0x004616d1;
      }
      if ((local_98 != (int *)0x0) && (*local_98 != 0)) {
        LOCK();
        *local_98 = *local_98 + -1;
        UNLOCK();
        if (*local_98 == 0) {
          *local_98 = -0xdead;
          ppVar2 = *(pthread_mutex_t **)(local_98 + 2);
          if (ppVar2 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar2[1].__data,ppVar2);
            free(ppVar2);
            piVar4[2] = 0;
            piVar4[3] = 0;
          }
          if (*(code **)(piVar4 + 10) != (code *)0x0) {
                    /* try { // try from 00461679 to 0046167a has its CatchHandler @ 00461c91 */
            (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
          }
          free(piVar4);
        }
      }
      local_b0 = local_b0 & 0xffffffff00000000;
      goto LAB_0046175e;
    }
    cVar16 = '\0';
    if ((local_9c == 0) || (local_a0 != '\0')) goto joined_r0x004616d1;
    pHVar17 = (HVARVVAR *)(ulong)(uint)piVar10[6];
    if (piVar10[1] == 0) break;
    if (pHVar17 == (HVARVVAR *)0x0) {
      piVar10[7] = 2;
LAB_004614b0:
      local_c0 = *(HVARVVAR **)(piVar10 + 4);
      pHStack_b8 = pHVar17 + (long)local_c0;
      if (local_c0 == (HVARVVAR *)0x0) goto LAB_004616ae;
    }
    else {
      if (piVar10[7] == 2) goto LAB_004614b0;
      if (piVar10[7] == 3) {
        piVar10[7] = 1;
      }
      __dest = malloc((size_t)pHVar17);
      if (__dest == (void *)0x0) break;
      memcpy(__dest,*(void **)(piVar10 + 4),(size_t)pHVar17);
      if (*(code **)(piVar10 + 10) != (code *)0x0) {
                    /* try { // try from 004615ce to 004615cf has its CatchHandler @ 00461cb5 */
        (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
      }
      piVar10[7] = 2;
      *(void **)(piVar10 + 4) = __dest;
      *(void **)(piVar10 + 8) = __dest;
      *(undefined **)(piVar10 + 10) = puVar5;
    }
    local_a0 = '\x01';
  }
  local_c0 = (HVARVVAR *)0x0;
  pHStack_b8 = pHVar17;
LAB_004616ae:
  cVar16 = '\0';
  piVar4 = local_98;
joined_r0x004616d1:
  if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      *piVar4 = -0xdead;
      ppVar2 = *(pthread_mutex_t **)(piVar4 + 2);
      local_98 = piVar4;
      if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 004616fd to 00461704 has its CatchHandler @ 00461cb3 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar2[1].__data,ppVar2);
        free(ppVar2);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      if (*(code **)(piVar4 + 10) != (code *)0x0) {
                    /* try { // try from 00461725 to 00461726 has its CatchHandler @ 00461c99 */
        (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
      }
      free(piVar4);
    }
  }
  local_98 = (int *)0x0;
  local_c0 = (HVARVVAR *)0x0;
  pHStack_b8 = (HVARVVAR *)0x0;
  local_b0 = local_b0 & 0xffffffff00000000;
  if (cVar16 == '\0') {
LAB_0046175e:
    local_98 = (int *)0x0;
    pHStack_b8 = (HVARVVAR *)0x0;
    local_c0 = (HVARVVAR *)0x0;
    if (*piVar10 != 0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        *piVar10 = -0xdead;
        ppVar2 = *(pthread_mutex_t **)(piVar10 + 2);
        if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0046178e to 00461795 has its CatchHandler @ 00461cb3 */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar2[1].__data,ppVar2);
          free(ppVar2);
          piVar10[2] = 0;
          piVar10[3] = 0;
        }
        if (*(code **)(piVar10 + 10) != (code *)0x0) {
                    /* try { // try from 004617b3 to 004617b4 has its CatchHandler @ 00461ca1 */
          (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
        }
        free(piVar10);
      }
    }
    piVar10 = &_hb_NullPool;
  }
  else if (piVar10[1] != 0) {
    piVar10[1] = 0;
  }
LAB_004617c0:
  paVar6 = local_78;
  *(int **)(local_78 + 0x20) = piVar10;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_c8);
  this_00 = local_80;
  uVar9 = *(uint *)(local_80 + 0x14);
  if (uVar9 == 0) {
    puVar12 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
              ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                     *)(local_80 + 0x70));
    uVar7 = *(ushort *)((long)puVar12 + 0x12) << 8 | *(ushort *)((long)puVar12 + 0x12) >> 8;
    uVar9 = 1000;
    if (uVar7 - 0x10 < 0x3ff1) {
      uVar9 = (uint)uVar7;
    }
    *(uint *)(this_00 + 0x14) = uVar9;
  }
  *(uint *)(paVar6 + 0x10) = uVar9 >> 1;
  puVar12 = &_hb_NullPool;
  if (*(undefined4 **)(paVar6 + 0x18) != (undefined4 *)0x0) {
    puVar12 = *(undefined4 **)(paVar6 + 0x18);
  }
  uVar9 = puVar12[6];
  uVar15 = uVar9 & 0xfffffffe;
  puVar12 = hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
            ::get((hb_lazy_loader_t<OT::hhea,hb_table_lazy_loader_t<OT::hhea,4u,true>,hb_face_t,4u,hb_blob_t>
                   *)(this_00 + 0x88));
  uVar7 = *(ushort *)((long)puVar12 + 0x22) << 8 | *(ushort *)((long)puVar12 + 0x22) >> 8;
  uVar8 = (uint)uVar7;
  if (uVar15 < (uint)uVar7 * 4) {
    uVar8 = uVar9 >> 2;
  }
  *(uint *)paVar6 = uVar8;
  uVar15 = uVar15 + uVar8 * -4;
  puVar12 = hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>
            ::operator->((hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>
                          *)(this_00 + 0x78));
  uVar7 = *(ushort *)(puVar12 + 1) << 8 | *(ushort *)(puVar12 + 1) >> 8;
  *(uint *)(paVar6 + 4) = (uint)uVar7;
  uVar9 = *(uint *)paVar6;
  uVar8 = (uint)uVar7;
  uVar13 = uVar9;
  if (uVar9 < uVar7 || uVar9 == uVar8) {
    if ((uVar8 - uVar9) * 2 <= uVar15) goto joined_r0x004619a3;
    uVar13 = (uVar15 >> 1) + uVar9;
  }
  *(uint *)(paVar6 + 4) = uVar13;
  uVar8 = uVar13;
joined_r0x004619a3:
  uVar13 = uVar8;
  if (uVar9 == 0) {
    *(undefined8 *)paVar6 = 0;
    uVar13 = 0;
  }
  uVar13 = ((uVar9 + (uVar15 >> 1)) - uVar8 & 0x7fffffff) + uVar13;
  *(uint *)(paVar6 + 8) = uVar13;
  uVar9 = *(uint *)(this_00 + 0x18);
  if (uVar9 == 0xffffffff) {
    uVar9 = hb_face_t::load_num_glyphs(this_00);
    uVar13 = *(uint *)(paVar6 + 8);
  }
  if (uVar9 < uVar13) {
    uVar9 = uVar13;
  }
  *(uint *)(paVar6 + 0xc) = uVar9;
  return;
}


