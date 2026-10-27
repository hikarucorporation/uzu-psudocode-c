// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__Typeface__Native_std__default_delete_juce__Typeface__Native__
// Entry    : 002ff250
// Prototype: undefined ~unique_ptr(unique_ptr<juce::Typeface::Native,std::default_delete<juce::Typeface::Native>> * this)
// Body     : 002ff250 - 002ff27d


/* std::unique_ptr<juce::Typeface::Native, std::default_delete<juce::Typeface::Native>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::Typeface::Native,std::default_delete<juce::Typeface::Native>>::~unique_ptr
          (unique_ptr<juce::Typeface::Native,std::default_delete<juce::Typeface::Native>> *this)

{
  Native *this_00;
  
  this_00 = *(Native **)this;
  if (this_00 != (Native *)0x0) {
    juce::Typeface::Native::~Native(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


