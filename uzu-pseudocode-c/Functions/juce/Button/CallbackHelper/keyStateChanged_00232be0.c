// Function : keyStateChanged
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232be0
// Prototype: undefined keyStateChanged(long param_1)
// Body     : 00232be0 - 00232be8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Button::CallbackHelper::keyStateChanged(bool, juce::Component*) */

void __cdecl juce::Button::CallbackHelper::keyStateChanged(long param_1)

{
  keyStateChangedCallback(*(Button **)(param_1 + 0x40));
  return;
}


