// Function : reference_table<OT::MVAR>
// Namespace: hb_sanitize_context_t
// Entry    : 0047a9c0
// Prototype: int * reference_table<OT::MVAR>(hb_sanitize_context_t * param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 0047a9c0 - 0047af0f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::MVAR>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::MVAR>
          (hb_sanitize_context_t *param_1,long param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  MVAR *this;
  pthread_mutex_t *ppVar4;
  undefined *puVar5;
  hb_sanitize_context_t hVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  void *__dest;
  undefined4 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  int *piVar13;
  char cVar14;
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
      piVar9 = *(int **)(param_2 + 0x78);
      if (piVar9 == (int *)0x0) {
        do {
          lVar3 = *(long *)(param_2 + 0x68);
          piVar9 = &_hb_NullPool;
          if (lVar3 == 0) goto LAB_0047adb9;
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
                    /* try { // try from 0047ae3d to 0047ae57 has its CatchHandler @ 0047af18 */
          if ((*(code **)(lVar3 + 0x20) != (code *)0x0) &&
             (piVar9 = (int *)(**(code **)(lVar3 + 0x20))
                                        (lVar3,0x6d617870,*(undefined8 *)(lVar3 + 0x28)),
             piVar9 == (int *)0x0)) {
            piVar9 = &_hb_NullPool;
          }
          piVar9 = sanitize_blob<OT::maxp>((hb_sanitize_context_t *)local_70,piVar9);
          ~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
          if (piVar9 == (int *)0x0) {
            piVar9 = &_hb_NullPool;
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
              *(long *)(param_2 + 0x78) = (long)piVar9;
            }
            UNLOCK();
          }
          if (bVar15) goto LAB_0047adb9;
          if (((piVar9 != (int *)0x0) && (piVar9 != &_hb_NullPool)) && (*piVar9 != 0)) {
            LOCK();
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              *piVar9 = -0xdead;
              ppVar4 = *(pthread_mutex_t **)(piVar9 + 2);
              if (ppVar4 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar4[1].__data,ppVar4);
                free(ppVar4);
                piVar9[2] = 0;
                piVar9[3] = 0;
              }
              if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 0047aed2 to 0047aed3 has its CatchHandler @ 0047af10 */
                (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
              }
              free(piVar9);
            }
          }
          piVar9 = *(int **)(param_2 + 0x78);
        } while (piVar9 == (int *)0x0);
      }
