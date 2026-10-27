// Function : internalBroughtToFront
// Namespace: juce:Component
// Entry    : 00276ce0
// Prototype: undefined internalBroughtToFront(Component * this)
// Body     : 00276ce0 - 00277151


/* juce::Component::internalBroughtToFront() */

void __thiscall juce::Component::internalBroughtToFront(Component *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this_01;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  Desktop *pDVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  AsyncUpdater *this_02;
  Component *pCVar13;
  Component *pCVar14;
  uint uVar15;
  long lVar16;
  void *__src;
  long lVar17;
  void *__dest;
  uint uVar18;
  int iVar19;
  int local_48;
  int local_44;
  undefined1 *local_40;
  long local_38;
  undefined1 *local_30;
  
  if ((*(ushort *)(this + 0xe8) & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar9 = operator_new(0x1d0);
                    /* try { // try from 00276d18 to 00276d1f has its CatchHandler @ 0027716c */
      Desktop::Desktop(pDVar9);
      Desktop::instance = pDVar9;
    }
    pDVar9 = Desktop::instance;
    uVar2 = *(uint *)(Desktop::instance + 0xcc);
    if ((long)(int)uVar2 != 0) {
      lVar3 = *(long *)(Desktop::instance + 0xc0);
      uVar12 = (ulong)uVar2;
      lVar16 = (long)(int)uVar2 * 8;
      lVar10 = 0;
      lVar17 = 0;
      do {
        if (*(Component **)(lVar3 + lVar10 * 8) == this) {
          uVar8 = (uint)lVar10;
          if (-1 < (int)uVar8) {
            uVar15 = 0xffffffff;
            if ((*(ushort *)(this + 0xe8) & 0x800) != 0) goto LAB_00276de0;
            uVar15 = 0;
            if ((int)uVar2 < 0) {
              uVar15 = uVar2;
            }
            goto LAB_00276db0;
          }
          break;
        }
        lVar17 = lVar17 + 0x100000000;
        lVar10 = lVar10 + 1;
        lVar16 = lVar16 + -8;
      } while (lVar16 != 0);
    }
  }
  goto LAB_00276e36;
  while (lVar16 = uVar12 * 8, uVar12 = uVar12 - 1,
        (*(ushort *)(*(long *)(lVar3 + -8 + lVar16) + 0xe8) & 0x800) != 0) {
LAB_00276db0:
    if ((int)uVar12 < 1) goto LAB_00276dd2;
  }
  uVar15 = (int)uVar12 + 1;
LAB_00276dd2:
  if (uVar8 - uVar15 != -1) {
    uVar15 = uVar15 - 1;
LAB_00276de0:
    if (uVar8 < uVar2) {
      uVar18 = uVar2 - 1;
      if (uVar15 < uVar2) {
        uVar18 = uVar15;
      }
      uVar4 = *(undefined8 *)(lVar3 + (lVar17 >> 0x20) * 8);
      lVar16 = (long)(int)uVar18;
      if ((int)uVar8 < (int)uVar18) {
        __dest = (void *)(lVar3 + (lVar17 >> 0x20) * 8);
        __src = (void *)((long)__dest + 8);
        iVar19 = uVar18 - uVar8;
      }
      else {
        __src = (void *)(lVar3 + lVar16 * 8);
        __dest = (void *)(lVar3 + lVar16 * 8 + 8);
        iVar19 = uVar8 - uVar18;
      }
      memmove(__dest,__src,(long)iVar19 << 3);
      *(undefined8 *)(*(long *)(pDVar9 + 0xc0) + lVar16 * 8) = uVar4;
    }
  }
LAB_00276e36:
  plVar11 = *(long **)(this + 0xd8);
  if (plVar11 == (long *)0x0) {
    plVar11 = operator_new(0x18);
    *(undefined4 *)(plVar11 + 1) = 0;
    *plVar11 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar11[2] = (long)this;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    plVar5 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar11;
    if (plVar5 == (long *)0x0) goto LAB_00276e42;
    LOCK();
    plVar11 = plVar5 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar11 = *(long **)(this + 0xd8);
    if (plVar11 != (long *)0x0) goto LAB_00276e42;
    plVar11 = (long *)0x0;
  }
  else {
LAB_00276e42:
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 00276e4b to 00276e53 has its CatchHandler @ 002771ec */
  (**(code **)(*(long *)this + 0x160))(this);
  if (plVar11 == (long *)0x0) {
    return;
  }
  if (plVar11[2] == 0) goto LAB_0027711e;
  if (*(int *)(this + 0xc0) == 2) {
    plVar5 = *(long **)(this + 0xa0);
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
    local_44 = *(int *)((long)plVar5 + 0xc);
    this_01 = *(vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                **)(this + 0xb0);
    puVar6 = *(undefined8 **)(this_01 + 8);
    if (puVar6 == *(undefined8 **)(this_01 + 0x10)) {
                    /* try { // try from 00276f3a to 00276f43 has its CatchHandler @ 00277167 */
      local_40 = (undefined1 *)&local_48;
      std::
      vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this_01,puVar6,&local_40);
    }
    else {
      *puVar6 = &local_48;
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
    iVar19 = local_44;
    while ((local_48 < iVar19 && (plVar11[2] != 0))) {
      plVar7 = *(long **)(*plVar5 + (long)local_48 * 8);
      if (plVar7 != (long *)0x0) {
                    /* try { // try from 00276fbb to 00276fc0 has its CatchHandler @ 0027717c */
        (**(code **)(*plVar7 + 0x18))(plVar7,this);
        iVar19 = local_44;
      }
      local_48 = local_48 + 1;
    }
    ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalBroughtToFront()::$_52,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalBroughtToFront()::$_52&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalBroughtToFront()::__52,juce::Component::BailOutChecker>(juce::ComponentListener*,juce::Component::BailOutChecker_const&,juce::Component::internalBroughtToFront()::__52&&)::_lambda()_1_>
                   *)&local_40);
    if (this_00 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_00277034;
    uVar12 = *(ulong *)(this_00 + 8);
    if (uVar12 == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
      lVar16 = plVar11[2];
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        uVar12 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = (int)uVar12 + -1;
      }
      if ((int)uVar12 != 1) goto LAB_00277034;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      lVar16 = plVar11[2];
    }
  }
  else {
LAB_00277034:
    lVar16 = plVar11[2];
  }
  if (((lVar16 != 0) && (ModalComponentManager::singletonHolder != (ModalComponentManager *)0x0)) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar12 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar16 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                        (ulong)((int)uVar12 - 2) * 8);
      if (*(char *)(lVar16 + 0x5c) != '\0') {
        pCVar14 = *(Component **)(lVar16 + 0x40);
        if (pCVar14 != (Component *)0x0) {
          do {
            pCVar13 = pCVar14;
            pCVar14 = *(Component **)(pCVar13 + 0x30);
          } while (pCVar14 != (Component *)0x0);
          do {
            pCVar14 = this;
            this = *(Component **)(pCVar14 + 0x30);
          } while (this != (Component *)0x0);
          if (pCVar13 != pCVar14) {
            if (ModalComponentManager::singletonHolder == (ModalComponentManager *)0x0) {
                    /* try { // try from 002770cd to 002770d6 has its CatchHandler @ 00277162 */
              this_02 = operator_new(0x28);
                    /* try { // try from 002770da to 002770e1 has its CatchHandler @ 00277152 */
              AsyncUpdater::AsyncUpdater(this_02);
              DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(this_02 + 0x10));
              *(undefined ***)this_02 = &PTR__ModalComponentManager_00707a60;
              *(undefined ***)(this_02 + 0x10) = &PTR__ModalComponentManager_00707a88;
              *(undefined8 *)(this_02 + 0x18) = 0;
              *(undefined8 *)(this_02 + 0x20) = 0;
              LOCK();
              UNLOCK();
              ModalComponentManager::singletonHolder = (ModalComponentManager *)this_02;
            }
                    /* try { // try from 00277114 to 0027711d has its CatchHandler @ 00277162 */
            ModalComponentManager::bringModalComponentsToFront
                      (ModalComponentManager::singletonHolder,'\0');
          }
        }
        break;
      }
      uVar12 = uVar12 - 1;
    } while (1 < uVar12);
  }
LAB_0027711e:
  LOCK();
  plVar5 = plVar11 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  return;
}


