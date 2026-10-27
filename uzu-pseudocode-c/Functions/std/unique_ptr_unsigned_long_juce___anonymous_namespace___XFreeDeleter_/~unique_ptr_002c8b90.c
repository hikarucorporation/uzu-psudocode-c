// Function : ~unique_ptr
// Namespace: std:unique_ptr_unsigned_long_juce___anonymous_namespace___XFreeDeleter_
// Entry    : 002c8b90
// Prototype: undefined ~unique_ptr(unique_ptr<unsigned_long,juce::(anonymous_namespace)::XFreeDeleter> * this)
// Body     : 002c8b90 - 002c8bbb


/* std::unique_ptr<unsigned long, juce::(anonymous namespace)::XFreeDeleter>::~unique_ptr() */

void __thiscall
std::unique_ptr<unsigned_long,juce::(anonymous_namespace)::XFreeDeleter>::~unique_ptr
          (unique_ptr<unsigned_long,juce::(anonymous_namespace)::XFreeDeleter> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
                    /* try { // try from 002c8b9f to 002c8bac has its CatchHandler @ 002c8bbc */
    lVar2 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x128))(lVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


