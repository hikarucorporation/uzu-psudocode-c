// Function : ~glyf_accelerator_t
// Namespace: OT:glyf_accelerator_t
// Entry    : 0043e0d0
// Prototype: undefined ~glyf_accelerator_t(glyf_accelerator_t * this)
// Body     : 0043e0d0 - 0043e13e


/* OT::glyf_accelerator_t::~glyf_accelerator_t() */

void __thiscall OT::glyf_accelerator_t::~glyf_accelerator_t(glyf_accelerator_t *this)

{
  int *__ptr;
  pthread_mutex_t *__ptr_00;
  
  __ptr = *(int **)(this + 0x28);
  if ((__ptr != (int *)0x0) && (*__ptr != 0)) {
    LOCK();
    *__ptr = *__ptr + -1;
    UNLOCK();
    if (*__ptr == 0) {
      *__ptr = -0xdead;
      __ptr_00 = *(pthread_mutex_t **)(__ptr + 2);
      if (__ptr_00 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0043e102 to 0043e109 has its CatchHandler @ 0043e147 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0043e127 to 0043e128 has its CatchHandler @ 0043e13f */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


