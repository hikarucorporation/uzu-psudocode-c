// Function : accelerator_t
// Namespace: AAT:mortmorx_AAT__mort_AAT__ObsoleteTypes_1836020340u_:accelerator_t
// Entry    : 003d98a0
// Prototype: undefined accelerator_t(accelerator_t * this, long param_1)
// Body     : 003d98a0 - 003d9f7e


/* AAT::mortmorx<AAT::mort, AAT::ObsoleteTypes,
   1836020340u>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::accelerator_t
          (accelerator_t *this,long param_1)

{
  int iVar1;
  ushort *puVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  int *piVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  void *pvVar12;
  uint uVar13;
  Chain<AAT::ObsoleteTypes> *this_00;
  char cVar14;
  ulong __size;
  Chain<AAT::ObsoleteTypes> *this_01;
  accelerator_t *this_02;
  uint uVar15;
  bool bVar16;
  undefined4 local_b8 [2];
  ushort *local_b0;
  ulong uStack_a8;
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
  local_b8[0] = 0;
  local_8c = 0;
  local_88 = (int *)0x0;
  local_b0 = (ushort *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_80 = 0x10000;
  local_7c = 0;
  uVar15 = *(uint *)(param_1 + 0x18);
  if (uVar15 == 0xffffffff) {
    piVar9 = *(int **)(param_1 + 0x78);
    if (piVar9 == (int *)0x0) {
      do {
        lVar4 = *(long *)(param_1 + 0x68);
        piVar9 = &_hb_NullPool;
        if (lVar4 == 0) goto LAB_003d9dfe;
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
                    /* try { // try from 003d9ea7 to 003d9ec1 has its CatchHandler @ 003d9f89 */
        if ((*(code **)(lVar4 + 0x20) != (code *)0x0) &&
           (piVar9 = (int *)(**(code **)(lVar4 + 0x20))
                                      (lVar4,0x6d617870,*(undefined8 *)(lVar4 + 0x28)),
           piVar9 == (int *)0x0)) {
          piVar9 = &_hb_NullPool;
        }
        piVar9 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar9);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar9 == (int *)0x0) {
          piVar9 = &_hb_NullPool;
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
            *(long *)(param_1 + 0x78) = (long)piVar9;
          }
          UNLOCK();
        }
        if (bVar16) goto LAB_003d9dfe;
        if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            *piVar9 = -0xdead;
            ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
            if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d9f1d to 003d9f21 has its CatchHandler @ 003d9f87 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar3[1].__data,ppVar3);
              free(ppVar3);
              piVar9[2] = 0;
              piVar9[3] = 0;
            }
            if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 003d9f41 to 003d9f42 has its CatchHandler @ 003d9f7f */
              (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
            }
            free(piVar9);
          }
        }
        piVar9 = *(int **)(param_1 + 0x78);
      } while (piVar9 == (int *)0x0);
    }
