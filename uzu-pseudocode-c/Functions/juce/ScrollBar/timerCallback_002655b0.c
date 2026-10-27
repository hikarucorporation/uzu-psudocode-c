// Function : timerCallback
// Namespace: juce:ScrollBar
// Entry    : 002655b0
// Prototype: ulong timerCallback(ScrollBar * this)
// Body     : 002655b0 - 002658a2


/* juce::ScrollBar::timerCallback() */

ulong __thiscall juce::ScrollBar::timerCallback(ScrollBar *this)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  Desktop *this_00;
  ulong uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002655e2 to 002655e9 has its CatchHandler @ 002658ab */
    Desktop::Desktop(this_00);
    lVar6 = *(long *)(this_00 + 0x40);
    iVar4 = *(int *)(lVar6 + 0x44);
    Desktop::instance = this_00;
  }
  else {
    lVar6 = *(long *)(Desktop::instance + 0x40);
    iVar4 = *(int *)(lVar6 + 0x44);
  }
  if ((long)iVar4 != 0) {
    lVar11 = 0;
    do {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + lVar11);
      lVar8 = *(long *)(lVar7 + 0x48);
      if (((lVar8 != 0) && (*(ScrollBar **)(lVar8 + 0x10) == this)) &&
         ((*(ushort *)(lVar7 + 0x3c) & 0x1f0) != 0)) {
        iVar4 = *(int *)(this + 0x110);
        *(undefined4 *)(this + 0x110) = 0x28;
        if (iVar4 == 0) {
                    /* try { // try from 00265678 to 0026567c has its CatchHandler @ 002658a3 */
          Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x118),(long)(this + 0x100));
        }
        else {
          Timer::TimerThread::resetTimerCounter
                    (*(TimerThread **)(this + 0x118),(long)(this + 0x100));
        }
        uVar5 = *(uint *)(this + 0x160);
        if (*(int *)(this + 0x16c) < (int)uVar5) {
          dVar2 = *(double *)(this + 0x140);
          dVar3 = *(double *)(this + 0x138);
          dVar15 = dVar3 - (dVar2 - dVar3);
          dVar12 = dVar2 - (dVar2 - dVar3);
          if (dVar12 <= dVar15) {
            dVar12 = dVar15;
          }
          dVar14 = *(double *)(this + 0x128);
          dVar13 = *(double *)(this + 0x130);
          if (dVar12 - dVar15 < dVar13 - dVar14) {
            dVar13 = dVar13 - (dVar12 - dVar15);
            if (dVar15 <= dVar13) {
              dVar13 = dVar15;
            }
            dVar14 = (double)(-(ulong)(dVar15 < dVar14) & (ulong)dVar14 |
                             ~-(ulong)(dVar15 < dVar14) & (ulong)dVar13);
            dVar13 = dVar12 + (dVar14 - dVar15);
            if (dVar13 <= dVar14) {
              dVar13 = dVar14;
            }
          }
          if ((dVar3 == dVar14) && (!NAN(dVar3) && !NAN(dVar14))) {
            if ((dVar2 == dVar13) && (!NAN(dVar2) && !NAN(dVar13))) {
              return (ulong)uVar5;
            }
          }
          *(double *)(this + 0x138) = dVar14;
          *(double *)(this + 0x140) = dVar13;
          updateThumbPosition(this);
          uVar10 = 0;
          LOCK();
          uVar5 = *(uint *)(*(long *)(this + 0xf8) + 0x18);
          if (uVar5 == 0) {
            *(uint *)(*(long *)(this + 0xf8) + 0x18) = 1;
          }
          else {
            uVar10 = (ulong)uVar5;
          }
          UNLOCK();
          if (uVar5 == 0) {
            plVar9 = *(long **)(this + 0xf8);
            if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0))
               && (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
              uVar10 = InternalMessageQueue::postMessage
                                 ((InternalMessageQueue *)
                                  InternalMessageQueue::singletonHolder._40_8_,(long)plVar9);
              return uVar10;
            }
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
            uVar10 = *(ulong *)(this + 0xf8);
            LOCK();
            *(undefined4 *)(uVar10 + 0x18) = 0;
            UNLOCK();
          }
        }
        else {
          uVar10 = (ulong)(uVar5 + *(int *)(this + 0x164));
          if ((int)(uVar5 + *(int *)(this + 0x164)) < *(int *)(this + 0x16c)) {
            dVar2 = *(double *)(this + 0x140);
            dVar3 = *(double *)(this + 0x138);
            dVar12 = (dVar2 - dVar3) + dVar2;
            if (dVar12 <= dVar2) {
              dVar12 = dVar2;
            }
            dVar15 = *(double *)(this + 0x128);
            dVar14 = *(double *)(this + 0x130);
            if (dVar12 - dVar2 < dVar14 - dVar15) {
              dVar14 = dVar14 - (dVar12 - dVar2);
              if (dVar2 <= dVar14) {
                dVar14 = dVar2;
              }
              dVar15 = (double)(-(ulong)(dVar2 < dVar15) & (ulong)dVar15 |
                               ~-(ulong)(dVar2 < dVar15) & (ulong)dVar14);
              dVar14 = dVar12 + (dVar15 - dVar2);
              if (dVar14 <= dVar15) {
                dVar14 = dVar15;
              }
            }
            if ((((dVar3 != dVar15) || (NAN(dVar3) || NAN(dVar15))) || (dVar2 != dVar14)) ||
               (NAN(dVar2) || NAN(dVar14))) {
              *(double *)(this + 0x138) = dVar15;
              *(double *)(this + 0x140) = dVar14;
              updateThumbPosition(this);
              uVar10 = AsyncUpdater::triggerAsyncUpdate((AsyncUpdater *)(this + 0xf0));
              return uVar10;
            }
          }
        }
        return uVar10;
      }
      lVar11 = lVar11 + 8;
    } while ((long)iVar4 * 8 != lVar11);
  }
  uVar10 = Timer::stopTimer((Timer *)(this + 0x100));
  return uVar10;
}


