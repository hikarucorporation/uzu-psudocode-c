// Function : accelerator_t
// Namespace: OT:hmtxvmtx_OT__vmtx_OT__vhea_OT__VVAR_:accelerator_t
// Entry    : 00461cd0
// Prototype: undefined accelerator_t(accelerator_t * this, hb_face_t * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00461cd0 - 00462934


/* OT::hmtxvmtx<OT::vmtx, OT::vhea, OT::VVAR>::accelerator_t::accelerator_t(hb_face_t*) */

void __thiscall
OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::accelerator_t
          (accelerator_t *this,hb_face_t *param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  accelerator_t *paVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulong uVar8;
  void *__dest;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  HVARVVAR *pHVar12;
  ulong uVar13;
  HVARVVAR *pHVar14;
  uint uVar15;
  HVARVVAR *pHVar16;
  int *piVar17;
  HVARVVAR *pHVar18;
  undefined7 uVar19;
  hb_face_t *phVar20;
  undefined1 uVar21;
  bool bVar22;
  undefined4 local_c0 [2];
  HVARVVAR *local_b8;
  HVARVVAR *pHStack_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  char local_98;
  uint local_94;
  int *local_90;
  uint local_88;
  undefined2 local_84;
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
  
  uVar19 = (undefined7)((ulong)param_4 >> 8);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  local_c0[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x0;
  local_b8 = (HVARVVAR *)0x0;
  pHStack_b0 = (HVARVVAR *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_88 = 0x10000;
  local_84 = 0;
  uVar6 = *(uint *)(param_1 + 0x18);
  local_80 = param_1;
  if (uVar6 == 0xffffffff) {
    piVar7 = *(int **)(param_1 + 0x78);
    if (piVar7 == (int *)0x0) {
      piVar17 = &_hb_NullPool;
      do {
        lVar2 = *(long *)(local_80 + 0x68);
        if (lVar2 == 0) goto LAB_0046258b;
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
        piVar7 = &_hb_NullPool;
                    /* try { // try from 004626f5 to 0046270f has its CatchHandler @ 0046294b */
        if ((*(code **)(lVar2 + 0x20) != (code *)0x0) &&
           (piVar7 = (int *)(**(code **)(lVar2 + 0x20))
                                      (lVar2,0x6d617870,*(undefined8 *)(lVar2 + 0x28)),
           piVar7 == (int *)0x0)) {
          piVar7 = &_hb_NullPool;
        }
        piVar7 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar7);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar7 == (int *)0x0) {
          piVar7 = &_hb_NullPool;
          LOCK();
          bVar22 = *(long *)(local_80 + 0x78) == 0;
          if (bVar22) {
            *(int **)(local_80 + 0x78) = &_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar22 = *(long *)(local_80 + 0x78) == 0;
          if (bVar22) {
            *(int **)(local_80 + 0x78) = piVar7;
          }
          UNLOCK();
        }
        if (bVar22) {
          piVar17 = piVar7;
          goto LAB_0046258b;
        }
        if (((piVar7 != (int *)0x0) && (piVar7 != &_hb_NullPool)) && (*piVar7 != 0)) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            *piVar7 = -0xdead;
            ppVar1 = *(pthread_mutex_t **)(piVar7 + 2);
            if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00462766 to 0046276d has its CatchHandler @ 00462947 */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar1[1].__data,ppVar1);
              free(ppVar1);
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 0046278b to 0046278c has its CatchHandler @ 0046293f */
              (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
            }
            free(piVar7);
          }
        }
        piVar7 = *(int **)(local_80 + 0x78);
      } while (piVar7 == (int *)0x0);
    }
    piVar17 = piVar7;
