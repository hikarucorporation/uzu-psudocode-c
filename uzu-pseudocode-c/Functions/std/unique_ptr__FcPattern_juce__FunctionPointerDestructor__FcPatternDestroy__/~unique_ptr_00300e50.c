// Function : ~unique_ptr
// Namespace: std:unique_ptr__FcPattern_juce__FunctionPointerDestructor__FcPatternDestroy__
// Entry    : 00300e50
// Prototype: undefined ~unique_ptr(unique_ptr<_FcPattern,juce::FunctionPointerDestructor<&FcPatternDestroy>> * this)
// Body     : 00300e50 - 00300e69


/* std::unique_ptr<_FcPattern, juce::FunctionPointerDestructor<&FcPatternDestroy> >::~unique_ptr()
    */

void __thiscall
std::unique_ptr<_FcPattern,juce::FunctionPointerDestructor<&FcPatternDestroy>>::~unique_ptr
          (unique_ptr<_FcPattern,juce::FunctionPointerDestructor<&FcPatternDestroy>> *this)

{
  if (*(long *)this != 0) {
                    /* try { // try from 00300e5c to 00300e60 has its CatchHandler @ 00300e6a */
    FcPatternDestroy();
  }
  *(undefined8 *)this = 0;
  return;
}


