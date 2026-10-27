// Function : componentVisibilityChanged
// Namespace: juce:FocusOutline
// Entry    : 002b8c90
// Prototype: undefined componentVisibilityChanged(FocusOutline * this, long param_1)
// Body     : 002b8c90 - 002b8ca4


/* juce::FocusOutline::componentVisibilityChanged(juce::Component&) */

void __thiscall juce::FocusOutline::componentVisibilityChanged(FocusOutline *this,long param_1)

{
  if ((*(long *)(this + 0x10) == 0) || (*(long *)(*(long *)(this + 0x10) + 0x10) != param_1)) {
    return;
  }
  updateOutlineWindow(this);
  return;
}


