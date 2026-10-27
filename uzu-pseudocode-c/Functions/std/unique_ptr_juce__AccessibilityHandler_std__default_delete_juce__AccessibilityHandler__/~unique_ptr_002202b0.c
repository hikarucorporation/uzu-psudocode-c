// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__AccessibilityHandler_std__default_delete_juce__AccessibilityHandler__
// Entry    : 002202b0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::AccessibilityHandler,std::default_delete<juce::AccessibilityHandler>> * this)
// Body     : 002202b0 - 002202ca


/* std::unique_ptr<juce::AccessibilityHandler, std::default_delete<juce::AccessibilityHandler>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::AccessibilityHandler,std::default_delete<juce::AccessibilityHandler>>::
~unique_ptr(unique_ptr<juce::AccessibilityHandler,std::default_delete<juce::AccessibilityHandler>>
            *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


