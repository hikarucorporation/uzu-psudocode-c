// Function : lockOrCreate
// Namespace: juce:SharedResourcePointer_juce__detail__MessageThread_:Weak
// Entry    : 001a6310
// Prototype: long * lockOrCreate(long * param_1, SpinLock * param_2)
// Body     : 001a6310 - 001a652e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SharedResourcePointer<juce::detail::MessageThread>::Weak::lockOrCreate() */

long * __cdecl
juce::SharedResourcePointer<juce::detail::MessageThread>::Weak::lockOrCreate
          (long *param_1,SpinLock *param_2)

{
  int *piVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  MessageThread *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  long lVar8;
  bool bVar9;
  
  SpinLock::enter(param_2);
  lVar8 = *(long *)(param_2 + 0x10);
  param_1[1] = lVar8;
  if (lVar8 == 0) {
LAB_001a63b3:
    *param_1 = 0;
  }
  else {
    iVar6 = *(int *)(lVar8 + 8);
    do {
      if (iVar6 == 0) {
        param_1[1] = 0;
        goto LAB_001a63b3;
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 8);
      bVar9 = iVar6 == iVar3;
      if (bVar9) {
        *(int *)(lVar8 + 8) = iVar6 + 1;
      }
      else {
        iVar6 = iVar3;
      }
      UNLOCK();
    } while (!bVar9);
    p_Var7 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[1];
    if (p_Var7 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001a63b3;
    if (*(int *)(p_Var7 + 8) == 0) {
      *param_1 = 0;
      lVar8 = *(long *)(p_Var7 + 8);
      if (lVar8 == 0x100000001) goto LAB_001a638f;
LAB_001a64f2:
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var2 = p_Var7 + 8;
        iVar6 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
      }
      else {
        iVar6 = (int)lVar8;
        *(int *)(p_Var7 + 8) = iVar6 + -1;
      }
      if (iVar6 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
      }
    }
    else {
      lVar8 = *(long *)(param_2 + 8);
      *param_1 = lVar8;
      if (lVar8 != 0) goto LAB_001a6496;
      lVar8 = *(long *)(p_Var7 + 8);
      if (lVar8 != 0x100000001) goto LAB_001a64f2;
LAB_001a638f:
      *(undefined8 *)(p_Var7 + 8) = 0;
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
    }
  }
                    /* try { // try from 001a63ba to 001a63c3 has its CatchHandler @ 001a6565 */
  this = operator_new(0x200);
                    /* try { // try from 001a63c7 to 001a63ce has its CatchHandler @ 001a6558 */
  detail::MessageThread::MessageThread(this);
                    /* try { // try from 001a63cf to 001a63d8 has its CatchHandler @ 001a652f */
  p_Var7 = operator_new(0x18);
  *(undefined8 *)(p_Var7 + 8) = 0x100000001;
  *(undefined ***)p_Var7 = &PTR___Sp_counted_base_00705320;
  *(MessageThread **)(p_Var7 + 0x10) = this;
  *(MessageThread **)(param_2 + 8) = this;
  puVar5 = PTR___libc_single_threaded_00715c50;
  if (*PTR___libc_single_threaded_00715c50 == '\0') {
    LOCK();
    *(int *)(p_Var7 + 0xc) = *(int *)(p_Var7 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(long **)(param_2 + 0x10);
  }
  else {
    *(undefined4 *)(p_Var7 + 0xc) = 2;
    plVar4 = *(long **)(param_2 + 0x10);
  }
  if (plVar4 != (long *)0x0) {
    if (*puVar5 == '\0') {
      LOCK();
      piVar1 = (int *)((long)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar6 = *(int *)((long)plVar4 + 0xc);
      *(int *)((long)plVar4 + 0xc) = iVar6 + -1;
    }
    if (iVar6 == 1) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_2 + 0x10) = p_Var7;
  *param_1 = (long)this;
  param_1[1] = (long)p_Var7;
  if (*puVar5 == '\0') {
    LOCK();
    *(int *)(p_Var7 + 8) = *(int *)(p_Var7 + 8) + 1;
    UNLOCK();
    lVar8 = *(long *)(p_Var7 + 8);
  }
  else {
    *(int *)(p_Var7 + 8) = *(int *)(p_Var7 + 8) + 1;
    lVar8 = *(long *)(p_Var7 + 8);
  }
  if (lVar8 == 0x100000001) {
    *(undefined8 *)(p_Var7 + 8) = 0;
    (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
    (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
  }
  else {
    if (*puVar5 == '\0') {
      LOCK();
      p_Var2 = p_Var7 + 8;
      iVar6 = *(int *)p_Var2;
      *(int *)p_Var2 = *(int *)p_Var2 + -1;
      UNLOCK();
    }
    else {
      iVar6 = (int)lVar8;
      *(int *)(p_Var7 + 8) = iVar6 + -1;
    }
    if (iVar6 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var7);
    }
  }
LAB_001a6496:
  LOCK();
  *(undefined4 *)param_2 = 0;
  UNLOCK();
  return param_1;
}


