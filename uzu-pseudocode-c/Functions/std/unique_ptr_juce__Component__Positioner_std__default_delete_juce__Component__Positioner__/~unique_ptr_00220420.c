// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Component__Positioner_std__default_delete_juce__Component__Positioner__
// Entry    : 00220420
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Component::Positioner,std::default_delete<juce::Component::Positioner>> * this)
// Body     : 00220420 - 0022043a


/* std::unique_ptr<juce::Component::Positioner, std::default_delete<juce::Component::Positioner>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::Component::Positioner,std::default_delete<juce::Component::Positioner>>::
~unique_ptr(unique_ptr<juce::Component::Positioner,std::default_delete<juce::Component::Positioner>>
            *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