LAB_0046258b:
    if ((uint)piVar17[6] < 6) {
      puVar9 = &_hb_NullPool;
    }
    else {
      puVar9 = *(undefined4 **)(piVar17 + 4);
    }
    uVar4 = *(ushort *)(puVar9 + 1);
    uVar6 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
    if (uVar4 == 0) {
      uVar6 = 0;
    }
    *(uint *)(local_80 + 0x18) = uVar6;
  }
  phVar20 = local_80;
  local_84 = CONCAT11(local_84._1_1_,1);
  local_88 = uVar6;
                    /* try { // try from 00461d57 to 00461e1f has its CatchHandler @ 0046297a */
  if ((*(code **)(local_80 + 0x20) == (code *)0x0) ||
     (piVar7 = (int *)(**(code **)(local_80 + 0x20))
                                (local_80,0x766d7478,*(undefined8 *)(local_80 + 0x28)),
     piVar7 == (int *)0x0)) {
    piVar7 = &_hb_NullPool;
    iVar11 = _hb_NullPool;
  }
  else {
    iVar11 = *piVar7;
  }
  if (iVar11 != 0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  local_98 = 0;
  local_b8 = *(HVARVVAR **)(piVar7 + 4);
  local_a8._0_4_ = piVar7[6];
  pHStack_b0 = (HVARVVAR *)((ulong)(uint)local_a8 + (long)local_b8);
  lVar2 = (ulong)(uint)local_a8 * 0x40;
  uVar21 = (int)((ulong)lVar2 >> 0x20) != 0;
  uVar5 = (uint)lVar2;
  uVar6 = 0x4000;
  if (0x4000 < uVar5) {
    uVar6 = uVar5;
  }
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  local_a8._4_4_ = 0x3fffffff;
  if (!(bool)uVar21) {
    local_a8._4_4_ = uVar6;
  }
  local_94 = 0;
  local_c0[0] = 0;
  uStack_a0 = uStack_a0 & 0xffffffff;
  local_90 = piVar7;
  if (local_b8 == (HVARVVAR *)0x0) {
                    /* try { // try from 004625a3 to 004625ac has its CatchHandler @ 0046297a */
    hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_c0);
  }
  else {
    if (*piVar7 != 0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        *piVar7 = -0xdead;
        ppVar1 = *(pthread_mutex_t **)(piVar7 + 2);
        if (ppVar1 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar1[1].__data,ppVar1);
          free(ppVar1);
          piVar7[2] = 0;
          piVar7[3] = 0;
        }
        if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 00461e3d to 00461e3e has its CatchHandler @ 00462972 */
          (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
        }
        free(piVar7);
      }
    }
    local_90 = (int *)0x0;
    local_b8 = (HVARVVAR *)0x0;
    pHStack_b0 = (HVARVVAR *)0x0;
    local_a8._0_4_ = 0;
    if (piVar7[1] != 0) {
      piVar7[1] = 0;
    }
  }
  *(int **)(this + 0x18) = piVar7;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_c0);
  local_c0[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x0;
  local_b8 = (HVARVVAR *)0x0;
  pHStack_b0 = (HVARVVAR *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_88 = 0x10000;
  local_84 = 0;
  uVar6 = *(uint *)(phVar20 + 0x18);
  if (uVar6 == 0xffffffff) {
    piVar7 = *(int **)(phVar20 + 0x78);
    if (piVar7 == (int *)0x0) {
      piVar17 = &_hb_NullPool;
      do {
        lVar2 = *(long *)(local_80 + 0x68);
        if (lVar2 == 0) goto LAB_004625c2;
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
        piVar7 = &_hb_NullPool;
                    /* try { // try from 00462836 to 00462850 has its CatchHandler @ 00462949 */
        if ((*(code **)(lVar2 + 0x20) != (code *)0x0) &&
           (piVar7 = (int *)(**(code **)(lVar2 + 0x20))
                                      (lVar2,0x6d617870,*(undefined8 *)(lVar2 + 0x28)),
           piVar7 == (int *)0x0)) {
          piVar7 = &_hb_NullPool;
        }
        piVar7 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar7);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar7 == (int *)0x0) {
          piVar7 = &_hb_NullPool;
          LOCK();
          bVar22 = *(long *)(local_80 + 0x78) == 0;
          if (bVar22) {
            *(int **)(local_80 + 0x78) = &_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar22 = *(long *)(local_80 + 0x78) == 0;
          if (bVar22) {
            *(int **)(local_80 + 0x78) = piVar7;
          }
          UNLOCK();
        }
        if (bVar22) {
          piVar17 = piVar7;
          goto LAB_004625c2;
        }
        if (((piVar7 != (int *)0x0) && (piVar7 != &_hb_NullPool)) && (*piVar7 != 0)) {
          LOCK();
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            *piVar7 = -0xdead;
            ppVar1 = *(pthread_mutex_t **)(piVar7 + 2);
            if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 004628a7 to 004628ae has its CatchHandler @ 0046293d */
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar1[1].__data,ppVar1);
              free(ppVar1);
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 004628cc to 004628cd has its CatchHandler @ 00462935 */
              (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
            }
            free(piVar7);
          }
        }
        piVar7 = *(int **)(local_80 + 0x78);
      } while (piVar7 == (int *)0x0);
    }
    piVar17 = piVar7;
