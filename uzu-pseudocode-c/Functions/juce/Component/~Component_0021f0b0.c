// Function : ~Component
// Namespace: juce:Component
// Entry    : 0021f0b0
// Prototype: undefined ~Component(Component * this)
// Body     : 0021f0b0 - 0021f60b


/* juce::Component::~Component() */

void __thiscall juce::Component::~Component(Component *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_00;
  long *plVar5;
  Component *pCVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  Component *pCVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  int local_50;
  int local_4c;
  int *local_48;
  long local_40;
  int *local_38;
  
  *(undefined ***)this = &PTR__Component_00707878;
  if (*(int *)(this + 0xc0) == 2) {
    plVar3 = *(long **)(this + 0xa0);
    p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0xa8);
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
      }
    }
    local_50 = 0;
    local_4c = *(int *)((long)plVar3 + 0xc);
    this_00 = *(vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0xb0);
    plVar5 = *(long **)(this_00 + 8);
    if (plVar5 == *(long **)(this_00 + 0x10)) {
                    /* try { // try from 0021f143 to 0021f14c has its CatchHandler @ 0021f60c */
      local_48 = &local_50;
      std::
      vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_00,plVar5,&local_48);
    }
    else {
      *plVar5 = (long)&local_50;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
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
    iVar10 = local_4c;
    for (; local_50 < iVar10; local_50 = local_50 + 1) {
      plVar5 = *(long **)(*plVar3 + (long)local_50 * 8);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 0021f1ae to 0021f1b3 has its CatchHandler @ 0021f613 */
        (**(code **)(*plVar5 + 0x40))(plVar5,this);
        iVar10 = local_4c;
      }
    }
    ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::~Component()::$_29,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentListener*,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Component::~Component()::$_29&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::~Component()::__29,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentListener*,juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::Component::~Component()::__29&&)::_lambda()_1_>
                   *)&local_48);
    if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var4 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var4 + 8) = 0;
        (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
        (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var2 = p_Var4 + 8;
          iVar10 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar10 = (int)*(long *)(p_Var4 + 8);
          *(int *)(p_Var4 + 8) = iVar10 + -1;
        }
        if (iVar10 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
        }
      }
    }
  }
  while (0 < *(int *)(this + 100)) {
                    /* try { // try from 0021f22b to 0021f239 has its CatchHandler @ 0021f68b */
    removeChildComponent(this,*(int *)(this + 100) - 1,'\0',1);
  }
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(*(long *)(this + 0xd8) + 0x10) = 0;
  }
  pCVar6 = *(Component **)(this + 0x30);
  if (pCVar6 == (Component *)0x0) {
    pCVar6 = currentlyFocusedComponent;
    do {
      pCVar11 = pCVar6;
      if (pCVar11 == (Component *)0x0) break;
      pCVar6 = *(Component **)(pCVar11 + 0x30);
    } while (*(Component **)(pCVar11 + 0x30) != this);
                    /* try { // try from 0021f2ba to 0021f2e5 has its CatchHandler @ 0021f611 */
    giveAwayKeyboardFocusInternal(this,pCVar11 != (Component *)0x0);
  }
  else {
    uVar13 = 0xffffffff;
    if ((long)*(int *)(pCVar6 + 100) != 0) {
      lVar9 = (long)*(int *)(pCVar6 + 100) << 3;
      lVar12 = 0;
      do {
        if (*(Component **)(*(long *)(pCVar6 + 0x58) + lVar12 * 8) == this) {
          uVar13 = (uint)lVar12;
          break;
        }
        lVar12 = lVar12 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    removeChildComponent(pCVar6,uVar13,'\x01',0);
  }
  if ((*(ushort *)(this + 0xe8) & 1) != 0) {
    removeFromDesktop(this);
  }
  if (*(long **)(this + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xe0) + 8))();
  }
  *(undefined8 *)(this + 0xe0) = 0;
  plVar3 = *(long **)(this + 0xd8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (0 < *(int *)(this + 0xd4)) {
    lVar9 = 0x10;
    lVar12 = 0;
    do {
      lVar7 = *(long *)(this + 200);
                    /* try { // try from 0021f364 to 0021f366 has its CatchHandler @ 0021f683 */
      (**(code **)(*(long *)(lVar7 + -8 + lVar9) + 0x58))(lVar9 + lVar7);
      piVar14 = (int *)(*(long *)(lVar7 + -0x10 + lVar9) + -0x10);
      if (piVar14 != &emptyString) {
        LOCK();
        iVar10 = *piVar14;
        *piVar14 = *piVar14 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          operator_delete__(piVar14);
        }
      }
      lVar12 = lVar12 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar12 < *(int *)(this + 0xd4));
  }
  *(undefined4 *)(this + 0xd4) = 0;
  free(*(void **)(this + 200));
  ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                   *)(this + 0xa0));
  puVar8 = *(undefined8 **)(this + 0x98);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar8 + 0xc) = 0;
    free((void *)*puVar8);
    operator_delete(puVar8);
  }
  *(undefined8 *)(this + 0x98) = 0;
  puVar8 = *(undefined8 **)(this + 0x90);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar8 + 0xc) = 0;
    free((void *)*puVar8);
    operator_delete(puVar8);
  }
  *(undefined8 *)(this + 0x90) = 0;
  if (*(long **)(this + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x88) + 8))();
  }
  *(undefined8 *)(this + 0x88) = 0;
  plVar3 = *(long **)(this + 0x80);
  if (plVar3 != (long *)0x0) {
    plVar5 = (long *)*plVar3;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    operator_delete(plVar3);
  }
  *(undefined8 *)(this + 0x80) = 0;
  p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x78);
  if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var4 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var4 + 8) = 0;
      (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
      (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
      plVar3 = *(long **)(this + 0x68);
      goto joined_r0x0021f5e0;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var2 = p_Var4 + 8;
      iVar10 = *(int *)p_Var2;
      *(int *)p_Var2 = *(int *)p_Var2 + -1;
      UNLOCK();
    }
    else {
      iVar10 = (int)*(long *)(p_Var4 + 8);
      *(int *)(p_Var4 + 8) = iVar10 + -1;
    }
    if (iVar10 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
      plVar3 = *(long **)(this + 0x68);
      goto joined_r0x0021f5e0;
    }
  }
  plVar3 = *(long **)(this + 0x68);
joined_r0x0021f5e0:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined4 *)(this + 100) = 0;
  free(*(void **)(this + 0x58));
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  *(undefined8 *)(this + 0x48) = 0;
  piVar14 = (int *)(*(long *)(this + 0x28) + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar10 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar14);
    }
  }
  piVar14 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar10 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar14);
    }
  }
  piVar14 = (int *)(*(long *)(this + 0x18) + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar10 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar14);
    }
  }
  piVar14 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar10 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar14);
    }
  }
  piVar14 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar10 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar14);
    }
  }
  return;
}


