// Function : callChangeListeners
// Namespace: juce:Label
// Entry    : 00239780
// Prototype: undefined callChangeListeners(Label * this)
// Body     : 00239780 - 002399cb


/* juce::Label::callChangeListeners() */

void __thiscall juce::Label::callChangeListeners(Label *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  undefined8 *puVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  int iVar7;
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
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar6 = *(long **)(this + 0xd8);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        iVar7 = *(int *)(this + 0x1e8);
        goto joined_r0x0023983f;
      }
    }
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  iVar7 = *(int *)(this + 0x1e8);
joined_r0x0023983f:
  if (iVar7 == 2) {
    local_40 = (undefined1 *)&local_48;
    plVar2 = *(long **)(this + 0x1c8);
    this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x1d0);
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
    this_01 = *(vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0x1d8);
    puVar3 = *(undefined8 **)(this_01 + 8);
    if (puVar3 == *(undefined8 **)(this_01 + 0x10)) {
                    /* try { // try from 00239883 to 0023988c has its CatchHandler @ 002399cc */
      std::
      vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,puVar3,&local_40);
    }
    else {
      *puVar3 = &local_48;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    local_40 = *(undefined1 **)(this + 0x1d8);
    local_38 = *(long *)(this + 0x1e0);
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
    local_30 = (undefined1 *)&local_48;
    if ((local_48 < local_44) &&
       (iVar7 = local_44, local_30 = (undefined1 *)&local_48, piVar5 = &local_48,
       plVar6 != (long *)0x0)) {
      do {
        local_30 = (undefined1 *)piVar5;
        if (plVar6[2] == 0) break;
        plVar4 = *(long **)(*plVar2 + (long)local_48 * 8);
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 0023994b to 00239950 has its CatchHandler @ 002399d6 */
          (**(code **)(*plVar4 + 0x10))(plVar4,this);
          iVar7 = local_44;
        }
        local_48 = local_48 + 1;
        piVar5 = (int *)local_30;
      } while (local_48 < iVar7);
    }
    ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::callChangeListeners()::$_133,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::callChangeListeners()::$_133&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::callChangeListeners()::__133,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::callChangeListeners()::__133&&)::_lambda()_1_>
                   *)&local_40);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(this_00 + 8) == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = this_00 + 8;
          iVar7 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar7 = (int)*(long *)(this_00 + 8);
          *(int *)(this_00 + 8) = iVar7 + -1;
        }
        if (iVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        }
      }
    }
  }
  if (plVar6 != (long *)0x0) {
    if ((plVar6[2] != 0) && (*(long *)(this + 0x128) != 0)) {
                    /* try { // try from 00239988 to 0023998d has its CatchHandler @ 002399d1 */
      (**(code **)(this + 0x130))(this + 0x118);
    }
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  return;
}


