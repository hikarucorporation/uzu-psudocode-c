// Function : accelerator_t
// Namespace: OT:CBDT:accelerator_t
// Entry    : 0044f860
// Prototype: undefined accelerator_t(accelerator_t * this, long param_1)
// Body     : 0044f860 - 0045023a


/* WARNING: Type propagation algorithm not settling */
/* OT::CBDT::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::CBDT::accelerator_t::accelerator_t(accelerator_t *this,long param_1)

{
  int iVar1;
  pthread_mutex_t *ppVar2;
  long lVar3;
  int *piVar4;
  undefined *puVar5;
  ushort uVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  void *__dest;
  undefined4 *puVar10;
  uint uVar11;
  char cVar12;
  CBLC *pCVar13;
  uint uVar14;
  accelerator_t *paVar15;
  bool bVar16;
  undefined4 local_b8 [2];
  CBLC *local_b0;
  CBLC *pCStack_a8;
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
  local_b8[0] = 0;
  local_8c = 0;
  local_88 = (int *)0x0;
  local_b0 = (CBLC *)0x0;
  pCStack_a8 = (CBLC *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_80 = 0x10000;
  local_7c = 0;
  uVar11 = *(uint *)(param_1 + 0x18);
  if (uVar11 == 0xffffffff) {
    piVar8 = *(int **)(param_1 + 0x78);
    if (piVar8 == (int *)0x0) {
      do {
        lVar3 = *(long *)(param_1 + 0x68);
        piVar8 = &_hb_NullPool;
        if (lVar3 == 0) {
LAB_004501c9:
          uVar11 = piVar8[6];
          goto joined_r0x004501d5;
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
        piVar8 = &_hb_NullPool;
                    /* try { // try from 0044ffb8 to 0044ffd2 has its CatchHandler @ 00450251 */
        if ((*(code **)(lVar3 + 0x20) != (code *)0x0) &&
           (piVar8 = (int *)(**(code **)(lVar3 + 0x20))
                                      (lVar3,0x6d617870,*(undefined8 *)(lVar3 + 0x28)),
           piVar8 == (int *)0x0)) {
          piVar8 = &_hb_NullPool;
        }
        piVar8 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar8);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar8 == (int *)0x0) {
          piVar8 = &_hb_NullPool;
          LOCK();
          bVar16 = *(long *)(param_1 + 0x78) == 0;
          if (bVar16) {
            *(long *)(param_1 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar16 = *(long *)(param_1 + 0x78) == 0;
          if (bVar16) {
            *(long *)(param_1 + 0x78) = (long)piVar8;
          }
          UNLOCK();
        }
        if (bVar16) goto LAB_004501c9;
        if (((piVar8 != (int *)0x0) && (piVar8 != &_hb_NullPool)) && (*piVar8 != 0)) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            *piVar8 = -0xdead;
            ppVar2 = *(pthread_mutex_t **)(piVar8 + 2);
            if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00450026 to 0045002d has its CatchHandler @ 0045024d */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar2[1].__data,ppVar2);
              free(ppVar2);
              piVar8[2] = 0;
              piVar8[3] = 0;
            }
            if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0045004b to 0045004c has its CatchHandler @ 00450245 */
              (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
            }
            free(piVar8);
          }
        }
        piVar8 = *(int **)(param_1 + 0x78);
      } while (piVar8 == (int *)0x0);
    }
    uVar11 = piVar8[6];
