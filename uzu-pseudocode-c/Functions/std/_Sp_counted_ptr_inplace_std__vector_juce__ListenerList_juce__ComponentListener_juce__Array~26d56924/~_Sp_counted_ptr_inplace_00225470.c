// Function : ~_Sp_counted_ptr_inplace
// Namespace: std:_Sp_counted_ptr_inplace_std__vector_juce__ListenerList_juce__ComponentListener_juce__Array~26d56924
// Entry    : 00225470
// Prototype: undefined ~_Sp_counted_ptr_inplace(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 00225470 - 00225474


/* std::_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComponentListener,
   juce::Array<juce::ComponentListener*, juce::DummyCriticalSection, 0> >::Iterator*,
   std::allocator<juce::ListenerList<juce::ComponentListener, juce::Array<juce::ComponentListener*,
   juce::DummyCriticalSection, 0> >::Iterator*> >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ComponentListener,juce::Array<juce::ComponentListener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  (*(code *)PTR_operator_delete_00716ec8)();
  return;
}


