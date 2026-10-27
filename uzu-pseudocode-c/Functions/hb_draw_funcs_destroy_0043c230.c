// Function : hb_draw_funcs_destroy
// Namespace: 
// Entry    : 0043c230
// Prototype: undefined hb_draw_funcs_destroy(int * param_1)
// Body     : 0043c230 - 0043c346


void hb_draw_funcs_destroy(int *param_1)

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
      __ptr_00 = *(undefined8 **)(param_1 + 0x10);
      if (__ptr_00 != (undefined8 *)0x0) {
        if ((code *)*__ptr_00 != (code *)0x0) {
          if (*(undefined8 **)(param_1 + 0xe) == (undefined8 *)0x0) {
            uVar1 = 0;
          }
          else {
            uVar1 = **(undefined8 **)(param_1 + 0xe);
          }
          (*(code *)*__ptr_00)(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)__ptr_00[1] != (code *)0x0) {
          if (*(long *)(param_1 + 0xe) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 8);
          }
          (*(code *)__ptr_00[1])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)__ptr_00[2] != (code *)0x0) {
          if (*(long *)(param_1 + 0xe) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10);
          }
          (*(code *)__ptr_00[2])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)__ptr_00[3] != (code *)0x0) {
          if (*(long *)(param_1 + 0xe) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x18);
          }
          (*(code *)__ptr_00[3])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x10);
        }
        if ((code *)__ptr_00[4] != (code *)0x0) {
          if (*(long *)(param_1 + 0xe) == 0) {
            uVar1 = 0;
          }
          else {
            uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x20);
          }
          (*(code *)__ptr_00[4])(uVar1);
          __ptr_00 = *(undefined8 **)(param_1 + 0x10);
        }
      }
      free(__ptr_00);
      free(*(void **)(param_1 + 0xe));
      free(param_1);
      return;
    }
  }
  return;
}


