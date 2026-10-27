// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__CaretComponent_std__default_delete_juce__CaretComponent__
// Entry    : 002824a0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::CaretComponent,std::default_delete<juce::CaretComponent>> * this)
// Body     : 002824a0 - 002824ba


/* std::unique_ptr<juce::CaretComponent, std::default_delete<juce::CaretComponent> >::~unique_ptr()
    */

void __thiscall
std::unique_ptr<juce::CaretComponent,std::default_delete<juce::CaretComponent>>::~unique_ptr
          (unique_ptr<juce::CaretComponent,std::default_delete<juce::CaretComponent>> *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


