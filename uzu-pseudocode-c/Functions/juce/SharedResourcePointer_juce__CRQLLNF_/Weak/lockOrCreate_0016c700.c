// Function : lockOrCreate
// Namespace: juce:SharedResourcePointer_juce__CRQLLNF_:Weak
// Entry    : 0016c700
// Prototype: long * lockOrCreate(long * param_1, SpinLock * param_2)
// Body     : 0016c700 - 0016caa8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate() */

long * __cdecl
juce::SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate(long *param_1,SpinLock *param_2)

{
  int *piVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  int iVar6;
  LookAndFeel_V4 *this;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var7;
  long lVar8;
  bool bVar9;
  
  SpinLock::enter(param_2);
  lVar8 = *(long *)(param_2 + 0x10);
  param_1[1] = lVar8;
  if (lVar8 == 0) {
LAB_0016c7a3:
    *param_1 = 0;
  }
  else {
    iVar6 = *(int *)(lVar8 + 8);
    do {
      if (iVar6 == 0) {
        param_1[1] = 0;
        goto LAB_0016c7a3;
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
    if (p_Var7 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0016c7a3;
    if (*(int *)(p_Var7 + 8) == 0) {
      *param_1 = 0;
      lVar8 = *(long *)(p_Var7 + 8);
      if (lVar8 == 0x100000001) goto LAB_0016c77f;
LAB_0016ca6c:
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
      if (lVar8 != 0) goto LAB_0016ca0e;
      lVar8 = *(long *)(p_Var7 + 8);
      if (lVar8 != 0x100000001) goto LAB_0016ca6c;
LAB_0016c77f:
      *(undefined8 *)(p_Var7 + 8) = 0;
      (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
      (**(code **)(*(long *)p_Var7 + 0x18))(p_Var7);
    }
  }
                    /* try { // try from 0016c7aa to 0016c7b3 has its CatchHandler @ 0016cade */
  this = operator_new(0x180);
  memset(this,0,0x180);
                    /* try { // try from 0016c7c6 to 0016c7cd has its CatchHandler @ 0016cad1 */
  LookAndFeel_V4::LookAndFeel_V4(this);
  *(undefined ***)this = &PTR__LookAndFeel_V4_00701f78;
  *(undefined ***)(this + 8) = &PTR__CRQLLNF_00702410;
  *(undefined ***)(this + 0x10) = &PTR__CRQLLNF_00702470;
  *(undefined ***)(this + 0x18) = &PTR__CRQLLNF_00702498;
  *(undefined ***)(this + 0x20) = &PTR__CRQLLNF_007024d0;
  *(undefined ***)(this + 0x28) = &PTR__CRQLLNF_00702520;
  *(undefined ***)(this + 0x30) = &PTR__CRQLLNF_00702558;
  *(undefined ***)(this + 0x38) = &PTR__CRQLLNF_00702588;
  *(undefined ***)(this + 0x40) = &PTR__CRQLLNF_007025e8;
  *(undefined ***)(this + 0x48) = &PTR__CRQLLNF_007026d0;
  *(undefined ***)(this + 0x50) = &PTR__CRQLLNF_00702720;
  *(undefined ***)(this + 0x58) = &PTR__CRQLLNF_00702758;
  *(undefined ***)(this + 0x60) = &PTR__CRQLLNF_007027d8;
  *(undefined ***)(this + 0x68) = &PTR__CRQLLNF_00702818;
  *(undefined ***)(this + 0x70) = &PTR__CRQLLNF_00702850;
  *(undefined ***)(this + 0x78) = &PTR__CRQLLNF_00702880;
  *(undefined ***)(this + 0x80) = &PTR__CRQLLNF_00702900;
  *(undefined ***)(this + 0x88) = &PTR__CRQLLNF_00702948;
  *(undefined ***)(this + 0x90) = &PTR__CRQLLNF_00702978;
  *(undefined ***)(this + 0x98) = &PTR__CRQLLNF_007029a0;
  *(undefined ***)(this + 0xa0) = &PTR__CRQLLNF_007029d0;
  *(undefined ***)(this + 0xa8) = &PTR__CRQLLNF_00702a08;
  *(undefined ***)(this + 0xb0) = &PTR__CRQLLNF_00702a48;
  *(undefined ***)(this + 0xb8) = &PTR__CRQLLNF_00702a70;
  *(undefined ***)(this + 0xc0) = &PTR__CRQLLNF_00702aa8;
  *(undefined ***)(this + 200) = &PTR__CRQLLNF_00702ad0;
  *(undefined ***)(this + 0xd0) = &PTR__CRQLLNF_00702af8;
  *(undefined ***)(this + 0xd8) = &PTR__CRQLLNF_00702b20;
  *(undefined ***)(this + 0xe0) = &PTR__CRQLLNF_00702b48;
                    /* try { // try from 0016c936 to 0016c93f has its CatchHandler @ 0016caa9 */
  p_Var7 = operator_new(0x18);
  *(undefined8 *)(p_Var7 + 8) = 0x100000001;
  *(undefined ***)p_Var7 = &PTR___Sp_counted_base_00701a20;
  *(LookAndFeel_V4 **)(p_Var7 + 0x10) = this;
  *(LookAndFeel_V4 **)(param_2 + 8) = this;
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
LAB_0016ca0e:
  LOCK();
  *(undefined4 *)param_2 = 0;
  UNLOCK();
  return param_1;
}


