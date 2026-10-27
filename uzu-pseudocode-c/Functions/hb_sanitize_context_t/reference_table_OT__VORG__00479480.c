// Function : reference_table<OT::VORG>
// Namespace: hb_sanitize_context_t
// Entry    : 00479480
// Prototype: int * reference_table<OT::VORG>(hb_sanitize_context_t * param_1, long param_2)
// Body     : 00479480 - 00479a30


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::VORG>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::VORG>(hb_sanitize_context_t *param_1,long param_2)

{
  short *psVar1;
  ushort uVar2;
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
  int iVar12;
  ulong __size;
  int *piVar13;
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
    uVar10 = *(uint *)(param_2 + 0x18);
    if (uVar10 == 0xffffffff) {
      piVar8 = *(int **)(param_2 + 0x78);
      if (piVar8 == (int *)0x0) {
        do {
          lVar5 = *(long *)(param_2 + 0x68);
          piVar8 = &_hb_NullPool;
          if (lVar5 == 0) goto LAB_004798d3;
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
                    /* try { // try from 00479952 to 0047996c has its CatchHandler @ 00479a39 */
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
              *(long *)(param_2 + 0x78) = (long)piVar8;
            }
            UNLOCK();
          }
          if (bVar14) goto LAB_004798d3;
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
                    /* try { // try from 004799f3 to 004799f4 has its CatchHandler @ 00479a31 */
                (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
              }
              free(piVar8);
            }
          }
          piVar8 = *(int **)(param_2 + 0x78);
        } while (piVar8 == (int *)0x0);
      }
LAB_004798d3:
      if ((uint)piVar8[6] < 6) {
        puVar9 = &_hb_NullPool;
      }
      else {
        puVar9 = *(undefined4 **)(piVar8 + 4);
      }
      uVar2 = *(ushort *)(puVar9 + 1);
      uVar10 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
      if (uVar2 == 0) {
        uVar10 = 0;
      }
      *(uint *)(param_2 + 0x18) = uVar10;
    }
    *(uint *)(param_1 + 0x38) = uVar10;
    param_1[0x3c] = (hb_sanitize_context_t)0x1;
  }
  if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_2 + 0x20))
                                (param_2,0x564f5247,*(undefined8 *)(param_2 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &_hb_NullPool;
    iVar12 = _hb_NullPool;
  }
  else {
    iVar12 = *piVar8;
  }
  if (iVar12 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0x30) = piVar8;
  hVar6 = (hb_sanitize_context_t)0x0;
  piVar13 = piVar8;
  while( true ) {
    param_1[0x28] = hVar6;
    psVar3 = *(short **)(piVar13 + 4);
    *(short **)(param_1 + 8) = psVar3;
    uVar10 = piVar13[6];
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
    if (((7 < uVar10) && (*psVar3 == 0x100)) &&
       ((psVar1 = psVar3 + 4,
        (ulong)((long)psVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18) &&
        ((ulong)((long)psVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))))) {
      uVar10 = (uint)(ushort)(psVar3[3] << 8 | (ushort)psVar3[3] >> 8);
      if ((uVar10 * 4 <= (uint)(*(int *)(param_1 + 0x10) - (int)psVar1)) &&
         (iVar12 = *(int *)(param_1 + 0x1c) + uVar10 * -4, *(int *)(param_1 + 0x1c) = iVar12,
         0 < iVar12)) {
        if (*(int *)(param_1 + 0x2c) == 0) {
          bVar14 = true;
          goto LAB_004796b8;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        if ((((*psVar3 == 0x100) &&
             ((ulong)((long)psVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)))
            && ((ulong)((long)psVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)))
           && (uVar10 = (uint)(ushort)(psVar3[3] << 8 | (ushort)psVar3[3] >> 8),
              uVar10 * 4 <= (uint)(*(int *)(param_1 + 0x10) - (int)psVar1))) {
          iVar12 = *(int *)(param_1 + 0x1c) + uVar10 * -4;
          *(int *)(param_1 + 0x1c) = iVar12;
          bVar14 = 0 < iVar12;
        }
        else {
          bVar14 = false;
        }
        if (*(int *)(param_1 + 0x2c) == 0) goto LAB_004796b8;
        piVar13 = *(int **)(param_1 + 0x30);
        if ((piVar13 != (int *)0x0) && (*piVar13 != 0)) {
          LOCK();
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            *piVar13 = -0xdead;
            ppVar4 = *(pthread_mutex_t **)(piVar13 + 2);
            if (ppVar4 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar4[1].__data,ppVar4);
              free(ppVar4);
              piVar13[2] = 0;
              piVar13[3] = 0;
            }
            if (*(code **)(piVar13 + 10) != (code *)0x0) {
                    /* try { // try from 00479814 to 00479815 has its CatchHandler @ 00479a4e */
              (**(code **)(piVar13 + 10))(*(undefined8 *)(piVar13 + 8));
            }
            free(piVar13);
          }
        }
        *(undefined8 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        goto LAB_00479837;
      }
    }
    bVar14 = false;
    if ((*(int *)(param_1 + 0x2c) == 0) || (param_1[0x28] != (hb_sanitize_context_t)0x0))
    goto LAB_004796b8;
    __size = (ulong)(uint)piVar8[6];
    if (piVar8[1] == 0) break;
    if (__size == 0) {
      piVar8[7] = 2;
LAB_00479520:
      lVar5 = *(long *)(piVar8 + 4);
      *(long *)(param_1 + 8) = lVar5;
      *(ulong *)(param_1 + 0x10) = __size + lVar5;
      if (lVar5 == 0) goto LAB_004796b5;
    }
    else {
      if (piVar8[7] == 2) goto LAB_00479520;
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
    piVar13 = *(int **)(param_1 + 0x30);
    hVar6 = (hb_sanitize_context_t)0x1;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(ulong *)(param_1 + 0x10) = __size;
LAB_004796b5:
  bVar14 = false;
LAB_004796b8:
  piVar13 = *(int **)(param_1 + 0x30);
  if ((piVar13 != (int *)0x0) && (*piVar13 != 0)) {
    LOCK();
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      *piVar13 = -0xdead;
      ppVar4 = *(pthread_mutex_t **)(piVar13 + 2);
      if (ppVar4 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar4[1].__data,ppVar4);
        free(ppVar4);
        piVar13[2] = 0;
        piVar13[3] = 0;
      }
      if (*(code **)(piVar13 + 10) != (code *)0x0) {
                    /* try { // try from 00479707 to 00479708 has its CatchHandler @ 00479a5e */
        (**(code **)(piVar13 + 10))(*(undefined8 *)(piVar13 + 8));
      }
      free(piVar13);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (bVar14) {
    if (piVar8[1] != 0) {
      piVar8[1] = 0;
    }
    piVar13 = piVar8;
  }
  else {
LAB_00479837:
    piVar13 = &_hb_NullPool;
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
                    /* try { // try from 00479888 to 00479889 has its CatchHandler @ 00479a56 */
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        }
        free(piVar8);
      }
    }
  }
  return piVar13;
}