LAB_004625c2:
    if ((uint)piVar17[6] < 6) {
      puVar9 = &_hb_NullPool;
    }
    else {
      puVar9 = *(undefined4 **)(piVar17 + 4);
    }
    uVar4 = *(ushort *)(puVar9 + 1);
    uVar6 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
    if (uVar4 == 0) {
      uVar6 = 0;
    }
    *(uint *)(local_80 + 0x18) = uVar6;
    phVar20 = local_80;
  }
  local_84 = CONCAT11(local_84._1_1_,1);
  local_88 = uVar6;
  local_78 = this;
                    /* try { // try from 00461eed to 00461ef6 has its CatchHandler @ 0046297c */
  if ((*(code **)(phVar20 + 0x20) == (code *)0x0) ||
     (piVar7 = (int *)(**(code **)(phVar20 + 0x20))
                                (phVar20,0x56564152,*(undefined8 *)(phVar20 + 0x28)),
     piVar7 == (int *)0x0)) {
    piVar7 = &_hb_NullPool;
    iVar11 = _hb_NullPool;
  }
  else {
    iVar11 = *piVar7;
  }
  if (iVar11 != 0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  local_98 = '\0';
  bVar22 = false;
  local_90 = piVar7;
LAB_00461f62:
  pHVar16 = *(HVARVVAR **)(local_90 + 4);
  uVar8 = (ulong)(uint)local_90[6];
  pHStack_b0 = pHVar16 + uVar8;
  uVar6 = (uint)(uVar8 * 0x40);
  if (uVar6 < 0x4001) {
    uVar6 = 0x4000;
  }
  uVar13 = 0x3fffffff;
  if (0x3ffffffe < uVar6) {
    uVar6 = 0x3fffffff;
  }
  if ((int)(uVar8 * 0x40 >> 0x20) == 0) {
    uVar13 = (ulong)uVar6;
  }
  local_a8 = CONCAT44((int)uVar13,local_90[6]);
  local_94 = 0;
  local_c0[0] = 0;
  uStack_a0 = uStack_a0 & 0xffffffff;
  local_b8 = pHVar16;
  if (pHVar16 == (HVARVVAR *)0x0) {
                    /* try { // try from 00462540 to 00462549 has its CatchHandler @ 0046297c */
    hb_sanitize_context_t::end_processing((hb_sanitize_context_t *)local_c0);
    goto LAB_004623ca;
  }
                    /* try { // try from 00461fd2 to 00461fdc has its CatchHandler @ 0046297e */
  uVar8 = HVARVVAR::sanitize(pHVar16,(long)local_c0,uVar13,uVar8,CONCAT71(uVar19,uVar21));
  if ((char)uVar8 == '\0') {
LAB_00462040:
    if ((local_94 == 0) || (local_98 != '\0')) goto LAB_004621d2;
  }
  else {
    pHVar14 = (HVARVVAR *)(local_a8 & 0xffffffff);
    if (pHVar14 < pHVar16 + (0x18 - (long)local_b8)) goto LAB_00462040;
    uVar6 = *(uint *)(pHVar16 + 0x14);
    pHVar12 = (HVARVVAR *)(ulong)uVar6;
    if (uVar6 == 0) {
LAB_004621b1:
      if (local_94 == 0) {
        bVar22 = true;
        goto LAB_004621d2;
      }
LAB_00462273:
      local_94 = 0;
                    /* try { // try from 0046227b to 00462321 has its CatchHandler @ 0046297c */
      uVar8 = HVARVVAR::sanitize(pHVar16,(long)local_c0,pHVar14,pHVar12,CONCAT71(uVar19,uVar21));
      piVar17 = local_90;
      if ((char)uVar8 == '\0') {
LAB_004622e1:
        bVar22 = false;
LAB_004622e4:
        if (local_94 == 0) goto LAB_004621d2;
      }
      else {
        pHVar14 = (HVARVVAR *)(local_a8 & 0xffffffff);
        if (pHVar14 < pHVar16 + (0x18 - (long)local_b8)) goto LAB_004622e1;
        uVar6 = *(uint *)(pHVar16 + 0x14);
        bVar22 = true;
        if (uVar6 == 0) goto LAB_004622e4;
        pHVar12 = pHVar16 + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                            uVar6 << 0x18);
        if (pHVar12 + (1 - (long)local_b8) <= pHVar14) {
          if (*pHVar12 == (HVARVVAR)0x1) {
            pHVar18 = pHVar12 + 6;
            if (pHVar18 + -(long)local_b8 <= pHVar14) {
              uVar6 = *(uint *)(pHVar12 + 2);
              lVar2 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                             uVar6 << 0x18) * (ulong)(((byte)pHVar12[1] >> 4 & 3) + 1);
              uVar6 = (uint)lVar2;
              if ((int)((ulong)lVar2 >> 0x20) == 0) goto LAB_0046251b;
            }
          }
          else {
            if (*pHVar12 != (HVARVVAR)0x0) goto LAB_004622e4;
            pHVar18 = pHVar12 + 4;
            if (pHVar18 + -(long)local_b8 <= pHVar14) {
              uVar6 = (((byte)pHVar12[1] >> 4 & 3) + 1) *
                      (uint)(ushort)(*(ushort *)(pHVar12 + 2) << 8 | *(ushort *)(pHVar12 + 2) >> 8);
LAB_0046251b:
              if (uVar6 <= (uint)((int)pHStack_b0 - (int)pHVar18)) {
                iVar11 = local_a8._4_4_ - uVar6;
                local_a8 = CONCAT44(iVar11,(uint)local_a8);
                if (0 < iVar11) goto LAB_004622e4;
              }
            }
          }
        }
        if ((local_94 < 0x20) && (local_94 = local_94 + 1, local_98 != '\0')) {
          *(undefined4 *)(pHVar16 + 0x14) = 0;
        }
      }
      if ((local_90 != (int *)0x0) && (*local_90 != 0)) {
        LOCK();
        *local_90 = *local_90 + -1;
        UNLOCK();
        if (*local_90 == 0) {
          *local_90 = -0xdead;
          ppVar1 = *(pthread_mutex_t **)(local_90 + 2);
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar1[1].__data,ppVar1);
            free(ppVar1);
            piVar17[2] = 0;
            piVar17[3] = 0;
          }
          if (*(code **)(piVar17 + 10) != (code *)0x0) {
                    /* try { // try from 0046233f to 00462340 has its CatchHandler @ 0046295a */
            (**(code **)(piVar17 + 10))(*(undefined8 *)(piVar17 + 8));
          }
          free(piVar17);
        }
      }
      local_a8 = local_a8 & 0xffffffff00000000;
      goto LAB_00462364;
    }
    pHVar12 = pHVar16 + (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                        uVar6 << 0x18);
    if (pHVar12 + (1 - (long)local_b8) <= pHVar14) {
      if (*pHVar12 == (HVARVVAR)0x1) {
        pHVar18 = pHVar12 + 6;
        if (pHVar18 + -(long)local_b8 <= pHVar14) {
          uVar6 = *(uint *)(pHVar12 + 2);
          pHVar12 = (HVARVVAR *)(ulong)(((byte)pHVar12[1] >> 4 & 3) + 1);
          lVar2 = (ulong)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                         uVar6 << 0x18) * (long)pHVar12;
          uVar5 = (uint)((ulong)lVar2 >> 0x20);
          pHVar14 = (HVARVVAR *)(ulong)uVar5;
          uVar6 = (uint)lVar2;
          if (uVar5 == 0) goto LAB_00462191;
        }
      }
      else {
        if (*pHVar12 != (HVARVVAR)0x0) goto LAB_004621b1;
        pHVar18 = pHVar12 + 4;
        if (pHVar18 + -(long)local_b8 <= pHVar14) {
          uVar4 = *(ushort *)(pHVar12 + 2) << 8 | *(ushort *)(pHVar12 + 2) >> 8;
          pHVar14 = (HVARVVAR *)(ulong)uVar4;
          uVar6 = (((byte)pHVar12[1] >> 4 & 3) + 1) * (uint)uVar4;
LAB_00462191:
          uVar5 = (int)pHStack_b0 - (int)pHVar18;
          pHVar12 = (HVARVVAR *)(ulong)uVar5;
          if (uVar6 <= uVar5) {
            local_a8._4_4_ = local_a8._4_4_ - uVar6;
            pHVar12 = (HVARVVAR *)(ulong)local_a8._4_4_;
            if (0 < (int)local_a8._4_4_) goto LAB_004621b1;
          }
        }
      }
    }
    if (local_94 < 0x20) {
      local_94 = local_94 + 1;
      if (local_98 != '\0') {
        *(undefined4 *)(pHVar16 + 0x14) = 0;
        goto LAB_00462273;
      }
    }
    else if (local_98 != '\0') goto LAB_004621cf;
  }
  pHVar16 = (HVARVVAR *)(ulong)(uint)piVar7[6];
  if (piVar7[1] != 0) {
    if (pHVar16 == (HVARVVAR *)0x0) {
      piVar7[7] = 2;
LAB_00461f40:
      local_b8 = *(HVARVVAR **)(piVar7 + 4);
      pHStack_b0 = pHVar16 + (long)local_b8;
      if (local_b8 == (HVARVVAR *)0x0) goto LAB_004621cf;
    }
    else {
      if (piVar7[7] == 2) goto LAB_00461f40;
      if (piVar7[7] == 3) {
        piVar7[7] = 1;
      }
      __dest = malloc((size_t)pHVar16);
      if (__dest == (void *)0x0) goto LAB_004621c1;
      memcpy(__dest,*(void **)(piVar7 + 4),(size_t)pHVar16);
      if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 0046212c to 0046212d has its CatchHandler @ 0046297e */
        (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
      }
      piVar7[7] = 2;
      *(void **)(piVar7 + 4) = __dest;
      *(void **)(piVar7 + 8) = __dest;
      *(undefined **)(piVar7 + 10) = PTR_free_00715540;
    }
    local_98 = '\x01';
    goto LAB_00461f62;
  }