LAB_0047adb9:
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
                                (param_2,0x4d564152,*(undefined8 *)(param_2 + 0x28)),
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
  piVar13 = piVar9;
  do {
    param_1[0x28] = hVar6;
    this = *(MVAR **)(piVar13 + 4);
    *(MVAR **)(param_1 + 8) = this;
    uVar11 = piVar13[6];
    uVar12 = (ulong)uVar11;
    bVar15 = (int)(uVar12 * 0x40 >> 0x20) != 0;
    uVar7 = (uint)(uVar12 * 0x40);
    if (uVar7 < 0x4001) {
      uVar7 = 0x4000;
    }
    if (0x3ffffffe < uVar7) {
      uVar7 = 0x3fffffff;
    }
    *(MVAR **)(param_1 + 0x10) = this + uVar12;
    *(uint *)(param_1 + 0x18) = uVar11;
    uVar11 = 0x3fffffff;
    if (!bVar15) {
      uVar11 = uVar7;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (this == (MVAR *)0x0) {
      end_processing(param_1);
      goto LAB_0047ad03;
    }
    uVar8 = OT::MVAR::sanitize(this,(long)param_1,(ulong)bVar15,uVar12,param_5);
    uVar11 = *(uint *)(param_1 + 0x2c);
    if ((char)uVar8 != '\0') {
      if (uVar11 == 0) {
        cVar14 = '\x01';
LAB_0047ac76:
        piVar13 = *(int **)(param_1 + 0x30);
        if (piVar13 != (int *)0x0) goto LAB_0047ac80;
        goto LAB_0047acd4;
      }
      *(undefined4 *)(param_1 + 0x2c) = 0;
      uVar8 = OT::MVAR::sanitize(this,(long)param_1,extraout_RDX,(ulong)uVar11,param_5);
      cVar14 = (char)uVar8;
      if (*(int *)(param_1 + 0x2c) == 0) {
        piVar13 = *(int **)(param_1 + 0x30);
        goto joined_r0x0047ad7f;
      }
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
                    /* try { // try from 0047ac2e to 0047ac2f has its CatchHandler @ 0047af2d */
            (**(code **)(piVar13 + 10))(*(undefined8 *)(piVar13 + 8));
          }
          free(piVar13);
        }
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      goto LAB_0047ad08;
    }
    cVar14 = '\0';
    if ((uVar11 == 0) || (param_1[0x28] != (hb_sanitize_context_t)0x0)) goto LAB_0047ac76;
    uVar12 = (ulong)(uint)piVar9[6];
    if (piVar9[1] == 0) {
LAB_0047ac57:
      *(undefined8 *)(param_1 + 8) = 0;
      *(ulong *)(param_1 + 0x10) = uVar12;
LAB_0047ac65:
      cVar14 = '\0';
      piVar13 = *(int **)(param_1 + 0x30);
joined_r0x0047ad7f:
      if (piVar13 != (int *)0x0) {
LAB_0047ac80:
        if (*piVar13 != 0) {
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
                    /* try { // try from 0047acca to 0047accb has its CatchHandler @ 0047af35 */
              (**(code **)(piVar13 + 10))(*(undefined8 *)(piVar13 + 8));
            }
            free(piVar13);
          }
        }
      }
LAB_0047acd4:
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (cVar14 == '\0') {
LAB_0047ad08:
        piVar13 = &_hb_NullPool;
        if (*piVar9 != 0) {
          LOCK();
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            *piVar9 = -0xdead;
            ppVar4 = *(pthread_mutex_t **)(piVar9 + 2);
            if (ppVar4 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar4[1].__data,ppVar4);
              free(ppVar4);
              piVar9[2] = 0;
              piVar9[3] = 0;
            }
            if (*(code **)(piVar9 + 10) != (code *)0x0) {
                    /* try { // try from 0047ad59 to 0047ad5a has its CatchHandler @ 0047af3d */
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
LAB_0047ad03:
        piVar13 = piVar9;
      }
      return piVar13;
    }
    if (uVar12 == 0) {
      piVar9[7] = 2;
LAB_0047aa60:
      lVar3 = *(long *)(piVar9 + 4);
      *(long *)(param_1 + 8) = lVar3;
      *(ulong *)(param_1 + 0x10) = uVar12 + lVar3;
      if (lVar3 == 0) goto LAB_0047ac65;
    }
    else {
      if (piVar9[7] == 2) goto LAB_0047aa60;
      if (piVar9[7] == 3) {
        piVar9[7] = 1;
      }
      __dest = malloc(uVar12);
      if (__dest == (void *)0x0) goto LAB_0047ac57;
      memcpy(__dest,*(void **)(piVar9 + 4),uVar12);
      if (*(code **)(piVar9 + 10) != (code *)0x0) {
        (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
        uVar12 = (ulong)(uint)piVar9[6];
      }
      piVar9[7] = 2;
      *(void **)(piVar9 + 4) = __dest;
      *(void **)(piVar9 + 8) = __dest;
      *(undefined **)(piVar9 + 10) = puVar5;
      *(void **)(param_1 + 8) = __dest;
      *(ulong *)(param_1 + 0x10) = (long)__dest + uVar12;
    }
    piVar13 = *(int **)(param_1 + 0x30);
    hVar6 = (hb_sanitize_context_t)0x1;
  } while( true );
}


