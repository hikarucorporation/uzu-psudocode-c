// Function : operator->
// Namespace: hb_lazy_loader_t_OT__maxp_hb_table_lazy_loader_t_OT__maxp_2u_true__hb_face_t_2u_hb_blob_t_
// Entry    : 00462b00
// Prototype: undefined4 * operator->(hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t> * this)
// Body     : 00462b00 - 00462c55


/* hb_lazy_loader_t<OT::maxp, hb_table_lazy_loader_t<OT::maxp, 2u, true>, hb_face_t, 2u,
   hb_blob_t>::TEMPNAMEPLACEHOLDERVALUE() const */

undefined4 * __thiscall
hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>::
operator->(hb_lazy_loader_t<OT::maxp,hb_table_lazy_loader_t<OT::maxp,2u,true>,hb_face_t,2u,hb_blob_t>
           *this)

{
  long lVar1;
  pthread_mutex_t *__ptr;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
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
  
  piVar3 = *(int **)this;
  if (piVar3 == (int *)0x0) {
    do {
      lVar1 = *(long *)(this + -0x10);
      piVar3 = &_hb_NullPool;
      if (lVar1 == 0) goto LAB_00462b19;
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
      piVar3 = &_hb_NullPool;
                    /* try { // try from 00462b8d to 00462ba7 has its CatchHandler @ 00462c5e */
      if ((*(code **)(lVar1 + 0x20) != (code *)0x0) &&
         (piVar3 = (int *)(**(code **)(lVar1 + 0x20))
                                    (lVar1,0x6d617870,*(undefined8 *)(lVar1 + 0x28)),
         piVar3 == (int *)0x0)) {
        piVar3 = &_hb_NullPool;
      }
      piVar3 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                         ((hb_sanitize_context_t *)local_70,piVar3);
      hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
      if (piVar3 == (int *)0x0) {
        piVar3 = &_hb_NullPool;
        LOCK();
        bVar4 = *(long *)this == 0;
        if (bVar4) {
          *(undefined4 **)this = &_hb_NullPool;
        }
        UNLOCK();
      }
      else {
        LOCK();
        bVar4 = *(long *)this == 0;
        if (bVar4) {
          *(int **)this = piVar3;
        }
        UNLOCK();
      }
      if (bVar4) goto LAB_00462b19;
      if (((piVar3 != (int *)0x0) && (piVar3 != &_hb_NullPool)) && (*piVar3 != 0)) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          *piVar3 = -0xdead;
          __ptr = *(pthread_mutex_t **)(piVar3 + 2);
          if (__ptr != (pthread_mutex_t *)0x0) {
            hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                      ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                       &__ptr[1].__data,__ptr);
            free(__ptr);
            piVar3[2] = 0;
            piVar3[3] = 0;
          }
          if (*(code **)(piVar3 + 10) != (code *)0x0) {
                    /* try { // try from 00462c1b to 00462c1c has its CatchHandler @ 00462c56 */
            (**(code **)(piVar3 + 10))(*(undefined8 *)(piVar3 + 8));
          }
          free(piVar3);
        }
      }
      piVar3 = *(int **)this;
    } while (piVar3 == (int *)0x0);
  }
LAB_00462b19:
  if ((uint)piVar3[6] < 6) {
    puVar2 = &_hb_NullPool;
  }
  else {
    puVar2 = *(undefined4 **)(piVar3 + 4);
  }
  return puVar2;
}


