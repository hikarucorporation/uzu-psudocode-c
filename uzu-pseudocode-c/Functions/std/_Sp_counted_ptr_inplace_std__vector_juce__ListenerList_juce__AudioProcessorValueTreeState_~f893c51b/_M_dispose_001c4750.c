// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_std__vector_juce__ListenerList_juce__AudioProcessorValueTreeState_~f893c51b
// Entry    : 001c4750
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 001c4750 - 001c475e


/* std::_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,
   juce::Array<juce::AudioProcessorValueTreeState::Listener*, juce::DummyCriticalSection, 0>
   >::Iterator*, std::allocator<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,
   juce::Array<juce::AudioProcessorValueTreeState::Listener*, juce::DummyCriticalSection, 0>
   >::Iterator*> >, std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AudioProcessorValueTreeState::Listener,juce::Array<juce::AudioProcessorValueTreeState::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  if (*(void **)(this + 0x10) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


