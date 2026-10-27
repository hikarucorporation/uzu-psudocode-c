// Function : get
// Namespace: hb_lazy_loader_t_AAT__feat_hb_table_lazy_loader_t_AAT__feat_34u_false__hb_face_t_34u_hb_bl~f2e0ac78
// Entry    : 003eb600
// Prototype: undefined4 * get(hb_lazy_loader_t<AAT::feat,hb_table_lazy_loader_t<AAT::feat,34u,false>,hb_face_t,34u,hb_blob_t> * this)
// Body     : 003eb600 - 003eb748


/* hb_lazy_loader_t<AAT::feat, hb_table_lazy_loader_t<AAT::feat, 34u, false>, hb_face_t, 34u,
   hb_blob_t>::get() const */

undefined4 * __thiscall
hb_lazy_loader_t<AAT::feat,hb_table_lazy_loader_t<AAT::feat,34u,false>,hb_face_t,34u,hb_blob_t>::get
          (hb_lazy_loader_t<AAT::feat,hb_table_lazy_loader_t<AAT::feat,34u,false>,hb_face_t,34u,hb_blob_t>
           *this)

{
  pthread_mutex_t *__ptr;
  undefined4 *puVar1;
  int *__ptr_00;
  bool bVar2;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  __ptr_00 = *(int **)this;
  if (__ptr_00 == (int *)0x0) {
    do {
      __ptr_00 = &_hb_NullPool;
      if (*(long *)(this + -0x110) == 0) goto LAB_003eb619;
      local_70[0] = 0;
      local_44 = 0;
      local_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_48 = 0;
      local_38 = 0x10000;
      local_34 = 0;
                    /* try { // try from 003eb692 to 003eb699 has its CatchHandler @ 003eb751 */
      __ptr_00 = hb_sanitize_context_t::reference_table<AAT::feat>
                           ((hb_sanitize_context_t *)local_70,*(long *)(this + -0x110));
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
      if (bVar2) goto LAB_003eb619;
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
                    /* try { // try from 003eb711 to 003eb712 has its CatchHandler @ 003eb749 */
            (**(code **)(__ptr_00 + 10))(*(undefined8 *)(__ptr_00 + 8));
          }
          free(__ptr_00);
        }
      }
      __ptr_00 = *(int **)this;
    } while (__ptr_00 == (int *)0x0);
  }
LAB_003eb619:
  if ((uint)__ptr_00[6] < 0xc) {
    puVar1 = &_hb_NullPool;
  }
  else {
    puVar1 = *(undefined4 **)(__ptr_00 + 4);
  }
  return puVar1;
}


