// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Label_std__default_delete_juce__Label__
// Entry    : 002ddce0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Label,std::default_delete<juce::Label>> * this)
// Body     : 002ddce0 - 002ddcfa


/* std::unique_ptr<juce::Label, std::default_delete<juce::Label> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::Label,std::default_delete<juce::Label>>::~unique_ptr
          (unique_ptr<juce::Label,std::default_delete<juce::Label>> *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


