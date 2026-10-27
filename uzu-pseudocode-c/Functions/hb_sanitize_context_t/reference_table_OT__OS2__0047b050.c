// Function : reference_table<OT::OS2>
// Namespace: hb_sanitize_context_t
// Entry    : 0047b050
// Prototype: int * reference_table<OT::OS2>(hb_sanitize_context_t * param_1, long param_2)
// Body     : 0047b050 - 0047b634


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::OS2>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::OS2>(hb_sanitize_context_t *param_1,long param_2)

{
  int iVar1;
  ushort *puVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  undefined *puVar5;
  hb_sanitize_context_t hVar6;
  uint uVar7;
  int *piVar8;
  void *__dest;
  undefined4 *puVar9;
  ushort uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  bool bVar15;
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
      piVar8 = *(int **)(param_2 + 0x78);
      if (piVar8 == (int *)0x0) {
        do {
          lVar4 = *(long *)(param_2 + 0x68);
          piVar8 = &_hb_NullPool;
          if (lVar4 == 0) goto LAB_0047b4b5;
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
                    /* try { // try from 0047b554 to 0047b56e has its CatchHandler @ 0047b63d */
          if ((*(code **)(lVar4 + 0x20) != (code *)0x0) &&
             (piVar8 = (int *)(**(code **)(lVar4 + 0x20))
                                        (lVar4,0x6d617870,*(undefined8 *)(lVar4 + 0x28)),
             piVar8 == (int *)0x0)) {
            piVar8 = &_hb_NullPool;
          }
          piVar8 = sanitize_blob<OT::maxp>((hb_sanitize_context_t *)local_70,piVar8);
          ~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
          if (piVar8 == (int *)0x0) {
            piVar8 = &_hb_NullPool;
            LOCK();
            bVar15 = *(long *)(param_2 + 0x78) == 0;
            if (bVar15) {
              *(long *)(param_2 + 0x78) = (long)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar15 = *(long *)(param_2 + 0x78) == 0;
            if (bVar15) {
              *(long *)(param_2 + 0x78) = (long)piVar8;
            }
            UNLOCK();
          }
          if (bVar15) goto LAB_0047b4b5;
          if (((piVar8 != (int *)0x0) && (piVar8 != &_hb_NullPool)) && (*piVar8 != 0)) {
            LOCK();
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (*piVar8 == 0) {
              *piVar8 = -0xdead;
              ppVar3 = *(pthread_mutex_t **)(piVar8 + 2);
              if (ppVar3 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar3[1].__data,ppVar3);
                free(ppVar3);
                piVar8[2] = 0;
                piVar8[3] = 0;
              }
              if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0047b5f7 to 0047b5f8 has its CatchHandler @ 0047b635 */
                (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
              }
              free(piVar8);
            }
          }
          piVar8 = *(int **)(param_2 + 0x78);
        } while (piVar8 == (int *)0x0);
      }
LAB_0047b4b5:
      if ((uint)piVar8[6] < 6) {
        puVar9 = &_hb_NullPool;
      }
      else {
        puVar9 = *(undefined4 **)(piVar8 + 4);
      }
      uVar10 = *(ushort *)(puVar9 + 1);
      uVar11 = (uint)(ushort)(uVar10 << 8 | uVar10 >> 8);
      if (uVar10 == 0) {
        uVar11 = 0;
      }
      *(uint *)(param_2 + 0x18) = uVar11;
    }
    *(uint *)(param_1 + 0x38) = uVar11;
    param_1[0x3c] = (hb_sanitize_context_t)0x1;
  }
  if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
     (piVar8 = (int *)(**(code **)(param_2 + 0x20))
                                (param_2,0x4f532f32,*(undefined8 *)(param_2 + 0x28)),
     piVar8 == (int *)0x0)) {
    piVar8 = &_hb_NullPool;
    iVar1 = _hb_NullPool;
  }
  else {
    iVar1 = *piVar8;
  }
  if (iVar1 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0x30) = piVar8;
  puVar5 = PTR_free_00715540;
  hVar6 = (hb_sanitize_context_t)0x0;
  piVar14 = piVar8;
  do {
    param_1[0x28] = hVar6;
    puVar2 = *(ushort **)(piVar14 + 4);
    *(ushort **)(param_1 + 8) = puVar2;
    uVar11 = piVar14[6];
    lVar4 = (ulong)uVar11 * 0x40;
    uVar7 = (uint)lVar4;
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    *(ulong *)(param_1 + 0x10) = (ulong)uVar11 + (long)puVar2;
    *(uint *)(param_1 + 0x18) = uVar11;
    uVar13 = 0x3fffffff;
    if ((int)((ulong)lVar4 >> 0x20) == 0) {
      uVar13 = uVar7;
    }
    *(uint *)(param_1 + 0x1c) = uVar13;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (puVar2 == (ushort *)0x0) {
      end_processing(param_1);
      goto LAB_0047b402;
    }
    if (0x4d < uVar11) {
      uVar10 = *puVar2;
      if (uVar10 != 0) {
        lVar4 = *(long *)(param_1 + 8);
        uVar12 = (ulong)*(uint *)(param_1 + 0x18);
        if ((uVar12 < (ulong)((long)puVar2 + (0x56 - lVar4))) ||
           ((uVar10 = uVar10 << 8 | uVar10 >> 8, 1 < uVar10 &&
            ((uVar12 < (ulong)((long)puVar2 + (0x60 - lVar4)) ||
             ((4 < uVar10 && (uVar12 < (ulong)((long)puVar2 + (100 - lVar4))))))))))
        goto LAB_0047b194;
      }
      if (*(int *)(param_1 + 0x2c) == 0) {
        bVar15 = true;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 0;
        if ((ulong)*(uint *)(param_1 + 0x18) <
            (ulong)((long)puVar2 + (0x4e - *(long *)(param_1 + 8)))) {
LAB_0047b48a:
          bVar15 = false;
          iVar1 = *(int *)(param_1 + 0x2c);
        }
        else {
          uVar10 = *puVar2;
          if (uVar10 != 0) {
            lVar4 = *(long *)(param_1 + 8);
            uVar12 = (ulong)*(uint *)(param_1 + 0x18);
            if ((uVar12 < (ulong)((long)puVar2 + (0x56 - lVar4))) ||
               ((uVar10 = uVar10 << 8 | uVar10 >> 8, 1 < uVar10 &&
                ((uVar12 < (ulong)((long)puVar2 + (0x60 - lVar4)) ||
                 ((4 < uVar10 && (uVar12 < (ulong)((long)puVar2 + (100 - lVar4))))))))))
            goto LAB_0047b48a;
          }
          bVar15 = true;
          iVar1 = *(int *)(param_1 + 0x2c);
        }
        if (iVar1 != 0) {
          piVar14 = *(int **)(param_1 + 0x30);
          if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
            LOCK();
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (*piVar14 == 0) {
              *piVar14 = -0xdead;
              ppVar3 = *(pthread_mutex_t **)(piVar14 + 2);
              if (ppVar3 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar3[1].__data,ppVar3);
                free(ppVar3);
                piVar14[2] = 0;
                piVar14[3] = 0;
              }
              if (*(code **)(piVar14 + 10) != (code *)0x0) {
                    /* try { // try from 0047b350 to 0047b351 has its CatchHandler @ 0047b652 */
                (**(code **)(piVar14 + 10))(*(undefined8 *)(piVar14 + 8));
              }
              free(piVar14);
            }
          }
          *(undefined8 *)(param_1 + 0x30) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          goto LAB_0047b407;
        }
      }
