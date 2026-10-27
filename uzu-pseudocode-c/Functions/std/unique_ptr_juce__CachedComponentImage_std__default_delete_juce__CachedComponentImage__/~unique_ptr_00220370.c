// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__CachedComponentImage_std__default_delete_juce__CachedComponentImage__
// Entry    : 00220370
// Prototype: undefined ~unique_ptr(unique_ptr<juce::CachedComponentImage,std::default_delete<juce::CachedComponentImage>> * this)
// Body     : 00220370 - 0022038a


/* std::unique_ptr<juce::CachedComponentImage, std::default_delete<juce::CachedComponentImage>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::CachedComponentImage,std::default_delete<juce::CachedComponentImage>>::
~unique_ptr(unique_ptr<juce::CachedComponentImage,std::default_delete<juce::CachedComponentImage>>
            *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


