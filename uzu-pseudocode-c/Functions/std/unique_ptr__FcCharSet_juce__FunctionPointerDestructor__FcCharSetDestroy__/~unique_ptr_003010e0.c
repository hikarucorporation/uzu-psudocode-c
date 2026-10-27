// Function : ~unique_ptr
// Namespace: std:unique_ptr__FcCharSet_juce__FunctionPointerDestructor__FcCharSetDestroy__
// Entry    : 003010e0
// Prototype: undefined ~unique_ptr(unique_ptr<_FcCharSet,juce::FunctionPointerDestructor<&FcCharSetDestroy>> * this)
// Body     : 003010e0 - 003010f9


/* std::unique_ptr<_FcCharSet, juce::FunctionPointerDestructor<&FcCharSetDestroy> >::~unique_ptr()
    */

void __thiscall
std::unique_ptr<_FcCharSet,juce::FunctionPointerDestructor<&FcCharSetDestroy>>::~unique_ptr
          (unique_ptr<_FcCharSet,juce::FunctionPointerDestructor<&FcCharSetDestroy>> *this)

{
  if (*(long *)this != 0) {
                    /* try { // try from 003010ec to 003010f0 has its CatchHandler @ 003010fa */
    FcCharSetDestroy();
  }
  *(undefined8 *)this = 0;
  return;
}


