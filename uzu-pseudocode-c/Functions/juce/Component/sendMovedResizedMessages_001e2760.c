// Function : sendMovedResizedMessages
// Namespace: juce:Component
// Entry    : 001e2760
// Prototype: undefined sendMovedResizedMessages(Component * this, char param_1, undefined4 param_2)
// Body     : 001e2760 - 001e2a74


/* juce::Component::sendMovedResizedMessages(bool, bool) */

void __thiscall
juce::Component::sendMovedResizedMessages(Component *this,char param_1,undefined4 param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int local_58;
  int local_54;
  undefined4 local_4c;
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
    if (plVar2 == (long *)0x0) goto LAB_001e2787;
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar4 = *(long **)(this + 0xd8);
    if (plVar4 != (long *)0x0) goto LAB_001e2787;
    plVar4 = (long *)0x0;
  }
  else {
LAB_001e2787:
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (param_1 != '\0') {
                    /* try { // try from 001e2795 to 001e27c2 has its CatchHandler @ 001e2b0b */
    (**(code **)(*(long *)this + 0x148))(this);
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (plVar4[2] == 0) goto LAB_001e2a46;
  }
  if ((char)param_2 != '\0') {
    (**(code **)(*(long *)this + 0x140))(this);
    if (plVar4 == (long *)0x0) {
      return;
    }
    if (plVar4[2] == 0) goto LAB_001e2a46;
    uVar6 = *(uint *)(this + 100);
    while (0 < (int)uVar6) {
      uVar6 = uVar6 - 1;
                    /* try { // try from 001e27ee to 001e27f3 has its CatchHandler @ 001e2b0d */
      (**(code **)(**(long **)(*(long *)(this + 0x58) + (ulong)uVar6 * 8) + 0x158))();
      if (plVar4[2] == 0) goto LAB_001e2a46;
      if ((int)*(uint *)(this + 100) < (int)uVar6) {
        uVar6 = *(uint *)(this + 100);
      }
    }
  }
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 001e2817 to 001e281f has its CatchHandler @ 001e2b0b */
    (**(code **)(*plVar2 + 0x150))(plVar2,this);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  if ((plVar4[2] != 0) && (*(int *)(this + 0xc0) == 2)) {
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
    local_58 = 0;
    local_54 = *(int *)((long)plVar2 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0xb0);
    plVar3 = *(long **)(this_01 + 8);
    if (plVar3 == *(long **)(this_01 + 0x10)) {
                    /* try { // try from 001e2917 to 001e2920 has its CatchHandler @ 001e2a75 */
      local_48 = &local_58;
      std::
      vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,plVar3,&local_48);
    }
    else {
      *plVar3 = (long)&local_58;
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
    iVar7 = local_54;
    local_4c = param_2;
    local_38 = &local_58;
    if (local_58 < local_54) {
      do {
        if (plVar4[2] == 0) break;
        plVar3 = *(long **)(*plVar2 + (long)local_58 * 8);
        if (plVar3 != (long *)0x0) {
                    /* try { // try from 001e29a5 to 001e29b0 has its CatchHandler @ 001e2a82 */
          (**(code **)(*plVar3 + 0x10))(plVar3,this,param_1,(char)param_2);
          iVar7 = local_54;
        }
        local_58 = local_58 + 1;
      } while (local_58 < iVar7);
    }
    ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendMovedResizedMessages(bool,bool)::$_32,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendMovedResizedMessages(bool,bool)::$_32&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::sendMovedResizedMessages(bool,bool)::__32,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::sendMovedResizedMessages(bool,bool)::__32&&)::_lambda()_1_>
                   *)&local_48);
    param_2 = local_4c;
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      uVar5 = *(ulong *)(this_00 + 8);
      if (uVar5 == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = this_00 + 8;
          uVar5 = (ulong)*(uint *)p_Var1;
          *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
          UNLOCK();
        }
        else {
          *(int *)(this_00 + 8) = (int)uVar5 + -1;
        }
        if ((int)uVar5 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        }
      }
    }
  }
  if (((param_1 != '\0') || ((char)param_2 != '\0')) && (plVar4[2] != 0)) {
                    /* try { // try from 001e2a3e to 001e2a45 has its CatchHandler @ 001e2a7a */
    getAccessibilityHandler(this);
  }
LAB_001e2a46:
  LOCK();
  plVar2 = plVar4 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return;
}


