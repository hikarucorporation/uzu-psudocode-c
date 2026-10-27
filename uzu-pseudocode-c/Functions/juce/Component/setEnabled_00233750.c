// Function : setEnabled
// Namespace: juce:Component
// Entry    : 00233750
// Prototype: undefined setEnabled(Component * this, char param_1)
// Body     : 00233750 - 00233a58


/* WARNING: Type propagation algorithm not settling */
/* juce::Component::setEnabled(bool) */

void __thiscall juce::Component::setEnabled(Component *this,char param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long lVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  long *plVar4;
  Component *pCVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  int local_50;
  int local_4c;
  int *local_48;
  long local_40;
  int *local_38;
  
  if (((*(uint3 *)(this + 0xe8) & 0x8000) == 0) == (bool)param_1) {
    return;
  }
  this[0xea] = this[0xea];
  *(ushort *)(this + 0xe8) =
       (ushort)*(uint3 *)(this + 0xe8) & 0x7fff | (ushort)(param_1 == '\0') << 0xf;
  for (lVar2 = *(long *)(this + 0x30); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x30)) {
    if ((*(ushort *)(lVar2 + 0xe8) & 0x8000) != 0) goto LAB_002337e0;
  }
  sendEnablementChangeMessage(this);
LAB_002337e0:
  plVar6 = *(long **)(this + 0xd8);
  if (plVar6 == (long *)0x0) {
    plVar6 = operator_new(0x18);
    *(undefined4 *)(plVar6 + 1) = 0;
    *plVar6 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar6[2] = (long)this;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar3 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar6;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar6 = *(long **)(this + 0xd8);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        iVar8 = *(int *)(this + 0xc0);
        goto joined_r0x0023388f;
      }
    }
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  iVar8 = *(int *)(this + 0xc0);
joined_r0x0023388f:
  if (iVar8 == 2) {
    plVar3 = *(long **)(this + 0xa0);
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
    local_4c = *(int *)((long)plVar3 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0xb0);
    plVar4 = *(long **)(this_01 + 8);
    if (plVar4 == *(long **)(this_01 + 0x10)) {
                    /* try { // try from 002338d4 to 002338dd has its CatchHandler @ 00233a59 */
      local_48 = &local_50;
      std::
      vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,plVar4,&local_48);
    }
    else {
      *plVar4 = (long)&local_50;
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
    local_38 = &local_50;
    if ((local_50 < local_4c) && (iVar8 = local_4c, plVar6 != (long *)0x0)) {
      do {
        if (plVar6[2] == 0) break;
        plVar4 = *(long **)(*plVar3 + (long)local_50 * 8);
        if (plVar4 != (long *)0x0) {
                    /* try { // try from 002339ad to 002339b2 has its CatchHandler @ 00233a6b */
          (**(code **)(*plVar4 + 0x48))(plVar4,this);
          iVar8 = local_4c;
        }
        local_50 = local_50 + 1;
      } while (local_50 < iVar8);
    }
    ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setEnabled(bool)::$_54,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setEnabled(bool)::$_54&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setEnabled(bool)::__54,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setEnabled(bool)::__54&&)::_lambda()_1_>
                   *)&local_48);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      uVar7 = *(ulong *)(this_00 + 8);
      if (uVar7 == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
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
        if ((int)uVar7 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        }
      }
    }
  }
  if (param_1 == '\0') {
    for (pCVar5 = currentlyFocusedComponent; pCVar5 != this; pCVar5 = *(Component **)(pCVar5 + 0x30)
        ) {
      if (pCVar5 == (Component *)0x0) goto LAB_00233a25;
    }
    if (*(Component **)(this + 0x30) != (Component *)0x0) {
                    /* try { // try from 00233a07 to 00233a24 has its CatchHandler @ 00233a5e */
      grabKeyboardFocusInternal(*(Component **)(this + 0x30),2,'\x01',0);
    }
    giveAwayKeyboardFocusInternal(this,'\x01');
  }
LAB_00233a25:
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  return;
}