LAB_003d9dfe:
    if ((uint)piVar9[6] < 6) {
      puVar11 = &_hb_NullPool;
    }
    else {
      puVar11 = *(undefined4 **)(piVar9 + 4);
    }
    uVar7 = *(ushort *)(puVar11 + 1);
    uVar15 = (uint)(ushort)(uVar7 << 8 | uVar7 >> 8);
    if (uVar7 == 0) {
      uVar15 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar15;
  }
  local_7c = CONCAT11(local_7c._1_1_,1);
  local_80 = uVar15;
                    /* try { // try from 003d9925 to 003d992e has its CatchHandler @ 003d9fb4 */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar9 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x6d6f7274,*(undefined8 *)(param_1 + 0x28)),
     piVar9 == (int *)0x0)) {
    piVar9 = &_hb_NullPool;
    iVar1 = _hb_NullPool;
  }
  else {
    iVar1 = *piVar9;
  }
  if (iVar1 != 0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_90 = '\0';
  local_88 = piVar9;
  local_78 = this;
  while( true ) {
    puVar2 = *(ushort **)(local_88 + 4);
    uVar15 = local_88[6];
    uStack_a8 = (ulong)uVar15 + (long)puVar2;
    lVar4 = (ulong)uVar15 * 0x40;
    uVar8 = (uint)lVar4;
    if (uVar8 < 0x4001) {
      uVar8 = 0x4000;
    }
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar13 = 0x3fffffff;
    if ((int)((ulong)lVar4 >> 0x20) == 0) {
      uVar13 = uVar8;
    }
    local_a0 = CONCAT44(uVar13,uVar15);
    local_8c = 0;
    local_b8[0] = 0;
    uStack_98 = uStack_98 & 0xffffffff;
    local_b0 = puVar2;
    if (puVar2 == (ushort *)0x0) {
                    /* try { // try from 003d9dde to 003d9e1a has its CatchHandler @ 003d9fb4 */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b8);
      this_02 = local_78;
      goto LAB_003d9d61;
    }
    if (uVar15 < 2) goto LAB_003d9b5d;
    uVar7 = *puVar2;
    if ((uVar7 == 0) || (uVar15 < 8)) goto LAB_003d9b5d;
    uVar15 = *(uint *)(puVar2 + 2);
    cVar6 = '\x01';
    if (uVar15 == 0) goto LAB_003d9c6c;
    this_01 = (Chain<AAT::ObsoleteTypes> *)(puVar2 + 4);
    uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    this_00 = this_01;
    while( true ) {
      uVar15 = uVar15 - 1;
                    /* try { // try from 003d9a27 to 003d9a31 has its CatchHandler @ 003d9fb6 */
      uVar10 = Chain<AAT::ObsoleteTypes>::sanitize
                         (this_00,(long)local_b8,(uint)(ushort)(uVar7 << 8 | uVar7 >> 8));
      if ((char)uVar10 == '\0') break;
      if (uVar15 == 0) {
        if (local_8c == 0) goto LAB_003d9c6c;
        local_8c = 0;
        if ((local_a0 & 0xffffffff) < (ulong)((long)puVar2 + (2 - (long)local_b0)))
        goto LAB_003d9b5d;
        uVar7 = *puVar2;
        cVar14 = '\0';
        if ((uVar7 != 0) && ((ulong)((long)this_01 - (long)local_b0) <= (local_a0 & 0xffffffff))) {
          uVar15 = *(uint *)(puVar2 + 2);
          cVar14 = '\x01';
          if (uVar15 != 0) {
            uVar8 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                    uVar15 << 0x18;
            uVar15 = 1;
            if (1 < uVar8) {
              uVar15 = uVar8;
            }
            while( true ) {
              uVar15 = uVar15 - 1;
                    /* try { // try from 003d9bb7 to 003d9bc1 has its CatchHandler @ 003d9fb2 */
              uVar10 = Chain<AAT::ObsoleteTypes>::sanitize
                                 (this_01,(long)local_b8,(uint)(ushort)(uVar7 << 8 | uVar7 >> 8));
              this_02 = local_78;
              piVar5 = local_88;
              if (((char)uVar10 == '\0') || (uVar15 == 0)) break;
              uVar8 = *(uint *)(this_01 + 4);
              this_01 = this_01 + (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                                  uVar8 << 0x18);
              uVar7 = *puVar2;
            }
            cVar6 = (char)uVar10;
            if (local_8c == 0) goto LAB_003d9c6c;
            if ((local_88 != (int *)0x0) && (*local_88 != 0)) {
              LOCK();
              *local_88 = *local_88 + -1;
              UNLOCK();
              if (*local_88 == 0) {
                *local_88 = -0xdead;
                ppVar3 = *(pthread_mutex_t **)(local_88 + 2);
                if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d9c1d to 003d9c24 has its CatchHandler @ 003d9fb4 */
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar3[1].__data,ppVar3);
                  free(ppVar3);
                  piVar5[2] = 0;
                  piVar5[3] = 0;
                }
                if (*(code **)(piVar5 + 10) != (code *)0x0) {
                    /* try { // try from 003d9c42 to 003d9c43 has its CatchHandler @ 003d9f98 */
                  (**(code **)(piVar5 + 10))(*(undefined8 *)(piVar5 + 8));
                }
                free(piVar5);
              }
            }
            local_a0 = local_a0 & 0xffffffff00000000;
            goto LAB_003d9d03;
          }
        }
        goto LAB_003d9c71;
      }
      uVar8 = *(uint *)(this_00 + 4);
      this_00 = this_00 + (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18);
      uVar7 = *puVar2;
    }
    cVar14 = '\0';
    cVar6 = '\0';
    if (local_8c == 0) goto LAB_003d9c6c;
    if (local_90 != '\0') goto LAB_003d9c71;
    __size = (ulong)(uint)piVar9[6];
    if (piVar9[1] == 0) break;
    if (__size == 0) {
      piVar9[7] = 2;
LAB_003d9b06:
      local_b0 = *(ushort **)(piVar9 + 4);
      uStack_a8 = __size + (long)local_b0;
      if (local_b0 == (ushort *)0x0) goto LAB_003d9b5d;
    }
    else {
      if (piVar9[7] == 2) goto LAB_003d9b06;
      if (piVar9[7] == 3) {
        piVar9[7] = 1;
      }
      pvVar12 = malloc(__size);
      if (pvVar12 == (void *)0x0) break;
      memcpy(pvVar12,*(void **)(piVar9 + 4),__size);
      if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 003d9ace to 003d9acf has its CatchHandler @ 003d9fb0 */
        (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
      }
      piVar9[7] = 2;
      *(void **)(piVar9 + 4) = pvVar12;
      *(void **)(piVar9 + 8) = pvVar12;
      *(undefined **)(piVar9 + 10) = PTR_free_00715540;
    }
    local_90 = '\x01';
  }
  local_b0 = (ushort *)0x0;
  uStack_a8 = __size;
