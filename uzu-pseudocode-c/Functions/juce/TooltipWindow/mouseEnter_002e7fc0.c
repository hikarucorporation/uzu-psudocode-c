// Function : mouseEnter
// Namespace: juce:TooltipWindow
// Entry    : 002e7fc0
// Prototype: undefined mouseEnter(TooltipWindow * this, long param_1)
// Body     : 002e7fc0 - 002e7fcb


/* juce::TooltipWindow::mouseEnter(juce::MouseEvent const&) */

void __thiscall juce::TooltipWindow::mouseEnter(TooltipWindow *this,long param_1)

{
  if (*(TooltipWindow **)(param_1 + 0x30) == this) {
    hideTip(this);
    return;
  }
  return;
}


