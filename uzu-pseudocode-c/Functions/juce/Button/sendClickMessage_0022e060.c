// Function : sendClickMessage
// Namespace: juce:Button
// Entry    : 0022e060
// Prototype: undefined sendClickMessage(Button * this, undefined8 param_1)
// Body     : 0022e060 - 0022e32c


/* juce::Button::sendClickMessage(juce::ModifierKeys const&) */

void __thiscall juce::Button::sendClickMessage(Button *this,undefined8 param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  Button *local_48;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  undefined4 local_30;
  
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
    if (plVar2 == (long *)0x0) goto LAB_0022e083;
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar6 = *(long **)(this + 0xd8);
    if (plVar6 != (long *)0x0) goto LAB_0022e083;
    plVar6 = (long *)0x0;
    plVar2 = *(long **)(this + 0x198);
    iVar8 = (int)local_58;
  }
  else {
LAB_0022e083:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0x198);
    iVar8 = (int)local_58;
  }
  if ((plVar2 != (long *)0x0) && (local_58._0_4_ = *(int *)(this + 0x1b4), (int)local_58 != 0)) {
    local_58._4_4_ = 0;
    uStack_50 = 3;
    local_30 = 0;
    local_40 = 0;
    uStack_3b = 0;
    uStack_38 = 0;
                    /* try { // try from 0022e0d1 to 0022e0da has its CatchHandler @ 0022e332 */
    local_48 = this;
    ApplicationCommandManager::invoke(plVar2,(int *)&local_58);
    iVar8 = (int)local_58;
  }
  local_58._0_4_ = iVar8;
                    /* try { // try from 0022e0de to 0022e0e9 has its CatchHandler @ 0022e3a4 */
  (**(code **)(*(long *)this + 0x1b0))(this,param_1);
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (plVar6[2] == 0) goto LAB_0022e2fd;
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
    local_60 = 0;
    local_5c = *(int *)((long)plVar2 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0x170);
    plVar3 = *(long **)(this_01 + 8);
    if (plVar3 == *(long **)(this_01 + 0x10)) {
                    /* try { // try from 0022e1e7 to 0022e1f0 has its CatchHandler @ 0022e32d */
      local_58 = (Button *)&local_60;
      std::
      vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,plVar3,&local_58);
    }
    else {
      *plVar3 = (long)&local_60;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    uVar4 = *(undefined8 *)(this + 0x170);
    lVar5 = *(long *)(this + 0x178);
    if (lVar5 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
    }
    local_58._0_4_ = (int)uVar4;
    local_58._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
    uStack_50 = (undefined4)lVar5;
    uStack_4c = (undefined4)((ulong)lVar5 >> 0x20);
    iVar8 = local_5c;
    local_48 = (Button *)&local_60;
    while ((local_60 < iVar8 && (plVar6[2] != 0))) {
      plVar3 = *(long **)(*plVar2 + (long)local_60 * 8);
      if (plVar3 != (long *)0x0) {
                    /* try { // try from 0022e26d to 0022e272 has its CatchHandler @ 0022e334 */
        (**(code **)(*plVar3 + 0x10))(plVar3,this);
        iVar8 = local_5c;
      }
      local_60 = local_60 + 1;
    }
    ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendClickMessage(juce::ModifierKeys_const&)::$_25&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Button::sendClickMessage(juce::ModifierKeys_const&)::__25,juce::Component::BailOutChecker>(juce::Button::Listener*,juce::Component::BailOutChecker_const&,juce::Button::sendClickMessage(juce::ModifierKeys_const&)::__25&&)::_lambda()_1_>
                   *)&local_58);
    if (this_00 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_0022e2df;
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
      if ((int)uVar7 != 1) goto LAB_0022e2df;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      lVar5 = plVar6[2];
    }
  }
  else {
LAB_0022e2df:
    lVar5 = plVar6[2];
  }
  if ((lVar5 != 0) && (*(long *)(this + 0x110) != 0)) {
                    /* try { // try from 0022e2f7 to 0022e2fc has its CatchHandler @ 0022e3a4 */
    (**(code **)(this + 0x118))(this + 0x100);
  }
LAB_0022e2fd:
  LOCK();
  plVar2 = plVar6 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  return;
}


