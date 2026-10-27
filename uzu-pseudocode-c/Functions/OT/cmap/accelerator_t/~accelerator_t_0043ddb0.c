// Function : ~accelerator_t
// Namespace: OT:cmap:accelerator_t
// Entry    : 0043ddb0
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 0043ddb0 - 0043de1e


/* OT::cmap::accelerator_t::~accelerator_t() */

void __thiscall OT::cmap::accelerator_t::~accelerator_t(accelerator_t *this)

{
  int *__ptr;
  pthread_mutex_t *__ptr_00;
  
  __ptr = *(int **)(this + 0x50);
  if ((__ptr != (int *)0x0) && (*__ptr != 0)) {
    LOCK();
    *__ptr = *__ptr + -1;
    UNLOCK();
    if (*__ptr == 0) {
      *__ptr = -0xdead;
      __ptr_00 = *(pthread_mutex_t **)(__ptr + 2);
      if (__ptr_00 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0043dde2 to 0043dde9 has its CatchHandler @ 0043de27 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 0043de07 to 0043de08 has its CatchHandler @ 0043de1f */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


