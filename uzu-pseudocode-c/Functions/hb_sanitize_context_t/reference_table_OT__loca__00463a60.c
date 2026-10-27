// Function : reference_table<OT::loca>
// Namespace: hb_sanitize_context_t
// Entry    : 00463a60
// Prototype: int * reference_table<OT::loca>(hb_sanitize_context_t * param_1, long param_2)
// Body     : 00463a60 - 00463d58


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_blob_t* hb_sanitize_context_t::reference_table<OT::loca>(hb_face_t const*, unsigned int) */

int * __cdecl
hb_sanitize_context_t::reference_table<OT::loca>(hb_sanitize_context_t *param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
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
          lVar3 = *(long *)(param_2 + 0x68);
          piVar7 = &_hb_NullPool;
          if (lVar3 == 0) goto LAB_00463c02;
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
                    /* try { // try from 00463c86 to 00463ca0 has its CatchHandler @ 00463d61 */
          if ((*(code **)(lVar3 + 0x20) != (code *)0x0) &&
             (piVar7 = (int *)(**(code **)(lVar3 + 0x20))
                                        (lVar3,0x6d617870,*(undefined8 *)(lVar3 + 0x28)),
             piVar7 == (int *)0x0)) {
            piVar7 = &_hb_NullPool;
          }
          piVar7 = sanitize_blob<OT::maxp>((hb_sanitize_context_t *)local_70,piVar7);
          ~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
          if (piVar7 == (int *)0x0) {
            piVar7 = &_hb_NullPool;
            LOCK();
            bVar11 = *(long *)(param_2 + 0x78) == 0;
            if (bVar11) {
              *(long *)(param_2 + 0x78) = (long)&_hb_NullPool;
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar11 = *(long *)(param_2 + 0x78) == 0;
            if (bVar11) {
              *(long *)(param_2 + 0x78) = (long)piVar7;
            }
            UNLOCK();
          }
          if (bVar11) goto LAB_00463c02;
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
                    /* try { // try from 00463d1b to 00463d1c has its CatchHandler @ 00463d59 */
                (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
              }
              free(piVar7);
            }
          }
          piVar7 = *(int **)(param_2 + 0x78);
        } while (piVar7 == (int *)0x0);
      }
LAB_00463c02:
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
                                (param_2,0x6c6f6361,*(undefined8 *)(param_2 + 0x28)),
     piVar7 == (int *)0x0)) {
    piVar7 = &_hb_NullPool;
    iVar2 = _hb_NullPool;
  }
  else {
    iVar2 = *piVar7;
  }
  if (iVar2 != 0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0x30) = piVar7;
  param_1[0x28] = (hb_sanitize_context_t)0x0;
  lVar3 = *(long *)(piVar7 + 4);
  *(long *)(param_1 + 8) = lVar3;
  uVar9 = piVar7[6];
  lVar5 = (ulong)uVar9 * 0x40;
  uVar6 = (uint)lVar5;
  uVar10 = 0x4000;
  if (0x4000 < uVar6) {
    uVar10 = uVar6;
  }
  if (0x3ffffffe < uVar10) {
    uVar10 = 0x3fffffff;
  }
  *(ulong *)(param_1 + 0x10) = (ulong)uVar9 + lVar3;
  *(uint *)(param_1 + 0x18) = uVar9;
  uVar9 = 0x3fffffff;
  if ((int)((ulong)lVar5 >> 0x20) == 0) {
    uVar9 = uVar10;
  }
  *(uint *)(param_1 + 0x1c) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (lVar3 == 0) {
    end_processing(param_1);
  }
  else {
    if (*piVar7 != 0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        *piVar7 = -0xdead;
        ppVar4 = *(pthread_mutex_t **)(piVar7 + 2);
        if (ppVar4 != (pthread_mutex_t *)0x0) {
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &ppVar4[1].__data,ppVar4);
          free(ppVar4);
          piVar7[2] = 0;
          piVar7[3] = 0;
        }
        if (*(code **)(piVar7 + 10) != (code *)0x0) {
                    /* try { // try from 00463b90 to 00463b91 has its CatchHandler @ 00463d76 */
          (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
        }
        free(piVar7);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (piVar7[1] != 0) {
      piVar7[1] = 0;
    }
  }
  return piVar7;
}


