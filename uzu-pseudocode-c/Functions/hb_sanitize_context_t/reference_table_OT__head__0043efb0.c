// Function : reference_table<OT::head>
// Namespace: hb_sanitize_context_t
// Entry    : 0043efb0
// Prototype: int * reference_table<OT::head>(hb_sanitize_context_t * param_1, long param_2)
// Body     : 0043efb0 - 0043f4ed


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::head>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::head>(hb_sanitize_context_t *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  short *psVar3;
  pthread_mutex_t *ppVar4;
  long lVar5;
  hb_sanitize_context_t hVar6;
  uint uVar7;
  int *piVar8;
  void *__dest;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  ulong __size;
  int *piVar12;
  bool bVar13;
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
    uVar10 = *(uint *)(param_2 + 0x18);
    if (uVar10 == 0xffffffff) {
      piVar8 = *(int **)(param_2 + 0x78);
      if (piVar8 == (int *)0x0) {
        do {
          lVar5 = *(long *)(param_2 + 0x68);
          piVar8 = &_hb_NullPool;
          if (lVar5 == 0) goto LAB_0043f390;
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
                    /* try { // try from 0043f40f to 0043f429 has its CatchHandler @ 0043f4f6 */
          if ((*(code **)(lVar5 + 0x20) != (code *)0x0) &&
             (piVar8 = (int *)(**(code **)(lVar5 + 0x20))
                                        (lVar5,0x6d617870,*(undefined8 *)(lVar5 + 0x28)),
             piVar8 == (int *)0x0)) {
            piVar8 = &_hb_NullPool;
          }
          piVar8 = sanitize_blob<OT::maxp>((hb_sanitize_context_t *)local_70,piVar8);
          ~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
          if (piVar8 == (int *)0x0) {
            piVar8 = &_hb_NullPool;
            LOCK();
            bVar13 = *(long *)(param_2 + 0x78) == 0;
            if (bVar13) {
              *(long *)(param_2 + 0x78) = (long)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar13 = *(long *)(param_2 + 0x78) == 0;
            if (bVar13) {
              *(long *)(param_2 + 0x78) = (long)piVar8;
            }
            UNLOCK();
          }
          if (bVar13) goto LAB_0043f390;
          if (((piVar8 != (int *)0x0) && (piVar8 != &_hb_NullPool)) && (*piVar8 != 0)) {
            LOCK();
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (*piVar8 == 0) {
              *piVar8 = -0xdead;
              ppVar4 = *(pthread_mutex_t **)(piVar8 + 2);
              if (ppVar4 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar4[1].__data,ppVar4);
                free(ppVar4);
                piVar8[2] = 0;
                piVar8[3] = 0;
              }
              if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0043f4b0 to 0043f4b1 has its CatchHandler @ 0043f4ee */
                (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
              }
              free(piVar8);
            }
          }
          piVar8 = *(int **)(param_2 + 0x78);
        } while (piVar8 == (int *)0x0);
      }
LAB_0043f390:
      if ((uint)piVar8[6] < 6) {
        puVar9 = &_hb_NullPool;
      }
      else {
        puVar9 = *(undefined4 **)(piVar8 + 4);
      }
      uVar1 = *(ushort *)(puVar9 + 1);
      uVar10 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
      if (uVar1 == 0) {
        uVar10 = 0;
      }
      *(uint *)(param_2 + 0x18) = uVar10;
    }
    *(uint *)(param_1 + 0x38) = uVar10;
    param_1[0x3c] = (hb_sanitize_context_t)0x1;
  }
  if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_2 + 0x20))
                                (param_2,0x68656164,*(undefined8 *)(param_2 + 0x28)),
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
  *(int **)(param_1 + 0x30) = piVar8;
  hVar6 = (hb_sanitize_context_t)0x0;
  bVar13 = false;
  piVar12 = piVar8;
  while( true ) {
    param_1[0x28] = hVar6;
    psVar3 = *(short **)(piVar12 + 4);
    *(short **)(param_1 + 8) = psVar3;
    uVar10 = piVar12[6];
    lVar5 = (ulong)uVar10 * 0x40;
    uVar7 = (uint)lVar5;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    *(ulong *)(param_1 + 0x10) = (ulong)uVar10 + (long)psVar3;
    *(uint *)(param_1 + 0x18) = uVar10;
    uVar11 = 0x3fffffff;
    if ((int)((ulong)lVar5 >> 0x20) == 0) {
      uVar11 = uVar7;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (psVar3 == (short *)0x0) {
      end_processing(param_1);
      return piVar8;
    }
    if (((0x35 < uVar10) && (*psVar3 == 0x100)) && (*(int *)(psVar3 + 6) == -0xac3f0a1)) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        bVar13 = true;
        goto LAB_0043f19b;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      if (((ulong)*(uint *)(param_1 + 0x18) <
           (ulong)((long)psVar3 + (0x36 - *(long *)(param_1 + 8)))) || (*psVar3 != 0x100)) {
        bVar13 = false;
      }
      else {
        bVar13 = *(int *)(psVar3 + 6) == -0xac3f0a1;
      }
      if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0043f19b;
      piVar12 = *(int **)(param_1 + 0x30);
      if ((piVar12 != (int *)0x0) && (*piVar12 != 0)) {
        LOCK();
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          *piVar12 = -0xdead;
          ppVar4 = *(pthread_mutex_t **)(piVar12 + 2);
          if (ppVar4 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar4[1].__data,ppVar4);
            free(ppVar4);
            piVar12[2] = 0;
            piVar12[3] = 0;
          }
          if (*(code **)(piVar12 + 10) != (code *)0x0) {
                    /* try { // try from 0043f2c9 to 0043f2ca has its CatchHandler @ 0043f50b */
            (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
          }
          free(piVar12);
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      goto LAB_0043f2ec;
    }
    if ((*(int *)(param_1 + 0x2c) == 0) || (param_1[0x28] != (hb_sanitize_context_t)0x0))
    goto LAB_0043f19b;
    __size = (ulong)(uint)piVar8[6];
    if (piVar8[1] == 0) break;
    if (__size == 0) {
      piVar8[7] = 2;
LAB_0043f040:
      lVar5 = *(long *)(piVar8 + 4);
      *(long *)(param_1 + 8) = lVar5;
      *(ulong *)(param_1 + 0x10) = __size + lVar5;
      if (lVar5 == 0) goto LAB_0043f198;
    }
    else {
      if (piVar8[7] == 2) goto LAB_0043f040;
      if (piVar8[7] == 3) {
        piVar8[7] = 1;
      }
      __dest = malloc(__size);
      if (__dest == (void *)0x0) break;
      memcpy(__dest,*(void **)(piVar8 + 4),__size);
      if (*(code **)(piVar8 + 10) != (code *)0x0) {
        (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        __size = (ulong)(uint)piVar8[6];
      }
      piVar8[7] = 2;
      *(void **)(piVar8 + 4) = __dest;
      *(void **)(piVar8 + 8) = __dest;
      *(undefined **)(piVar8 + 10) = PTR_free_00715540;
      *(void **)(param_1 + 8) = __dest;
      *(ulong *)(param_1 + 0x10) = (long)__dest + __size;
    }
    piVar12 = *(int **)(param_1 + 0x30);
    hVar6 = (hb_sanitize_context_t)0x1;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(ulong *)(param_1 + 0x10) = __size;
LAB_0043f198:
  bVar13 = false;
LAB_0043f19b:
  piVar12 = *(int **)(param_1 + 0x30);
  if ((piVar12 != (int *)0x0) && (*piVar12 != 0)) {
    LOCK();
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (*piVar12 == 0) {
      *piVar12 = -0xdead;
      ppVar4 = *(pthread_mutex_t **)(piVar12 + 2);
      if (ppVar4 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar4[1].__data,ppVar4);
        free(ppVar4);
        piVar12[2] = 0;
        piVar12[3] = 0;
      }
      if (*(code **)(piVar12 + 10) != (code *)0x0) {
                    /* try { // try from 0043f1ea to 0043f1eb has its CatchHandler @ 0043f51b */
        (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
      }
      free(piVar12);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (bVar13) {
    if (piVar8[1] != 0) {
      piVar8[1] = 0;
    }
    piVar12 = piVar8;
  }
  else {
LAB_0043f2ec:
    piVar12 = &_hb_NullPool;
    if (*piVar8 != 0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        *piVar8 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(piVar8 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0043f33d to 0043f33e has its CatchHandler @ 0043f513 */
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        }
        free(piVar8);
      }
    }
  }
  return piVar12;
}


