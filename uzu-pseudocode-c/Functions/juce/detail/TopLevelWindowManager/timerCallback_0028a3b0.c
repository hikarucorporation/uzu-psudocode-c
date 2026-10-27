// Function : timerCallback
// Namespace: juce:detail:TopLevelWindowManager
// Entry    : 0028a3b0
// Prototype: Component * timerCallback(TopLevelWindowManager * this)
// Body     : 0028a3b0 - 0028a3b4


/* juce::detail::TopLevelWindowManager::timerCallback() */

Component * __thiscall
juce::detail::TopLevelWindowManager::timerCallback(TopLevelWindowManager *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  Component CVar4;
  uint uVar5;
  Component *pCVar6;
  undefined4 extraout_var;
  ulong uVar7;
  Desktop *pDVar8;
  int iVar9;
  int iVar10;
  Component *pCVar11;
  ulong uVar12;
  Component *pCVar13;
  ulong uVar14;
  
  iVar2 = *(int *)(this + 0x10);
  iVar9 = iVar2 * 2;
  iVar10 = 0x6c3;
  if (iVar9 < 0x6c3) {
    iVar10 = iVar9;
  }
  iVar9 = 1;
  if (0 < iVar10) {
    iVar9 = iVar10;
  }
  *(int *)(this + 0x10) = iVar9;
  if (iVar2 == 0) {
    pCVar6 = (Component *)Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x18),(long)this);
  }
  else {
    pCVar6 = (Component *)
             Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x18),(long)this);
  }
  pCVar11 = Component::currentlyFocusedComponent;
  if (LinuxComponentPeer::isActiveApplication == '\x01') {
    if (Component::currentlyFocusedComponent == (Component *)0x0) {
      pCVar13 = (Component *)0x0;
    }
    else {
      pCVar6 = (Component *)
               __dynamic_cast(Component::currentlyFocusedComponent,&Component::typeinfo,
                              &TopLevelWindow::typeinfo,0);
      pCVar13 = pCVar6;
      if (pCVar6 == (Component *)0x0) {
        do {
          pCVar11 = *(Component **)(pCVar11 + 0x30);
          pCVar13 = (Component *)0x0;
          if (pCVar11 == (Component *)0x0) goto LAB_0028a546;
          pCVar6 = (Component *)
                   __dynamic_cast(pCVar11,&Component::typeinfo,&TopLevelWindow::typeinfo,0);
        } while (pCVar6 == (Component *)0x0);
        pCVar13 = pCVar6;
      }
    }
LAB_0028a546:
    if (pCVar13 == (Component *)0x0) {
      pCVar13 = *(Component **)(this + 0x40);
    }
    if (pCVar13 != (Component *)0x0) {
      uVar5 = Component::isShowing(pCVar13);
      pCVar6 = (Component *)CONCAT44(extraout_var,uVar5);
      if ((char)uVar5 != '\0') goto LAB_0028a563;
    }
  }
  pCVar13 = (Component *)0x0;
LAB_0028a563:
  if (pCVar13 != *(Component **)(this + 0x40)) {
    *(Component **)(this + 0x40) = pCVar13;
    uVar5 = *(uint *)(this + 0x3c);
    uVar7 = (ulong)uVar5;
    if (0 < (int)uVar5) {
      uVar12 = uVar7 - 1;
      uVar14 = uVar7;
      if (uVar5 <= (uint)uVar12) goto LAB_0028a5e0;
      do {
        pCVar6 = *(Component **)(*(long *)(this + 0x30) + (uVar12 & 0xffffffff) * 8);
        uVar14 = uVar7;
        if (pCVar6 != (Component *)0x0) {
          for (pCVar11 = *(Component **)(this + 0x40); pCVar11 != pCVar6;
              pCVar11 = *(Component **)(pCVar11 + 0x30)) {
            pCVar13 = Component::currentlyFocusedComponent;
            if (pCVar11 == (Component *)0x0) goto joined_r0x0028a602;
          }
LAB_0028a5be:
          uVar5 = Component::isShowing(pCVar6);
          CVar4 = SUB41(uVar5,0);
          if (pCVar6[0xef] != CVar4) {
LAB_0028a5ce:
            pCVar6[0xef] = CVar4;
            (**(code **)(*(long *)pCVar6 + 0x198))(pCVar6);
          }
        }
LAB_0028a5e0:
        do {
          uVar7 = uVar12;
          if ((long)uVar14 < 2) goto LAB_0028a62c;
          uVar12 = uVar7 - 1;
          uVar14 = uVar7;
        } while (*(uint *)(this + 0x3c) <= (uint)uVar12);
      } while( true );
    }
LAB_0028a62c:
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar8 = operator_new(0x1d0);
      Desktop::Desktop(pDVar8);
      Desktop::instance = pDVar8;
    }
    pDVar8 = Desktop::instance;
    pCVar6 = (Component *)0x0;
    LOCK();
    uVar5 = *(uint *)(*(long *)(Desktop::instance + 0x38) + 0x18);
    if (uVar5 == 0) {
      *(uint *)(*(long *)(Desktop::instance + 0x38) + 0x18) = 1;
    }
    else {
      pCVar6 = (Component *)(ulong)uVar5;
    }
    UNLOCK();
    if (uVar5 == 0) {
      plVar3 = *(long **)(pDVar8 + 0x38);
      if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
         (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
        pCVar6 = (Component *)
                 InternalMessageQueue::postMessage
                           ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                            (long)plVar3);
        return pCVar6;
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      pCVar6 = *(Component **)(pDVar8 + 0x38);
      LOCK();
      *(undefined4 *)(pCVar6 + 0x18) = 0;
      UNLOCK();
    }
  }
  return pCVar6;
joined_r0x0028a602:
  if (pCVar13 == pCVar6) goto LAB_0028a5be;
  if (pCVar13 == (Component *)0x0) {
    CVar4 = (Component)0x0;
    if (pCVar6[0xef] == (Component)0x0) goto LAB_0028a5e0;
    goto LAB_0028a5ce;
  }
  pCVar13 = *(Component **)(pCVar13 + 0x30);
  goto joined_r0x0028a602;
}


