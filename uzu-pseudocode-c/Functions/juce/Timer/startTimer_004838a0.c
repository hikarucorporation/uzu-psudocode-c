// Function : startTimer
// Namespace: juce:Timer
// Entry    : 004838a0
// Prototype: undefined8 startTimer(Timer * this, int param_1)
// Body     : 004838a0 - 004838cd


/* juce::Timer::startTimer(int) */

undefined8 __thiscall juce::Timer::startTimer(Timer *this,int param_1)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (0 < param_1) {
    iVar3 = param_1;
  }
  iVar1 = *(int *)(this + 0x10);
  *(int *)(this + 0x10) = iVar3;
  if (iVar1 == 0) {
                    /* try { // try from 004838c4 to 004838cb has its CatchHandler @ 004838ce */
    TimerThread::addTimer(*(TimerThread **)(this + 0x18),(long)this);
    return in_RAX;
  }
  uVar2 = TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x18),(long)this);
  return uVar2;
}


