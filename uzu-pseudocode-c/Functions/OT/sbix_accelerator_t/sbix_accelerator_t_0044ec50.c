// Function : sbix_accelerator_t
// Namespace: OT:sbix_accelerator_t
// Entry    : 0044ec50
// Prototype: undefined sbix_accelerator_t(sbix_accelerator_t * this, long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 0044ec50 - 0044f3c9


/* WARNING: Type propagation algorithm not settling */
/* OT::sbix_accelerator_t::sbix_accelerator_t(hb_face_t*) */

void __thiscall
OT::sbix_accelerator_t::sbix_accelerator_t
          (sbix_accelerator_t *this,long param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  pthread_mutex_t *ppVar5;
  int *piVar6;
  undefined *puVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  void *__dest;
  undefined4 *puVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  sbix_accelerator_t *psVar13;
  char cVar14;
  uint uVar15;
  bool bVar16;
  undefined4 local_b8 [2];
  short *local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  char local_90;
  uint local_8c;
  int *local_88;
  uint local_80;
  undefined2 local_7c;
  sbix_accelerator_t *local_78;
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
  local_b0 = (short *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_80 = 0x10000;
  local_7c = 0;
  uVar8 = *(uint *)(param_1 + 0x18);
  if (uVar8 == 0xffffffff) {
    piVar9 = *(int **)(param_1 + 0x78);
    if (piVar9 == (int *)0x0) {
      do {
        lVar4 = *(long *)(param_1 + 0x68);
        piVar9 = &_hb_NullPool;
        if (lVar4 == 0) {
LAB_0044f359:
          uVar8 = piVar9[6];
          goto joined_r0x0044f365;
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
                    /* try { // try from 0044f148 to 0044f162 has its CatchHandler @ 0044f3e6 */
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
        if (bVar16) goto LAB_0044f359;
        if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            *piVar9 = -0xdead;
            ppVar5 = *(pthread_mutex_t **)(piVar9 + 2);
            if (ppVar5 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0044f1b6 to 0044f1bd has its CatchHandler @ 0044f3da */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar5[1].__data,ppVar5);
              free(ppVar5);
              piVar9[2] = 0;
              piVar9[3] = 0;
            }
            if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 0044f1db to 0044f1dc has its CatchHandler @ 0044f3d2 */
              (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
            }
            free(piVar9);
          }
        }
        piVar9 = *(int **)(param_1 + 0x78);
      } while (piVar9 == (int *)0x0);
    }
    uVar8 = piVar9[6];
joined_r0x0044f365:
    if (uVar8 < 6) {
      puVar11 = &_hb_NullPool;
    }
    else {
      puVar11 = *(undefined4 **)(piVar9 + 4);
    }
    uVar1 = *(ushort *)(puVar11 + 1);
    uVar8 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    if (uVar1 == 0) {
      uVar8 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar8;
  }
  local_7c = CONCAT11(local_7c._1_1_,1);
  local_80 = uVar8;
  local_78 = this;
                    /* try { // try from 0044ecd9 to 0044ece2 has its CatchHandler @ 0044f40d */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar9 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x73626978,*(undefined8 *)(param_1 + 0x28)),
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
  puVar7 = PTR_free_00715540;
  local_90 = '\0';
  local_88 = piVar9;
  while( true ) {
    psVar3 = *(short **)(local_88 + 4);
    uVar10 = (ulong)(uint)local_88[6];
    bVar16 = (int)(uVar10 * 0x40 >> 0x20) != 0;
    uVar8 = (uint)(uVar10 * 0x40);
    if (uVar8 < 0x4001) {
      uVar8 = 0x4000;
    }
    uStack_a8 = uVar10 + (long)psVar3;
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    uVar15 = 0x3fffffff;
    if (!bVar16) {
      uVar15 = uVar8;
    }
    local_a0 = CONCAT44(uVar15,local_88[6]);
    local_8c = 0;
    local_b8[0] = 0;
    uStack_98 = uStack_98 & 0xffffffff;
    local_b0 = psVar3;
    if (psVar3 == (short *)0x0) {
                    /* try { // try from 0044f083 to 0044f08c has its CatchHandler @ 0044f40d */
      hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b8);
      goto LAB_0044f03a;
    }
                    /* try { // try from 0044edc0 to 0044edca has its CatchHandler @ 0044f40f */
    uVar10 = sbix::sanitize(psVar3,(long)local_b8,(ulong)bVar16,uVar10,param_4);
    uVar12 = (ulong)local_8c;
    piVar6 = local_88;
    if ((char)uVar10 != '\0') {
      if (local_8c == 0) {
        cVar14 = '\x01';
        goto joined_r0x0044f078;
      }
      local_8c = 0;
                    /* try { // try from 0044ee8b to 0044eed9 has its CatchHandler @ 0044f40d */
      uVar10 = sbix::sanitize(psVar3,(long)local_b8,extraout_RDX,uVar12,param_4);
      piVar6 = local_88;
      if (local_8c == 0) {
        cVar14 = (char)uVar10;
        goto joined_r0x0044f078;
      }
      if ((local_88 != (int *)0x0) && (*local_88 != 0)) {
        LOCK();
        *local_88 = *local_88 + -1;
        UNLOCK();
        if (*local_88 == 0) {
          *local_88 = -0xdead;
          ppVar5 = *(pthread_mutex_t **)(local_88 + 2);
          if (ppVar5 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar5[1].__data,ppVar5);
            free(ppVar5);
            piVar6[2] = 0;
            piVar6[3] = 0;
          }
          if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 0044eef7 to 0044eef8 has its CatchHandler @ 0044f3f5 */
            (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
          }
          free(piVar6);
        }
      }
      local_a0 = local_a0 & 0xffffffff00000000;
      goto LAB_0044efd8;
    }
    cVar14 = '\0';
    if ((local_8c == 0) || (local_90 != '\0')) goto joined_r0x0044f078;
    uVar10 = (ulong)(uint)piVar9[6];
    if (piVar9[1] == 0) break;
    if (uVar10 == 0) {
      piVar9[7] = 2;
LAB_0044ed30:
      local_b0 = *(short **)(piVar9 + 4);
      uStack_a8 = uVar10 + (long)local_b0;
      if (local_b0 == (short *)0x0) goto LAB_0044ef2f;
    }
    else {
      if (piVar9[7] == 2) goto LAB_0044ed30;
      if (piVar9[7] == 3) {
        piVar9[7] = 1;
      }
      __dest = malloc(uVar10);
      if (__dest == (void *)0x0) break;
      memcpy(__dest,*(void **)(piVar9 + 4),uVar10);
      if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 0044ee4f to 0044ee50 has its CatchHandler @ 0044f40f */
        (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
      }
      piVar9[7] = 2;
      *(void **)(piVar9 + 4) = __dest;
      *(void **)(piVar9 + 8) = __dest;
      *(undefined **)(piVar9 + 10) = puVar7;
    }
    local_90 = '\x01';
  }
  local_b0 = (short *)0x0;
  uStack_a8 = uVar10;
