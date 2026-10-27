// Function : mouseDrag
// Namespace: juce:ComboBox
// Entry    : 002db160
// Prototype: undefined mouseDrag(ComboBox * this, long param_1)
// Body     : 002db160 - 002db1eb


/* juce::ComboBox::mouseDrag(juce::MouseEvent const&) */

void __thiscall juce::ComboBox::mouseDrag(ComboBox *this,long param_1)

{
  int iVar1;
  long lVar2;
  Desktop *this_00;
  
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002db192 to 002db199 has its CatchHandler @ 002db1f4 */
    Desktop::Desktop(this_00);
    lVar2 = *(long *)(this_00 + 0x40);
    iVar1 = *(int *)(lVar2 + 0x10);
    Desktop::instance = this_00;
  }
  else {
    lVar2 = *(long *)(Desktop::instance + 0x40);
    iVar1 = *(int *)(lVar2 + 0x10);
  }
  if (iVar1 != 0x32) {
    *(undefined4 *)(lVar2 + 0x10) = 0x32;
    if (iVar1 == 0) {
                    /* try { // try from 002db1c3 to 002db1c7 has its CatchHandler @ 002db1ec */
      Timer::TimerThread::addTimer(*(TimerThread **)(lVar2 + 0x18),lVar2);
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar2 + 0x18),lVar2);
    }
  }
  if ((this[0x184] == (ComboBox)0x0) || (*(char *)(param_1 + 0x59) == '\0')) {
    return;
  }
  showPopupIfNotActive(this);
  return;
}


