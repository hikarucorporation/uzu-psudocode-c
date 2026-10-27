// Function : keyPressed
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232c80
// Prototype: undefined keyPressed(long param_1)
// Body     : 00232c80 - 00232c88


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Button::CallbackHelper::keyPressed(juce::KeyPress const&, juce::Component*) */

void __cdecl juce::Button::CallbackHelper::keyPressed(long param_1)

{
  isShortcutPressed(*(Button **)(param_1 + 0x40));
  return;
}


