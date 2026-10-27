// Function : getResolvedStyle
// Namespace: juce:ProgressBar
// Entry    : 0029e340
// Prototype: ulong getResolvedStyle(ProgressBar * this)
// Body     : 0029e340 - 0029e3cc


/* juce::ProgressBar::getResolvedStyle() const */

ulong __thiscall juce::ProgressBar::getResolvedStyle(ProgressBar *this)

{
  ProgressBar *pPVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  ulong uVar3;
  
  pPVar1 = this;
  do {
    if ((*(long *)(pPVar1 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pPVar1 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_0029e3a0;
    pPVar1 = *(ProgressBar **)(pPVar1 + 0x30);
  } while (pPVar1 != (ProgressBar *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0029e379 to 0029e382 has its CatchHandler @ 0029e3e0 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0029e386 to 0029e38d has its CatchHandler @ 0029e3cd */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0029e3a0:
  uVar3 = (**(code **)(*(long *)(pLVar2 + 0xb8) + 0x20))(pLVar2 + 0xb8,this);
  if (this[0x134] != (ProgressBar)0x0) {
    uVar3 = (ulong)*(uint *)(this + 0x130);
  }
  return uVar3;
}


