// Function : focusLost
// Namespace: juce:Button
// Entry    : 0022d550
// Prototype: undefined focusLost(Button * param_1)
// Body     : 0022d550 - 0022d56c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Button::focusLost(juce::Component::FocusChangeType) */

void __cdecl juce::Button::focusLost(Button *param_1)

{
  updateState(param_1);
  Component::internalRepaintUnchecked((long)param_1,0,*(ulong *)(param_1 + 0x40),'\x01');
  return;
}


