// Function : hb_shape_plan_destroy
// Namespace: 
// Entry    : 00417780
// Prototype: undefined hb_shape_plan_destroy(int * param_1)
// Body     : 00417780 - 004177f5


void hb_shape_plan_destroy(int *param_1)

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
      free(*(void **)(param_1 + 0xe));
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      hb_ot_shape_plan_t::~hb_ot_shape_plan_t((hb_ot_shape_plan_t *)(param_1 + 0x18));
      free(param_1);
      return;
    }
  }
  return;
}


