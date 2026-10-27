// Function : keyStateChangedCallback
// Namespace: juce:Button
// Entry    : 00232f50
// Prototype: bool keyStateChangedCallback(Button * this)
// Body     : 00232f50 - 00233035


/* juce::Button::keyStateChangedCallback() */

bool __thiscall juce::Button::keyStateChangedCallback(Button *this)

{
  Button BVar1;
  int iVar2;
  long lVar3;
  Button BVar4;
  int iVar5;
  undefined8 uVar6;
  Button *pBVar7;
  
  pBVar7 = this;
  do {
    if ((*(ushort *)(pBVar7 + 0xe8) & 0x8000) != 0) {
      return false;
    }
    pBVar7 = *(Button **)(pBVar7 + 0x30);
  } while (pBVar7 != (Button *)0x0);
  BVar1 = this[0x1f5];
  uVar6 = isShortcutPressed(this);
  this[0x1f5] = SUB81(uVar6,0);
  iVar2 = *(int *)(this + 0x1a0);
  if (((-1 < iVar2) && (SUB81(uVar6,0) != (Button)0x0)) && (BVar1 == (Button)0x0)) {
    lVar3 = *(long *)(this + 0x188);
    iVar5 = 1;
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x10) = iVar5;
    if (iVar2 == 0) {
                    /* try { // try from 00232fce to 00232fd2 has its CatchHandler @ 00233036 */
      Timer::TimerThread::addTimer(*(TimerThread **)(lVar3 + 0x18),lVar3);
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar3 + 0x18),lVar3);
    }
  }
  updateState(this);
  pBVar7 = this;
  do {
    if ((*(ushort *)(pBVar7 + 0xe8) & 0x8000) != 0) {
      BVar4 = this[0x1f5];
      goto LAB_00233029;
    }
    pBVar7 = *(Button **)(pBVar7 + 0x30);
  } while (pBVar7 != (Button *)0x0);
  BVar4 = this[0x1f5];
  if ((BVar1 != (Button)0x0) && (BVar4 == (Button)0x0)) {
    (**(code **)(*(long *)this + 0x1c8))(this,&ModifierKeys::currentModifiers);
    return true;
  }
LAB_00233029:
  return BVar1 != (Button)0x0 || BVar4 != (Button)0x0;
}


