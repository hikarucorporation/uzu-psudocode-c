// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Button__CallbackHelper_std__default_delete_juce__Button__CallbackHelper__
// Entry    : 0021ef20
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Button::CallbackHelper,std::default_delete<juce::Button::CallbackHelper>> * this)
// Body     : 0021ef20 - 0021ef4d


/* std::unique_ptr<juce::Button::CallbackHelper, std::default_delete<juce::Button::CallbackHelper>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::Button::CallbackHelper,std::default_delete<juce::Button::CallbackHelper>>::
~unique_ptr(unique_ptr<juce::Button::CallbackHelper,std::default_delete<juce::Button::CallbackHelper>>
            *this)

{
  Timer *this_00;
  
  this_00 = *(Timer **)this;
  if (this_00 != (Timer *)0x0) {
    juce::Timer::~Timer(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


