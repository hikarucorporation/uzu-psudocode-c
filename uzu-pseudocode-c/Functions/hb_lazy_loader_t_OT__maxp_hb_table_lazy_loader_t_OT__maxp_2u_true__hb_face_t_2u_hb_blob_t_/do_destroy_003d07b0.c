// Function : do_destroy
// Namespace: hb_lazy_loader_t_OT__maxp_hb_table_lazy_loader_t_OT__maxp_2u_true__hb_face_t_2u_hb_blob_t_
// Entry    : 003d07b0
// Prototype: undefined do_destroy(int * param_1)
// Body     : 003d07b0 - 003d0826


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_lazy_loader_t<OT::maxp, hb_table_lazy_loader_t<OT::maxp, 2u, true>, hb_face_t, 2u,
   hb_blob_t>::do_destroy(hb_blob_t*) */

void __cdecl
hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>::
do_destroy(int *param_1)

{
  pthread_mutex_t *__ptr;
  
  if (((param_1 != (int *)0x0) && (param_1 != &_hb_NullPool)) && (*param_1 != 0)) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      *param_1 = -0xdead;
      __ptr = *(pthread_mutex_t **)(param_1 + 2);
      if (__ptr != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr[1].__data,__ptr);
        free(__ptr);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      if (*(code **)(param_1 + 10) != (code *)0x0) {
                    /* try { // try from 003d080e to 003d080f has its CatchHandler @ 003d0827 */
        (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      }
      free(param_1);
      return;
    }
  }
  return;
}


