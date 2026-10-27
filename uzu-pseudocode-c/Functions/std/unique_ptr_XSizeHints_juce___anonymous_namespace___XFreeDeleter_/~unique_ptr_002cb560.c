// Function : ~unique_ptr
// Namespace: std:unique_ptr_XSizeHints_juce___anonymous_namespace___XFreeDeleter_
// Entry    : 002cb560
// Prototype: undefined ~unique_ptr(unique_ptr<XSizeHints,juce::(anonymous_namespace)::XFreeDeleter> * this)
// Body     : 002cb560 - 002cb58b


/* std::unique_ptr<XSizeHints, juce::(anonymous namespace)::XFreeDeleter>::~unique_ptr() */

void __thiscall
std::unique_ptr<XSizeHints,juce::(anonymous_namespace)::XFreeDeleter>::~unique_ptr
          (unique_ptr<XSizeHints,juce::(anonymous_namespace)::XFreeDeleter> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
                    /* try { // try from 002cb56f to 002cb57c has its CatchHandler @ 002cb58c */
    lVar2 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x128))(lVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