joined_r0x004501d5:
    if (uVar11 < 6) {
      puVar10 = &_hb_NullPool;
    }
    else {
      puVar10 = *(undefined4 **)(piVar8 + 4);
    }
    uVar6 = *(ushort *)(puVar10 + 1);
    uVar11 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
    if (uVar6 == 0) {
      uVar11 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar11;
  }
  local_7c = CONCAT11(local_7c._1_1_,1);
  local_80 = uVar11;
  local_78 = this;
                    /* try { // try from 0044f8e5 to 0044f8ee has its CatchHandler @ 0045028a */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x43424c43,*(undefined8 *)(param_1 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &_hb_NullPool;
    iVar1 = _hb_NullPool;
  }
  else {
    iVar1 = *piVar8;
  }
  if (iVar1 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  puVar5 = PTR_free_00715540;
  local_90 = '\0';
  local_88 = piVar8;
  while( true ) {
    pCVar13 = *(CBLC **)(local_88 + 4);
    uVar11 = local_88[6];
    lVar3 = (ulong)uVar11 * 0x40;
    uVar7 = (uint)lVar3;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    pCStack_a8 = pCVar13 + uVar11;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar14 = 0x3fffffff;
    if ((int)((ulong)lVar3 >> 0x20) == 0) {
      uVar14 = uVar7;
    }
    local_a0 = CONCAT44(uVar14,uVar11);
    local_8c = 0;
    local_b8[0] = 0;
    uStack_98 = uStack_98 & 0xffffffff;
    local_b0 = pCVar13;
    if (pCVar13 == (CBLC *)0x0) {
                    /* try { // try from 0044fea0 to 0044fea9 has its CatchHandler @ 0045028a */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b8);
      goto LAB_0044fc4a;
    }
                    /* try { // try from 0044f9d0 to 0044f9da has its CatchHandler @ 0045028c */
    uVar9 = CBLC::sanitize(pCVar13,(long)local_b8);
    piVar4 = local_88;
    if ((char)uVar9 != '\0') {
      if (local_8c == 0) {
        cVar12 = '\x01';
        goto joined_r0x0044fb58;
      }
      local_8c = 0;
                    /* try { // try from 0044fa9b to 0044fae9 has its CatchHandler @ 0045028a */
      uVar9 = CBLC::sanitize(pCVar13,(long)local_b8);
      piVar4 = local_88;
      if (local_8c == 0) {
        cVar12 = (char)uVar9;
        goto joined_r0x0044fb58;
      }
      if ((local_88 != (int *)0x0) && (*local_88 != 0)) {
        LOCK();
        *local_88 = *local_88 + -1;
        UNLOCK();
        if (*local_88 == 0) {
          *local_88 = -0xdead;
          ppVar2 = *(pthread_mutex_t **)(local_88 + 2);
          if (ppVar2 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar2[1].__data,ppVar2);
            free(ppVar2);
            piVar4[2] = 0;
            piVar4[3] = 0;
          }
          if (*(code **)(piVar4 + 10) != (code *)0x0) {
                    /* try { // try from 0044fb07 to 0044fb08 has its CatchHandler @ 00450260 */
            (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
          }
          free(piVar4);
        }
      }
      local_a0 = local_a0 & 0xffffffff00000000;
      goto LAB_0044fbe8;
    }
    cVar12 = '\0';
    if ((local_8c == 0) || (local_90 != '\0')) goto joined_r0x0044fb58;
    pCVar13 = (CBLC *)(ulong)(uint)piVar8[6];
    if (piVar8[1] == 0) break;
    if (pCVar13 == (CBLC *)0x0) {
      piVar8[7] = 2;
LAB_0044f940:
      local_b0 = *(CBLC **)(piVar8 + 4);
      pCStack_a8 = pCVar13 + (long)local_b0;
      if (local_b0 == (CBLC *)0x0) goto LAB_0044fb3f;
    }
    else {
      if (piVar8[7] == 2) goto LAB_0044f940;
      if (piVar8[7] == 3) {
        piVar8[7] = 1;
      }
      __dest = malloc((size_t)pCVar13);
      if (__dest == (void *)0x0) break;
      memcpy(__dest,*(void **)(piVar8 + 4),(size_t)pCVar13);
      if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0044fa5f to 0044fa60 has its CatchHandler @ 0045028c */
        (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
      }
      piVar8[7] = 2;
      *(void **)(piVar8 + 4) = __dest;
      *(void **)(piVar8 + 8) = __dest;
      *(undefined **)(piVar8 + 10) = puVar5;
    }
    local_90 = '\x01';
  }
  local_b0 = (CBLC *)0x0;
  pCStack_a8 = pCVar13;
LAB_0044fb3f:
  cVar12 = '\0';
  piVar4 = local_88;
