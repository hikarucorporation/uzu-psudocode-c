// Function : lockOrCreate
// Namespace: juce:SharedResourcePointer_juce__EventHandler_:Weak
// Entry    : 001a6860
// Prototype: long * lockOrCreate(long * param_1, SpinLock * param_2)
// Body     : 001a6860 - 001a6a7e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SharedResourcePointer<juce::EventHandler>::Weak::lockOrCreate() */

long * __cdecl
juce::SharedResourcePointer<juce::EventHandler>::Weak::lockOrCreate(long *param_1,SpinLock *param_2)

{
  int *piVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  EventHandler *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  long lVar8;
  bool bVar9;
  
  SpinLock::enter(param_2);
  lVar8 = *(long *)(param_2 + 0x10);
  param_1[1] = lVar8;
  if (lVar8 == 0) {
LAB_001a6903:
    *param_1 = 0;
  }
  else {
    iVar6 = *(int *)(lVar8 + 8);
    do {
      if (iVar6 == 0) {
        param_1[1] = 0;
        goto LAB_001a6903;
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
    if (p_Var7 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_001a6903;
    if (*(int *)(p_Var7 + 8) == 0) {
      *param_1 = 0;
      lVar8 = *(long *)(p_Var7 + 8);
      if (lVar8 == 0x100000001) goto LAB_001a68df;
LAB_001a6a42:
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
      if (lVar8 != 0) goto LAB_001a69e6;
      lVar8 = *(long *)(p_Var7 + 8);
      if (lVar8 != 0x100000001) goto LAB_001a6a42;
LAB_001a68df:
      *(undefined8 *)(p_Var7 + 8) = 0;
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
    }
  }
                    /* try { // try from 001a690a to 001a6913 has its CatchHandler @ 001a6abb */
  this = operator_new(0x68);
                    /* try { // try from 001a6917 to 001a691e has its CatchHandler @ 001a6aae */
  EventHandler::EventHandler(this);
                    /* try { // try from 001a691f to 001a6928 has its CatchHandler @ 001a6a7f */
  p_Var7 = operator_new(0x18);
  *(undefined8 *)(p_Var7 + 8) = 0x100000001;
  *(undefined ***)p_Var7 = &PTR___Sp_counted_base_00705440;
  *(EventHandler **)(p_Var7 + 0x10) = this;
  *(EventHandler **)(param_2 + 8) = this;
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
LAB_001a69e6:
  LOCK();
  *(undefined4 *)param_2 = 0;
  UNLOCK();
  return param_1;
}


