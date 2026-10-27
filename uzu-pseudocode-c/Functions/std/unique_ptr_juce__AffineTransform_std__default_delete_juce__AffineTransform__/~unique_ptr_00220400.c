// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__AffineTransform_std__default_delete_juce__AffineTransform__
// Entry    : 00220400
// Prototype: undefined ~unique_ptr(unique_ptr<juce::AffineTransform,std::default_delete<juce::AffineTransform>> * this)
// Body     : 00220400 - 00220419


/* std::unique_ptr<juce::AffineTransform, std::default_delete<juce::AffineTransform>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::AffineTransform,std::default_delete<juce::AffineTransform>>::~unique_ptr
          (unique_ptr<juce::AffineTransform,std::default_delete<juce::AffineTransform>> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 *)this = 0;
  return;
}


