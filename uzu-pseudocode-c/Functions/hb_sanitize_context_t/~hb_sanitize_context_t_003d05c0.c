// Function : ~hb_sanitize_context_t
// Namespace: hb_sanitize_context_t
// Entry    : 003d05c0
// Prototype: undefined ~hb_sanitize_context_t(hb_sanitize_context_t * this)
// Body     : 003d05c0 - 003d063e


/* hb_sanitize_context_t::~hb_sanitize_context_t() */

void __thiscall hb_sanitize_context_t::~hb_sanitize_context_t(hb_sanitize_context_t *this)

{
  int *__ptr;
  pthread_mutex_t *__ptr_00;
  
  __ptr = *(int **)(this + 0x30);
  if (__ptr != (int *)0x0) {
    if (*__ptr != 0) {
      LOCK();
      *__ptr = *__ptr + -1;
      UNLOCK();
      if (*__ptr == 0) {
        *__ptr = -0xdead;
        __ptr_00 = *(pthread_mutex_t **)(__ptr + 2);
        if (__ptr_00 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d05f2 to 003d05f9 has its CatchHandler @ 003d0647 */
          hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                    ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                     &__ptr_00[1].__data,__ptr_00);
          free(__ptr_00);
          __ptr[2] = 0;
          __ptr[3] = 0;
        }
        if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 003d0617 to 003d0618 has its CatchHandler @ 003d063f */
          (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
        }
        free(__ptr);
      }
    }
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  return;
}