LAB_0047b37b:
      piVar14 = *(int **)(param_1 + 0x30);
      goto joined_r0x0047b382;
    }
LAB_0047b194:
    bVar15 = false;
    if ((*(int *)(param_1 + 0x2c) == 0) || (param_1[0x28] != (hb_sanitize_context_t)0x0))
    goto LAB_0047b37b;
    uVar12 = (ulong)(uint)piVar8[6];
    if (piVar8[1] == 0) {
LAB_0047b4e6:
      *(undefined8 *)(param_1 + 8) = 0;
      *(ulong *)(param_1 + 0x10) = uVar12;
LAB_0047b4f2:
      bVar15 = false;
      piVar14 = *(int **)(param_1 + 0x30);
joined_r0x0047b382:
      if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
        LOCK();
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (*piVar14 == 0) {
          *piVar14 = -0xdead;
          ppVar3 = *(pthread_mutex_t **)(piVar14 + 2);
          if (ppVar3 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar3[1].__data,ppVar3);
            free(ppVar3);
            piVar14[2] = 0;
            piVar14[3] = 0;
          }
          if (*(code **)(piVar14 + 10) != (code *)0x0) {
                    /* try { // try from 0047b3ca to 0047b3cb has its CatchHandler @ 0047b65a */
            (**(code **)(piVar14 + 10))(*(undefined8 *)(piVar14 + 8));
          }
          free(piVar14);
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (bVar15) {
        if (piVar8[1] != 0) {
          piVar8[1] = 0;
        }
LAB_0047b402:
        piVar14 = piVar8;
      }
      else {
LAB_0047b407:
        piVar14 = &_hb_NullPool;
        if (*piVar8 != 0) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            *piVar8 = -0xdead;
            ppVar3 = *(pthread_mutex_t **)(piVar8 + 2);
            if (ppVar3 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar3[1].__data,ppVar3);
              free(ppVar3);
              piVar8[2] = 0;
              piVar8[3] = 0;
            }
            if (*(code **)(piVar8 + 10) != (code *)0x0) {
                    /* try { // try from 0047b458 to 0047b459 has its CatchHandler @ 0047b662 */
              (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
            }
            free(piVar8);
          }
        }
      }
      return piVar14;
    }
    if (uVar12 == 0) {
      piVar8[7] = 2;
LAB_0047b25e:
      lVar4 = *(long *)(piVar8 + 4);
      *(long *)(param_1 + 8) = lVar4;
      *(ulong *)(param_1 + 0x10) = uVar12 + lVar4;
      if (lVar4 == 0) goto LAB_0047b4f2;
    }
    else {
      if (piVar8[7] == 2) goto LAB_0047b25e;
      if (piVar8[7] == 3) {
        piVar8[7] = 1;
      }
      __dest = malloc(uVar12);
      if (__dest == (void *)0x0) goto LAB_0047b4e6;
      memcpy(__dest,*(void **)(piVar8 + 4),uVar12);
      if (*(code **)(piVar8 + 10) != (code *)0x0) {
        (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        uVar12 = (ulong)(uint)piVar8[6];
      }
      piVar8[7] = 2;
      *(void **)(piVar8 + 4) = __dest;
      *(void **)(piVar8 + 8) = __dest;
      *(undefined **)(piVar8 + 10) = puVar5;
      *(void **)(param_1 + 8) = __dest;
      *(ulong *)(param_1 + 0x10) = (long)__dest + uVar12;
    }
    piVar14 = *(int **)(param_1 + 0x30);
    hVar6 = (hb_sanitize_context_t)0x1;
  } while( true );
}


