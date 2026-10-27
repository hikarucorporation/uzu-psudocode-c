// Function : stopTimer
// Namespace: juce:Timer
// Entry    : 00483cd0
// Prototype: undefined stopTimer(Timer * this)
// Body     : 00483cd0 - 00483de9


/* juce::Timer::stopTimer() */

void __thiscall juce::Timer::stopTimer(Timer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (0 < *(int *)(this + 0x10)) {
    lVar3 = *(long *)(this + 0x18);
    pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x1a0));
    uVar4 = *(ulong *)(this + 8);
    lVar6 = *(long *)(lVar3 + 0x1c8);
    lVar8 = *(long *)(lVar3 + 0x1d0);
    lVar9 = lVar8 - lVar6 >> 4;
    if (uVar4 < lVar9 - 1U) {
      uVar7 = uVar4;
      if ((~(uint)uVar4 + (int)lVar9 & 1) != 0) {
        puVar2 = (undefined8 *)(lVar6 + (uVar4 + 1) * 0x10);
        uVar5 = puVar2[1];
        puVar1 = (undefined8 *)(lVar6 + uVar4 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
        lVar6 = *(long *)(lVar3 + 0x1c8);
        *(ulong *)(*(long *)(lVar6 + uVar4 * 0x10) + 8) = uVar4;
        uVar7 = uVar4 + 1;
      }
      if (lVar9 - 2U != uVar4) {
        lVar8 = uVar7 * 0x10 + 0x10;
        do {
          uVar5 = ((undefined8 *)(lVar6 + lVar8))[1];
          puVar2 = (undefined8 *)(lVar6 + -0x10 + lVar8);
          *puVar2 = *(undefined8 *)(lVar6 + lVar8);
          puVar2[1] = uVar5;
          lVar6 = *(long *)(lVar3 + 0x1c8);
          *(ulong *)(*(long *)(lVar6 + -0x10 + lVar8) + 8) = uVar7;
          puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar8);
          uVar5 = puVar2[1];
          *(undefined8 *)(lVar6 + lVar8) = *puVar2;
          ((undefined8 *)(lVar6 + lVar8))[1] = uVar5;
          lVar6 = *(long *)(lVar3 + 0x1c8);
          *(ulong *)(*(long *)(lVar6 + lVar8) + 8) = uVar7 + 1;
          lVar8 = lVar8 + 0x20;
          uVar7 = uVar7 + 2;
        } while (uVar7 != lVar9 - 1U);
      }
      lVar8 = *(long *)(lVar3 + 0x1d0);
    }
    *(long *)(lVar3 + 0x1d0) = lVar8 + -0x10;
    pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x1a0));
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}


