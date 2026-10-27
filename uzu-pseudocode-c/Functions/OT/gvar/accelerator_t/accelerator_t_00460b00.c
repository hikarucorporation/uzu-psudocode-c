// Function : accelerator_t
// Namespace: OT:gvar:accelerator_t
// Entry    : 00460b00
// Prototype: undefined accelerator_t(accelerator_t * this, hb_face_t * param_1)
// Body     : 00460b00 - 004611d1


/* OT::gvar::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall OT::gvar::accelerator_t::accelerator_t(accelerator_t *this,hb_face_t *param_1)

{
  pthread_mutex_t *ppVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  short *psVar6;
  undefined4 *puVar7;
  ulong uVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 *puVar11;
  ushort uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  undefined4 local_b0 [2];
  short *local_a8;
  long lStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  int *local_80;
  uint local_78;
  undefined2 local_74;
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
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  local_b0[0] = 0;
  local_84 = 0;
  local_80 = (int *)0x0;
  local_a8 = (short *)0x0;
  lStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_78 = 0x10000;
  local_74 = 0;
  uVar10 = *(uint *)(param_1 + 0x18);
  if (uVar10 == 0xffffffff) {
    piVar5 = *(int **)(param_1 + 0x78);
    if (piVar5 == (int *)0x0) {
      do {
        lVar16 = *(long *)(param_1 + 0x68);
        piVar5 = &_hb_NullPool;
        if (lVar16 == 0) goto LAB_00460fee;
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
        piVar5 = &_hb_NullPool;
                    /* try { // try from 004610fa to 00461114 has its CatchHandler @ 004611dc */
        if ((*(code **)(lVar16 + 0x20) != (code *)0x0) &&
           (piVar5 = (int *)(**(code **)(lVar16 + 0x20))
                                      (lVar16,0x6d617870,*(undefined8 *)(lVar16 + 0x28)),
           piVar5 == (int *)0x0)) {
          piVar5 = &_hb_NullPool;
        }
        piVar5 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar5);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar5 == (int *)0x0) {
          piVar5 = &_hb_NullPool;
          LOCK();
          bVar21 = *(long *)(param_1 + 0x78) == 0;
          if (bVar21) {
            *(int **)(param_1 + 0x78) = &_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar21 = *(long *)(param_1 + 0x78) == 0;
          if (bVar21) {
            *(int **)(param_1 + 0x78) = piVar5;
          }
          UNLOCK();
        }
        if (bVar21) goto LAB_00460fee;
        if (((piVar5 != (int *)0x0) && (piVar5 != &_hb_NullPool)) && (*piVar5 != 0)) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            *piVar5 = -0xdead;
            ppVar1 = *(pthread_mutex_t **)(piVar5 + 2);
            if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00461170 to 00461174 has its CatchHandler @ 004611da */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar1[1].__data,ppVar1);
              free(ppVar1);
              piVar5[2] = 0;
              piVar5[3] = 0;
            }
            if (*(code **)(piVar5 + 10) != (code *)0x0) {
                    /* try { // try from 00461194 to 00461195 has its CatchHandler @ 004611d2 */
              (**(code **)(piVar5 + 10))(*(undefined8 *)(piVar5 + 8));
            }
            free(piVar5);
          }
        }
        piVar5 = *(int **)(param_1 + 0x78);
      } while (piVar5 == (int *)0x0);
    }