joined_r0x0044fb58:
  if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      *piVar4 = -0xdead;
      ppVar2 = *(pthread_mutex_t **)(piVar4 + 2);
      local_88 = piVar4;
      if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0044fb84 to 0044fb8b has its CatchHandler @ 0045028a */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar2[1].__data,ppVar2);
        free(ppVar2);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      if (*(code **)(piVar4 + 10) != (code *)0x0) {
                    /* try { // try from 0044fbac to 0044fbad has its CatchHandler @ 00450270 */
        (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
      }
      free(piVar4);
    }
  }
  local_88 = (int *)0x0;
  local_b0 = (CBLC *)0x0;
  pCStack_a8 = (CBLC *)0x0;
  local_a0 = local_a0 & 0xffffffff00000000;
  if (cVar12 == '\0') {
LAB_0044fbe8:
    local_88 = (int *)0x0;
    pCStack_a8 = (CBLC *)0x0;
    local_b0 = (CBLC *)0x0;
    if (*piVar8 != 0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        *piVar8 = -0xdead;
        ppVar2 = *(pthread_mutex_t **)(piVar8 + 2);
        if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0044fc18 to 0044fc1f has its CatchHandler @ 0045028a */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar2[1].__data,ppVar2);
          free(ppVar2);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0044fc3d to 0044fc3e has its CatchHandler @ 00450278 */
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        }
        free(piVar8);
      }
    }
    piVar8 = &_hb_NullPool;
  }
  else if (piVar8[1] != 0) {
    piVar8[1] = 0;
  }
LAB_0044fc4a:
  paVar15 = local_78;
  *(int **)local_78 = piVar8;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b8);
  local_b8[0] = 0;
  local_8c = 0;
  local_88 = (int *)0x0;
  local_b0 = (CBLC *)0x0;
  pCStack_a8 = (CBLC *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_80 = 0x10000;
  local_7c = 0;
  uVar11 = *(uint *)(param_1 + 0x18);
  if (uVar11 == 0xffffffff) {
    piVar8 = *(int **)(param_1 + 0x78);
    if (piVar8 == (int *)0x0) {
      do {
        lVar3 = *(long *)(param_1 + 0x68);
        piVar8 = &_hb_NullPool;
        if (lVar3 == 0) {
LAB_00450202:
          uVar11 = piVar8[6];
          paVar15 = local_78;
          goto joined_r0x00450210;
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
        piVar8 = &_hb_NullPool;
                    /* try { // try from 004500ee to 00450108 has its CatchHandler @ 0045024f */
        if ((*(code **)(lVar3 + 0x20) != (code *)0x0) &&
           (piVar8 = (int *)(**(code **)(lVar3 + 0x20))
                                      (lVar3,0x6d617870,*(undefined8 *)(lVar3 + 0x28)),
           piVar8 == (int *)0x0)) {
          piVar8 = &_hb_NullPool;
        }
        piVar8 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar8);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar8 == (int *)0x0) {
          piVar8 = &_hb_NullPool;
          LOCK();
          bVar16 = *(long *)(param_1 + 0x78) == 0;
          if (bVar16) {
            *(long *)(param_1 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar16 = *(long *)(param_1 + 0x78) == 0;
          if (bVar16) {
            *(long *)(param_1 + 0x78) = (long)piVar8;
          }
          UNLOCK();
        }
        if (bVar16) goto LAB_00450202;
        if (((piVar8 != (int *)0x0) && (piVar8 != &_hb_NullPool)) && (*piVar8 != 0)) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            *piVar8 = -0xdead;
            ppVar2 = *(pthread_mutex_t **)(piVar8 + 2);
            if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0045015c to 00450163 has its CatchHandler @ 00450243 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar2[1].__data,ppVar2);
              free(ppVar2);
              piVar8[2] = 0;
              piVar8[3] = 0;
            }
            if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 00450181 to 00450182 has its CatchHandler @ 0045023b */
              (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
            }
            free(piVar8);
          }
        }
        piVar8 = *(int **)(param_1 + 0x78);
        paVar15 = local_78;
      } while (piVar8 == (int *)0x0);
    }
    uVar11 = piVar8[6];
