// Function : resetTimer
// Namespace: juce:Desktop
// Entry    : 0023b490
// Prototype: undefined resetTimer(Desktop * this)
// Body     : 0023b490 - 0023b51e


/* juce::Desktop::resetTimer() */

void __thiscall juce::Desktop::resetTimer(Desktop *this)

{
  int iVar1;
  Desktop *this_00;
  undefined8 uVar2;
  
  if ((*(int *)(this + 0x68) == 2) && (*(int *)(*(long *)(this + 0x48) + 0xc) != 0)) {
    iVar1 = *(int *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = 100;
    if (iVar1 == 0) {
                    /* try { // try from 0023b518 to 0023b51c has its CatchHandler @ 0023b51f */
      Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x20),(long)(this + 8));
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x20),(long)(this + 8));
    }
  }
  else {
    Timer::stopTimer((Timer *)(this + 8));
  }
  if (instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0023b4e9 to 0023b4f0 has its CatchHandler @ 0023b527 */
    Desktop(this_00);
    instance = this_00;
  }
  uVar2 = detail::MouseInputSourceImpl::getScreenPosition
                    ((MouseInputSourceImpl *)**(undefined8 **)(*(long *)(instance + 0x40) + 0x28));
  *(undefined8 *)(this + 0xe8) = uVar2;
  return;
}


