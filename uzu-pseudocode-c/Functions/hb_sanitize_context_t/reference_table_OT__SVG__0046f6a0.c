// Function : reference_table<OT::SVG>
// Namespace: hb_sanitize_context_t
// Entry    : 0046f6a0
// Prototype: int * reference_table<OT::SVG>(hb_sanitize_context_t * param_1, long param_2)
// Body     : 0046f6a0 - 0046fcac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::SVG>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::SVG>(hb_sanitize_context_t *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  hb_sanitize_context_t hVar5;
  uint uVar6;
  int *piVar7;
  void *__dest;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
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
    uVar9 = *(uint *)(param_2 + 0x18);
    if (uVar9 == 0xffffffff) {
      piVar7 = *(int **)(param_2 + 0x78);
      if (piVar7 == (int *)0x0) {
        do {
          lVar2 = *(long *)(param_2 + 0x68);
          piVar7 = &_hb_NullPool;
          if (lVar2 == 0) goto LAB_0046fb43;
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
                    /* try { // try from 0046fbce to 0046fbe8 has its CatchHandler @ 0046fcb5 */
          if ((*(code **)(lVar2 + 0x20) != (code *)0x0) &&
             (piVar7 = (int *)(**(code **)(lVar2 + 0x20))
                                        (lVar2,0x6d617870,*(undefined8 *)(lVar2 + 0x28)),
             piVar7 == (int *)0x0)) {
            piVar7 = &_hb_NullPool;
          }
          piVar7 = sanitize_blob<OT::maxp>((hb_sanitize_context_t *)local_70,piVar7);
          ~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
          if (piVar7 == (int *)0x0) {
            piVar7 = &_hb_NullPool;
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
              *(long *)(param_2 + 0x78) = (long)piVar7;
            }
            UNLOCK();
          }
          if (bVar15) goto LAB_0046fb43;
          if (((piVar7 != (int *)0x0) && (piVar7 != &_hb_NullPool)) && (*piVar7 != 0)) {
            LOCK();
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (*piVar7 == 0) {
              *piVar7 = -0xdead;
              ppVar4 = *(pthread_mutex_t **)(piVar7 + 2);
              if (ppVar4 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar4[1].__data,ppVar4);
                free(ppVar4);
                piVar7[2] = 0;
                piVar7[3] = 0;
              }
              if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 0046fc6f to 0046fc70 has its CatchHandler @ 0046fcad */
                (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
              }
              free(piVar7);
            }
          }
          piVar7 = *(int **)(param_2 + 0x78);
        } while (piVar7 == (int *)0x0);
      }