joined_r0x00450210:
    if (uVar11 < 6) {
      puVar10 = &_hb_NullPool;
    }
    else {
      puVar10 = *(undefined4 **)(piVar8 + 4);
    }
    uVar6 = *(ushort *)(puVar10 + 1);
    uVar11 = (uint)(ushort)(uVar6 << 8 | uVar6 >> 8);
    if (uVar6 == 0) {
      uVar11 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar11;
  }
  local_7c = CONCAT11(local_7c._1_1_,1);
  local_80 = uVar11;
                    /* try { // try from 0044fcca to 0044fda7 has its CatchHandler @ 00450288 */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x43424454,*(undefined8 *)(param_1 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &_hb_NullPool;
    iVar1 = _hb_NullPool;
  }
  else {
    iVar1 = *piVar8;
  }
  if (iVar1 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  local_b0 = *(CBLC **)(piVar8 + 4);
  local_a0._0_4_ = piVar8[6];
  pCStack_a8 = (CBLC *)((ulong)(uint)local_a0 + (long)local_b0);
  lVar3 = (ulong)(uint)local_a0 * 0x40;
  uVar7 = (uint)lVar3;
  uVar11 = 0x4000;
  if (0x4000 < uVar7) {
    uVar11 = uVar7;
  }
  if (0x3ffffffe < uVar11) {
    uVar11 = 0x3fffffff;
  }
  local_90 = 0;
  local_a0._4_4_ = 0x3fffffff;
  if ((int)((ulong)lVar3 >> 0x20) == 0) {
    local_a0._4_4_ = uVar11;
  }
  local_8c = 0;
  local_b8[0] = 0;
  uStack_98 = uStack_98 & 0xffffffff;
  local_88 = piVar8;
  if (local_b0 == (CBLC *)0x0) {
                    /* try { // try from 0044ff1d to 0044ff26 has its CatchHandler @ 00450288 */
    hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b8);
  }
  else {
    if (((uint)local_a0 < 4) || (bVar16 = true, (*(ushort *)local_b0 & 0xfeff) != 0x200)) {
      bVar16 = false;
    }
    if (*piVar8 != 0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        *piVar8 = -0xdead;
        ppVar2 = *(pthread_mutex_t **)(piVar8 + 2);
        if (ppVar2 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar2[1].__data,ppVar2);
          free(ppVar2);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0044fdc5 to 0044fdc6 has its CatchHandler @ 00450280 */
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        }
        free(piVar8);
      }
    }
    local_88 = (int *)0x0;
    local_b0 = (CBLC *)0x0;
    pCStack_a8 = (CBLC *)0x0;
    local_a0._0_4_ = 0;
    if (bVar16) {
      if (piVar8[1] != 0) {
        piVar8[1] = 0;
      }
    }
    else {
      if (*piVar8 != 0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (*piVar8 == 0) {
          *piVar8 = -0xdead;
          ppVar2 = *(pthread_mutex_t **)(piVar8 + 2);
          if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0044fe27 to 0044fe2e has its CatchHandler @ 00450288 */
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar2[1].__data,ppVar2);
            free(ppVar2);
            piVar8[2] = 0;
            piVar8[3] = 0;
          }
          if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0044fe4c to 0044fe4d has its CatchHandler @ 00450268 */
            (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
          }
          free(piVar8);
        }
      }
      piVar8 = &_hb_NullPool;
    }
  }
  *(int **)(paVar15 + 8) = piVar8;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b8);
  uVar11 = *(uint *)(param_1 + 0x14);
  if (uVar11 == 0) {
    puVar10 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
              ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                     *)(param_1 + 0x70));
    uVar6 = *(ushort *)((long)puVar10 + 0x12) << 8 | *(ushort *)((long)puVar10 + 0x12) >> 8;
    uVar11 = 1000;
    if (uVar6 - 0x10 < 0x3ff1) {
      uVar11 = (uint)uVar6;
    }
    *(uint *)(param_1 + 0x14) = uVar11;
  }
  *(uint *)(paVar15 + 0x10) = uVar11;
  return;
}


