// Function : applicationCommandInvoked
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232c90
// Prototype: undefined applicationCommandInvoked(CallbackHelper * this, int * param_1)
// Body     : 00232c90 - 00232dd1


/* juce::Button::CallbackHelper::applicationCommandInvoked(juce::ApplicationCommandTarget::InvocationInfo
   const&) */

void __thiscall
juce::Button::CallbackHelper::applicationCommandInvoked(CallbackHelper *this,int *param_1)

{
  int iVar1;
  Button *this_00;
  long lVar2;
  undefined1 auVar3 [16];
  Button *pBVar4;
  uint uVar5;
  timespec local_18;
  
  this_00 = *(Button **)(this + 0x40);
  if ((*param_1 == *(int *)(this_00 + 0x1b4)) && ((*(byte *)(param_1 + 1) & 0x20) == 0)) {
    pBVar4 = this_00;
    do {
      if ((*(ushort *)(pBVar4 + 0xe8) & 0x8000) != 0) {
        return;
      }
      pBVar4 = *(Button **)(pBVar4 + 0x30);
    } while (pBVar4 != (Button *)0x0);
    this_00[499] = (Button)0x1;
    if (*(int *)(this_00 + 0x1b8) != 2) {
      *(undefined4 *)(this_00 + 0x1b8) = 2;
      Component::internalRepaintUnchecked((long)this_00,0,*(ulong *)(this_00 + 0x40),'\x01');
      if (*(int *)(this_00 + 0x1b8) == 2) {
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
        *(uint *)(this_00 + 400) = uVar5;
        *(undefined4 *)(this_00 + 0x194) = 0;
      }
      sendStateMessage(this_00);
    }
    lVar2 = *(long *)(this_00 + 0x188);
    iVar1 = *(int *)(lVar2 + 0x10);
    *(undefined4 *)(lVar2 + 0x10) = 100;
    if (iVar1 != 0) {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar2 + 0x18),lVar2);
      return;
    }
                    /* try { // try from 00232dc7 to 00232dcb has its CatchHandler @ 00232dd2 */
    Timer::TimerThread::addTimer(*(TimerThread **)(lVar2 + 0x18),lVar2);
  }
  return;
}


