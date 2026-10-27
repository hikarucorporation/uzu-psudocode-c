// Function : focusLost
// Namespace: juce:ComboBox
// Entry    : 002dbcd0
// Prototype: undefined focusLost(long param_1)
// Body     : 002dbcd0 - 002dbcdf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComboBox::focusLost(juce::Component::FocusChangeType) */

void __cdecl juce::ComboBox::focusLost(long param_1)

{
  Component::internalRepaintUnchecked(param_1,0,*(ulong *)(param_1 + 0x40),'\x01');
  return;
}


