// Function : componentBroughtToFront
// Namespace: juce:FocusOutline
// Entry    : 002b8c70
// Prototype: undefined componentBroughtToFront(FocusOutline * this, long param_1)
// Body     : 002b8c70 - 002b8c84


/* juce::FocusOutline::componentBroughtToFront(juce::Component&) */

void __thiscall juce::FocusOutline::componentBroughtToFront(FocusOutline *this,long param_1)

{
  if ((*(long *)(this + 0x10) == 0) || (*(long *)(*(long *)(this + 0x10) + 0x10) != param_1)) {
    return;
  }
  updateOutlineWindow(this);
  return;
}


