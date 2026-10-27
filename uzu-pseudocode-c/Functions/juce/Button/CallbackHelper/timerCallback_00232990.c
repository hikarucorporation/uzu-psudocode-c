// Function : timerCallback
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232990
// Prototype: undefined timerCallback(CallbackHelper * this)
// Body     : 00232990 - 00232bd6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Button::CallbackHelper::timerCallback() */

void __thiscall juce::Button::CallbackHelper::timerCallback(CallbackHelper *this)

{
  Button *this_00;
  long lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  timespec local_28;
  
  this_00 = *(Button **)(this + 0x40);
  if (this_00[500] == (Button)0x0) {
    uVar6 = *(uint *)(this_00 + 0x1a4);
    if (0 < (int)uVar6) {
      if (this_00[0x1f5] != (Button)0x0) {
        iVar3 = *(int *)(this_00 + 0x1a8);
        uVar4 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
joined_r0x00232b86:
        _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar4;
        if (-1 < iVar3) {
          if (uVar4 == 0) {
            clock_gettime(1,&local_28);
            auVar2 = SEXT816(local_28.tv_nsec / 1000 + local_28.tv_sec * 1000000) *
                     SEXT816(0x20c49ba5e353f7cf);
            uVar4 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
            if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar4) ||
               (uVar4 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
              LOCK();
              UNLOCK();
              _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar4;
            }
          }
          uVar5 = uVar4 - *(uint *)(this_00 + 400);
          if (uVar4 < *(uint *)(this_00 + 400)) {
            uVar5 = 0;
          }
          dVar7 = (double)uVar5 / _DAT_005de640;
          if (_DAT_005d9000 <= (double)uVar5 / _DAT_005de640) {
            dVar7 = _DAT_005d9000;
          }
          uVar6 = uVar6 + (int)((double)(int)(*(int *)(this_00 + 0x1a8) - uVar6) * dVar7 * dVar7);
        }
        if ((int)uVar6 < 1) {
          uVar6 = 1;
        }
        clock_gettime(1,&local_28);
        auVar2 = SEXT816(local_28.tv_nsec / 1000 + local_28.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar4 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar4) ||
           (uVar4 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar4;
        }
        if ((*(int *)(this_00 + 0x194) != 0) &&
           ((int)(uVar6 * 2) < (int)(uVar4 - *(int *)(this_00 + 0x194)))) {
          uVar5 = uVar6 >> 1;
          uVar6 = 1;
          if (uVar5 != 0) {
            uVar6 = uVar5;
          }
        }
        *(uint *)(this_00 + 0x194) = uVar4;
        lVar1 = *(long *)(this_00 + 0x188);
        uVar4 = 1;
        if (0 < (int)uVar6) {
          uVar4 = uVar6;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
        *(uint *)(lVar1 + 0x10) = uVar4;
        if (iVar3 == 0) {
                    /* try { // try from 00232bb3 to 00232bb7 has its CatchHandler @ 00232bd7 */
          Timer::TimerThread::addTimer(*(TimerThread **)(lVar1 + 0x18),lVar1);
        }
        else {
          Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar1 + 0x18),lVar1);
        }
                    /* WARNING: Could not recover jumptable at 0x00232bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this_00 + 0x1c8))(this_00,&ModifierKeys::currentModifiers);
        return;
      }
      iVar3 = updateState(this_00);
      if (iVar3 == 2) {
        uVar6 = *(uint *)(this_00 + 0x1a4);
        iVar3 = *(int *)(this_00 + 0x1a8);
        uVar4 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
        goto joined_r0x00232b86;
      }
    }
    if (this_00[499] == (Button)0x0) {
      Timer::stopTimer(*(Timer **)(this_00 + 0x188));
      return;
    }
  }
  else {
    Timer::stopTimer(*(Timer **)(this_00 + 0x188));
    updateState(this_00);
    this_00[500] = (Button)0x0;
  }
  return;
}