LAB_00460fee:
    if ((uint)piVar5[6] < 6) {
      puVar11 = &_hb_NullPool;
    }
    else {
      puVar11 = *(undefined4 **)(piVar5 + 4);
    }
    uVar12 = *(ushort *)(puVar11 + 1);
    uVar10 = (uint)(ushort)(uVar12 << 8 | uVar12 >> 8);
    if (uVar12 == 0) {
      uVar10 = 0;
    }
    *(uint *)(param_1 + 0x18) = uVar10;
  }
  local_74 = CONCAT11(local_74._1_1_,1);
  local_78 = uVar10;
                    /* try { // try from 00460b92 to 00460cd3 has its CatchHandler @ 00461200 */
  if ((*(code **)(param_1 + 0x20) == (code *)0x0) ||
     (piVar5 = (int *)(**(code **)(param_1 + 0x20))
                                (param_1,0x67766172,*(undefined8 *)(param_1 + 0x28)),
     piVar5 == (int *)0x0)) {
    piVar5 = &_hb_NullPool;
    iVar15 = _hb_NullPool;
  }
  else {
    iVar15 = *piVar5;
  }
  if (iVar15 != 0) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  uVar10 = piVar5[6];
  uVar20 = (ulong)uVar10;
  uVar3 = (uint)(uVar20 * 0x40);
  local_a8 = *(short **)(piVar5 + 4);
  lStack_a0 = (long)local_a8 + uVar20;
  uVar4 = 0x4000;
  if (0x4000 < uVar3) {
    uVar4 = uVar3;
  }
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  local_88 = 0;
  uVar3 = 0x3fffffff;
  if ((int)(uVar20 * 0x40 >> 0x20) == 0) {
    uVar3 = uVar4;
  }
  local_98 = CONCAT44(uVar3,uVar10);
  local_84 = 0;
  local_b0[0] = 0;
  uStack_90 = uStack_90 & 0xffffffff;
  local_80 = piVar5;
  if (local_a8 == (short *)0x0) {
                    /* try { // try from 00460ffd to 00461006 has its CatchHandler @ 00461200 */
    hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_b0);
  }
  else {
    if ((uVar10 < 0x14) || (*local_a8 != 0x100)) {
LAB_00460ca4:
      bVar21 = false;
    }
    else {
      uVar4 = (uint)(ushort)(local_a8[3] << 8 | (ushort)local_a8[3] >> 8) *
              (uint)(ushort)(local_a8[2] << 8 | (ushort)local_a8[2] >> 8);
      if (CARRY4(uVar4,uVar4)) goto LAB_00460ca4;
      uVar17 = *(uint *)(local_a8 + 4);
      uVar17 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 | uVar17 << 0x18;
      if ((uVar20 < uVar17) || ((int)lStack_a0 - (uVar17 + (int)local_a8) < uVar4 * 2))
      goto LAB_00460ca4;
      iVar15 = uVar3 + uVar4 * -2;
      local_98 = CONCAT44(iVar15,uVar10);
      if (iVar15 < 1) goto LAB_00460ca4;
      uVar4 = local_78 + 1;
      if ((*(byte *)((long)local_a8 + 0xf) & 1) != 0) {
        uVar3 = (uint)((ulong)uVar4 * 4);
        if ((int)((ulong)uVar4 * 4 >> 0x20) == 0) goto LAB_00460c91;
        goto LAB_00460ca4;
      }
      uVar3 = uVar4 * 2;
      if (CARRY4(uVar4,uVar4)) goto LAB_00460ca4;
LAB_00460c91:
      if (uVar10 - 0x14 < uVar3) goto LAB_00460ca4;
      local_98 = CONCAT44(iVar15 - uVar3,uVar10);
      bVar21 = true;
      if ((int)(iVar15 - uVar3) < 1) goto LAB_00460ca4;
    }
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        *piVar5 = -0xdead;
        ppVar1 = *(pthread_mutex_t **)(piVar5 + 2);
        if (ppVar1 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar1[1].__data,ppVar1);
          free(ppVar1);
          piVar5[2] = 0;
          piVar5[3] = 0;
        }
        if (*(code **)(piVar5 + 10) != (code *)0x0) {
                    /* try { // try from 00460cf1 to 00460cf2 has its CatchHandler @ 004611f8 */
          (**(code **)(piVar5 + 10))(*(undefined8 *)(piVar5 + 8));
        }
        free(piVar5);
      }
    }
    local_80 = (int *)0x0;
    local_a8 = (short *)0x0;
    lStack_a0 = 0;
    local_98 = local_98 & 0xffffffff00000000;
    if (bVar21) {
      if (piVar5[1] != 0) {
        piVar5[1] = 0;
      }
    }
    else {
      if (*piVar5 != 0) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) {
          *piVar5 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(piVar5 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00460d59 to 00460d60 has its CatchHandler @ 00461200 */
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar5[2] = 0;
            piVar5[3] = 0;
          }
          if (*(code **)(piVar5 + 10) != (code *)0x0) {
                    /* try { // try from 00460d7e to 00460d7f has its CatchHandler @ 004611f0 */
            (**(code **)(piVar5 + 10))(*(undefined8 *)(piVar5 + 8));
          }
          free(piVar5);
        }
      }
      piVar5 = &_hb_NullPool;
    }
  }
  *(int **)this = piVar5;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_b0);
  puVar11 = *(undefined4 **)this;
  psVar6 = (short *)&_hb_NullPool;
  puVar13 = puVar11;
  if (puVar11 == (undefined4 *)0x0) {
    puVar13 = &_hb_NullPool;
  }
  if (0x13 < (uint)puVar13[6]) {
    psVar6 = *(short **)(puVar13 + 4);
  }
  if (*psVar6 == 0 && psVar6[1] == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(param_1 + 0x18);
    if (iVar15 == -1) {
                    /* try { // try from 00460dc8 to 00460dcf has its CatchHandler @ 004611eb */
      iVar15 = hb_face_t::load_num_glyphs(param_1);
      puVar11 = *(undefined4 **)this;
    }
  }
  *(int *)(this + 8) = iVar15;
  puVar13 = &_hb_NullPool;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &_hb_NullPool;
  }
  if (0x13 < (uint)puVar11[6]) {
    puVar13 = *(undefined4 **)(puVar11 + 4);
  }
  uVar12 = *(ushort *)((long)puVar13 + 6);
  uVar2 = uVar12 << 8 | uVar12 >> 8;
  uVar10 = 0;
  if (uVar12 != 0) {
    uVar10 = (uint)uVar2;
  }
  uVar4 = *(uint *)(this + 0x10);
  if ((int)uVar4 < 0) {
    return;
  }
  uVar3 = puVar13[2];
  uVar17 = uVar4;
  if (uVar4 < uVar10) {
    do {
      uVar17 = uVar17 + (uVar17 >> 1) + 8;
    } while (uVar17 < uVar10);
    if (0x1fffffff < uVar17) {
LAB_00461052:
      *(uint *)(this + 0x10) = ~uVar4;
      return;
    }
    if (uVar17 == 0) {
      free(*(void **)(this + 0x18));
      pvVar9 = (void *)0x0;
    }
    else {
      pvVar9 = realloc(*(void **)(this + 0x18),(ulong)uVar17 << 3);
      if (pvVar9 == (void *)0x0) {
        uVar4 = *(uint *)(this + 0x10);
        if (uVar17 <= uVar4) goto LAB_00460e26;
        goto LAB_00461052;
      }
    }
    *(void **)(this + 0x18) = pvVar9;
    *(uint *)(this + 0x10) = uVar17;
  }
