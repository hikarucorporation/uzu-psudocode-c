// Function : accelerator_t
// Namespace: OT:GSUBGPOS:accelerator_t_OT__Layout__GPOS_
// Entry    : 003d1b50
// Prototype: undefined accelerator_t(accelerator_t<OT::Layout::GPOS> * this, long param_1)
// Body     : 003d1b50 - 003d21b8


/* OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t(hb_face_t*) */

void __thiscall
OT::GSUBGPOS::accelerator_t<OT::Layout::GPOS>::accelerator_t
          (accelerator_t<OT::Layout::GPOS> *this,long param_1)

{
  ushort uVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  accelerator_t<OT::Layout::GPOS> *this_00;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  void *pvVar10;
  short *psVar11;
  ushort *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGVar15;
  char cVar16;
  uint uVar17;
  bool bVar18;
  undefined4 local_b8 [2];
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *local_b0;
  GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *pGStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  char local_90;
  int local_8c;
  int *local_88;
  uint local_80;
  undefined2 local_7c;
  accelerator_t<OT::Layout::GPOS> *local_78;
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
  local_b8[0] = 0;
  local_8c = 0;
  local_88 = (int *)0x0;
  local_b0 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0;
  pGStack_a8 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_80 = 0x10000;
  local_7c = 0x100;
  uVar14 = *(uint *)(param_1 + 0x18);
  local_78 = this;
  if (uVar14 == 0xffffffff) {
    piVar8 = *(int **)(param_1 + 0x78);
    if (piVar8 == (int *)0x0) {
      do {
        lVar4 = *(long *)(param_1 + 0x68);
        piVar8 = &_hb_NullPool;
        if (lVar4 == 0) goto LAB_003d2025;
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
                    /* try { // try from 003d20f0 to 003d210a has its CatchHandler @ 003d21c3 */
        if ((*(code **)(lVar4 + 0x20) != (code *)0x0) &&
           (piVar8 = (int *)(**(code **)(lVar4 + 0x20))
                                      (lVar4,0x6d617870,*(undefined8 *)(lVar4 + 0x28)),
           piVar8 == (int *)0x0)) {
          piVar8 = &_hb_NullPool;
        }
        piVar8 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar8);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar8 == (int *)0x0) {
          piVar8 = &_hb_NullPool;
          LOCK();
          bVar18 = *(long *)(param_1 + 0x78) == 0;
          if (bVar18) {
            *(long *)(param_1 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar18 = *(long *)(param_1 + 0x78) == 0;
          if (bVar18) {
            *(long *)(param_1 + 0x78) = (long)piVar8;
          }
          UNLOCK();
        }
        if (bVar18) goto LAB_003d2025;
        if (((piVar8 != (int *)0x0) && (piVar8 != &_hb_NullPool)) && (*piVar8 != 0)) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            *piVar8 = -0xdead;
            ppVar3 = *(pthread_mutex_t **)(piVar8 + 2);
            if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d2159 to 003d2160 has its CatchHandler @ 003d21c1 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar3[1].__data,ppVar3);
              free(ppVar3);
              piVar8[2] = 0;
              piVar8[3] = 0;
            }
            if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 003d217e to 003d217f has its CatchHandler @ 003d21b9 */
              (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
            }
            free(piVar8);
          }
        }
        piVar8 = *(int **)(param_1 + 0x78);
      } while (piVar8 == (int *)0x0);
    }
