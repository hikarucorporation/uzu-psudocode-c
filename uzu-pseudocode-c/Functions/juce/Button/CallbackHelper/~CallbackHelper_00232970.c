// Function : ~CallbackHelper
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232970
// Prototype: undefined ~CallbackHelper(CallbackHelper * this)
// Body     : 00232970 - 00232981


/* juce::Button::CallbackHelper::~CallbackHelper() */

void __thiscall juce::Button::CallbackHelper::~CallbackHelper(CallbackHelper *this)

{
  Timer::~Timer((Timer *)this);
  operator_delete(this);
  return;
}


