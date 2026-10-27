// Function : getMouseState
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027b6a0
// Prototype: Timer * getMouseState(MenuWindow * this, long * param_1)
// Body     : 0027b6a0 - 0027b885


/* juce::PopupMenu::HelperClasses::MenuWindow::getMouseState(juce::MouseInputSource) */

Timer * __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::getMouseState(MenuWindow *this,long *param_1)

{
  long lVar1;
  Timer *this_00;
  undefined1 auVar2 [16];
  int iVar3;
  Timer *pTVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  timespec local_40;
  
  iVar3 = *(int *)(this + 0x1c4);
  if ((long)iVar3 != 0) {
    lVar1 = *(long *)(this + 0x1b8);
    lVar7 = 0;
    pTVar4 = (Timer *)0x0;
    do {
      this_00 = *(Timer **)(lVar1 + lVar7);
      if (*(long *)(this_00 + 0x30) == *param_1) {
        pTVar4 = this_00;
      }
      else if (*(int *)(*(long *)(this_00 + 0x30) + 0x14) != *(int *)(*param_1 + 0x14)) {
        Timer::stopTimer(this_00);
      }
      lVar7 = lVar7 + 8;
    } while ((long)iVar3 * 8 != lVar7);
    if (pTVar4 != (Timer *)0x0) {
      return pTVar4;
    }
  }
  pTVar4 = operator_new(0x58);
  lVar1 = *param_1;
  Timer::Timer(pTVar4);
  *(undefined ***)pTVar4 = &PTR__MouseSourceState_0070f9c0;
  *(MenuWindow **)(pTVar4 + 0x28) = this;
  *(long *)(pTVar4 + 0x30) = lVar1;
  *(undefined8 *)(pTVar4 + 0x38) = 0;
  *(undefined8 *)(pTVar4 + 0x40) = 0;
  clock_gettime(1,&local_40);
  auVar2 = SEXT816(local_40.tv_nsec / 1000 + local_40.tv_sec * 1000000) *
           SEXT816(0x20c49ba5e353f7cf);
  uVar6 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar6) ||
     (uVar6 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar6;
  }
  *(uint *)(pTVar4 + 0x48) = uVar6;
  *(undefined4 *)(pTVar4 + 0x4c) = 0;
  pTVar4[0x50] = (Timer)0x0;
  iVar3 = *(int *)(pTVar4 + 0x10);
  *(undefined4 *)(pTVar4 + 0x10) = 0x32;
  if (iVar3 == 0) {
                    /* try { // try from 0027b7e3 to 0027b7ea has its CatchHandler @ 0027b886 */
    Timer::TimerThread::addTimer(*(TimerThread **)(pTVar4 + 0x18),(long)pTVar4);
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(pTVar4 + 0x18),(long)pTVar4);
  }
  iVar3 = *(int *)(this + 0x1c4);
  if ((int)*(uint *)(this + 0x1c0) <= iVar3) {
    uVar6 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x1c0) != uVar6) {
      if ((int)uVar6 < 1) {
        free(*(void **)(this + 0x1b8));
        *(undefined8 *)(this + 0x1b8) = 0;
      }
      else {
        pvVar5 = realloc(*(void **)(this + 0x1b8),(ulong)uVar6 << 3);
        *(void **)(this + 0x1b8) = pvVar5;
      }
    }
    *(uint *)(this + 0x1c0) = uVar6;
    iVar3 = *(int *)(this + 0x1c4);
  }
  *(int *)(this + 0x1c4) = iVar3 + 1;
  *(Timer **)(*(long *)(this + 0x1b8) + (long)iVar3 * 8) = pTVar4;
  return pTVar4;
}


