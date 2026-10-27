// Function : reference_table<OT::CPAL>
// Namespace: hb_sanitize_context_t
// Entry    : 00468460
// Prototype: int * reference_table<OT::CPAL>(hb_sanitize_context_t * param_1, long param_2)
// Body     : 00468460 - 004689af


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::CPAL>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::CPAL>(hb_sanitize_context_t *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  CPAL *this;
  pthread_mutex_t *ppVar3;
  long lVar4;
  undefined *puVar5;
  hb_sanitize_context_t hVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  void *__dest;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  char cVar13;
  ulong __size;
  bool bVar14;
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
  
  if (param_1[0x3c] == (hb_sanitize_context_t)0x0) {
    uVar11 = *(uint *)(param_2 + 0x18);
    if (uVar11 == 0xffffffff) {
      piVar9 = *(int **)(param_2 + 0x78);
      if (piVar9 == (int *)0x0) {
        do {
          lVar4 = *(long *)(param_2 + 0x68);
          piVar9 = &_hb_NullPool;
          if (lVar4 == 0) goto LAB_00468859;
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
                    /* try { // try from 004688dd to 004688f7 has its CatchHandler @ 004689b8 */
          if ((*(code **)(lVar4 + 0x20) != (code *)0x0) &&
             (piVar9 = (int *)(**(code **)(lVar4 + 0x20))
                                        (lVar4,0x6d617870,*(undefined8 *)(lVar4 + 0x28)),
             piVar9 == (int *)0x0)) {
            piVar9 = &_hb_NullPool;
          }
          piVar9 = sanitize_blob<OT::maxp>((hb_sanitize_context_t *)local_70,piVar9);
          ~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
          if (piVar9 == (int *)0x0) {
            piVar9 = &_hb_NullPool;
            LOCK();
            bVar14 = *(long *)(param_2 + 0x78) == 0;
            if (bVar14) {
              *(long *)(param_2 + 0x78) = (long)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar14 = *(long *)(param_2 + 0x78) == 0;
            if (bVar14) {
              *(long *)(param_2 + 0x78) = (long)piVar9;
            }
            UNLOCK();
          }
          if (bVar14) goto LAB_00468859;
          if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
            LOCK();
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              *piVar9 = -0xdead;
              ppVar3 = *(pthread_mutex_t **)(piVar9 + 2);
              if (ppVar3 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar3[1].__data,ppVar3);
                free(ppVar3);
                piVar9[2] = 0;
                piVar9[3] = 0;
              }
              if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 00468972 to 00468973 has its CatchHandler @ 004689b0 */
                (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
              }
              free(piVar9);
            }
          }
          piVar9 = *(int **)(param_2 + 0x78);
        } while (piVar9 == (int *)0x0);
      }
LAB_00468859:
      if ((uint)piVar9[6] < 6) {
        puVar10 = &_hb_NullPool;
      }
      else {
        puVar10 = *(undefined4 **)(piVar9 + 4);
      }
      uVar1 = *(ushort *)(puVar10 + 1);
      uVar11 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
      if (uVar1 == 0) {
        uVar11 = 0;
      }
      *(uint *)(param_2 + 0x18) = uVar11;
    }
    *(uint *)(param_1 + 0x38) = uVar11;
    param_1[0x3c] = (hb_sanitize_context_t)0x1;
  }
  if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
     (piVar9 = (int *)(**(code **)(param_2 + 0x20))
                                (param_2,0x4350414c,*(undefined8 *)(param_2 + 0x28)),
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
  *(int **)(param_1 + 0x30) = piVar9;
  puVar5 = PTR_free_00715540;
  hVar6 = (hb_sanitize_context_t)0x0;
  piVar12 = piVar9;
  do {
    param_1[0x28] = hVar6;
    this = *(CPAL **)(piVar12 + 4);
    *(CPAL **)(param_1 + 8) = this;
    uVar11 = piVar12[6];
    lVar4 = (ulong)uVar11 * 0x40;
    uVar7 = (uint)lVar4;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    *(CPAL **)(param_1 + 0x10) = this + uVar11;
    *(uint *)(param_1 + 0x18) = uVar11;
    uVar11 = 0x3fffffff;
    if ((int)((ulong)lVar4 >> 0x20) == 0) {
      uVar11 = uVar7;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (this == (CPAL *)0x0) {
      end_processing(param_1);
      goto LAB_004687a3;
    }
    uVar8 = OT::CPAL::sanitize(this,(long)param_1);
    if ((char)uVar8 != '\0') {
      if (*(int *)(param_1 + 0x2c) == 0) {
        cVar13 = '\x01';
LAB_00468716:
        piVar12 = *(int **)(param_1 + 0x30);
        if (piVar12 != (int *)0x0) goto LAB_00468720;
        goto LAB_00468774;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      uVar8 = OT::CPAL::sanitize(this,(long)param_1);
      cVar13 = (char)uVar8;
      if (*(int *)(param_1 + 0x2c) == 0) {
        piVar12 = *(int **)(param_1 + 0x30);
        goto joined_r0x0046881f;
      }
      piVar12 = *(int **)(param_1 + 0x30);
      if ((piVar12 != (int *)0x0) && (*piVar12 != 0)) {
        LOCK();
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          *piVar12 = -0xdead;
          ppVar3 = *(pthread_mutex_t **)(piVar12 + 2);
          if (ppVar3 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar3[1].__data,ppVar3);
            free(ppVar3);
            piVar12[2] = 0;
            piVar12[3] = 0;
          }
          if (*(code **)(piVar12 + 10) != (code *)0x0) {
                    /* try { // try from 004686ce to 004686cf has its CatchHandler @ 004689cd */
            (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
          }
          free(piVar12);
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      goto LAB_004687a8;
    }
    cVar13 = '\0';
    if ((*(int *)(param_1 + 0x2c) == 0) || (param_1[0x28] != (hb_sanitize_context_t)0x0))
    goto LAB_00468716;
    __size = (ulong)(uint)piVar9[6];
    if (piVar9[1] == 0) {
LAB_004686f7:
      *(undefined8 *)(param_1 + 8) = 0;
      *(ulong *)(param_1 + 0x10) = __size;
LAB_00468705:
      cVar13 = '\0';
      piVar12 = *(int **)(param_1 + 0x30);
joined_r0x0046881f:
      if (piVar12 != (int *)0x0) {
LAB_00468720:
        if (*piVar12 != 0) {
          LOCK();
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (*piVar12 == 0) {
            *piVar12 = -0xdead;
            ppVar3 = *(pthread_mutex_t **)(piVar12 + 2);
            if (ppVar3 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar3[1].__data,ppVar3);
              free(ppVar3);
              piVar12[2] = 0;
              piVar12[3] = 0;
            }
            if (*(code **)(piVar12 + 10) != (code *)0x0) {
                    /* try { // try from 0046876a to 0046876b has its CatchHandler @ 004689d5 */
              (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
            }
            free(piVar12);
          }
        }
      }
LAB_00468774:
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (cVar13 == '\0') {
LAB_004687a8:
        piVar12 = &_hb_NullPool;
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
                    /* try { // try from 004687f9 to 004687fa has its CatchHandler @ 004689dd */
              (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
            }
            free(piVar9);
          }
        }
      }
      else {
        if (piVar9[1] != 0) {
          piVar9[1] = 0;
        }
LAB_004687a3:
        piVar12 = piVar9;
      }
      return piVar12;
    }
    if (__size == 0) {
      piVar9[7] = 2;
LAB_00468500:
      lVar4 = *(long *)(piVar9 + 4);
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = __size + lVar4;
      if (lVar4 == 0) goto LAB_00468705;
    }
    else {
      if (piVar9[7] == 2) goto LAB_00468500;
      if (piVar9[7] == 3) {
        piVar9[7] = 1;
      }
      __dest = malloc(__size);
      if (__dest == (void *)0x0) goto LAB_004686f7;
      memcpy(__dest,*(void **)(piVar9 + 4),__size);
      if (*(code **)(piVar9 + 10) != (code *)0x0) {
        (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
        __size = (ulong)(uint)piVar9[6];
      }
      piVar9[7] = 2;
      *(void **)(piVar9 + 4) = __dest;
      *(void **)(piVar9 + 8) = __dest;
      *(undefined **)(piVar9 + 10) = puVar5;
      *(void **)(param_1 + 8) = __dest;
      *(ulong *)(param_1 + 0x10) = (long)__dest + __size;
    }
    piVar12 = *(int **)(param_1 + 0x30);
    hVar6 = (hb_sanitize_context_t)0x1;
  } while( true );
}


