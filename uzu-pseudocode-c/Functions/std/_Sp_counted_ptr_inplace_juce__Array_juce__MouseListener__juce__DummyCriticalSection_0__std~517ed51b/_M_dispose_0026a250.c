// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_juce__Array_juce__MouseListener__juce__DummyCriticalSection_0__std~517ed51b
// Entry    : 0026a250
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 0026a250 - 0026a25f


/* std::_Sp_counted_ptr_inplace<juce::Array<juce::MouseListener*, juce::DummyCriticalSection, 0>,
   std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  return;
}


