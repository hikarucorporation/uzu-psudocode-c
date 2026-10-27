// Function : hb_paint_funcs_destroy
// Namespace: 
// Entry    : 00464750
// Prototype: undefined hb_paint_funcs_destroy(int * param_1)
// Body     : 00464750 - 004649e0


void hb_paint_funcs_destroy(int *param_1)

{
  pthread_mutex_t *__ptr;
  undefined8 uVar1;
  undefined8 *__ptr_00;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      *param_1 = -0xdead;
      __ptr = *(pthread_mutex_t **)(param_1 + 2);
      if (__ptr != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr[1].__data,__ptr);
        free(__ptr);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      __ptr_00 = *(undefined8 **)(param_1 + 0x22);
      if (__ptr_00 != (undefined8 *)0x0) {
        if ((code *)*__ptr_00 != (code *)0x0) {
          if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
            uVar1 = 0;
          }
          else {
            uVar1 = **(undefined8 **)(param_1 + 0x20);
          }
          (*(code *)*__ptr_00)(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[1] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
          }
          (*(code *)__ptr_00[1])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[2] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
          }
          (*(code *)__ptr_00[2])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[3] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
          }
          (*(code *)__ptr_00[3])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[4] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
          }
          (*(code *)__ptr_00[4])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[5] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          }
          (*(code *)__ptr_00[5])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[6] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
          }
          (*(code *)__ptr_00[6])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[7] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
          }
          (*(code *)__ptr_00[7])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[8] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
          }
          (*(code *)__ptr_00[8])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[9] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
          }
          (*(code *)__ptr_00[9])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[10] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
          }
          (*(code *)__ptr_00[10])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[0xb] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
          }
          (*(code *)__ptr_00[0xb])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[0xc] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
          }
          (*(code *)__ptr_00[0xc])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)__ptr_00[0xd] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
          }
          (*(code *)__ptr_00[0xd])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x22);
        }
      }
      free(__ptr_00);
      free(*(void **)(param_1 + 0x20));
      free(param_1);
      return;
    }
  }
  return;
}


