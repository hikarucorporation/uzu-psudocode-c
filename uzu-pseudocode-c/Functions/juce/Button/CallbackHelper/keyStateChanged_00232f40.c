// Function : keyStateChanged
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232f40
// Prototype: undefined keyStateChanged(CallbackHelper * this)
// Body     : 00232f40 - 00232f48


/* non-virtual thunk to juce::Button::CallbackHelper::keyStateChanged(bool, juce::Component*) */

void __thiscall juce::Button::CallbackHelper::keyStateChanged(CallbackHelper *this)

{
  keyStateChangedCallback(*(Button **)(this + 8));
  return;
}


