// Function : ~CallbackHelper
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232f10
// Prototype: undefined ~CallbackHelper(CallbackHelper * this)
// Body     : 00232f10 - 00232f28


/* non-virtual thunk to juce::Button::CallbackHelper::~CallbackHelper() */

void __thiscall juce::Button::CallbackHelper::~CallbackHelper(CallbackHelper *this)

{
  Timer::~Timer((Timer *)(this + -0x38));
  operator_delete((Timer *)(this + -0x38));
  return;
}


