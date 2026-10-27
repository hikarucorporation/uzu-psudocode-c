// Function : ~CallbackHelper
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232e50
// Prototype: undefined ~CallbackHelper(CallbackHelper * this)
// Body     : 00232e50 - 00232e68


/* non-virtual thunk to juce::Button::CallbackHelper::~CallbackHelper() */

void __thiscall juce::Button::CallbackHelper::~CallbackHelper(CallbackHelper *this)

{
  Timer::~Timer((Timer *)(this + -0x30));
  operator_delete((Timer *)(this + -0x30));
  return;
}


