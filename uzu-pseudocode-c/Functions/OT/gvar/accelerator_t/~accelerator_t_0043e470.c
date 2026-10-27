// Function : ~accelerator_t
// Namespace: OT:gvar:accelerator_t
// Entry    : 0043e470
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 0043e470 - 0043e4fe


/* OT::gvar::accelerator_t::~accelerator_t() */

void __thiscall OT::gvar::accelerator_t::~accelerator_t(accelerator_t *this)

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
                    /* try { // try from 0043e4a1 to 0043e4a8 has its CatchHandler @ 0043e507 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0043e4c6 to 0043e4c7 has its CatchHandler @ 0043e4ff */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)this = 0;
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x14) = 0;
    free(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}


