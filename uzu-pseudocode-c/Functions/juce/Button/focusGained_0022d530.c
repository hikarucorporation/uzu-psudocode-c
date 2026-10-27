// Function : focusGained
// Namespace: juce:Button
// Entry    : 0022d530
// Prototype: undefined focusGained(Button * param_1)
// Body     : 0022d530 - 0022d54c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Button::focusGained(juce::Component::FocusChangeType) */

void __cdecl juce::Button::focusGained(Button *param_1)

{
  updateState(param_1);
  Component::internalRepaintUnchecked((long)param_1,0,*(ulong *)(param_1 + 0x40),'\x01');
  return;
}


