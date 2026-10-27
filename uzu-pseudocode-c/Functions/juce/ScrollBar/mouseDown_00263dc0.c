// Function : mouseDown
// Namespace: juce:ScrollBar
// Entry    : 00263dc0
// Prototype: undefined mouseDown(ScrollBar * this, long param_1)
// Body     : 00263dc0 - 00264133


/* juce::ScrollBar::mouseDown(juce::MouseEvent const&) */

void __thiscall juce::ScrollBar::mouseDown(ScrollBar *this,long param_1)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  ScrollBar *pSVar7;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar8;
  TimerThread *this_01;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  this[0x17d] = (ScrollBar)0x0;
  iVar4 = *(int *)(param_1 + 8 + (ulong)(byte)this[0x17c] * 4);
  *(int *)(this + 0x16c) = iVar4;
  *(int *)(this + 0x168) = iVar4;
  dVar2 = *(double *)(this + 0x138);
  *(double *)(this + 0x150) = dVar2;
  if (*(int *)(this + 0x160) <= iVar4) {
    if (iVar4 < *(int *)(this + 0x160) + *(int *)(this + 0x164)) {
      iVar4 = *(int *)(this + 0x15c);
      pSVar7 = this;
      do {
        if ((*(long *)(pSVar7 + 0x68) != 0) &&
           (pLVar8 = *(LookAndFeel_V4 **)(*(long *)(pSVar7 + 0x68) + 0x10),
           pLVar8 != (LookAndFeel_V4 *)0x0)) goto LAB_002640cc;
        pSVar7 = *(ScrollBar **)(pSVar7 + 0x30);
      } while (pSVar7 != (ScrollBar *)0x0);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002640a5 to 002640ae has its CatchHandler @ 00264147 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 002640b2 to 002640b9 has its CatchHandler @ 00264134 */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      pLVar8 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002640cc:
      iVar6 = (**(code **)(*(long *)pLVar8 + 0x30))(pLVar8,this);
      this[0x17d] = (ScrollBar)(*(int *)(this + 0x164) < *(int *)(this + 0x15c) && iVar6 < iVar4);
      return;
    }
    dVar3 = *(double *)(this + 0x140);
    dVar13 = dVar2 + (dVar3 - dVar2);
    dVar11 = (dVar3 - dVar2) + dVar3;
    if (dVar11 <= dVar13) {
      dVar11 = dVar13;
    }
    dVar10 = *(double *)(this + 0x128);
    dVar12 = *(double *)(this + 0x130);
    if (dVar11 - dVar13 < dVar12 - dVar10) {
      dVar12 = dVar12 - (dVar11 - dVar13);
      if (dVar13 <= dVar12) {
        dVar12 = dVar13;
      }
      dVar10 = (double)(-(ulong)(dVar13 < dVar10) & (ulong)dVar10 |
                       ~-(ulong)(dVar13 < dVar10) & (ulong)dVar12);
      dVar12 = dVar11 + (dVar10 - dVar13);
      if (dVar12 <= dVar10) {
        dVar12 = dVar10;
      }
    }
    if ((dVar2 != dVar10) || (NAN(dVar2) || NAN(dVar10))) {
LAB_00264003:
      *(double *)(this + 0x138) = dVar10;
      *(double *)(this + 0x140) = dVar12;
      updateThumbPosition(this);
      LOCK();
      bVar9 = *(int *)(*(long *)(this + 0xf8) + 0x18) == 0;
      if (bVar9) {
        *(int *)(*(long *)(this + 0xf8) + 0x18) = 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar5 = *(long **)(this + 0xf8);
        if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
           (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
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
          *(undefined4 *)(*(long *)(this + 0xf8) + 0x18) = 0;
          UNLOCK();
        }
        else {
          InternalMessageQueue::postMessage
                    ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,
                     (long)plVar5);
        }
      }
    }
    else if ((dVar3 != dVar12) || (NAN(dVar3) || NAN(dVar12))) goto LAB_00264003;
    iVar4 = *(int *)(this + 0x110);
    *(undefined4 *)(this + 0x110) = 400;
    this_01 = *(TimerThread **)(this + 0x118);
    if (iVar4 == 0) {
                    /* try { // try from 002640f6 to 002640fa has its CatchHandler @ 0026414f */
      Timer::TimerThread::addTimer(this_01,(long)(this + 0x100));
      return;
    }
    goto LAB_00264090;
  }
  dVar3 = *(double *)(this + 0x140);
  dVar13 = dVar2 - (dVar3 - dVar2);
  dVar11 = dVar3 - (dVar3 - dVar2);
  if (dVar11 <= dVar13) {
    dVar11 = dVar13;
  }
  dVar10 = *(double *)(this + 0x128);
  dVar12 = *(double *)(this + 0x130);
  if (dVar11 - dVar13 < dVar12 - dVar10) {
    dVar12 = dVar12 - (dVar11 - dVar13);
    if (dVar13 <= dVar12) {
      dVar12 = dVar13;
    }
    dVar10 = (double)(-(ulong)(dVar13 < dVar10) & (ulong)dVar10 |
                     ~-(ulong)(dVar13 < dVar10) & (ulong)dVar12);
    dVar12 = dVar11 + (dVar10 - dVar13);
    if (dVar12 <= dVar10) {
      dVar12 = dVar10;
    }
  }
  if ((dVar2 != dVar10) || (NAN(dVar2) || NAN(dVar10))) {
LAB_00263e96:
    *(double *)(this + 0x138) = dVar10;
    *(double *)(this + 0x140) = dVar12;
    updateThumbPosition(this);
    LOCK();
    bVar9 = *(int *)(*(long *)(this + 0xf8) + 0x18) == 0;
    if (bVar9) {
      *(int *)(*(long *)(this + 0xf8) + 0x18) = 1;
    }
    UNLOCK();
    if (bVar9) {
      plVar5 = *(long **)(this + 0xf8);
      if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
         (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
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
        *(undefined4 *)(*(long *)(this + 0xf8) + 0x18) = 0;
        UNLOCK();
      }
      else {
        InternalMessageQueue::postMessage
                  ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar5
                  );
      }
    }
  }
  else if ((dVar3 != dVar12) || (NAN(dVar3) || NAN(dVar12))) goto LAB_00263e96;
  iVar4 = *(int *)(this + 0x110);
  *(undefined4 *)(this + 0x110) = 400;
  this_01 = *(TimerThread **)(this + 0x118);
  if (iVar4 == 0) {
                    /* try { // try from 00263f27 to 00263f2b has its CatchHandler @ 00264157 */
    Timer::TimerThread::addTimer(this_01,(long)(this + 0x100));
    return;
  }
LAB_00264090:
  Timer::TimerThread::resetTimerCounter(this_01,(long)(this + 0x100));
  return;
}


