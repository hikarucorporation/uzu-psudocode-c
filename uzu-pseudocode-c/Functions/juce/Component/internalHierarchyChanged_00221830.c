// Function : internalHierarchyChanged
// Namespace: juce:Component
// Entry    : 00221830
// Prototype: undefined internalHierarchyChanged(Component * this)
// Body     : 00221830 - 00221ab6


/* juce::Component::internalHierarchyChanged() */

void __thiscall juce::Component::internalHierarchyChanged(Component *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  int local_50;
  int local_4c;
  int *local_48;
  long local_40;
  int *local_38;
  
  plVar5 = *(long **)(this + 0xd8);
  if (plVar5 == (long *)0x0) {
    plVar5 = operator_new(0x18);
    *(undefined4 *)(plVar5 + 1) = 0;
    *plVar5 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar5[2] = (long)this;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar5;
    if (plVar2 == (long *)0x0) goto LAB_0022184d;
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar5 = *(long **)(this + 0xd8);
    if (plVar5 != (long *)0x0) goto LAB_0022184d;
    plVar5 = (long *)0x0;
  }
  else {
LAB_0022184d:
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 00221857 to 0022185f has its CatchHandler @ 00221b2e */
  (**(code **)(*(long *)this + 0x90))(this);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if (plVar5[2] == 0) goto LAB_00221a86;
  if (*(int *)(this + 0xc0) == 2) {
    plVar2 = *(long **)(this + 0xa0);
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0xa8);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      }
    }
    local_50 = 0;
    local_4c = *(int *)((long)plVar2 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0xb0);
    plVar3 = *(long **)(this_01 + 8);
    if (plVar3 == *(long **)(this_01 + 0x10)) {
                    /* try { // try from 00221949 to 00221952 has its CatchHandler @ 00221ab7 */
      local_48 = &local_50;
      std::
      vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,plVar3,&local_48);
    }
    else {
      *plVar3 = (long)&local_50;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    local_48 = *(int **)(this + 0xb0);
    local_40 = *(long *)(this + 0xb8);
    if (local_40 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      }
    }
    iVar8 = local_4c;
    local_38 = &local_50;
    while ((local_50 < iVar8 && (plVar5[2] != 0))) {
      plVar3 = *(long **)(*plVar2 + (long)local_50 * 8);
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 002219c5 to 002219ca has its CatchHandler @ 00221abe */
        (**(code **)(*plVar3 + 0x30))(plVar3,this);
        iVar8 = local_4c;
      }
      local_50 = local_50 + 1;
    }
    ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalHierarchyChanged()::$_34,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalHierarchyChanged()::$_34&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalHierarchyChanged()::__34,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalHierarchyChanged()::__34&&)::_lambda()_1_>
                   *)&local_48);
    if (this_00 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00221a3f;
    uVar6 = *(ulong *)(this_00 + 8);
    if (uVar6 == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      lVar4 = plVar5[2];
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        uVar6 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = (int)uVar6 + -1;
      }
      if ((int)uVar6 != 1) goto LAB_00221a3f;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      lVar4 = plVar5[2];
    }
  }
  else {
LAB_00221a3f:
    lVar4 = plVar5[2];
  }
  if (lVar4 != 0) {
    uVar7 = *(uint *)(this + 100);
    while (0 < (int)uVar7) {
      uVar7 = uVar7 - 1;
                    /* try { // try from 00221a5b to 00221a5f has its CatchHandler @ 00221b38 */
      internalHierarchyChanged(*(Component **)(*(long *)(this + 0x58) + (ulong)uVar7 * 8));
      if (plVar5[2] == 0) goto LAB_00221a86;
      if ((int)*(uint *)(this + 100) < (int)uVar7) {
        uVar7 = *(uint *)(this + 100);
      }
    }
    if ((*(ushort *)(this + 0xe8) & 1) != 0) {
                    /* try { // try from 00221a7e to 00221a85 has its CatchHandler @ 00221abc */
      getAccessibilityHandler(this);
    }
  }
LAB_00221a86:
  LOCK();
  plVar2 = plVar5 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return;
}


