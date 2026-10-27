// Function : accelerator_t
// Namespace: OT:post:accelerator_t
// Entry    : 00449e20
// Prototype: undefined accelerator_t(accelerator_t * this, hb_face_t * param_1)
// Body     : 00449e20 - 0044a40b


/* OT::post::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::post::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  accelerator_t *paVar1;
  ushort uVar2;
  pthread_mutex_t *ppVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  void *pvVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  bool bVar18;
  undefined4 local_b8 [2];
  uint *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined1 local_90;
  undefined4 local_8c;
  int *local_88;
  uint local_80;
  undefined2 local_7c;
  pthread_mutex_t *local_78;
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
  paVar1 = this + 0x18;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  local_b8[0] = 0;
  local_8c = 0;
  local_88 = (int *)0x0;
  local_b0 = (uint *)0x0;
  lStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_80 = 0x10000;
  local_7c = 0;
  uVar12 = *(uint *)(param_1 + 0x18);
  if (uVar12 == 0xffffffff) {
    piVar9 = *(int **)(param_1 + 0x78);
    if (piVar9 == (int *)0x0) {
      do {
        lVar5 = *(long *)(param_1 + 0x68);
        piVar9 = &_hb_NullPool;
        if (lVar5 == 0) goto LAB_0044a22e;
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
                    /* try { // try from 0044a330 to 0044a34c has its CatchHandler @ 0044a416 */
        if ((*(code **)(lVar5 + 0x20) != (code *)0x0) &&
           (piVar9 = (int *)(**(code **)(lVar5 + 0x20))
                                      (lVar5,0x6d617870,*(undefined8 *)(lVar5 + 0x28)),
           piVar9 == (int *)0x0)) {
          piVar9 = &_hb_NullPool;
        }
        piVar9 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar9);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar9 == (int *)0x0) {
          piVar9 = &_hb_NullPool;
          LOCK();
          bVar18 = *(long *)(param_1 + 0x78) == 0;
          if (bVar18) {
            *(int **)(param_1 + 0x78) = &_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar18 = *(long *)(param_1 + 0x78) == 0;
          if (bVar18) {
            *(int **)(param_1 + 0x78) = piVar9;
          }
          UNLOCK();
        }
        if (bVar18) goto LAB_0044a22e;
        if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            *piVar9 = -0xdead;
            local_78 = *(pthread_mutex_t **)(piVar9 + 2);
            if (local_78 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0044a3aa to 0044a3ae has its CatchHandler @ 0044a414 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &local_78[1].__data,local_78);
              free(local_78);
              piVar9[2] = 0;
              piVar9[3] = 0;
            }
            if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 0044a3ce to 0044a3cf has its CatchHandler @ 0044a40c */
              (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
            }
            free(piVar9);
          }
        }
        piVar9 = *(int **)(param_1 + 0x78);
      } while (piVar9 == (int *)0x0);
    }
