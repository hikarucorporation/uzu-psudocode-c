// Function : ~accelerator_t
// Namespace: AAT:mortmorx_AAT__mort_AAT__ObsoleteTypes_1836020340u_:accelerator_t
// Entry    : 003d9fd0
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 003d9fd0 - 003da086


/* AAT::mortmorx<AAT::mort, AAT::ObsoleteTypes, 1836020340u>::accelerator_t::~accelerator_t() */

void __thiscall
AAT::mortmorx<AAT::mort,AAT::ObsoleteTypes,1836020340u>::accelerator_t::~accelerator_t
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
                    /* try { // try from 003da044 to 003da04b has its CatchHandler @ 003da08f */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 003da069 to 003da06a has its CatchHandler @ 003da087 */
        (**(code **)(__ptr + 10))(*(undefined8 *)(__ptr + 8));
      }
      free(__ptr);
    }
  }
  *(undefined8 *)this = 0;
  return;
}


