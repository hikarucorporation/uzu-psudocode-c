// Function : ~accelerator_t
// Namespace: OT:kern:accelerator_t
// Entry    : 00406c20
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 00406c20 - 00406cae


/* OT::kern::accelerator_t::~accelerator_t() */

void __thiscall OT::kern::accelerator_t::~accelerator_t(accelerator_t *this)

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
                    /* try { // try from 00406c51 to 00406c58 has its CatchHandler @ 00406cb7 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 00406c76 to 00406c77 has its CatchHandler @ 00406caf */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)this = 0;
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)(this + 0xc) = 0;
    free(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


