// Function : reference_table<OT::fvar>
// Namespace: hb_sanitize_context_t
// Entry    : 004417a0
// Prototype: int * reference_table<OT::fvar>(hb_sanitize_context_t * param_1, long param_2)
// Body     : 004417a0 - 00441cef


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::fvar>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::fvar>(hb_sanitize_context_t *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  fvar *this;
  pthread_mutex_t *ppVar3;
  long lVar4;
  undefined *puVar5;
  hb_sanitize_context_t hVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  void *__dest;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  ulong __size;
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
          if (lVar4 == 0) goto LAB_00441b99;
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
                    /* try { // try from 00441c1d to 00441c37 has its CatchHandler @ 00441cf8 */
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
            bVar7 = *(long *)(param_2 + 0x78) == 0;
            if (bVar7) {
              *(long *)(param_2 + 0x78) = (long)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar7 = *(long *)(param_2 + 0x78) == 0;
            if (bVar7) {
              *(long *)(param_2 + 0x78) = (long)piVar9;
            }
            UNLOCK();
          }
          if (bVar7) goto LAB_00441b99;
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
                    /* try { // try from 00441cb2 to 00441cb3 has its CatchHandler @ 00441cf0 */
                (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
              }
              free(piVar9);
            }
          }
          piVar9 = *(int **)(param_2 + 0x78);
        } while (piVar9 == (int *)0x0);
      }
LAB_00441b99:
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
                                (param_2,0x66766172,*(undefined8 *)(param_2 + 0x28)),
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
    this = *(fvar **)(piVar12 + 4);
    *(fvar **)(param_1 + 8) = this;
    uVar11 = piVar12[6];
    lVar4 = (ulong)uVar11 * 0x40;
    uVar8 = (uint)lVar4;
    if (uVar8 < 0x4001) {
      uVar8 = 0x4000;
    }
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    *(fvar **)(param_1 + 0x10) = this + uVar11;
    *(uint *)(param_1 + 0x18) = uVar11;
    uVar11 = 0x3fffffff;
    if ((int)((ulong)lVar4 >> 0x20) == 0) {
      uVar11 = uVar8;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (this == (fvar *)0x0) {
      end_processing(param_1);
      goto LAB_00441ae3;
    }
    bVar7 = OT::fvar::sanitize(this,(long)param_1);
    if (bVar7) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        bVar7 = true;
LAB_00441a56:
        piVar12 = *(int **)(param_1 + 0x30);
        if (piVar12 != (int *)0x0) goto LAB_00441a60;
        goto LAB_00441ab4;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      bVar7 = OT::fvar::sanitize(this,(long)param_1);
      if (*(int *)(param_1 + 0x2c) == 0) {
        piVar12 = *(int **)(param_1 + 0x30);
        goto joined_r0x00441b5f;
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
                    /* try { // try from 00441a0e to 00441a0f has its CatchHandler @ 00441d0d */
            (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
          }
          free(piVar12);
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      goto LAB_00441ae8;
    }
    bVar7 = false;
    if ((*(int *)(param_1 + 0x2c) == 0) || (param_1[0x28] != (hb_sanitize_context_t)0x0))
    goto LAB_00441a56;
    __size = (ulong)(uint)piVar9[6];
    if (piVar9[1] == 0) {
LAB_00441a37:
      *(undefined8 *)(param_1 + 8) = 0;
      *(ulong *)(param_1 + 0x10) = __size;
LAB_00441a45:
      bVar7 = false;
      piVar12 = *(int **)(param_1 + 0x30);
joined_r0x00441b5f:
      if (piVar12 != (int *)0x0) {
LAB_00441a60:
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
                    /* try { // try from 00441aaa to 00441aab has its CatchHandler @ 00441d15 */
              (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
            }
            free(piVar12);
          }
        }
      }
LAB_00441ab4:
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (bVar7 == false) {
LAB_00441ae8:
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
                    /* try { // try from 00441b39 to 00441b3a has its CatchHandler @ 00441d1d */
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
LAB_00441ae3:
        piVar12 = piVar9;
      }
      return piVar12;
    }
    if (__size == 0) {
      piVar9[7] = 2;
LAB_00441840:
      lVar4 = *(long *)(piVar9 + 4);
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = __size + lVar4;
      if (lVar4 == 0) goto LAB_00441a45;
    }
    else {
      if (piVar9[7] == 2) goto LAB_00441840;
      if (piVar9[7] == 3) {
        piVar9[7] = 1;
      }
      __dest = malloc(__size);
      if (__dest == (void *)0x0) goto LAB_00441a37;
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


