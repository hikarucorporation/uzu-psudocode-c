// Function : keyPressed
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232f30
// Prototype: undefined keyPressed(CallbackHelper * this)
// Body     : 00232f30 - 00232f38


/* non-virtual thunk to juce::Button::CallbackHelper::keyPressed(juce::KeyPress const&,
   juce::Component*) */

void __thiscall juce::Button::CallbackHelper::keyPressed(CallbackHelper *this)

{
  isShortcutPressed(*(Button **)(this + 8));
  return;
}


