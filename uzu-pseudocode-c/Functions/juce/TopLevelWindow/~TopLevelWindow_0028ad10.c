// Function : ~TopLevelWindow
// Namespace: juce:TopLevelWindow
// Entry    : 0028ad10
// Prototype: undefined ~TopLevelWindow(TopLevelWindow * this)
// Body     : 0028ad10 - 0028aee5


/* juce::TopLevelWindow::~TopLevelWindow() */

void __thiscall juce::TopLevelWindow::~TopLevelWindow(TopLevelWindow *this)

{
  long *plVar1;
  TimerThread *this_00;
  long lVar2;
  uint uVar3;
  Timer *pTVar4;
  void *pvVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  
  *(undefined ***)this = &PTR__TopLevelWindow_0070cf40;
  plVar1 = *(long **)(this + 0xf0);
  *(undefined8 *)(this + 0xf0) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pTVar4 = detail::TopLevelWindowManager::singletonHolder;
  if (detail::TopLevelWindowManager::singletonHolder == (Timer *)0x0) {
                    /* try { // try from 0028ad76 to 0028ad7f has its CatchHandler @ 0028aeee */
    pTVar4 = operator_new(0x48);
    *(undefined8 *)(pTVar4 + 0x30) = 0;
    *(undefined8 *)(pTVar4 + 0x38) = 0;
    *(undefined8 *)(pTVar4 + 0x20) = 0;
    *(undefined8 *)(pTVar4 + 0x28) = 0;
    *(undefined8 *)(pTVar4 + 0x10) = 0;
    *(undefined8 *)(pTVar4 + 0x18) = 0;
    *(undefined8 *)pTVar4 = 0;
    *(undefined8 *)(pTVar4 + 8) = 0;
    *(undefined8 *)(pTVar4 + 0x40) = 0;
    Timer::Timer(pTVar4);
    DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)(pTVar4 + 0x28));
    *(undefined ***)pTVar4 = &PTR__TopLevelWindowManager_00710e68;
    *(undefined ***)(pTVar4 + 0x28) = &PTR__TopLevelWindowManager_00710e90;
    *(undefined8 *)(pTVar4 + 0x30) = 0;
    *(undefined8 *)(pTVar4 + 0x38) = 0;
    *(undefined8 *)(pTVar4 + 0x40) = 0;
    LOCK();
    UNLOCK();
    iVar9 = *(int *)(pTVar4 + 0x10);
    detail::TopLevelWindowManager::singletonHolder = pTVar4;
    *(undefined4 *)(pTVar4 + 0x10) = 10;
    this_00 = *(TimerThread **)(pTVar4 + 0x18);
  }
  else {
    iVar9 = *(int *)(detail::TopLevelWindowManager::singletonHolder + 0x10);
    *(undefined4 *)(detail::TopLevelWindowManager::singletonHolder + 0x10) = 10;
    this_00 = *(TimerThread **)(pTVar4 + 0x18);
  }
  if (iVar9 == 0) {
                    /* try { // try from 0028adf4 to 0028adfb has its CatchHandler @ 0028aee6 */
    Timer::TimerThread::addTimer(this_00,(long)pTVar4);
  }
  else {
    Timer::TimerThread::resetTimerCounter(this_00,(long)pTVar4);
  }
  if (*(TopLevelWindow **)(pTVar4 + 0x40) == this) {
    *(long *)(pTVar4 + 0x40) = 0;
    uVar3 = *(uint *)(pTVar4 + 0x3c);
  }
  else {
    uVar3 = *(uint *)(pTVar4 + 0x3c);
  }
  if ((int)uVar3 < 1) {
LAB_0028aea3:
    pTVar4 = detail::TopLevelWindowManager::singletonHolder;
    if (uVar3 == 0) {
      LOCK();
      detail::TopLevelWindowManager::singletonHolder = (Timer *)0x0;
      UNLOCK();
      if (pTVar4 != (Timer *)0x0) {
        (**(code **)(*(long *)pTVar4 + 8))();
      }
    }
  }
  else {
    lVar2 = *(long *)(pTVar4 + 0x30);
    uVar7 = 0;
    do {
      if (*(TopLevelWindow **)(lVar2 + uVar7 * 8) == this) {
        memmove((void *)(lVar2 + uVar7 * 8),(void *)(lVar2 + uVar7 * 8 + 8),
                (long)(int)(~(uint)uVar7 + uVar3) << 3);
        iVar9 = *(int *)(pTVar4 + 0x3c);
        uVar3 = iVar9 - 1;
        *(uint *)(pTVar4 + 0x3c) = uVar3;
        iVar6 = iVar9 * 2 + -2;
        iVar9 = 0;
        if (-1 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar9 < *(int *)(pTVar4 + 0x38)) {
          uVar8 = 8;
          if (8 < (int)uVar3) {
            uVar8 = uVar3;
          }
          if ((int)uVar8 < *(int *)(pTVar4 + 0x38)) {
            pvVar5 = realloc(*(void **)(pTVar4 + 0x30),(ulong)uVar8 << 3);
            *(void **)(pTVar4 + 0x30) = pvVar5;
            *(uint *)(pTVar4 + 0x38) = uVar8;
            uVar3 = *(uint *)(pTVar4 + 0x3c);
          }
        }
        goto LAB_0028aea3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar3 != uVar7);
  }
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 8))();
  }
  *(undefined8 *)(this + 0xf0) = 0;
  Component::~Component((Component *)this);
  return;
}


