// Function : ~accelerator_t
// Namespace: AAT:mortmorx_AAT__morx_AAT__ExtendedTypes_1836020344u_:accelerator_t
// Entry    : 003d97d0
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 003d97d0 - 003d9886


/* AAT::mortmorx<AAT::morx, AAT::ExtendedTypes, 1836020344u>::accelerator_t::~accelerator_t() */

void __thiscall
AAT::mortmorx<AAT::morx,AAT::ExtendedTypes,1836020344u>::accelerator_t::~accelerator_t
          (accelerator_t *this)

{
  int *__ptr;
  pthread_mutex_t *__ptr_00;
  ulong uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = 0;
    do {
      free(*(void **)(*(long *)(this + 0x10) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 8));
  }
  free(*(void **)(this + 0x10));
  __ptr = *(int **)this;
  if ((__ptr != (int *)0x0) && (*__ptr != 0)) {
    LOCK();
    *__ptr = *__ptr + -1;
    UNLOCK();
    if (*__ptr == 0) {
      *__ptr = -0xdead;
      __ptr_00 = *(pthread_mutex_t **)(__ptr + 2);
      if (__ptr_00 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 003d9844 to 003d984b has its CatchHandler @ 003d988f */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 003d9869 to 003d986a has its CatchHandler @ 003d9887 */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)this = 0;
  return;
}


