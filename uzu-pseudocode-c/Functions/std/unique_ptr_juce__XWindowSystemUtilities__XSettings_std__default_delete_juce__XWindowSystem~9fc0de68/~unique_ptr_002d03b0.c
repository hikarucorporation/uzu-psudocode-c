// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__XWindowSystemUtilities__XSettings_std__default_delete_juce__XWindowSystem~9fc0de68
// Entry    : 002d03b0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::XWindowSystemUtilities::XSettings,std::default_delete<juce::XWindowSystemUtilities::XSettings>> * this)
// Body     : 002d03b0 - 002d03c9


/* std::unique_ptr<juce::XWindowSystemUtilities::XSettings,
   std::default_delete<juce::XWindowSystemUtilities::XSettings> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::XWindowSystemUtilities::XSettings,std::default_delete<juce::XWindowSystemUtilities::XSettings>>
::~unique_ptr(unique_ptr<juce::XWindowSystemUtilities::XSettings,std::default_delete<juce::XWindowSystemUtilities::XSettings>>
              *this)

{
  if (*(default_delete<juce::XWindowSystemUtilities::XSettings> **)this !=
      (default_delete<juce::XWindowSystemUtilities::XSettings> *)0x0) {
    default_delete<juce::XWindowSystemUtilities::XSettings>::operator()
              (*(default_delete<juce::XWindowSystemUtilities::XSettings> **)this);
  }
  *(undefined8 *)this = 0;
  return;
}


