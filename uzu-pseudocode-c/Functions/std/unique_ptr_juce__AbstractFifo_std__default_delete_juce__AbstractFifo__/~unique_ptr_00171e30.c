// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__AbstractFifo_std__default_delete_juce__AbstractFifo__
// Entry    : 00171e30
// Prototype: undefined ~unique_ptr(unique_ptr<juce::AbstractFifo,std::default_delete<juce::AbstractFifo>> * this)
// Body     : 00171e30 - 00171e49


/* std::unique_ptr<juce::AbstractFifo, std::default_delete<juce::AbstractFifo> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::AbstractFifo,std::default_delete<juce::AbstractFifo>>::~unique_ptr
          (unique_ptr<juce::AbstractFifo,std::default_delete<juce::AbstractFifo>> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 *)this = 0;
  return;
}


