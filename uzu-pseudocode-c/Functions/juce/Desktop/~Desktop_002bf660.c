// Function : ~Desktop
// Namespace: juce:Desktop
// Entry    : 002bf660
// Prototype: undefined ~Desktop(Desktop * this)
// Body     : 002bf660 - 002bfa1c


/* juce::Desktop::~Desktop() */

void __thiscall juce::Desktop::~Desktop(Desktop *this)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  bool bVar12;
  
  *(undefined ***)this = &PTR__Desktop_00707aa8;
  *(undefined ***)(this + 8) = &PTR__Desktop_00707ad8;
  *(undefined ***)(this + 0x30) = &PTR__Desktop_00707b00;
  uVar3 = *(uint *)(this + 0x1bc);
  uVar8 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    iVar11 = -uVar3;
    uVar10 = uVar8;
    while( true ) {
      uVar9 = (ulong)((int)uVar10 - 1);
      lVar4 = *(long *)(this + 0x1b0);
      plVar5 = *(long **)(lVar4 + uVar9 * 8);
      memmove((void *)(lVar4 + uVar9 * 8),(void *)(lVar4 + uVar9 * 8 + 8),
              (long)((int)uVar8 + iVar11) << 3);
      *(int *)(this + 0x1bc) = *(int *)(this + 0x1bc) + -1;
      ContainerDeletePolicy<juce::ComponentAnimator::AnimationTask>::destroy(plVar5);
      if ((long)uVar10 < 2) break;
      uVar8 = (ulong)*(uint *)(this + 0x1bc);
      iVar11 = iVar11 + 1;
      uVar10 = uVar10 - 1;
    }
    if (*(int *)(this + 0x1b8) != 0) {
      free(*(void **)(this + 0x1b0));
      *(undefined8 *)(this + 0x1b0) = 0;
    }
    *(undefined4 *)(this + 0x1b8) = 0;
    if (((byte)this[0x180] & 1) != 0) {
      LOCK();
      bVar12 = *(int *)(*(long *)(this + 0x148) + 0x18) == 0;
      if (bVar12) {
        *(int *)(*(long *)(this + 0x148) + 0x18) = 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar5 = *(long **)(this + 0x148);
        if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
           (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
          InternalMessageQueue::postMessage
                    ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                     (long)plVar5);
          plVar5 = *(long **)(this + 0x1c8);
          goto joined_r0x002bf7a0;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        LOCK();
        *(undefined4 *)(*(long *)(this + 0x148) + 0x18) = 0;
        UNLOCK();
      }
    }
  }
  plVar5 = *(long **)(this + 0x1c8);
joined_r0x002bf7a0:
  instance = 0;
  if (plVar5 != (long *)0x0) {
    instance = 0;
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined ***)(this + 0x138) = &PTR__ComponentAnimator_00708910;
  *(undefined ***)(this + 0x188) = &PTR__ComponentAnimator_00708938;
  uVar3 = *(uint *)(this + 0x1bc);
  uVar8 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    iVar11 = -uVar3;
    uVar10 = uVar8;
    while( true ) {
      uVar9 = (ulong)((int)uVar10 - 1);
      lVar4 = *(long *)(this + 0x1b0);
      plVar5 = *(long **)(lVar4 + uVar9 * 8);
      memmove((void *)(lVar4 + uVar9 * 8),(void *)(lVar4 + uVar9 * 8 + 8),
              (long)((int)uVar8 + iVar11) << 3);
      *(int *)(this + 0x1bc) = *(int *)(this + 0x1bc) + -1;
      ContainerDeletePolicy<juce::ComponentAnimator::AnimationTask>::destroy(plVar5);
      if ((long)uVar10 < 2) break;
      uVar8 = (ulong)*(uint *)(this + 0x1bc);
      iVar11 = iVar11 + 1;
      uVar10 = uVar10 - 1;
    }
  }
  *(undefined4 *)(this + 0x1bc) = 0;
  free(*(void **)(this + 0x1b0));
  Timer::~Timer((Timer *)(this + 0x188));
  *(undefined ***)(this + 0x138) = &PTR__ChangeBroadcaster_00712b80;
  ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x158));
  *(undefined ***)(this + 0x140) = &PTR__ChangeBroadcasterCallback_00712ba0;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x148) + 0x18) = 0;
  UNLOCK();
  *(undefined ***)(this + 0x140) = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x148) + 0x18) = 0;
  UNLOCK();
  pvVar6 = *(void **)(this + 0x148);
  if (pvVar6 != (void *)0x0) {
    LOCK();
    piVar2 = (int *)((long)pvVar6 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(pvVar6);
    }
  }
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
  }
  *(undefined8 *)(this + 0x108) = 0;
  plVar5 = *(long **)(this + 0x100);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  *(undefined8 *)(this + 0xf8) = 0;
  puVar7 = *(undefined8 **)(this + 0xe0);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar7 + 0xc) = 0;
    free((void *)*puVar7);
    operator_delete(puVar7);
  }
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  free(*(void **)(this + 0xd0));
  *(undefined4 *)(this + 0xcc) = 0;
  free(*(void **)(this + 0xc0));
  ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::DarkModeSettingListener,juce::Array<juce::DarkModeSettingListener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x98));
  ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x70));
  ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
  ~ListenerList((ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
                 *)(this + 0x48));
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)(this + 0x30) = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x38) + 0x18) = 0;
  UNLOCK();
  pvVar6 = *(void **)(this + 0x38);
  if (pvVar6 != (void *)0x0) {
    LOCK();
    piVar2 = (int *)((long)pvVar6 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(pvVar6);
    }
  }
  Timer::~Timer((Timer *)(this + 8));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  return;
}


