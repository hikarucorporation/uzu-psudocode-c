// Function : hb_unicode_funcs_destroy
// Namespace: 
// Entry    : 003f59e0
// Prototype: undefined hb_unicode_funcs_destroy(int * param_1)
// Body     : 003f59e0 - 003f5ae9


void hb_unicode_funcs_destroy(int *param_1)

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
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))(*(undefined8 *)(param_1 + 0x16));
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(code **)(param_1 + 0x2a) != (code *)0x0) {
        (**(code **)(param_1 + 0x2a))(*(undefined8 *)(param_1 + 0x1a));
      }
      if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
        (**(code **)(param_1 + 0x2c))(*(undefined8 *)(param_1 + 0x1c));
      }
      if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
        (**(code **)(param_1 + 0x2e))(*(undefined8 *)(param_1 + 0x1e));
      }
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x20));
      }
      if (*(code **)(param_1 + 0x32) != (code *)0x0) {
        (**(code **)(param_1 + 0x32))(*(undefined8 *)(param_1 + 0x22));
      }
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))(*(undefined8 *)(param_1 + 0x24));
      }
      hb_unicode_funcs_destroy(*(int **)(param_1 + 4));
      free(param_1);
      return;
    }
  }
  return;
}