LAB_0044a22e:
    if ((uint)piVar9[6] < 6) {
      puVar13 = &_hb_NullPool;
    }
    else {
      puVar13 = *(undefined4 **)(piVar9 + 4);
    }
    uVar2 = *(ushort *)(puVar13 + 1);
    uVar12 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
    if (uVar2 == 0) {
      uVar12 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar12;
  }
  local_7c = CONCAT11(local_7c._1_1_,1);
  local_80 = uVar12;
                    /* try { // try from 00449eb8 to 00449fc4 has its CatchHandler @ 0044a43a */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar9 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x706f7374,*(undefined8 *)(param_1 + 0x28)),
     piVar9 == (int *)0x0)) {
    piVar9 = &_hb_NullPool;
    iVar7 = _hb_NullPool;
  }
  else {
    iVar7 = *piVar9;
  }
  if (iVar7 != 0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_b0 = *(uint **)(piVar9 + 4);
  uVar12 = piVar9[6];
  lStack_a8 = (ulong)uVar12 + (long)local_b0;
  lVar5 = (ulong)uVar12 * 0x40;
  uVar6 = (uint)lVar5;
  uVar8 = 0x4000;
  if (0x4000 < uVar6) {
    uVar8 = uVar6;
  }
  if (0x3ffffffe < uVar8) {
    uVar8 = 0x3fffffff;
  }
  local_90 = 0;
  uVar6 = 0x3fffffff;
  if ((int)((ulong)lVar5 >> 0x20) == 0) {
    uVar6 = uVar8;
  }
  local_a0 = CONCAT44(uVar6,uVar12);
  local_8c = 0;
  local_b8[0] = 0;
  uStack_98 = uStack_98 & 0xffffffff;
  local_88 = piVar9;
  if (local_b0 == (uint *)0x0) {
                    /* try { // try from 0044a23a to 0044a241 has its CatchHandler @ 0044a43a */
    hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b8);
  }
  else {
    if (uVar12 < 0x20) {
LAB_00449f57:
      bVar18 = false;
    }
    else {
      uVar8 = *local_b0;
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      bVar18 = true;
      if (uVar8 != 0x10000) {
        if ((uVar8 == 0x20000) && (0x21 < uVar12)) {
          uVar14 = (uint)(ushort)((ushort)local_b0[8] << 8 | (ushort)local_b0[8] >> 8);
          uVar8 = uVar14 * 2;
          if ((uVar8 <= uVar12 - 0x22) &&
             (iVar7 = uVar6 + uVar14 * -2, local_a0 = CONCAT44(iVar7,uVar12),
             iVar7 != 0 && (int)uVar8 <= (int)uVar6)) goto LAB_00449f9b;
        }
        if (*local_b0 != 0x300) goto LAB_00449f57;
      }
    }
LAB_00449f9b:
    if (*piVar9 != 0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        *piVar9 = -0xdead;
        ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
        if (ppVar3 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar3[1].__data,ppVar3);
          free(ppVar3);
          piVar9[2] = 0;
          piVar9[3] = 0;
        }
        if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 00449fe2 to 00449fe3 has its CatchHandler @ 0044a432 */
          (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
        }
        free(piVar9);
      }
    }
    local_88 = (int *)0x0;
    local_b0 = (uint *)0x0;
    lStack_a8 = 0;
    local_a0 = local_a0 & 0xffffffff00000000;
    if (bVar18) {
      if (piVar9[1] != 0) {
        piVar9[1] = 0;
      }
    }
    else {
      if (*piVar9 != 0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          *piVar9 = -0xdead;
          ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
          if (ppVar3 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0044a045 to 0044a04c has its CatchHandler @ 0044a43a */
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar3[1].__data,ppVar3);
            free(ppVar3);
            piVar9[2] = 0;
            piVar9[3] = 0;
          }
          if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 0044a06a to 0044a06b has its CatchHandler @ 0044a42a */
            (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
          }
          free(piVar9);
        }
      }
      piVar9 = &_hb_NullPool;
    }
  }
  *(int **)this = piVar9;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b8);
  puVar13 = *(undefined4 **)this;
  puVar10 = (uint *)&_hb_NullPool;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = &_hb_NullPool;
  }
  uVar12 = puVar13[6];
  if (0x1f < (ulong)uVar12) {
    puVar10 = *(uint **)(puVar13 + 4);
  }
  uVar8 = *puVar10;
  *(uint *)(this + 8) =
       uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  if (uVar8 != 0x200) {
    return;
  }
  puVar13 = *(undefined4 **)this;
  puVar16 = &_hb_NullPool;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = &_hb_NullPool;
  }
  if (0x1f < (uint)puVar13[6]) {
    puVar16 = *(undefined4 **)(puVar13 + 4);
  }
  *(undefined4 **)(this + 0x10) = puVar16 + 8;
  *(ulong *)(this + 0x28) =
       (long)puVar16 +
       (ulong)(ushort)(*(ushort *)(puVar16 + 8) << 8 | *(ushort *)(puVar16 + 8) >> 8) * 2 + 0x22;
  uVar8 = *(uint *)(param_1 + 0x18);
  if (uVar8 == 0xffffffff) {
                    /* try { // try from 0044a26c to 0044a273 has its CatchHandler @ 0044a425 */
    uVar8 = hb_face_t::load_num_glyphs(param_1);
  }
  uVar6 = uVar12 >> 3;
  if (uVar8 <= uVar12 >> 3) {
    uVar6 = uVar8;
  }
  uVar8 = *(uint *)paVar1;
  if (((int)uVar8 < 0) || (uVar6 <= uVar8)) goto LAB_0044a119;
  uVar14 = uVar8;
  do {
    uVar14 = uVar14 + (uVar14 >> 1) + 8;
  } while (uVar14 < uVar6);
  if (uVar14 < 0x40000000) {
    if (uVar14 == 0) {
      free(*(void **)(this + 0x20));
      pvVar11 = (void *)0x0;
    }
    else {
      pvVar11 = realloc(*(void **)(this + 0x20),(ulong)uVar14 << 2);
      if (pvVar11 == (void *)0x0) {
        uVar8 = *(uint *)paVar1;
        if (uVar14 <= uVar8) goto LAB_0044a119;
        goto LAB_0044a2b4;
      }
    }
    *(void **)(this + 0x20) = pvVar11;
    *(uint *)paVar1 = uVar14;
  }
  else {
LAB_0044a2b4:
    *(uint *)paVar1 = ~uVar8;
  }
LAB_0044a119:
  uVar8 = *(uint *)(this + 0x1c);
  if (uVar8 < 0xffff) {
    pbVar17 = (byte *)((long)puVar16 + (ulong)uVar12);
    pbVar15 = *(byte **)(this + 0x28);
    if (pbVar15 < pbVar17) {
      while (pbVar15 + *pbVar15 < pbVar17) {
        uVar4 = *(undefined8 *)(this + 0x28);
        uVar12 = *(uint *)(this + 0x18);
        if ((int)uVar8 < (int)uVar12) {
LAB_0044a167:
          uVar12 = *(uint *)(this + 0x1c);
          *(uint *)(this + 0x1c) = uVar12 + 1;
          *(int *)(*(long *)(this + 0x20) + (ulong)uVar12 * 4) = (int)pbVar15 - (int)uVar4;
          uVar8 = *(uint *)(this + 0x1c);
        }
        else {
          if (-1 < (int)uVar12) {
            if (uVar12 <= uVar8) {
              uVar6 = uVar12;
              do {
                uVar6 = uVar6 + (uVar6 >> 1) + 8;
              } while (uVar6 <= uVar8);
              if (0x3fffffff < uVar6) {
LAB_0044a1dc:
                *(uint *)paVar1 = ~uVar12;
                goto LAB_0044a1e2;
              }
              pvVar11 = realloc(*(void **)(this + 0x20),(ulong)uVar6 << 2);
              if (pvVar11 == (void *)0x0) {
                uVar12 = *(uint *)paVar1;
                if (uVar12 < uVar6) goto LAB_0044a1dc;
              }
              else {
                *(void **)(this + 0x20) = pvVar11;
                *(uint *)(this + 0x18) = uVar6;
              }
            }
            goto LAB_0044a167;
          }
LAB_0044a1e2:
          _hb_CrapPool._0_4_ = 0;
          uVar8 = *(uint *)(this + 0x1c);
        }
        if (0xfffe < uVar8) {
          return;
        }
        pbVar15 = pbVar15 + (ulong)*pbVar15 + 1;
        if (pbVar17 <= pbVar15) {
          return;
        }
      }
    }
  }
  return;
}


