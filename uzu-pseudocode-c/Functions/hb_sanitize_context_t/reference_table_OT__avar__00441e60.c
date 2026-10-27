// Function : reference_table<OT::avar>
// Namespace: hb_sanitize_context_t
// Entry    : 00441e60
// Prototype: int * reference_table<OT::avar>(hb_sanitize_context_t * param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 00441e60 - 004423af


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::avar>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::avar>
          (hb_sanitize_context_t *param_1,long param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  avar *this;
  pthread_mutex_t *ppVar4;
  undefined *puVar5;
  hb_sanitize_context_t hVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  void *__dest;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 extraout_RDX;
  int *piVar12;
  char cVar13;
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
      piVar8 = *(int **)(param_2 + 0x78);
      if (piVar8 == (int *)0x0) {
        do {
          lVar3 = *(long *)(param_2 + 0x68);
          piVar8 = &_hb_NullPool;
          if (lVar3 == 0) goto LAB_00442259;
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
                    /* try { // try from 004422dd to 004422f7 has its CatchHandler @ 004423b8 */
          if ((*(code **)(lVar3 + 0x20) != (code *)0x0) &&
             (piVar8 = (int *)(**(code **)(lVar3 + 0x20))
                                        (lVar3,0x6d617870,*(undefined8 *)(lVar3 + 0x28)),
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
          if (bVar14) goto LAB_00442259;
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
                    /* try { // try from 00442372 to 00442373 has its CatchHandler @ 004423b0 */
                (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
              }
              free(piVar8);
            }
          }
          piVar8 = *(int **)(param_2 + 0x78);
        } while (piVar8 == (int *)0x0);
      }
LAB_00442259:
      if ((uint)piVar8[6] < 6) {
        puVar10 = &_hb_NullPool;
      }
      else {
        puVar10 = *(undefined4 **)(piVar8 + 4);
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
     (piVar8 = (int *)(**(code **)(param_2 + 0x20))
                                (param_2,0x61766172,*(undefined8 *)(param_2 + 0x28)),
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
  puVar5 = PTR_free_00715540;
  hVar6 = (hb_sanitize_context_t)0x0;
  piVar12 = piVar8;
  do {
    param_1[0x28] = hVar6;
    this = *(avar **)(piVar12 + 4);
    *(avar **)(param_1 + 8) = this;
    uVar11 = piVar12[6];
    uVar9 = (ulong)uVar11;
    bVar14 = (int)(uVar9 * 0x40 >> 0x20) != 0;
    uVar7 = (uint)(uVar9 * 0x40);
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    *(avar **)(param_1 + 0x10) = this + uVar9;
    *(uint *)(param_1 + 0x18) = uVar11;
    uVar11 = 0x3fffffff;
    if (!bVar14) {
      uVar11 = uVar7;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (this == (avar *)0x0) {
      end_processing(param_1);
      goto LAB_004421a3;
    }
    uVar9 = OT::avar::sanitize(this,(long)param_1,(ulong)bVar14,uVar9,param_5);
    uVar11 = *(uint *)(param_1 + 0x2c);
    if ((char)uVar9 != '\0') {
      if (uVar11 == 0) {
        cVar13 = '\x01';
LAB_00442116:
        piVar12 = *(int **)(param_1 + 0x30);
        if (piVar12 != (int *)0x0) goto LAB_00442120;
        goto LAB_00442174;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      uVar9 = OT::avar::sanitize(this,(long)param_1,extraout_RDX,(ulong)uVar11,param_5);
      if (*(int *)(param_1 + 0x2c) == 0) {
        cVar13 = (char)uVar9;
        piVar12 = *(int **)(param_1 + 0x30);
        goto joined_r0x0044221f;
      }
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
                    /* try { // try from 004420ce to 004420cf has its CatchHandler @ 004423cd */
            (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
          }
          free(piVar12);
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      goto LAB_004421a8;
    }
    cVar13 = '\0';
    if ((uVar11 == 0) || (param_1[0x28] != (hb_sanitize_context_t)0x0)) goto LAB_00442116;
    uVar9 = (ulong)(uint)piVar8[6];
    if (piVar8[1] == 0) {
LAB_004420f7:
      *(undefined8 *)(param_1 + 8) = 0;
      *(ulong *)(param_1 + 0x10) = uVar9;
LAB_00442105:
      cVar13 = '\0';
      piVar12 = *(int **)(param_1 + 0x30);
joined_r0x0044221f:
      if (piVar12 != (int *)0x0) {
LAB_00442120:
        if (*piVar12 != 0) {
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
                    /* try { // try from 0044216a to 0044216b has its CatchHandler @ 004423d5 */
              (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
            }
            free(piVar12);
          }
        }
      }
LAB_00442174:
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (cVar13 == '\0') {
LAB_004421a8:
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
                    /* try { // try from 004421f9 to 004421fa has its CatchHandler @ 004423dd */
              (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
            }
            free(piVar8);
          }
        }
      }
      else {
        if (piVar8[1] != 0) {
          piVar8[1] = 0;
        }
LAB_004421a3:
        piVar12 = piVar8;
      }
      return piVar12;
    }
    if (uVar9 == 0) {
      piVar8[7] = 2;
LAB_00441f00:
      lVar3 = *(long *)(piVar8 + 4);
      *(long *)(param_1 + 8) = lVar3;
      *(ulong *)(param_1 + 0x10) = uVar9 + lVar3;
      if (lVar3 == 0) goto LAB_00442105;
    }
    else {
      if (piVar8[7] == 2) goto LAB_00441f00;
      if (piVar8[7] == 3) {
        piVar8[7] = 1;
      }
      __dest = malloc(uVar9);
      if (__dest == (void *)0x0) goto LAB_004420f7;
      memcpy(__dest,*(void **)(piVar8 + 4),uVar9);
      if (*(code **)(piVar8 + 10) != (code *)0x0) {
        (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
        uVar9 = (ulong)(uint)piVar8[6];
      }
      piVar8[7] = 2;
      *(void **)(piVar8 + 4) = __dest;
      *(void **)(piVar8 + 8) = __dest;
      *(undefined **)(piVar8 + 10) = puVar5;
      *(void **)(param_1 + 8) = __dest;
      *(ulong *)(param_1 + 0x10) = (long)__dest + uVar9;
    }
    piVar12 = *(int **)(param_1 + 0x30);
    hVar6 = (hb_sanitize_context_t)0x1;
  } while( true );
}


