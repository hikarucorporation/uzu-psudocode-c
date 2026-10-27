// Function : ~hb_aat_apply_context_t
// Namespace: AAT:hb_aat_apply_context_t
// Entry    : 003d8ff0
// Prototype: undefined ~hb_aat_apply_context_t(hb_aat_apply_context_t * this)
// Body     : 003d8ff0 - 003d9083


/* AAT::hb_aat_apply_context_t::~hb_aat_apply_context_t() */

void __thiscall AAT::hb_aat_apply_context_t::~hb_aat_apply_context_t(hb_aat_apply_context_t *this)

{
  int *__ptr;
  pthread_mutex_t *__ptr_00;
  
  __ptr = *(int **)(this + 0x58);
  if ((__ptr != (int *)0x0) && (*__ptr != 0)) {
    LOCK();
    *__ptr = *__ptr + -1;
    UNLOCK();
    if (*__ptr == 0) {
      *__ptr = -0xdead;
      __ptr_00 = *(pthread_mutex_t **)(__ptr + 2);
      if (__ptr_00 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d902a to 003d9031 has its CatchHandler @ 003d908c */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 003d904f to 003d9050 has its CatchHandler @ 003d9084 */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)(this + 0x28));
  return;
}