LAB_004621c1:
  local_b8 = (HVARVVAR *)0x0;
  pHStack_b0 = pHVar16;
LAB_004621cf:
  bVar22 = false;
LAB_004621d2:
  piVar17 = local_90;
  if ((local_90 != (int *)0x0) && (*local_90 != 0)) {
    LOCK();
    *local_90 = *local_90 + -1;
    UNLOCK();
    if (*local_90 == 0) {
      *local_90 = -0xdead;
      ppVar1 = *(pthread_mutex_t **)(local_90 + 2);
      if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 004621fd to 00462204 has its CatchHandler @ 0046297c */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar1[1].__data,ppVar1);
        free(ppVar1);
        piVar17[2] = 0;
        piVar17[3] = 0;
      }
      if (*(code **)(piVar17 + 10) != (code *)0x0) {
                    /* try { // try from 00462222 to 00462223 has its CatchHandler @ 00462962 */
        (**(code **)(piVar17 + 10))(*(undefined8 *)(piVar17 + 8));
      }
      free(piVar17);
    }
  }
  local_90 = (int *)0x0;
  local_b8 = (HVARVVAR *)0x0;
  pHStack_b0 = (HVARVVAR *)0x0;
  local_a8 = local_a8 & 0xffffffff00000000;
  if (bVar22) {
    if (piVar7[1] != 0) {
      piVar7[1] = 0;
    }
  }
  else {
LAB_00462364:
    local_90 = (int *)0x0;
    pHStack_b0 = (HVARVVAR *)0x0;
    local_b8 = (HVARVVAR *)0x0;
    if (*piVar7 != 0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        *piVar7 = -0xdead;
        ppVar1 = *(pthread_mutex_t **)(piVar7 + 2);
        if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00462395 to 0046239c has its CatchHandler @ 0046297c */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar1[1].__data,ppVar1);
          free(ppVar1);
          piVar7[2] = 0;
          piVar7[3] = 0;
        }
        if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 004623bd to 004623be has its CatchHandler @ 0046296a */
          (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
        }
        free(piVar7);
      }
    }
    piVar7 = &_hb_NullPool;
  }
