// Function : StateTableDriver
// Namespace: AAT:StateTableDriver_AAT__ObsoleteTypes_void_
// Entry    : 003e6b80
// Prototype: undefined StateTableDriver(StateTableDriver<AAT::ObsoleteTypes,void> * this, undefined8 param_1, long param_2)
// Body     : 003e6b80 - 003e6d1c


/* AAT::StateTableDriver<AAT::ObsoleteTypes,
   void>::StateTableDriver(AAT::StateTable<AAT::ObsoleteTypes, void> const&, hb_face_t*) */

void __thiscall
AAT::StateTableDriver<AAT::ObsoleteTypes,void>::StateTableDriver
          (StateTableDriver<AAT::ObsoleteTypes,void> *this,undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  pthread_mutex_t *__ptr;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
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
  
  *(undefined8 *)this = param_1;
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar5 == 0xffffffff) {
    piVar4 = *(int **)(param_2 + 0x78);
    if (piVar4 == (int *)0x0) {
      do {
        lVar2 = *(long *)(param_2 + 0x68);
        piVar4 = &_hb_NullPool;
        if (lVar2 == 0) goto LAB_003e6bbd;
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
        piVar4 = &_hb_NullPool;
                    /* try { // try from 003e6c3e to 003e6c58 has its CatchHandler @ 003e6d25 */
        if ((*(code **)(lVar2 + 0x20) != (code *)0x0) &&
           (piVar4 = (int *)(**(code **)(lVar2 + 0x20))
                                      (lVar2,0x6d617870,*(undefined8 *)(lVar2 + 0x28)),
           piVar4 == (int *)0x0)) {
          piVar4 = &_hb_NullPool;
        }
        piVar4 = hb_sanitize_context_t::sanitize_blob<OT::maxp>
                           ((hb_sanitize_context_t *)local_70,piVar4);
        hb_sanitize_context_t::~hb_sanitize_context_t((hb_sanitize_context_t *)local_70);
        if (piVar4 == (int *)0x0) {
          piVar4 = &_hb_NullPool;
          LOCK();
          bVar6 = *(long *)(param_2 + 0x78) == 0;
          if (bVar6) {
            *(long *)(param_2 + 0x78) = (long)&_hb_NullPool;
          }
          UNLOCK();
        }
        else {
          LOCK();
          bVar6 = *(long *)(param_2 + 0x78) == 0;
          if (bVar6) {
            *(long *)(param_2 + 0x78) = (long)piVar4;
          }
          UNLOCK();
        }
        if (bVar6) goto LAB_003e6bbd;
        if (((piVar4 != (int *)0x0) && (piVar4 != &_hb_NullPool)) && (*piVar4 != 0)) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            *piVar4 = -0xdead;
            __ptr = *(pthread_mutex_t **)(piVar4 + 2);
            if (__ptr != (pthread_mutex_t *)0x0) {
              hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                        ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                         &__ptr[1].__data,__ptr);
              free(__ptr);
              piVar4[2] = 0;
              piVar4[3] = 0;
            }
            if (*(code **)(piVar4 + 10) != (code *)0x0) {
                    /* try { // try from 003e6cdf to 003e6ce0 has its CatchHandler @ 003e6d1d */
              (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
            }
            free(piVar4);
          }
        }
        piVar4 = *(int **)(param_2 + 0x78);
      } while (piVar4 == (int *)0x0);
    }
LAB_003e6bbd:
    if ((uint)piVar4[6] < 6) {
      puVar3 = &_hb_NullPool;
    }
    else {
      puVar3 = *(undefined4 **)(piVar4 + 4);
    }
    uVar1 = *(ushort *)(puVar3 + 1);
    uVar5 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    *(uint *)(param_2 + 0x18) = uVar5;
  }
  *(uint *)(this + 8) = uVar5;
  return;
}


