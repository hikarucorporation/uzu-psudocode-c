// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_juce__Array_juce__ScrollBar__Listener__juce__DummyCriticalSection_~e30df408
// Entry    : 002693a0
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 002693a0 - 002693af


/* std::_Sp_counted_ptr_inplace<juce::Array<juce::ScrollBar::Listener*, juce::DummyCriticalSection,
   0>, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::ScrollBar::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  return;
}


