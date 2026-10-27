// Function : sendVisibilityChangeMessage
// Namespace: juce:Component
// Entry    : 0022bc30
// Prototype: undefined sendVisibilityChangeMessage(Component * this)
// Body     : 0022bc30 - 0022be5e


/* juce::Component::sendVisibilityChangeMessage() */

void __thiscall juce::Component::sendVisibilityChangeMessage(Component *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  int local_48;
  int local_44;
  undefined1 *local_40;
  long local_38;
  undefined1 *local_30;
  
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
    if (plVar2 == (long *)0x0) goto LAB_0022bc4c;
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar5 = *(long **)(this + 0xd8);
    if (plVar5 != (long *)0x0) goto LAB_0022bc4c;
    plVar5 = (long *)0x0;
  }
  else {
LAB_0022bc4c:
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 0022bc55 to 0022bc5a has its CatchHandler @ 0022bed4 */
  (**(code **)(*(long *)this + 0x68))(this);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if ((plVar5[2] != 0) && (*(int *)(this + 0xc0) == 2)) {
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
    local_48 = 0;
    local_44 = *(int *)((long)plVar2 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0xb0);
    puVar3 = *(undefined8 **)(this_01 + 8);
    if (puVar3 == *(undefined8 **)(this_01 + 0x10)) {
                    /* try { // try from 0022bd41 to 0022bd4a has its CatchHandler @ 0022be5f */
      local_40 = (undefined1 *)&local_48;
      std::
      vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,puVar3,&local_40);
    }
    else {
      *puVar3 = &local_48;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    local_40 = *(undefined1 **)(this + 0xb0);
    local_38 = *(long *)(this + 0xb8);
    if (local_38 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      }
    }
    iVar7 = local_44;
    local_30 = (undefined1 *)&local_48;
    while ((local_48 < iVar7 && (plVar5[2] != 0))) {
      plVar4 = *(long **)(*plVar2 + (long)local_48 * 8);
      if (plVar4 != (long *)0x0) {
                    /* try { // try from 0022bdb4 to 0022bdb9 has its CatchHandler @ 0022be64 */
        (**(code **)(*plVar4 + 0x20))(plVar4,this);
        iVar7 = local_44;
      }
      local_48 = local_48 + 1;
    }
    ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendVisibilityChangeMessage()::$_31,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendVisibilityChangeMessage()::$_31&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendVisibilityChangeMessage()::__31,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendVisibilityChangeMessage()::__31&&)::_lambda()_1_>
                   *)&local_40);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      uVar6 = *(ulong *)(this_00 + 8);
      if (uVar6 == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        iVar7 = (int)*plVar2;
        UNLOCK();
        goto joined_r0x0022be5b;
      }
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
      if ((int)uVar6 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        iVar7 = (int)*plVar2;
        UNLOCK();
        goto joined_r0x0022be5b;
      }
    }
  }
  LOCK();
  plVar2 = plVar5 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  iVar7 = (int)*plVar2;
  UNLOCK();
joined_r0x0022be5b:
  if (iVar7 == 0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return;
}


