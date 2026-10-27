// Function : destroy
// Namespace: hb_blob_ptr_t_AAT__morx_
// Entry    : 003dc940
// Prototype: undefined destroy(hb_blob_ptr_t<AAT::morx> * this)
// Body     : 003dc940 - 003dc9ac


/* hb_blob_ptr_t<AAT::morx>::destroy() */

void __thiscall hb_blob_ptr_t<AAT::morx>::destroy(hb_blob_ptr_t<AAT::morx> *this)

{
  int *__ptr;
  pthread_mutex_t *__ptr_00;
  
  __ptr = *(int **)this;
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
                    /* try { // try from 003dc996 to 003dc997 has its CatchHandler @ 003dc9ad */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)this = 0;
  return;
}


