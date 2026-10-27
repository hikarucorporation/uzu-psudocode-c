// Function : mouseEnter
// Namespace: juce:Slider
// Entry    : 002e1670
// Prototype: undefined mouseEnter(long param_1)
// Body     : 002e1670 - 002e1760


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Slider::mouseEnter(juce::MouseEvent const&) */

void __cdecl juce::Slider::mouseEnter(long param_1)

{
  int iVar1;
  Pimpl *this;
  byte bVar2;
  long lVar3;
  int iVar4;
  timespec local_18;
  
  this = *(Pimpl **)(param_1 + 0x1a0);
  if ((((this[0x237] != (Pimpl)0x0) &&
       (clock_gettime(1,&local_18),
       _DAT_005de6c8 <
       (double)(local_18.tv_nsec / 1000 + local_18.tv_sec * 1000000) * DAT_00651e50 -
       *(double *)(this + 0x248))) && (3 < *(int *)(this + 0x20) - 9U)) &&
     (bVar2 = Component::isMouseOver(*(Component **)(this + 0x18),'\x01'), bVar2 != 0)) {
    lVar3 = *(long *)(this + 0x270);
    if (lVar3 == 0) {
      Pimpl::showPopupDisplay(this);
      lVar3 = *(long *)(this + 0x270);
      if (lVar3 == 0) {
        return;
      }
    }
    iVar1 = *(int *)(this + 0x240);
    if (iVar1 != -1) {
      iVar4 = 1;
      if (0 < iVar1) {
        iVar4 = iVar1;
      }
      iVar1 = *(int *)(lVar3 + 0x120);
      *(int *)(lVar3 + 0x120) = iVar4;
      if (iVar1 != 0) {
        Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar3 + 0x128),lVar3 + 0x110);
        return;
      }
                    /* try { // try from 002e1756 to 002e175a has its CatchHandler @ 002e1761 */
      Timer::TimerThread::addTimer(*(TimerThread **)(lVar3 + 0x128),lVar3 + 0x110);
    }
  }
  return;
}


