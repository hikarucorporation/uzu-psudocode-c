// Function : focusOfChildComponentChanged
// Namespace: juce:Slider
// Entry    : 002e4060
// Prototype: undefined focusOfChildComponentChanged(long param_1)
// Body     : 002e4060 - 002e406f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Slider::focusOfChildComponentChanged(juce::Component::FocusChangeType) */

void __cdecl juce::Slider::focusOfChildComponentChanged(long param_1)

{
  Component::internalRepaintUnchecked(param_1,0,*(ulong *)(param_1 + 0x40),'\x01');
  return;
}


