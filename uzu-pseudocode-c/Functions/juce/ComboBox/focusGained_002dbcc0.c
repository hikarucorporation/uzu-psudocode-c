// Function : focusGained
// Namespace: juce:ComboBox
// Entry    : 002dbcc0
// Prototype: undefined focusGained(long param_1)
// Body     : 002dbcc0 - 002dbccf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComboBox::focusGained(juce::Component::FocusChangeType) */

void __cdecl juce::ComboBox::focusGained(long param_1)

{
  Component::internalRepaintUnchecked(param_1,0,*(ulong *)(param_1 + 0x40),'\x01');
  return;
}


