// Function : hb_blob_destroy
// Namespace: 
// Entry    : 003d0cf0
// Prototype: undefined hb_blob_destroy(int * param_1)
// Body     : 003d0cf0 - 003d0d5a


void hb_blob_destroy(int *param_1)

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
      if (*(code **)(param_1 + 10) != (code *)0x0) {
                    /* try { // try from 003d0d42 to 003d0d43 has its CatchHandler @ 003d0d5b */
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      }
      free(param_1);
      return;
    }
  }
  return;
}