LAB_0044ef2f:
  cVar14 = '\0';
  piVar6 = local_88;
joined_r0x0044f078:
  if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      *piVar6 = -0xdead;
      ppVar5 = *(pthread_mutex_t **)(piVar6 + 2);
      local_88 = piVar6;
      if (ppVar5 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0044ef74 to 0044ef7b has its CatchHandler @ 0044f40d */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar5[1].__data,ppVar5);
        free(ppVar5);
        piVar6[2] = 0;
        piVar6[3] = 0;
      }
      if (*(code **)(piVar6 + 10) != (code *)0x0) {
                    /* try { // try from 0044ef9c to 0044ef9d has its CatchHandler @ 0044f3fd */
        (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
      }
      free(piVar6);
    }
  }
  local_88 = (int *)0x0;
  local_b0 = (short *)0x0;
  uStack_a8 = 0;
  local_a0 = local_a0 & 0xffffffff00000000;
  if (cVar14 == '\0') {
LAB_0044efd8:
    local_88 = (int *)0x0;
    uStack_a8 = 0;
    local_b0 = (short *)0x0;
    if (*piVar9 != 0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        *piVar9 = -0xdead;
        ppVar5 = *(pthread_mutex_t **)(piVar9 + 2);
        if (ppVar5 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0044f008 to 0044f00f has its CatchHandler @ 0044f40d */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar5[1].__data,ppVar5);
          free(ppVar5);
          piVar9[2] = 0;
          piVar9[3] = 0;
        }
        if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 0044f02d to 0044f02e has its CatchHandler @ 0044f405 */
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
LAB_0044f03a:
  psVar13 = local_78;
  *(int **)local_78 = piVar9;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b8);
  uVar8 = *(uint *)(param_1 + 0x18);
  if (uVar8 == 0xffffffff) {
    piVar9 = *(int **)(param_1 + 0x78);
    if (piVar9 == (int *)0x0) {
      do {
        lVar4 = *(long *)(param_1 + 0x68);
        piVar9 = &_hb_NullPool;
        if (lVar4 == 0) {
LAB_0044f392:
          uVar8 = piVar9[6];
          psVar13 = local_78;
          goto joined_r0x0044f3a0;
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
                    /* try { // try from 0044f27e to 0044f298 has its CatchHandler @ 0044f3dc */
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
        if (bVar16) goto LAB_0044f392;
        if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            *piVar9 = -0xdead;
            ppVar5 = *(pthread_mutex_t **)(piVar9 + 2);
            if (ppVar5 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar5[1].__data,ppVar5);
              free(ppVar5);
              piVar9[2] = 0;
              piVar9[3] = 0;
            }
            if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 0044f311 to 0044f312 has its CatchHandler @ 0044f3ca */
              (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
            }
            free(piVar9);
          }
        }
        piVar9 = *(int **)(param_1 + 0x78);
        psVar13 = local_78;
      } while (piVar9 == (int *)0x0);
    }
    uVar8 = piVar9[6];
joined_r0x0044f3a0:
    if (uVar8 < 6) {
      puVar11 = &_hb_NullPool;
    }
    else {
      puVar11 = *(undefined4 **)(piVar9 + 4);
    }
    uVar1 = *(ushort *)(puVar11 + 1);
    uVar8 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    if (uVar1 == 0) {
      uVar8 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar8;
  }
  *(uint *)(psVar13 + 8) = uVar8;
  return;
}