LAB_00460e26:
  *(uint *)(this + 0x14) = uVar10;
  puVar11 = *(undefined4 **)this;
  puVar7 = &_hb_NullPool;
  if (puVar11 == (undefined4 *)0x0) {
    puVar11 = &_hb_NullPool;
  }
  if (0x13 < (uint)puVar11[6]) {
    puVar7 = *(undefined4 **)(puVar11 + 4);
  }
  if (uVar12 != 0) {
    uVar12 = *(ushort *)(puVar7 + 1);
    uVar10 = (uint)uVar2;
    if (uVar12 == 0) {
      uVar20 = 1;
      if (1 < uVar2) {
        uVar20 = (ulong)uVar10;
      }
      uVar18 = (ulong)((uint)uVar20 & 7);
      if (uVar20 - 1 < 7) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined8 *)(*(long *)(this + 0x18) + uVar8 * 8) = 0xffffffffffffffff;
          *(undefined8 *)(*(long *)(this + 0x18) + 8 + uVar8 * 8) = 0xffffffffffffffff;
          *(undefined8 *)(*(long *)(this + 0x18) + 0x10 + uVar8 * 8) = 0xffffffffffffffff;
          *(undefined8 *)(*(long *)(this + 0x18) + 0x18 + uVar8 * 8) = 0xffffffffffffffff;
          *(undefined8 *)(*(long *)(this + 0x18) + 0x20 + uVar8 * 8) = 0xffffffffffffffff;
          *(undefined8 *)(*(long *)(this + 0x18) + 0x28 + uVar8 * 8) = 0xffffffffffffffff;
          *(undefined8 *)(*(long *)(this + 0x18) + 0x30 + uVar8 * 8) = 0xffffffffffffffff;
          *(undefined8 *)(*(long *)(this + 0x18) + 0x38 + uVar8 * 8) = 0xffffffffffffffff;
          uVar8 = uVar8 + 8;
        } while (((uint)uVar20 & 0xfffffff8) != uVar8);
      }
      for (; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined8 *)(*(long *)(this + 0x18) + uVar8 * 8) = 0xffffffffffffffff;
        uVar8 = uVar8 + 1;
      }
    }
    else {
      uVar2 = uVar12 << 8 | uVar12 >> 8;
      uVar12 = 1;
      if (1 < uVar2) {
        uVar12 = uVar2;
      }
      uVar20 = 1;
      if (1 < uVar10) {
        uVar20 = (ulong)uVar10;
      }
      lVar16 = (long)puVar13 +
               (ulong)(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18);
      uVar18 = 0;
      do {
        uVar8 = 0xffffffff;
        uVar19 = 0;
        uVar14 = 0xffffffff;
        do {
          if (*(short *)(lVar16 + uVar19 * 2) != 0) {
            if ((int)uVar14 == -1) {
              uVar14 = uVar19 & 0xffffffff;
            }
            else {
              if ((int)uVar8 != -1) {
                uVar10 = 0xffffffff;
                uVar8 = 0xffffffff;
                break;
              }
              uVar8 = uVar19 & 0xffffffff;
            }
          }
          uVar10 = (uint)uVar14;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
        *(ulong *)(*(long *)(this + 0x18) + uVar18 * 8) = (ulong)uVar10 | uVar8 << 0x20;
        uVar18 = uVar18 + 1;
        lVar16 = lVar16 + (ulong)uVar2 * 2;
      } while (uVar18 != uVar20);
    }
  }
  return;
}