LAB_003d9b5d:
  cVar14 = '\0';
LAB_003d9c71:
  this_02 = local_78;
  piVar5 = local_88;
  if ((local_88 != (int *)0x0) && (*local_88 != 0)) {
    LOCK();
    *local_88 = *local_88 + -1;
    UNLOCK();
    if (*local_88 == 0) {
      *local_88 = -0xdead;
      ppVar3 = *(pthread_mutex_t **)(local_88 + 2);
      if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d9ca2 to 003d9ca9 has its CatchHandler @ 003d9fb4 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar3[1].__data,ppVar3);
        free(ppVar3);
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      if (*(code **)(piVar5 + 10) != (code *)0x0) {
                    /* try { // try from 003d9cc7 to 003d9cc8 has its CatchHandler @ 003d9fa8 */
        (**(code **)(piVar5 + 10))(*(undefined8 *)(piVar5 + 8));
      }
      free(piVar5);
    }
  }
  local_88 = (int *)0x0;
  local_b0 = (ushort *)0x0;
  uStack_a8 = 0;
  local_a0 = local_a0 & 0xffffffff00000000;
  if (cVar14 == '\0') {
LAB_003d9d03:
    local_88 = (int *)0x0;
    uStack_a8 = 0;
    local_b0 = (ushort *)0x0;
    if (*piVar9 != 0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        *piVar9 = -0xdead;
        ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
        if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d9d2f to 003d9d36 has its CatchHandler @ 003d9fb4 */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar3[1].__data,ppVar3);
          free(ppVar3);
          piVar9[2] = 0;
          piVar9[3] = 0;
        }
        if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 003d9d54 to 003d9d55 has its CatchHandler @ 003d9fa0 */
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
LAB_003d9d61:
  *(int **)this_02 = piVar9;
  puVar11 = &_hb_NullPool;
  if (piVar9 == (int *)0x0) {
    piVar9 = &_hb_NullPool;
  }
  if (7 < (uint)piVar9[6]) {
    puVar11 = *(undefined4 **)(piVar9 + 4);
  }
  uVar15 = puVar11[1];
  uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
  *(uint *)(this_02 + 8) = uVar15;
  pvVar12 = calloc((ulong)uVar15,8);
  *(void **)(this_02 + 0x10) = pvVar12;
  if (pvVar12 == (void *)0x0) {
    *(undefined4 *)(this_02 + 8) = 0;
    hb_blob_ptr_t<AAT::mort>::destroy((hb_blob_ptr_t<AAT::mort> *)this_02);
    *(int **)this_02 = &_hb_NullPool;
  }
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b8);
  return;
LAB_003d9c6c:
  cVar14 = cVar6;
  goto LAB_003d9c71;
}


