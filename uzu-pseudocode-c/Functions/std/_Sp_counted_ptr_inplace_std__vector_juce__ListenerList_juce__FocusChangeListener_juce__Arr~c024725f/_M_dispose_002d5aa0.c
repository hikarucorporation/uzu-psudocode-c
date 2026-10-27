// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_std__vector_juce__ListenerList_juce__FocusChangeListener_juce__Arr~c024725f
// Entry    : 002d5aa0
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 002d5aa0 - 002d5aae


/* std::_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::FocusChangeListener,
   juce::Array<juce::FocusChangeListener*, juce::DummyCriticalSection, 0> >::Iterator*,
   std::allocator<juce::ListenerList<juce::FocusChangeListener,
   juce::Array<juce::FocusChangeListener*, juce::DummyCriticalSection, 0> >::Iterator*> >,
   std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::FocusChangeListener,juce::Array<juce::FocusChangeListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  if (*(void **)(this + 0x10) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


