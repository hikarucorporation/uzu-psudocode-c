// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_juce__Array_juce__SliderListener_juce__Slider___juce__DummyCritica~94b6f6c7
// Entry    : 002e78d0
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 002e78d0 - 002e78df


/* std::_Sp_counted_ptr_inplace<juce::Array<juce::SliderListener<juce::Slider>*,
   juce::DummyCriticalSection, 0>, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_dispose()
    */

void __thiscall
std::
_Sp_counted_ptr_inplace<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<juce::Array<juce::SliderListener<juce::Slider>*,juce::DummyCriticalSection,0>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
  free(*(void **)(this + 0x10));
  return;
}


