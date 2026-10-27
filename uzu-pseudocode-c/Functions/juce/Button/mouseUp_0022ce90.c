// Function : mouseUp
// Namespace: juce:Button
// Entry    : 0022ce90
// Prototype: undefined mouseUp(Button * this, undefined8 * param_1)
// Body     : 0022ce90 - 0022d163


/* juce::Button::mouseUp(juce::MouseEvent const&) */

void __thiscall juce::Button::mouseUp(Button *this,undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  Button *pBVar6;
  long *plVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  timespec local_28;
  
  iVar1 = *(int *)(this + 0x1b8);
  if (*(int *)(param_1[10] + 0x14) - 1U < 2) {
    fVar9 = (float)*param_1;
    if (0.0 <= fVar9) {
      fVar10 = (float)((ulong)*param_1 >> 0x20);
      bVar5 = fVar10 < (float)*(int *)(this + 0x44) &&
              (fVar9 < (float)*(int *)(this + 0x40) && 0.0 <= fVar10);
    }
    else {
      bVar5 = 0;
    }
  }
  else {
    bVar5 = Component::isMouseOver((Component *)this,'\0');
  }
  updateState(this,bVar5,'\0');
  if (iVar1 != 2) {
    return;
  }
  if (this[0x1f6] != (Button)0x0) {
    return;
  }
  if (*(int *)(this + 0x1bc) != 2) {
    pBVar6 = this;
    do {
      if ((*(ushort *)(pBVar6 + 0xe8) & 0x8000) != 0) goto LAB_0022d03f;
      pBVar6 = *(Button **)(pBVar6 + 0x30);
    } while (pBVar6 != (Button *)0x0);
    this[499] = (Button)0x1;
    if (*(int *)(this + 0x1b8) != 2) {
      *(undefined4 *)(this + 0x1b8) = 2;
      Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
      if (*(int *)(this + 0x1b8) == 2) {
        uVar8 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
        if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
          clock_gettime(1,&local_28);
          auVar4 = SEXT816(local_28.tv_nsec / 1000 + local_28.tv_sec * 1000000) *
                   SEXT816(0x20c49ba5e353f7cf);
          uVar8 = (int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
          if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar8) ||
             (uVar8 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
            LOCK();
            UNLOCK();
            _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar8;
          }
        }
        *(uint *)(this + 400) = uVar8;
        *(undefined4 *)(this + 0x194) = 0;
      }
      sendStateMessage(this);
    }
    lVar2 = *(long *)(this + 0x188);
    iVar1 = *(int *)(lVar2 + 0x10);
    *(undefined4 *)(lVar2 + 0x10) = 100;
    if (iVar1 == 0) {
                    /* try { // try from 0022d03a to 0022d03e has its CatchHandler @ 0022d164 */
      Timer::TimerThread::addTimer(*(TimerThread **)(lVar2 + 0x18),lVar2);
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar2 + 0x18),lVar2);
    }
  }
LAB_0022d03f:
  plVar7 = *(long **)(this + 0xd8);
  if (plVar7 == (long *)0x0) {
    plVar7 = operator_new(0x18);
    *(undefined4 *)(plVar7 + 1) = 0;
    *plVar7 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar7[2] = (long)this;
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar3 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar7;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar7 = *(long **)(this + 0xd8);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_0022d050;
      }
    }
  }
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
LAB_0022d050:
                    /* try { // try from 0022d057 to 0022d05f has its CatchHandler @ 0022d171 */
  (**(code **)(*(long *)this + 0x1c8))(this);
  if (plVar7 != (long *)0x0) {
    if (plVar7[2] != 0) {
      if (*(int *)(param_1[10] + 0x14) - 1U < 2) {
        fVar9 = (float)*param_1;
        if (0.0 <= fVar9) {
          fVar10 = (float)((ulong)*param_1 >> 0x20);
          bVar5 = fVar10 < (float)*(int *)(this + 0x44) &&
                  (fVar9 < (float)*(int *)(this + 0x40) && 0.0 <= fVar10);
        }
        else {
          bVar5 = 0;
        }
      }
      else {
                    /* try { // try from 0022d0f9 to 0022d140 has its CatchHandler @ 0022d16c */
        bVar5 = Component::isMouseOver((Component *)this,'\0');
      }
      updateState(this,bVar5,'\0');
    }
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0022d157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 8))(plVar7);
      return;
    }
  }
  return;
}


