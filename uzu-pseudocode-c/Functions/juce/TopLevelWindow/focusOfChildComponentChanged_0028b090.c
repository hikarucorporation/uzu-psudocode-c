// Function : focusOfChildComponentChanged
// Namespace: juce:TopLevelWindow
// Entry    : 0028b090
// Prototype: undefined focusOfChildComponentChanged(long param_1)
// Body     : 0028b090 - 0028b16e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TopLevelWindow::focusOfChildComponentChanged(juce::Component::FocusChangeType) */

void __cdecl juce::TopLevelWindow::focusOfChildComponentChanged(long param_1)

{
  int iVar1;
  long lVar2;
  TopLevelWindowManager *pTVar3;
  Timer *this;
  
  lVar2 = Component::currentlyFocusedComponent;
  if (detail::TopLevelWindowManager::singletonHolder == (TopLevelWindowManager *)0x0) {
    this = operator_new(0x48);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    Timer::Timer(this);
    DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(this + 0x28));
    *(undefined ***)this = &PTR__TopLevelWindowManager_00710e68;
    *(undefined ***)(this + 0x28) = &PTR__TopLevelWindowManager_00710e90;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    LOCK();
    UNLOCK();
    lVar2 = Component::currentlyFocusedComponent;
    detail::TopLevelWindowManager::singletonHolder = (TopLevelWindowManager *)this;
  }
  while( true ) {
    pTVar3 = detail::TopLevelWindowManager::singletonHolder;
    if (lVar2 == param_1) {
      detail::TopLevelWindowManager::checkFocus(detail::TopLevelWindowManager::singletonHolder);
      return;
    }
    if (lVar2 == 0) break;
    lVar2 = *(long *)(lVar2 + 0x30);
  }
  iVar1 = *(int *)(detail::TopLevelWindowManager::singletonHolder + 0x10);
  *(undefined4 *)(detail::TopLevelWindowManager::singletonHolder + 0x10) = 10;
  if (iVar1 == 0) {
                    /* try { // try from 0028b15f to 0028b166 has its CatchHandler @ 0028b16f */
    Timer::TimerThread::addTimer(*(TimerThread **)(pTVar3 + 0x18),(long)pTVar3);
    return;
  }
  Timer::TimerThread::resetTimerCounter(*(TimerThread **)(pTVar3 + 0x18),(long)pTVar3);
  return;
}


