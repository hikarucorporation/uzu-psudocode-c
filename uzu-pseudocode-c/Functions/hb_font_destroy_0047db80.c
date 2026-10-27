// Function : hb_font_destroy
// Namespace: 
// Entry    : 0047db80
// Prototype: undefined hb_font_destroy(int * param_1)
// Body     : 0047db80 - 0047dc56


void hb_font_destroy(int *param_1)

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
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x26));
      }
      hb_font_destroy(*(int **)(param_1 + 6));
      hb_face_destroy(*(int **)(param_1 + 8));
      hb_font_funcs_destroy(*(int **)(param_1 + 0x24));
      free(*(void **)(param_1 + 0x20));
      free(*(void **)(param_1 + 0x22));
      free(param_1);
      return;
    }
  }
  return;
}


