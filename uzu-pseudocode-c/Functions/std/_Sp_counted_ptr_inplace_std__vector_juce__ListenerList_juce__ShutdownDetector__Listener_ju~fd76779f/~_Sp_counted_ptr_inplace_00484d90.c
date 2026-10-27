// Function : ~_Sp_counted_ptr_inplace
// Namespace: std:_Sp_counted_ptr_inplace_std__vector_juce__ListenerList_juce__ShutdownDetector__Listener_ju~fd76779f
// Entry    : 00484d90
// Prototype: undefined ~_Sp_counted_ptr_inplace(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 00484d90 - 00484d94


/* std::_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ShutdownDetector::Listener,
   juce::Array<juce::ShutdownDetector::Listener*, juce::CriticalSection, 0> >::Iterator*,
   std::allocator<juce::ListenerList<juce::ShutdownDetector::Listener,
   juce::Array<juce::ShutdownDetector::Listener*, juce::CriticalSection, 0> >::Iterator*> >,
   std::allocator<void>, (__gnu_cxx::_Lock_policy)2>::~_Sp_counted_ptr_inplace() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::~_Sp_counted_ptr_inplace
          (_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::ShutdownDetector::Listener,juce::Array<juce::ShutdownDetector::Listener*,juce::CriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
           *this)

{
  (*(code *)PTR_operator_delete_00716ec8)();
  return;
}


