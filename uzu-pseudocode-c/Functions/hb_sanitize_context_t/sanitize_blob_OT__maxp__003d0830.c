// Function : sanitize_blob<OT::maxp>
// Namespace: hb_sanitize_context_t
// Entry    : 003d0830
// Prototype: int * sanitize_blob<OT::maxp>(hb_sanitize_context_t * this, int * param_1)
// Body     : 003d0830 - 003d0c15


/* hb_blob_t* hb_sanitize_context_t::sanitize_blob<OT::maxp>(hb_blob_t*) */

int * __thiscall
hb_sanitize_context_t::sanitize_blob<OT::maxp>(hb_sanitize_context_t *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  pthread_mutex_t *ppVar4;
  long lVar5;
  hb_sanitize_context_t hVar6;
  ushort uVar7;
  uint uVar8;
  void *__dest;
  uint uVar9;
  int *piVar10;
  ulong __size;
  bool bVar11;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  *(int **)(this + 0x30) = param_1;
  hVar6 = (hb_sanitize_context_t)0x0;
  bVar11 = false;
  piVar10 = param_1;
  do {
    this[0x28] = hVar6;
    puVar3 = *(ushort **)(piVar10 + 4);
    *(ushort **)(this + 8) = puVar3;
    uVar1 = piVar10[6];
    lVar5 = (ulong)uVar1 * 0x40;
    uVar8 = (uint)lVar5;
    if (uVar8 < 0x4001) {
      uVar8 = 0x4000;
    }
    if (0x3ffffffe < uVar8) {
      uVar8 = 0x3fffffff;
    }
    *(ulong *)(this + 0x10) = (ulong)uVar1 + (long)puVar3;
    *(uint *)(this + 0x18) = uVar1;
    uVar9 = 0x3fffffff;
    if ((int)((ulong)lVar5 >> 0x20) == 0) {
      uVar9 = uVar8;
    }
    *(uint *)(this + 0x1c) = uVar9;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 0x24) = 0;
    if (puVar3 == (ushort *)0x0) {
      end_processing(this);
      goto LAB_003d0b9f;
    }
    if (5 < uVar1) {
      uVar7 = *puVar3 << 8 | *puVar3 >> 8;
      if (uVar7 == 1) {
        if ((ulong)((long)puVar3 + (0x20 - *(long *)(this + 8))) <= (ulong)*(uint *)(this + 0x18)) {
LAB_003d09fa:
          if (*(int *)(this + 0x2c) == 0) {
            bVar11 = true;
            goto LAB_003d0b17;
          }
          *(undefined4 *)(this + 0x2c) = 0;
          if ((ulong)*(uint *)(this + 0x18) < (ulong)((long)puVar3 + (6 - *(long *)(this + 8)))) {
LAB_003d0b0a:
            bVar11 = false;
            iVar2 = *(int *)(this + 0x2c);
          }
          else {
            uVar7 = *puVar3 << 8 | *puVar3 >> 8;
            if (uVar7 == 1) {
              bVar11 = (ulong)((long)puVar3 + (0x20 - *(long *)(this + 8))) <=
                       (ulong)*(uint *)(this + 0x18);
              iVar2 = *(int *)(this + 0x2c);
            }
            else {
              if (uVar7 != 0) goto LAB_003d0b0a;
              bVar11 = puVar3[1] == 0x50;
              iVar2 = *(int *)(this + 0x2c);
            }
          }
          if (iVar2 == 0) goto LAB_003d0b17;
          piVar10 = *(int **)(this + 0x30);
          if ((piVar10 != (int *)0x0) && (*piVar10 != 0)) {
            LOCK();
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              *piVar10 = -0xdead;
              ppVar4 = *(pthread_mutex_t **)(piVar10 + 2);
              if (ppVar4 != (pthread_mutex_t *)0x0) {
                hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                          ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>
                            *)&ppVar4[1].__data,ppVar4);
                free(ppVar4);
                piVar10[2] = 0;
                piVar10[3] = 0;
              }
              if (*(code **)(piVar10 + 10) != (code *)0x0) {
                    /* try { // try from 003d0ad5 to 003d0ad6 has its CatchHandler @ 003d0c16 */
                (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
              }
              free(piVar10);
            }
          }
          *(undefined8 *)(this + 0x30) = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
          *(undefined4 *)(this + 0x18) = 0;
          goto LAB_003d0ba4;
        }
      }
      else if ((uVar7 == 0) && (puVar3[1] == 0x50)) goto LAB_003d09fa;
    }
    if ((*(int *)(this + 0x2c) == 0) || (this[0x28] != (hb_sanitize_context_t)0x0))
    goto LAB_003d0b17;
    __size = (ulong)(uint)param_1[6];
    if (param_1[1] == 0) {
LAB_003d0a4d:
      *(undefined8 *)(this + 8) = 0;
      *(ulong *)(this + 0x10) = __size;
LAB_003d0a59:
      bVar11 = false;
LAB_003d0b17:
      piVar10 = *(int **)(this + 0x30);
      if ((piVar10 != (int *)0x0) && (*piVar10 != 0)) {
        LOCK();
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          *piVar10 = -0xdead;
          ppVar4 = *(pthread_mutex_t **)(piVar10 + 2);
          if (ppVar4 != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &ppVar4[1].__data,ppVar4);
            free(ppVar4);
            piVar10[2] = 0;
            piVar10[3] = 0;
          }
          if (*(code **)(piVar10 + 10) != (code *)0x0) {
                    /* try { // try from 003d0b67 to 003d0b68 has its CatchHandler @ 003d0c26 */
            (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
          }
          free(piVar10);
        }
      }
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      if (bVar11) {
        if (param_1[1] != 0) {
          param_1[1] = 0;
        }
LAB_003d0b9f:
        piVar10 = param_1;
      }
      else {
LAB_003d0ba4:
        piVar10 = &_hb_NullPool;
        if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
          LOCK();
          *param_1 = *param_1 + -1;
          UNLOCK();
          if (*param_1 == 0) {
            *param_1 = -0xdead;
            ppVar4 = *(pthread_mutex_t **)(param_1 + 2);
            if (ppVar4 != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &ppVar4[1].__data,ppVar4);
              free(ppVar4);
              param_1[2] = 0;
              param_1[3] = 0;
            }
            if (*(code **)(param_1 + 10) != (code *)0x0) {
                    /* try { // try from 003d0bfa to 003d0bfb has its CatchHandler @ 003d0c1e */
              (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
            }
            free(param_1);
          }
        }
      }
      return piVar10;
    }
    if (__size == 0) {
      param_1[7] = 2;
LAB_003d0880:
      lVar5 = *(long *)(param_1 + 4);
      *(long *)(this + 8) = lVar5;
      *(ulong *)(this + 0x10) = __size + lVar5;
      if (lVar5 == 0) goto LAB_003d0a59;
    }
    else {
      if (param_1[7] == 2) goto LAB_003d0880;
      if (param_1[7] == 3) {
        param_1[7] = 1;
      }
      __dest = malloc(__size);
      if (__dest == (void *)0x0) goto LAB_003d0a4d;
      memcpy(__dest,*(void **)(param_1 + 4),__size);
      if (*(code **)(param_1 + 10) != (code *)0x0) {
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
        __size = (ulong)(uint)param_1[6];
      }
      param_1[7] = 2;
      *(void **)(param_1 + 4) = __dest;
      *(void **)(param_1 + 8) = __dest;
      *(undefined **)(param_1 + 10) = PTR_free_00715540;
      *(void **)(this + 8) = __dest;
      *(ulong *)(this + 0x10) = (long)__dest + __size;
    }
    piVar10 = *(int **)(this + 0x30);
    hVar6 = (hb_sanitize_context_t)0x1;
  } while( true );
}