LAB_003d2025:
    if ((uint)piVar8[6] < 6) {
      puVar13 = &_hb_NullPool;
    }
    else {
      puVar13 = *(undefined4 **)(piVar8 + 4);
    }
    uVar1 = *(ushort *)(puVar13 + 1);
    uVar14 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    if (uVar1 == 0) {
      uVar14 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar14;
  }
  local_7c = CONCAT11(local_7c._1_1_,1);
  local_80 = uVar14;
                    /* try { // try from 003d1bd6 to 003d1bdf has its CatchHandler @ 003d21ea */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x47504f53,*(undefined8 *)(param_1 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &_hb_NullPool;
    iVar2 = _hb_NullPool;
  }
  else {
    iVar2 = *piVar8;
  }
  if (iVar2 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  puVar5 = PTR_free_00715540;
  local_90 = '\0';
  local_88 = piVar8;
  while( true ) {
    pGVar15 = *(GSUBGPOSVersion1_2<OT::Layout::SmallTypes> **)(local_88 + 4);
    uVar14 = local_88[6];
    lVar4 = (ulong)uVar14 * 0x40;
    uVar7 = (uint)lVar4;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    pGStack_a8 = pGVar15 + uVar14;
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    uVar17 = 0x3fffffff;
    if ((int)((ulong)lVar4 >> 0x20) == 0) {
      uVar17 = uVar7;
    }
    local_a0 = CONCAT44(uVar17,uVar14);
    local_8c = 0;
    local_b8[0] = 0;
    uStack_98 = uStack_98 & 0xffffffff;
    local_b0 = pGVar15;
    if (pGVar15 == (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0) {
                    /* try { // try from 003d1ff4 to 003d203f has its CatchHandler @ 003d21ea */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b8);
      goto LAB_003d1f71;
    }
    if (uVar14 < 4) goto LAB_003d1e76;
                    /* try { // try from 003d1cd7 to 003d1ce1 has its CatchHandler @ 003d21ec */
    if ((*(short *)pGVar15 != 0x100) ||
       (uVar9 = GSUBGPOSVersion1_2<OT::Layout::SmallTypes>::
                sanitize<OT::Layout::GPOS_impl::PosLookup>(pGVar15,(long)local_b8),
       (char)uVar9 != '\0')) {
      if (local_8c == 0) {
        cVar16 = '\x01';
        goto LAB_003d1e7d;
      }
      local_8c = 0;
      if ((GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(local_a0 & 0xffffffff) <
          pGVar15 + (4 - (long)local_b0)) {
        cVar16 = '\0';
        goto LAB_003d1e7d;
      }
      cVar16 = '\x01';
      if (*(short *)pGVar15 == 0x100) {
                    /* try { // try from 003d1dd6 to 003d1e20 has its CatchHandler @ 003d21ea */
        uVar9 = GSUBGPOSVersion1_2<OT::Layout::SmallTypes>::
                sanitize<OT::Layout::GPOS_impl::PosLookup>(pGVar15,(long)local_b8);
        cVar16 = (char)uVar9;
      }
      piVar6 = local_88;
      if (local_8c == 0) goto LAB_003d1e7d;
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
            piVar6[2] = 0;
            piVar6[3] = 0;
          }
          if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 003d1e3e to 003d1e3f has its CatchHandler @ 003d21d2 */
            (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
          }
          free(piVar6);
        }
      }
      local_a0 = local_a0 & 0xffffffff00000000;
      goto LAB_003d1f0b;
    }
    cVar16 = '\0';
    if ((local_8c == 0) || (local_90 != '\0')) goto LAB_003d1e7d;
    pGVar15 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)(ulong)(uint)piVar8[6];
    if (piVar8[1] == 0) break;
    if (pGVar15 == (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0) {
      piVar8[7] = 2;
LAB_003d1c30:
      local_b0 = *(GSUBGPOSVersion1_2<OT::Layout::SmallTypes> **)(piVar8 + 4);
      pGStack_a8 = pGVar15 + (long)local_b0;
      if (local_b0 == (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0) goto LAB_003d1e76;
    }
    else {
      if (piVar8[7] == 2) goto LAB_003d1c30;
      if (piVar8[7] == 3) {
        piVar8[7] = 1;
      }
      pvVar10 = malloc((size_t)pGVar15);
      if (pvVar10 == (void *)0x0) break;
      memcpy(pvVar10,*(void **)(piVar8 + 4),(size_t)pGVar15);
      if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 003d1d6c to 003d1d6d has its CatchHandler @ 003d21ec */
        (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
      }
      piVar8[7] = 2;
      *(void **)(piVar8 + 4) = pvVar10;
      *(void **)(piVar8 + 8) = pvVar10;
      *(undefined **)(piVar8 + 10) = puVar5;
    }
    local_90 = '\x01';
  }
  local_b0 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0;
  pGStack_a8 = pGVar15;
LAB_003d1e76:
  cVar16 = '\0';
LAB_003d1e7d:
  piVar6 = local_88;
  if ((local_88 != (int *)0x0) && (*local_88 != 0)) {
    LOCK();
    *local_88 = *local_88 + -1;
    UNLOCK();
    if (*local_88 == 0) {
      *local_88 = -0xdead;
      ppVar3 = *(pthread_mutex_t **)(local_88 + 2);
      if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d1ea8 to 003d1eaf has its CatchHandler @ 003d21ea */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar3[1].__data,ppVar3);
        free(ppVar3);
        piVar6[2] = 0;
        piVar6[3] = 0;
      }
      if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 003d1ecd to 003d1ece has its CatchHandler @ 003d21da */
        (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
      }
      free(piVar6);
    }
  }
  local_88 = (int *)0x0;
  local_b0 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0;
  pGStack_a8 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0;
  local_a0 = local_a0 & 0xffffffff00000000;
  if (cVar16 == '\0') {
LAB_003d1f0b:
    local_88 = (int *)0x0;
    pGStack_a8 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0;
    local_b0 = (GSUBGPOSVersion1_2<OT::Layout::SmallTypes> *)0x0;
    if (*piVar8 != 0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        *piVar8 = -0xdead;
        ppVar3 = *(pthread_mutex_t **)(piVar8 + 2);
        if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d1f3c to 003d1f43 has its CatchHandler @ 003d21ea */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar3[1].__data,ppVar3);
          free(ppVar3);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 003d1f64 to 003d1f65 has its CatchHandler @ 003d21e2 */
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
LAB_003d1f71:
  this_00 = local_78;
  *(int **)local_78 = piVar8;
  psVar11 = (short *)&_hb_NullPool;
  if (piVar8 == (int *)0x0) {
    piVar8 = &_hb_NullPool;
  }
  if (3 < (uint)piVar8[6]) {
    psVar11 = *(short **)(piVar8 + 4);
  }
  uVar14 = 0;
  if (*psVar11 == 0x100) {
    uVar1 = psVar11[4];
    if (uVar1 == 0) {
      puVar12 = (ushort *)&_hb_NullPool;
    }
    else {
      puVar12 = (ushort *)((long)psVar11 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    }
    uVar14 = (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8);
  }
  *(uint *)(local_78 + 8) = uVar14;
  pvVar10 = calloc((ulong)uVar14,8);
  *(void **)(this_00 + 0x10) = pvVar10;
  if (pvVar10 == (void *)0x0) {
    *(undefined4 *)(this_00 + 8) = 0;
    hb_blob_ptr_t<OT::Layout::GPOS>::destroy((hb_blob_ptr_t<OT::Layout::GPOS> *)this_00);
    *(int **)local_78 = &_hb_NullPool;
  }
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b8);
  return;
}


