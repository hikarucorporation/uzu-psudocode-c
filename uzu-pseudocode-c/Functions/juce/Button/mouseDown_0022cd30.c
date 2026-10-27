// Function : mouseDown
// Namespace: juce:Button
// Entry    : 0022cd30
// Prototype: undefined mouseDown(Button * this, long param_1)
// Body     : 0022cd30 - 0022cdb1


/* juce::Button::mouseDown(juce::MouseEvent const&) */

void __thiscall juce::Button::mouseDown(Button *this,long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  updateState(this,1,'\x01');
  if (*(int *)(this + 0x1b8) == 2) {
    iVar1 = *(int *)(this + 0x1a0);
    if (-1 < iVar1) {
      lVar2 = *(long *)(this + 0x188);
      iVar3 = 1;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x10) = iVar3;
      if (iVar1 == 0) {
                    /* try { // try from 0022cd7f to 0022cd83 has its CatchHandler @ 0022cdb2 */
        Timer::TimerThread::addTimer(*(TimerThread **)(lVar2 + 0x18),lVar2);
      }
      else {
        Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar2 + 0x18),lVar2);
      }
    }
    if (this[0x1f6] != (Button)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0022cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x1c8))(this,param_1 + 0x10);
      return;
    }
  }
  return;
}


