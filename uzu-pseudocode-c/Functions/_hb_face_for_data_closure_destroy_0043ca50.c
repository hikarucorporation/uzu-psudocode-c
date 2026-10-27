// Function : _hb_face_for_data_closure_destroy
// Namespace: 
// Entry    : 0043ca50
// Prototype: undefined _hb_face_for_data_closure_destroy(undefined8 * param_1)
// Body     : 0043ca50 - 0043cabc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_face_for_data_closure_destroy(void*) */

void __cdecl _hb_face_for_data_closure_destroy(undefined8 *param_1)

{
  int *__ptr;
  pthread_mutex_t *__ptr_00;
  
  __ptr = (int *)*param_1;
  if ((__ptr != (int *)0x0) && (*__ptr != 0)) {
    LOCK();
    *__ptr = *__ptr + -1;
    UNLOCK();
    if (*__ptr == 0) {
      *__ptr = -0xdead;
      __ptr_00 = *(pthread_mutex_t **)(__ptr + 2);
      if (__ptr_00 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0043caa6 to 0043caa7 has its CatchHandler @ 0043cabd */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  free(param_1);
  return;
}


