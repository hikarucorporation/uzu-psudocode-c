// Function : ~CallbackHelper
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232e00
// Prototype: undefined ~CallbackHelper(CallbackHelper * this)
// Body     : 00232e00 - 00232e18


/* non-virtual thunk to juce::Button::CallbackHelper::~CallbackHelper() */

void __thiscall juce::Button::CallbackHelper::~CallbackHelper(CallbackHelper *this)

{
  Timer::~Timer((Timer *)(this + -0x28));
  operator_delete((Timer *)(this + -0x28));
  return;
}


