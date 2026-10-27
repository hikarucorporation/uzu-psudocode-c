// Function : setName
// Namespace: juce:Component
// Entry    : 00222a30
// Prototype: undefined setName(Component * this, long * param_1)
// Body     : 00222a30 - 00222d69


/* juce::Component::setName(juce::String const&) */

void __thiscall juce::Component::setName(Component *this,long *param_1)

{
  byte *pbVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  ushort uVar3;
  long *plVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  Desktop *this_02;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  int local_48;
  int local_44;
  undefined1 *local_40;
  long local_38;
  undefined1 *local_30;
  
  pbVar10 = (byte *)*param_1;
  if (*(byte **)(this + 8) == pbVar10) {
    return;
  }
  uVar7 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (*(byte **)(this + 8),pbVar10);
  if (uVar7 == 0) {
    return;
  }
  pbVar1 = pbVar10 + -0x10;
  if (pbVar1 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar1 = *(int *)pbVar1 + 1;
    UNLOCK();
    pbVar10 = (byte *)*param_1;
  }
  LOCK();
  lVar13 = *(long *)(this + 8);
  *(byte **)(this + 8) = pbVar10;
  UNLOCK();
  piVar11 = (int *)(lVar13 + -0x10);
  if (piVar11 == &emptyString) {
LAB_00222a95:
    uVar3 = *(ushort *)(this + 0xe8);
  }
  else {
    LOCK();
    iVar12 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar12 != 0) goto LAB_00222a95;
    operator_delete__(piVar11);
    uVar3 = *(ushort *)(this + 0xe8);
  }
  if ((uVar3 & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00222aae to 00222ab7 has its CatchHandler @ 00222d82 */
      this_02 = operator_new(0x1d0);
                    /* try { // try from 00222abb to 00222ac2 has its CatchHandler @ 00222d6f */
      Desktop::Desktop(this_02);
      Desktop::instance = this_02;
    }
    if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
      lVar13 = 0;
      do {
        plVar8 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar13);
        if ((Component *)plVar8[1] == this) {
          (**(code **)(*plVar8 + 0x28))(plVar8,param_1);
          plVar8 = *(long **)(this + 0xd8);
          goto joined_r0x00222b85;
        }
        lVar13 = lVar13 + 8;
      } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar13);
    }
  }
  plVar8 = *(long **)(this + 0xd8);
joined_r0x00222b85:
  if (plVar8 == (long *)0x0) {
    plVar8 = operator_new(0x18);
    *(undefined4 *)(plVar8 + 1) = 0;
    *plVar8 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar8[2] = (long)this;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    plVar4 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar8;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar8 = *(long **)(this + 0xd8);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        iVar12 = *(int *)(this + 0xc0);
        goto joined_r0x00222bf4;
      }
    }
  }
  LOCK();
  *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  UNLOCK();
  iVar12 = *(int *)(this + 0xc0);
joined_r0x00222bf4:
  if (iVar12 == 2) {
    local_40 = (undefined1 *)&local_48;
    plVar4 = *(long **)(this + 0xa0);
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
    local_44 = *(int *)((long)plVar4 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0xb0);
    puVar5 = *(undefined8 **)(this_01 + 8);
    if (puVar5 == *(undefined8 **)(this_01 + 0x10)) {
                    /* try { // try from 00222c37 to 00222c40 has its CatchHandler @ 00222d6a */
      std::
      vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,puVar5,&local_40);
    }
    else {
      *puVar5 = &local_48;
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
    local_30 = (undefined1 *)&local_48;
    if ((local_48 < local_44) &&
       (iVar12 = local_44, local_30 = (undefined1 *)&local_48, piVar11 = &local_48,
       plVar8 != (long *)0x0)) {
      do {
        local_30 = (undefined1 *)piVar11;
        if (plVar8[2] == 0) break;
        plVar6 = *(long **)(*plVar4 + (long)local_48 * 8);
        if (plVar6 != (long *)0x0) {
                    /* try { // try from 00222d0a to 00222d0f has its CatchHandler @ 00222d8a */
          (**(code **)(*plVar6 + 0x38))(plVar6,this);
          iVar12 = local_44;
        }
        local_48 = local_48 + 1;
        piVar11 = (int *)local_30;
      } while (local_48 < iVar12);
    }
    ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setName(juce::String_const&)::$_30,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setName(juce::String_const&)::$_30&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::setName(juce::String_const&)::__30,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::setName(juce::String_const&)::__30&&)::_lambda()_1_>
                   *)&local_40);
    if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      uVar9 = *(ulong *)(this_00 + 8);
      if (uVar9 == 0x100000001) {
        *(undefined8 *)(this_00 + 8) = 0;
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        (**(code **)(*(long *)this_00 + 0x18))(this_00);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var2 = this_00 + 8;
          uVar9 = (ulong)*(uint *)p_Var2;
          *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
          UNLOCK();
        }
        else {
          *(int *)(this_00 + 8) = (int)uVar9 + -1;
        }
        if ((int)uVar9 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
        }
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  return;
}


