// Function : handleCommandMessage
// Namespace: juce:Button
// Entry    : 0022d570
// Prototype: undefined handleCommandMessage(Button * this, int param_1)
// Body     : 0022d570 - 0022d6d9


/* juce::Button::handleCommandMessage(int) */

void __thiscall juce::Button::handleCommandMessage(Button *this,int param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  Button *pBVar4;
  uint uVar5;
  timespec local_18;
  
  if (param_1 != 0x2f3f4f99) {
    return;
  }
  pBVar4 = this;
  do {
    if ((*(ushort *)(pBVar4 + 0xe8) & 0x8000) != 0) {
      return;
    }
    pBVar4 = *(Button **)(pBVar4 + 0x30);
  } while (pBVar4 != (Button *)0x0);
  pBVar4 = this;
  do {
    if ((*(ushort *)(pBVar4 + 0xe8) & 0x8000) != 0) goto LAB_0022d6bf;
    pBVar4 = *(Button **)(pBVar4 + 0x30);
  } while (pBVar4 != (Button *)0x0);
  this[499] = (Button)0x1;
  if (*(int *)(this + 0x1b8) != 2) {
    *(undefined4 *)(this + 0x1b8) = 2;
    Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
    if (*(int *)(this + 0x1b8) == 2) {
      uVar5 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
      if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
        clock_gettime(1,&local_18);
        auVar3 = SEXT816(local_18.tv_nsec / 1000 + local_18.tv_sec * 1000000) *
                 SEXT816(0x20c49ba5e353f7cf);
        uVar5 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
        if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar5) ||
           (uVar5 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
          LOCK();
          UNLOCK();
          _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar5;
        }
      }
      *(uint *)(this + 400) = uVar5;
      *(undefined4 *)(this + 0x194) = 0;
    }
    sendStateMessage(this);
  }
  lVar2 = *(long *)(this + 0x188);
  iVar1 = *(int *)(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x10) = 100;
  if (iVar1 == 0) {
                    /* try { // try from 0022d6ba to 0022d6be has its CatchHandler @ 0022d6da */
    Timer::TimerThread::addTimer(*(TimerThread **)(lVar2 + 0x18),lVar2);
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar2 + 0x18),lVar2);
  }
LAB_0022d6bf:
                    /* WARNING: Could not recover jumptable at 0x0022d6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x1c8))(this,&ModifierKeys::currentModifiers);
  return;
}


