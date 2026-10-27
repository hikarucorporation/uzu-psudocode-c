// Function : ~unique_ptr
// Namespace: std:unique_ptr__FcConfig_juce__FunctionPointerDestructor__FcConfigDestroy__
// Entry    : 002ff200
// Prototype: undefined ~unique_ptr(unique_ptr<_FcConfig,juce::FunctionPointerDestructor<&FcConfigDestroy>> * this)
// Body     : 002ff200 - 002ff219


/* std::unique_ptr<_FcConfig, juce::FunctionPointerDestructor<&FcConfigDestroy> >::~unique_ptr() */

void __thiscall
std::unique_ptr<_FcConfig,juce::FunctionPointerDestructor<&FcConfigDestroy>>::~unique_ptr
          (unique_ptr<_FcConfig,juce::FunctionPointerDestructor<&FcConfigDestroy>> *this)

{
  if (*(long *)this != 0) {
                    /* try { // try from 002ff20c to 002ff210 has its CatchHandler @ 002ff21a */
    FcConfigDestroy();
  }
  *(undefined8 *)this = 0;
  return;
}


