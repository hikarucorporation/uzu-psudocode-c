// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_juce__Array_juce__Value__Listener__juce__DummyCriticalSection_0__s~b52babf6
// Entry    : 004bfc00
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 004bfc00 - 004bfc0f


/* std::_Sp_counted_ptr_inplace<juce::Array<juce::Value::Listener*, juce::DummyCriticalSection, 0>,
   std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::Value::Listener*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  return;
}


