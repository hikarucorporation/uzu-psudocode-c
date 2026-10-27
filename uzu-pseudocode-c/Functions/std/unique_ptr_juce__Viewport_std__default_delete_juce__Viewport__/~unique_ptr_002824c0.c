// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Viewport_std__default_delete_juce__Viewport__
// Entry    : 002824c0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Viewport,std::default_delete<juce::Viewport>> * this)
// Body     : 002824c0 - 002824da


/* std::unique_ptr<juce::Viewport, std::default_delete<juce::Viewport> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::Viewport,std::default_delete<juce::Viewport>>::~unique_ptr
          (unique_ptr<juce::Viewport,std::default_delete<juce::Viewport>> *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


