// Function : ~unique_ptr
// Namespace: std:unique_ptr__FcLangSet_juce__FunctionPointerDestructor__FcLangSetDestroy__
// Entry    : 00301110
// Prototype: undefined ~unique_ptr(unique_ptr<_FcLangSet,juce::FunctionPointerDestructor<&FcLangSetDestroy>> * this)
// Body     : 00301110 - 00301129


/* std::unique_ptr<_FcLangSet, juce::FunctionPointerDestructor<&FcLangSetDestroy> >::~unique_ptr()
    */

void __thiscall
std::unique_ptr<_FcLangSet,juce::FunctionPointerDestructor<&FcLangSetDestroy>>::~unique_ptr
          (unique_ptr<_FcLangSet,juce::FunctionPointerDestructor<&FcLangSetDestroy>> *this)

{
  if (*(long *)this != 0) {
                    /* try { // try from 0030111c to 00301120 has its CatchHandler @ 0030112a */
    FcLangSetDestroy();
  }
  *(undefined8 *)this = 0;
  return;
}


