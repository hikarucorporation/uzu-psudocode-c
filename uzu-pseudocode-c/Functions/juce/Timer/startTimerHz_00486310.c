// Function : startTimerHz
// Namespace: juce:Timer
// Entry    : 00486310
// Prototype: undefined startTimerHz(Timer * this, uint param_1)
// Body     : 00486310 - 00486469


/* juce::Timer::startTimerHz(int) */

void __thiscall juce::Timer::startTimerHz(Timer *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if ((int)param_1 < 1) {
    if (0 < *(int *)(this + 0x10)) {
      lVar4 = *(long *)(this + 0x18);
      pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x1a0));
      uVar5 = *(ulong *)(this + 8);
      lVar8 = *(long *)(lVar4 + 0x1c8);
      lVar10 = *(long *)(lVar4 + 0x1d0);
      lVar11 = lVar10 - lVar8 >> 4;
      if (uVar5 < lVar11 - 1U) {
        uVar9 = uVar5;
        if ((~(uint)uVar5 + (int)lVar11 & 1) != 0) {
          puVar2 = (undefined8 *)(lVar8 + (uVar5 + 1) * 0x10);
          uVar6 = puVar2[1];
          puVar1 = (undefined8 *)(lVar8 + uVar5 * 0x10);
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          lVar8 = *(long *)(lVar4 + 0x1c8);
          *(ulong *)(*(long *)(lVar8 + uVar5 * 0x10) + 8) = uVar5;
          uVar9 = uVar5 + 1;
        }
        if (lVar11 - 2U != uVar5) {
          lVar10 = uVar9 * 0x10 + 0x10;
          do {
            uVar6 = ((undefined8 *)(lVar8 + lVar10))[1];
            puVar2 = (undefined8 *)(lVar8 + -0x10 + lVar10);
            *puVar2 = *(undefined8 *)(lVar8 + lVar10);
            puVar2[1] = uVar6;
            lVar8 = *(long *)(lVar4 + 0x1c8);
            *(ulong *)(*(long *)(lVar8 + -0x10 + lVar10) + 8) = uVar9;
            puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar10);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar8 + lVar10) = *puVar2;
            ((undefined8 *)(lVar8 + lVar10))[1] = uVar6;
            lVar8 = *(long *)(lVar4 + 0x1c8);
            *(ulong *)(*(long *)(lVar8 + lVar10) + 8) = uVar9 + 1;
            lVar10 = lVar10 + 0x20;
            uVar9 = uVar9 + 2;
          } while (uVar9 != lVar11 - 1U);
        }
        lVar10 = *(long *)(lVar4 + 0x1d0);
      }
      *(long *)(lVar4 + 0x1d0) = lVar10 + -0x10;
      pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x1a0));
      *(undefined4 *)(this + 0x10) = 0;
      return;
    }
  }
  else {
    uVar7 = 1;
    if (1000 / param_1 != 0) {
      uVar7 = 1000 / param_1;
    }
    iVar3 = *(int *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar7;
    if (iVar3 != 0) {
      TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x18),(long)this);
      return;
    }
                    /* try { // try from 004863ab to 004863b2 has its CatchHandler @ 0048646a */
    TimerThread::addTimer(*(TimerThread **)(this + 0x18),(long)this);
  }
  return;
}