LAB_004623ca:
  paVar3 = local_78;
  *(int **)(local_78 + 0x20) = piVar7;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_c0);
  phVar20 = local_80;
  uVar6 = *(uint *)(local_80 + 0x14);
  if (uVar6 == 0) {
    puVar9 = hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
             ::get((hb_lazy_loader_t<OT::head,hb_table_lazy_loader_t<OT::head,1u,true>,hb_face_t,1u,hb_blob_t>
                    *)(local_80 + 0x70));
    uVar4 = *(ushort *)((long)puVar9 + 0x12) << 8 | *(ushort *)((long)puVar9 + 0x12) >> 8;
    uVar6 = 1000;
    if (uVar4 - 0x10 < 0x3ff1) {
      uVar6 = (uint)uVar4;
    }
    *(uint *)(phVar20 + 0x14) = uVar6;
  }
  *(uint *)(paVar3 + 0x10) = uVar6;
  puVar9 = &_hb_NullPool;
  if (*(undefined4 **)(paVar3 + 0x18) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(paVar3 + 0x18);
  }
  uVar6 = puVar9[6];
  uVar15 = uVar6 & 0xfffffffe;
  puVar9 = hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
           ::get((hb_lazy_loader_t<OT::vhea,hb_table_lazy_loader_t<OT::vhea,11u,true>,hb_face_t,11u,hb_blob_t>
                  *)(phVar20 + 0xc0));
  uVar4 = *(ushort *)((long)puVar9 + 0x22) << 8 | *(ushort *)((long)puVar9 + 0x22) >> 8;
  uVar5 = (uint)uVar4;
  if (uVar15 < (uint)uVar4 * 4) {
    uVar5 = uVar6 >> 2;
  }
  *(uint *)paVar3 = uVar5;
  uVar15 = uVar15 + uVar5 * -4;
  puVar9 = hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>
           ::operator->((hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>
                         *)(phVar20 + 0x78));
  uVar4 = *(ushort *)(puVar9 + 1) << 8 | *(ushort *)(puVar9 + 1) >> 8;
  *(uint *)(paVar3 + 4) = (uint)uVar4;
  uVar6 = *(uint *)paVar3;
  uVar5 = (uint)uVar4;
  uVar10 = uVar6;
  if (uVar6 < uVar4 || uVar6 == uVar5) {
    if ((uVar5 - uVar6) * 2 <= uVar15) goto joined_r0x00462632;
    uVar10 = (uVar15 >> 1) + uVar6;
  }
  *(uint *)(paVar3 + 4) = uVar10;
  uVar5 = uVar10;
joined_r0x00462632:
  uVar10 = uVar5;
  if (uVar6 == 0) {
    *(undefined8 *)paVar3 = 0;
    uVar10 = 0;
  }
  uVar10 = ((uVar6 + (uVar15 >> 1)) - uVar5 & 0x7fffffff) + uVar10;
  *(uint *)(paVar3 + 8) = uVar10;
  uVar6 = *(uint *)(phVar20 + 0x18);
  if (uVar6 == 0xffffffff) {
    uVar6 = hb_face_t::load_num_glyphs(phVar20);
    uVar10 = *(uint *)(paVar3 + 8);
  }
  if (uVar6 < uVar10) {
    uVar6 = uVar10;
  }
  *(uint *)(paVar3 + 0xc) = uVar6;
  return;
}


