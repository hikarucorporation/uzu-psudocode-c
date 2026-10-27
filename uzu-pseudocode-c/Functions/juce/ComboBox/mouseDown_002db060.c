// Function : mouseDown
// Namespace: juce:ComboBox
// Entry    : 002db060
// Prototype: undefined mouseDown(ComboBox * this, long param_1)
// Body     : 002db060 - 002db137


/* juce::ComboBox::mouseDown(juce::MouseEvent const&) */

void __thiscall juce::ComboBox::mouseDown(ComboBox *this,long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  Desktop *this_00;
  ComboBox *pCVar4;
  
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002db094 to 002db09b has its CatchHandler @ 002db140 */
    Desktop::Desktop(this_00);
    lVar2 = *(long *)(this_00 + 0x40);
    iVar1 = *(int *)(lVar2 + 0x10);
    Desktop::instance = this_00;
  }
  else {
    lVar2 = *(long *)(Desktop::instance + 0x40);
    iVar1 = *(int *)(lVar2 + 0x10);
  }
  if (iVar1 != 300) {
    *(undefined4 *)(lVar2 + 0x10) = 300;
    if (iVar1 == 0) {
                    /* try { // try from 002db0c7 to 002db0cb has its CatchHandler @ 002db138 */
      Timer::TimerThread::addTimer(*(TimerThread **)(lVar2 + 0x18),lVar2);
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar2 + 0x18),lVar2);
    }
  }
  pCVar4 = this;
  do {
    if ((*(ushort *)(pCVar4 + 0xe8) & 0x8000) != 0) {
      this[0x184] = (ComboBox)0x0;
      return;
    }
    pCVar4 = *(ComboBox **)(pCVar4 + 0x30);
  } while (pCVar4 != (ComboBox *)0x0);
  uVar3 = *(uint *)(param_1 + 0x10) & 0x20;
  this[0x184] = (ComboBox)((byte)(uVar3 >> 5) ^ 1);
  if ((uVar3 == 0) &&
     ((*(ComboBox **)(param_1 + 0x30) == this ||
      (*(char *)(*(long *)(this + 0x1b8) + 0x210) == '\0' &&
       *(char *)(*(long *)(this + 0x1b8) + 0x211) == '\0')))) {
    showPopupIfNotActive(this);
    return;
  }
  return;
}


