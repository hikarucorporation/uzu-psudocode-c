// Function : timerCallback
// Namespace: juce:PopupMenu:HelperClasses:MouseSourceState
// Entry    : 0027c000
// Prototype: undefined timerCallback(MouseSourceState * this)
// Body     : 0027c000 - 0027c090


/* juce::PopupMenu::HelperClasses::MouseSourceState::timerCallback() */

void __thiscall
juce::PopupMenu::HelperClasses::MouseSourceState::timerCallback(MouseSourceState *this)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  float local_18;
  float fStack_14;
  
  uVar2 = detail::MouseInputSourceImpl::getScreenPosition(*(MouseInputSourceImpl **)(this + 0x30));
  uVar3 = MenuWindow::windowIsStillValid(*(MenuWindow **)(this + 0x28));
  if ((char)uVar3 == '\0') {
    return;
  }
  iVar1 = *(int *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = 0x32;
  if (iVar1 == 0) {
                    /* try { // try from 0027c043 to 0027c04a has its CatchHandler @ 0027c091 */
    Timer::TimerThread::addTimer(*(TimerThread **)(this + 0x18),(long)this);
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this + 0x18),(long)this);
  }
  local_18 = (float)uVar2;
  fStack_14 = (float)((ulong)uVar2 >> 0x20);
  handleMousePosition(this,(ulong)((double)local_18 + DAT_005d9098) & 0xffffffff |
                           (long)((double)fStack_14 + DAT_005d9098) << 0x20);
  return;
}


