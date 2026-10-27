// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_std__vector_juce__ListenerList_juce__Button__Listener_juce__Array_~639bfb41
// Entry    : 002d5ce0
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 002d5ce0 - 002d5cee


/* std::_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Button::Listener,
   juce::Array<juce::Button::Listener*, juce::DummyCriticalSection, 0> >::Iterator*,
   std::allocator<juce::ListenerList<juce::Button::Listener, juce::Array<juce::Button::Listener*,
   juce::DummyCriticalSection, 0> >::Iterator*> >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::Button::Listener,juce::Array<juce::Button::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  if (*(void **)(this + 0x10) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


