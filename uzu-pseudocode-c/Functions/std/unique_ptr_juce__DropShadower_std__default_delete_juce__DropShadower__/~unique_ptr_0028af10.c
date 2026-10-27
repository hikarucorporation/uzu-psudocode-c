// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__DropShadower_std__default_delete_juce__DropShadower__
// Entry    : 0028af10
// Prototype: undefined ~unique_ptr(unique_ptr<juce::DropShadower,std::default_delete<juce::DropShadower>> * this)
// Body     : 0028af10 - 0028af2a


/* std::unique_ptr<juce::DropShadower, std::default_delete<juce::DropShadower> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::DropShadower,std::default_delete<juce::DropShadower>>::~unique_ptr
          (unique_ptr<juce::DropShadower,std::default_delete<juce::DropShadower>> *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


