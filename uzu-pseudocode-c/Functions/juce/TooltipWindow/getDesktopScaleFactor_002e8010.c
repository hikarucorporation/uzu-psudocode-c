// Function : getDesktopScaleFactor
// Namespace: juce:TooltipWindow
// Entry    : 002e8010
// Prototype: float getDesktopScaleFactor(TooltipWindow * this)
// Body     : 002e8010 - 002e806c


/* juce::TooltipWindow::getDesktopScaleFactor() const */

float __thiscall juce::TooltipWindow::getDesktopScaleFactor(TooltipWindow *this)

{
  long *plVar1;
  Desktop *this_00;
  float fVar2;
  
  if ((*(long *)(this + 0x120) != 0) &&
     (plVar1 = *(long **)(*(long *)(this + 0x120) + 0x10), plVar1 != (long *)0x0)) {
    fVar2 = Component::getApproximateScaleFactorForComponent(plVar1);
    return fVar2;
  }
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002e804e to 002e8055 has its CatchHandler @ 002e806d */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  return *(float *)(Desktop::instance + 0x130);
}


