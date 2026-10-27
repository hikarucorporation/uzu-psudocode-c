// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_juce__Array_juce__ShutdownDetector__Listener__juce__CriticalSectio~37501223
// Entry    : 00484df0
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 00484df0 - 00484e0d


/* std::_Sp_counted_ptr_inplace<juce::Array<juce::ShutdownDetector::Listener*,
   juce::CriticalSection, 0>, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  *(undefined4 *)(this + 0x44) = 0;
  free(*(void **)(this + 0x38));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10));
  return;
}


