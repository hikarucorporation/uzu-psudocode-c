// Function : sendStateMessage
// Namespace: juce:Button
// Entry    : 0022f930
// Prototype: undefined sendStateMessage(Button * this)
// Body     : 0022f930 - 0022fb7a


/* juce::Button::sendStateMessage() */

void __thiscall juce::Button::sendStateMessage(Button *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  int local_48;
  int local_44;
  undefined1 *local_40;
  long local_38;
  undefined1 *local_30;
  
  plVar6 = *(long **)(this + 0xd8);
  if (plVar6 == (long *)0x0) {
    plVar6 = operator_new(0x18);
    *(undefined4 *)(plVar6 + 1) = 0;
    *plVar6 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar6[2] = (long)this;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar6;
    if (plVar2 == (long *)0x0) goto LAB_0022f94c;
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar6 = *(long **)(this + 0xd8);
    if (plVar6 != (long *)0x0) goto LAB_0022f94c;
    plVar6 = (long *)0x0;
  }
  else {
LAB_0022f94c:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 0022f955 to 0022f95d has its CatchHandler @ 0022fbf5 */
  (**(code **)(*(long *)this + 0x1c0))(this);
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (plVar6[2] == 0) goto LAB_0022fb4b;
  if (*(int *)(this + 0x180) == 2) {
    plVar2 = *(long **)(this + 0x160);
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x168);
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
    this_01 = *(vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0x170);
    puVar3 = *(undefined8 **)(this_01 + 8);
    if (puVar3 == *(undefined8 **)(this_01 + 0x10)) {
                    /* try { // try from 0022fa44 to 0022fa4d has its CatchHandler @ 0022fb7b */
      local_40 = (undefined1 *)&local_48;
      std::
      vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,puVar3,&local_40);
    }
    else {
      *puVar3 = &local_48;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    local_40 = *(undefined1 **)(this + 0x170);
    local_38 = *(long *)(this + 0x178);
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
    iVar8 = local_44;
    local_30 = (undefined1 *)&local_48;
    while ((local_48 < iVar8 && (plVar6[2] != 0))) {
      plVar4 = *(long **)(*plVar2 + (long)local_48 * 8);
      if (plVar4 != (long *)0x0) {
                    /* try { // try from 0022fab4 to 0022fab9 has its CatchHandler @ 0022fb85 */
        (**(code **)(*plVar4 + 0x18))(plVar4,this);
        iVar8 = local_44;
      }
      local_48 = local_48 + 1;
    }
    ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendStateMessage()::$_26,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendStateMessage()::$_26&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendStateMessage()::__26,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendStateMessage()::__26&&)::_lambda()_1_>
                   *)&local_40);
    if (this_00 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0022fb2d;
    uVar7 = *(ulong *)(this_00 + 8);
    if (uVar7 == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      lVar5 = plVar6[2];
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        uVar7 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = (int)uVar7 + -1;
      }
      if ((int)uVar7 != 1) goto LAB_0022fb2d;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      lVar5 = plVar6[2];
    }
  }
  else {
LAB_0022fb2d:
    lVar5 = plVar6[2];
  }
  if ((lVar5 != 0) && (*(long *)(this + 0x130) != 0)) {
                    /* try { // try from 0022fb45 to 0022fb4a has its CatchHandler @ 0022fb80 */
    (**(code **)(this + 0x138))(this + 0x120);
  }
LAB_0022fb4b:
  LOCK();
  plVar2 = plVar6 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  return;
}


