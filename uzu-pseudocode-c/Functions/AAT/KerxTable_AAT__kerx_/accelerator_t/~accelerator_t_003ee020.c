// Function : ~accelerator_t
// Namespace: AAT:KerxTable_AAT__kerx_:accelerator_t
// Entry    : 003ee020
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 003ee020 - 003ee0ae


/* AAT::KerxTable<AAT::kerx>::accelerator_t::~accelerator_t() */

void __thiscall AAT::KerxTable<AAT::kerx>::accelerator_t::~accelerator_t(accelerator_t *this)

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
                    /* try { // try from 003ee051 to 003ee058 has its CatchHandler @ 003ee0b7 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr_00[1].__data,__ptr_00);
        free(__ptr_00);
        __ptr[2] = 0;
        __ptr[3] = 0;
      }
      if (*(code **)(__ptr + 10) != (code *)0x0) {
                    /* try { // try from 003ee076 to 003ee077 has its CatchHandler @ 003ee0af */
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


