// Function : enterModalState
// Namespace: juce:Component
// Entry    : 002763b0
// Prototype: undefined enterModalState(Component * param_1, long * param_2)
// Body     : 002763b0 - 002768ee


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::enterModalState(bool, juce::ModalComponentManager::Callback*, bool) */

void __cdecl juce::Component::enterModalState(Component *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ComponentMovementWatcher *this;
  long *plVar11;
  long lVar12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  code *local_38;
  
  plVar11 = *(long **)(param_1 + 0xd8);
  if (plVar11 == (long *)0x0) {
    plVar11 = operator_new(0x18);
    *(undefined4 *)(plVar11 + 1) = 0;
    *plVar11 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar11[2] = (long)param_1;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    plVar3 = *(long **)(param_1 + 0xd8);
    *(long **)(param_1 + 0xd8) = plVar11;
    if (plVar3 == (long *)0x0) goto LAB_002763d4;
    LOCK();
    plVar11 = plVar3 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar11 = *(long **)(param_1 + 0xd8);
    if (plVar11 != (long *)0x0) goto LAB_002763d4;
    plVar11 = (long *)0x0;
    uVar8 = isCurrentlyModal((long)param_1);
    cVar5 = (char)uVar8;
  }
  else {
LAB_002763d4:
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    uVar8 = isCurrentlyModal((long)param_1);
    cVar5 = (char)uVar8;
  }
  if (cVar5 == '\0') {
    local_38 = internalMouseExit;
                    /* try { // try from 002763f6 to 00276402 has its CatchHandler @ 00276929 */
    detail::ComponentHelpers::
    sendMouseEventToComponentsThatAreBlockedByModal<void(*)(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)>
              ((long *)param_1,&local_38);
    if (plVar11 == (long *)0x0) {
      return;
    }
    if (plVar11[2] == 0) goto LAB_0027685a;
    if (ModalComponentManager::singletonHolder == (undefined8 *)0x0) {
                    /* try { // try from 00276427 to 00276430 has its CatchHandler @ 0027692d */
      puVar9 = operator_new(0x28);
      *puVar9 = &PTR__AsyncUpdater_00712b58;
      puVar9[1] = 0;
                    /* try { // try from 00276446 to 0027644f has its CatchHandler @ 002768f1 */
      puVar10 = operator_new(0x20);
      *(undefined4 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR__AsyncUpdaterMessage_00712cc0;
      puVar10[2] = puVar9;
      *(undefined4 *)(puVar10 + 3) = 0;
      LOCK();
      *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
      UNLOCK();
      pvVar13 = (void *)puVar9[1];
      puVar9[1] = puVar10;
      if (pvVar13 != (void *)0x0) {
        LOCK();
        piVar1 = (int *)((long)pvVar13 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          operator_delete(pvVar13);
        }
      }
      DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(puVar9 + 2));
      *puVar9 = &PTR__ModalComponentManager_00707a60;
      puVar9[2] = &PTR__ModalComponentManager_00707a88;
      puVar9[3] = 0;
      puVar9[4] = 0;
      LOCK();
      UNLOCK();
      ModalComponentManager::singletonHolder = puVar9;
    }
                    /* try { // try from 002764bf to 002764c8 has its CatchHandler @ 0027692d */
    puVar10 = ModalComponentManager::singletonHolder;
    this = operator_new(0x60);
    *(undefined ***)this = &PTR__ComponentMovementWatcher_007089a0;
    puVar9 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar9 == (undefined8 *)0x0) {
                    /* try { // try from 002765a6 to 002765af has its CatchHandler @ 002768ef */
      puVar9 = operator_new(0x18);
      *(undefined4 *)(puVar9 + 1) = 0;
      *puVar9 = &PTR__ReferenceCountedObject_00714b80;
      puVar9[2] = param_1;
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
      plVar3 = *(long **)(param_1 + 0xd8);
      *(undefined8 **)(param_1 + 0xd8) = puVar9;
      if (plVar3 == (long *)0x0) goto LAB_002764e7;
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
      puVar9 = *(undefined8 **)(param_1 + 0xd8);
      *(undefined8 **)(this + 8) = puVar9;
      if (puVar9 != (undefined8 *)0x0) goto LAB_002764eb;
    }
    else {
LAB_002764e7:
      *(undefined8 **)(this + 8) = puVar9;
LAB_002764eb:
      LOCK();
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      UNLOCK();
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    this[0x28] = (ComponentMovementWatcher)0x0;
                    /* try { // try from 00276502 to 00276509 has its CatchHandler @ 002768f6 */
    uVar6 = isShowing(param_1);
    this[0x29] = SUB41(uVar6,0);
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
    if (*(long *)(this + 8) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(*(long *)(this + 8) + 0x10);
    }
    ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
    ::initialiseIfNeeded
              ((ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>
                *)(lVar12 + 0xa0));
    puVar9 = *(undefined8 **)(lVar12 + 0xa0);
    pvVar13 = (void *)*puVar9;
    iVar7 = *(int *)((long)puVar9 + 0xc);
    lVar12 = (long)iVar7;
    if (lVar12 != 0) {
      lVar15 = 0;
      do {
        if (*(ComponentMovementWatcher **)((long)pvVar13 + lVar15) == this) goto LAB_002766b5;
        lVar15 = lVar15 + 8;
      } while (lVar12 * 8 != lVar15);
    }
    if ((int)*(uint *)(puVar9 + 1) <= iVar7) {
      uVar6 = iVar7 + ((iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar9 + 1) != uVar6) {
        if ((int)uVar6 < 1) {
          free(pvVar13);
          *puVar9 = 0;
          pvVar13 = (void *)0x0;
        }
        else {
          pvVar13 = realloc(pvVar13,(ulong)uVar6 << 3);
          *puVar9 = pvVar13;
        }
      }
      *(uint *)(puVar9 + 1) = uVar6;
      iVar7 = *(int *)((long)puVar9 + 0xc);
      lVar12 = (long)iVar7;
    }
    *(int *)((long)puVar9 + 0xc) = iVar7 + 1;
    *(ComponentMovementWatcher **)((long)pvVar13 + lVar12 * 8) = this;
LAB_002766b5:
    ComponentMovementWatcher::registerWithParentComps(this);
    *(undefined ***)this = &PTR__ModalItem_0070e1b0;
    *(Component **)(this + 0x40) = param_1;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined2 *)(this + 0x5c) = 1;
    iVar7 = *(int *)((long)puVar10 + 0x24);
    if ((int)*(uint *)(puVar10 + 4) <= iVar7) {
      uVar6 = iVar7 + ((iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar10 + 4) != uVar6) {
        if ((int)uVar6 < 1) {
          free((void *)puVar10[3]);
          puVar10[3] = 0;
        }
        else {
          pvVar13 = realloc((void *)puVar10[3],(ulong)uVar6 << 3);
          puVar10[3] = pvVar13;
        }
      }
      *(uint *)(puVar10 + 4) = uVar6;
      iVar7 = *(int *)((long)puVar10 + 0x24);
    }
    *(int *)((long)puVar10 + 0x24) = iVar7 + 1;
    *(ComponentMovementWatcher **)(puVar10[3] + (long)iVar7 * 8) = this;
    if ((detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance ==
         '\0') &&
       (iVar7 = __cxa_guard_acquire(&detail::ComponentHelpers::ModalComponentManagerChangeNotifier::
                                     getInstance()::instance), iVar7 != 0)) {
      detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance._8_8_ =
           detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance;
      detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance._0_8_ =
           detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance;
      detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance._16_8_
           = 0;
      detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance._24_8_
           = 0;
      detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance._32_8_
           = 0;
      __cxa_atexit(detail::ComponentHelpers::ModalComponentManagerChangeNotifier::
                   ~ModalComponentManagerChangeNotifier,
                   detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::
                   instance,&__dso_handle);
      __cxa_guard_release(&detail::ComponentHelpers::ModalComponentManagerChangeNotifier::
                           getInstance()::instance);
    }
    uVar8 = detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()::instance.
            _24_8_;
    lVar12 = (long)(int)detail::ComponentHelpers::ModalComponentManagerChangeNotifier::getInstance()
                        ::instance._36_4_;
    if (lVar12 != 0) {
      lVar15 = 0;
      do {
        lVar4 = *(long *)(uVar8 + lVar15);
        if (lVar4 != 0) {
          if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00276888 to 0027688c has its CatchHandler @ 0027692d */
            std::__throw_bad_function_call();
          }
                    /* try { // try from 0027679d to 0027679f has its CatchHandler @ 0027692b */
          (**(code **)(lVar4 + 0x18))();
        }
        lVar15 = lVar15 + 8;
      } while (lVar12 * 8 != lVar15);
    }
    if (param_2 != (long *)0x0) {
      uVar14 = (ulong)*(uint *)((long)puVar10 + 0x24);
      do {
        if ((int)uVar14 < 1) {
          (**(code **)(*param_2 + 8))();
          goto LAB_00276846;
        }
        lVar12 = *(long *)(puVar10[3] + -8 + uVar14 * 8);
        uVar14 = uVar14 - 1;
      } while (*(Component **)(lVar12 + 0x40) != param_1);
      iVar7 = *(int *)(lVar12 + 0x54);
      if ((int)*(uint *)(lVar12 + 0x50) <= iVar7) {
        uVar6 = iVar7 + ((iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(lVar12 + 0x50) != uVar6) {
          if ((int)uVar6 < 1) {
            free(*(void **)(lVar12 + 0x48));
            *(undefined8 *)(lVar12 + 0x48) = 0;
          }
          else {
            pvVar13 = realloc(*(void **)(lVar12 + 0x48),(ulong)uVar6 << 3);
            *(void **)(lVar12 + 0x48) = pvVar13;
          }
        }
        *(uint *)(lVar12 + 0x50) = uVar6;
        iVar7 = *(int *)(lVar12 + 0x54);
      }
      *(int *)(lVar12 + 0x54) = iVar7 + 1;
      *(long **)(*(long *)(lVar12 + 0x48) + (long)iVar7 * 8) = param_2;
    }
LAB_00276846:
                    /* try { // try from 0027684a to 00276854 has its CatchHandler @ 0027692d */
    (**(code **)(*(long *)param_1 + 0x60))(param_1,1);
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
LAB_0027685a:
  LOCK();
  plVar3 = plVar11 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00276876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 8))(plVar11);
    return;
  }
  return;
}


