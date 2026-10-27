// Function : getDesktopScaleFactor
// Namespace: juce:DropShadower:ShadowWindow
// Entry    : 0028ccc0
// Prototype: ulong getDesktopScaleFactor(ShadowWindow * this)
// Body     : 0028ccc0 - 0028cd20


/* juce::DropShadower::ShadowWindow::getDesktopScaleFactor() const */

ulong __thiscall juce::DropShadower::ShadowWindow::getDesktopScaleFactor(ShadowWindow *this)

{
  long *plVar1;
  Desktop *this_00;
  ulong uVar2;
  
  if ((*(long *)(this + 0xf0) != 0) &&
     (plVar1 = *(long **)(*(long *)(this + 0xf0) + 0x10), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0028cce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x88))();
    return uVar2;
  }
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028cd02 to 0028cd09 has its CatchHandler @ 0028cd21 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  return (ulong)*(uint *)(Desktop::instance + 0x130);
}


