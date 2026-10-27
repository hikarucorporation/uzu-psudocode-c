// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__XWindowSystem__DisplayVisuals_std__default_delete_juce__XWindowSystem__Di~09932e2f
// Entry    : 002d03d0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::XWindowSystem::DisplayVisuals,std::default_delete<juce::XWindowSystem::DisplayVisuals>> * this)
// Body     : 002d03d0 - 002d03e9


/* std::unique_ptr<juce::XWindowSystem::DisplayVisuals,
   std::default_delete<juce::XWindowSystem::DisplayVisuals> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::XWindowSystem::DisplayVisuals,std::default_delete<juce::XWindowSystem::DisplayVisuals>>
::~unique_ptr(unique_ptr<juce::XWindowSystem::DisplayVisuals,std::default_delete<juce::XWindowSystem::DisplayVisuals>>
              *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 *)this = 0;
  return;
}


