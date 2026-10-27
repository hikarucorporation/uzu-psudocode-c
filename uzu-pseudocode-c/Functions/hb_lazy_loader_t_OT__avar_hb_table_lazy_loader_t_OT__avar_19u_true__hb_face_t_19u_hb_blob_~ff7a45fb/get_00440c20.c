// Function : get
// Namespace: hb_lazy_loader_t_OT__avar_hb_table_lazy_loader_t_OT__avar_19u_true__hb_face_t_19u_hb_blob_~ff7a45fb
// Entry    : 00440c20
// Prototype: undefined4 * get(hb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t> * this, undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// Body     : 00440c20 - 00440d56


/* hb_lazy_loader_t<OT::avar, hb_table_lazy_loader_t<OT::avar, 19u, true>, hb_face_t, 19u,
   hb_blob_t>::get() const */

undefined4 * __thiscall
hb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t>::get
          (hb_lazy_loader_t<OT::avar,hb_table_lazy_loader_t<OT::avar,19u,true>,hb_face_t,19u,hb_blob_t>
           *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  pthread_mutex_t *__ptr;
  undefined4 *puVar1;
  int *__ptr_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  bool bVar2;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined1 local_34;
  undefined1 local_33;
  
  __ptr_00 = *(int **)this;
  if (__ptr_00 == (int *)0x0) {
    do {
      __ptr_00 = &_hb_NullPool;
      if (*(long *)(this + -0x98) == 0) goto LAB_00440c39;
      local_70[0] = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_48 = 0;
      local_33 = 0;
      local_44 = 0;
      uStack_3c = 0;
      local_34 = 1;
                    /* try { // try from 00440ca0 to 00440ca7 has its CatchHandler @ 00440d5f */
      __ptr_00 = hb_sanitize_context_t::reference_table<OT::avar>
                           ((hb_sanitize_context_t *)local_70,*(long *)(this + -0x98),param_2,
                            param_3,param_4);
      hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
      if (__ptr_00 == (int *)0x0) {
        __ptr_00 = &_hb_NullPool;
        LOCK();
        bVar2 = *(long *)this == 0;
        if (bVar2) {
          *(undefined4 **)this = &_hb_NullPool;
        }
        UNLOCK();
      }
      else {
        LOCK();
        bVar2 = *(long *)this == 0;
        if (bVar2) {
          *(int **)this = __ptr_00;
        }
        UNLOCK();
      }
      if (bVar2) goto LAB_00440c39;
      param_2 = extraout_RDX;
      if (((__ptr_00 != (int *)0x0) && (__ptr_00 != &_hb_NullPool)) && (*__ptr_00 != 0)) {
        LOCK();
        *__ptr_00 = *__ptr_00 + -1;
        UNLOCK();
        if (*__ptr_00 == 0) {
          *__ptr_00 = -0xdead;
          __ptr = *(pthread_mutex_t **)(__ptr_00 + 2);
          if (__ptr != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &__ptr[1].__data,__ptr);
            free(__ptr);
            __ptr_00[2] = 0;
            __ptr_00[3] = 0;
          }
          if (*(code **)(__ptr_00 + 10) != (code *)0x0) {
                    /* try { // try from 00440d1f to 00440d20 has its CatchHandler @ 00440d57 */
            (**(code **)(__ptr_00 + 10))(*(undefined8 *)(__ptr_00 + 8));
          }
          free(__ptr_00);
          param_2 = extraout_RDX_00;
        }
      }
      __ptr_00 = *(int **)this;
    } while (__ptr_00 == (int *)0x0);
  }
LAB_00440c39:
  if ((uint)__ptr_00[6] < 8) {
    puVar1 = &_hb_NullPool;
  }
  else {
    puVar1 = *(undefined4 **)(__ptr_00 + 4);
  }
  return puVar1;
}


