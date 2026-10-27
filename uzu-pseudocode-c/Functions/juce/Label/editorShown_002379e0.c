// Function : editorShown
// Namespace: juce:Label
// Entry    : 002379e0
// Prototype: undefined editorShown(Label * this, undefined8 param_1)
// Body     : 002379e0 - 00237c41


/* juce::Label::editorShown(juce::TextEditor*) */

void __thiscall juce::Label::editorShown(Label *this,undefined8 param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  long *plVar3;
  long *plVar4;
  int iVar5;
  int local_50;
  int local_4c;
  int *local_48;
  long local_40;
  int *local_38;
  
  plVar4 = *(long **)(this + 0xd8);
  if (plVar4 == (long *)0x0) {
    plVar4 = operator_new(0x18);
    *(undefined4 *)(plVar4 + 1) = 0;
    *plVar4 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar4[2] = (long)this;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar4;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar4 = plVar2 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar4 = *(long **)(this + 0xd8);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        iVar5 = *(int *)(this + 0x1e8);
        goto joined_r0x00237aa3;
      }
    }
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  iVar5 = *(int *)(this + 0x1e8);
joined_r0x00237aa3:
  if (iVar5 == 2) {
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
    local_50 = 0;
    local_4c = *(int *)((long)plVar2 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0x1d8);
    plVar3 = *(long **)(this_01 + 8);
    if (plVar3 == *(long **)(this_01 + 0x10)) {
                    /* try { // try from 00237ae9 to 00237af2 has its CatchHandler @ 00237c42 */
      local_48 = &local_50;
      std::
      vector<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,plVar3,&local_48);
    }
    else {
      *plVar3 = (long)&local_50;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
    }
    local_48 = *(int **)(this + 0x1d8);
    local_40 = *(long *)(this + 0x1e0);
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
    local_38 = &local_50;
    if ((local_50 < local_4c) && (iVar5 = local_4c, plVar4 != (long *)0x0)) {
      do {
        if (plVar4[2] == 0) break;
        plVar3 = *(long **)(*plVar2 + (long)local_50 * 8);
        if (plVar3 != (long *)0x0) {
                    /* try { // try from 00237bbd to 00237bc5 has its CatchHandler @ 00237c4c */
          (**(code **)(*plVar3 + 0x18))(plVar3,this,param_1);
          iVar5 = local_4c;
        }
        local_50 = local_50 + 1;
      } while (local_50 < iVar5);
    }
    ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorShown(juce::TextEditor*)::$_131,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorShown(juce::TextEditor*)::$_131&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::Label::Listener,juce::Array<juce::Label::Listener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Label::editorShown(juce::TextEditor*)::__131,juce::Component::BailOutChecker>(juce::Label::Listener*,juce::Component::BailOutChecker_const&,juce::Label::editorShown(juce::TextEditor*)::__131&&)::_lambda()_1_>
                   *)&local_48);
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
          iVar5 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar5 = (int)*(long *)(this_00 + 8);
          *(int *)(this_00 + 8) = iVar5 + -1;
        }
        if (iVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        }
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    if ((plVar4[2] != 0) && (*(long *)(this + 0x148) != 0)) {
                    /* try { // try from 00237bfd to 00237c02 has its CatchHandler @ 00237c47 */
      (**(code **)(this + 0x150))(this + 0x138);
    }
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  return;
}


