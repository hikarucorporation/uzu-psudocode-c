// Function : hb_buffer_destroy
// Namespace: 
// Entry    : 003f73d0
// Prototype: undefined hb_buffer_destroy(int * param_1)
// Body     : 003f73d0 - 003f745e


void hb_buffer_destroy(int *param_1)

{
  pthread_mutex_t *__ptr;
  
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
      hb_unicode_funcs_destroy(*(int **)(param_1 + 4));
      free(*(void **)(param_1 + 0x1c));
      free(*(void **)(param_1 + 0x20));
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x36));
      }
      free(param_1);
      return;
    }
  }
  return;
}