LAB_0046fb43:
      if ((uint)piVar7[6] < 6) {
        puVar8 = &_hb_NullPool;
      }
      else {
        puVar8 = *(undefined4 **)(piVar7 + 4);
      }
      uVar1 = *(ushort *)(puVar8 + 1);
      uVar9 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
      if (uVar1 == 0) {
        uVar9 = 0;
      }
      *(uint *)(param_2 + 0x18) = uVar9;
    }
    *(uint *)(param_1 + 0x38) = uVar9;
    param_1[0x3c] = (hb_sanitize_context_t)0x1;
  }
  if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
     (piVar7 = (int *)(**(code **)(param_2 + 0x20))
                                (param_2,0x53564720,*(undefined8 *)(param_2 + 0x28)),
     piVar7 == (int *)0x0)) {
    piVar7 = &_hb_NullPool;
    iVar13 = _hb_NullPool;
  }
  else {
    iVar13 = *piVar7;
  }
  if (iVar13 != 0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0x30) = piVar7;
  hVar5 = (hb_sanitize_context_t)0x0;
  bVar15 = false;
  piVar14 = piVar7;
  do {
    param_1[0x28] = hVar5;
    lVar2 = *(long *)(piVar14 + 4);
    *(long *)(param_1 + 8) = lVar2;
    uVar9 = piVar14[6];
    uVar10 = (ulong)uVar9;
    uVar6 = (uint)(uVar10 * 0x40);
    if (uVar6 < 0x4001) {
      uVar6 = 0x4000;
    }
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    *(ulong *)(param_1 + 0x10) = lVar2 + uVar10;
    *(uint *)(param_1 + 0x18) = uVar9;
    uVar11 = 0x3fffffff;
    if ((int)(uVar10 * 0x40 >> 0x20) == 0) {
      uVar11 = uVar6;
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (lVar2 == 0) {
      end_processing(param_1);
      return piVar7;
    }
    if (9 < uVar9) {
      uVar9 = *(uint *)(lVar2 + 2);
      puVar12 = (ushort *)&_hb_NullPool;
      if (uVar9 != 0) {
        puVar12 = (ushort *)
                  ((ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18) + lVar2);
      }
      if ((ulong)((long)puVar12 + (2 - lVar2)) <= uVar10) {
        lVar3 = *(long *)(param_1 + 8);
        uVar10 = (ulong)*(uint *)(param_1 + 0x18);
        if ((((ulong)((long)(puVar12 + 1) - lVar3) <= uVar10) &&
            (uVar9 = (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8),
            uVar9 * 0xc <= (uint)(*(int *)(param_1 + 0x10) - (int)(puVar12 + 1)))) &&
           (iVar13 = *(int *)(param_1 + 0x1c) + uVar9 * -0xc, *(int *)(param_1 + 0x1c) = iVar13,
           0 < iVar13)) {
          if (*(int *)(param_1 + 0x2c) == 0) {
            bVar15 = true;
            goto LAB_0046f8f5;
          }
          *(undefined4 *)(param_1 + 0x2c) = 0;
          if ((lVar2 - lVar3) + 10U <= uVar10) {
            uVar9 = *(uint *)(lVar2 + 2);
            if (uVar9 == 0) {
              puVar12 = (ushort *)&_hb_NullPool;
            }
            else {
              puVar12 = (ushort *)
                        (lVar2 + (ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                         (uVar9 & 0xff00) << 8 | uVar9 << 0x18));
            }
            if (((uVar10 < (ulong)((long)puVar12 + (2 - lVar3))) ||
                ((ulong)*(uint *)(param_1 + 0x18) <
                 (ulong)((long)(puVar12 + 1) - *(long *)(param_1 + 8)))) ||
               (uVar9 = (uint)(ushort)(*puVar12 << 8 | *puVar12 >> 8),
               (uint)(*(int *)(param_1 + 0x10) - (int)(puVar12 + 1)) < uVar9 * 0xc)) {
              bVar15 = false;
              iVar13 = *(int *)(param_1 + 0x2c);
            }
            else {
              iVar13 = *(int *)(param_1 + 0x1c) + uVar9 * -0xc;
              *(int *)(param_1 + 0x1c) = iVar13;
              bVar15 = 0 < iVar13;
              iVar13 = *(int *)(param_1 + 0x2c);
            }
            if (iVar13 == 0) goto LAB_0046f8f5;
            piVar14 = *(int **)(param_1 + 0x30);
            if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
              LOCK();
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (*piVar14 == 0) {
                *piVar14 = -0xdead;
                ppVar4 = *(pthread_mutex_t **)(piVar14 + 2);
                if (ppVar4 != (pthread_mutex_t *)0x0) {
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar4[1].__data,ppVar4);
                  free(ppVar4);
                  piVar14[2] = 0;
                  piVar14[3] = 0;
                }
                if (*(code **)(piVar14 + 10) != (code *)0x0) {
                    /* try { // try from 0046fa5c to 0046fa5d has its CatchHandler @ 0046fcca */
                  (**(code **)(piVar14 + 10))(*(undefined8 *)(piVar14 + 8));
                }
                free(piVar14);
              }
            }
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
            goto LAB_0046fa7f;
          }
LAB_0046f8f2:
          bVar15 = false;
LAB_0046f8f5:
          piVar14 = *(int **)(param_1 + 0x30);
          if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
            LOCK();
            *piVar14 = *piVar14 + -1;
            UNLOCK();
            if (*piVar14 == 0) {
              *piVar14 = -0xdead;
              ppVar4 = *(pthread_mutex_t **)(piVar14 + 2);
              if (ppVar4 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar4[1].__data,ppVar4);
                free(ppVar4);
                piVar14[2] = 0;
                piVar14[3] = 0;
              }
              if (*(code **)(piVar14 + 10) != (code *)0x0) {
                    /* try { // try from 0046f944 to 0046f945 has its CatchHandler @ 0046fcda */
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
            if (piVar7[1] != 0) {
              piVar7[1] = 0;
            }
            piVar14 = piVar7;
          }
          else {
LAB_0046fa7f:
            piVar14 = &_hb_NullPool;
            if (*piVar7 != 0) {
              LOCK();
              *piVar7 = *piVar7 + -1;
              UNLOCK();
              if (*piVar7 == 0) {
                *piVar7 = -0xdead;
                ppVar4 = *(pthread_mutex_t **)(piVar7 + 2);
                if (ppVar4 != (pthread_mutex_t *)0x0) {
                  hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                            ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                              *)&ppVar4[1].__data,ppVar4);
                  free(ppVar4);
                  piVar7[2] = 0;
                  piVar7[3] = 0;
                }
                if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 0046fad0 to 0046fad1 has its CatchHandler @ 0046fcd2 */
                  (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
                }
                free(piVar7);
              }
            }
          }
          return piVar14;
        }
      }
    }
    if ((*(int *)(param_1 + 0x2c) == 0) || (param_1[0x28] != (hb_sanitize_context_t)0x0))
    goto LAB_0046f8f5;
    uVar10 = (ulong)(uint)piVar7[6];
    if (piVar7[1] == 0) {
LAB_0046f8e6:
      *(undefined8 *)(param_1 + 8) = 0;
      *(ulong *)(param_1 + 0x10) = uVar10;
      goto LAB_0046f8f2;
    }
    if (uVar10 == 0) {
      piVar7[7] = 2;
LAB_0046f740:
      lVar2 = *(long *)(piVar7 + 4);
      *(long *)(param_1 + 8) = lVar2;
      *(ulong *)(param_1 + 0x10) = uVar10 + lVar2;
      if (lVar2 == 0) goto LAB_0046f8f2;
    }
    else {
      if (piVar7[7] == 2) goto LAB_0046f740;
      if (piVar7[7] == 3) {
        piVar7[7] = 1;
      }
      __dest = malloc(uVar10);
      if (__dest == (void *)0x0) goto LAB_0046f8e6;
      memcpy(__dest,*(void **)(piVar7 + 4),uVar10);
      if (*(code **)(piVar7 + 10) != (code *)0x0) {
        (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
        uVar10 = (ulong)(uint)piVar7[6];
      }
      piVar7[7] = 2;
      *(void **)(piVar7 + 4) = __dest;
      *(void **)(piVar7 + 8) = __dest;
      *(undefined **)(piVar7 + 10) = PTR_free_00715540;
      *(void **)(param_1 + 8) = __dest;
      *(ulong *)(param_1 + 0x10) = (long)__dest + uVar10;
    }
    piVar14 = *(int **)(param_1 + 0x30);
    hVar5 = (hb_sanitize_context_t)0x1;
  } while( true );
}


