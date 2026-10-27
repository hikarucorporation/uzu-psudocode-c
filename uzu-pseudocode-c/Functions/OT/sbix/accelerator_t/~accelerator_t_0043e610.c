// Function : ~accelerator_t
// Namespace: OT:sbix:accelerator_t
// Entry    : 0043e610
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 0043e610 - 0043e67c


/* OT::sbix::accelerator_t::~accelerator_t() */

void __thiscall OT::sbix::accelerator_t::~accelerator_t(accelerator_t *this)

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
                    /* try { // try from 0043e641 to 0043e648 has its CatchHandler @ 0043e685 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0043e666 to 0043e667 has its CatchHandler @ 0043e67d */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)this = 0;
  return;
}


