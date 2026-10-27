// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_std__vector_juce__ListenerList_juce__AnimatedPosition_juce__Animat~1e57f286
// Entry    : 00269580
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 00269580 - 0026958e


/* std::_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,
   juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,
   juce::DummyCriticalSection, 0> >::Iterator*,
   std::allocator<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,
   juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,
   juce::DummyCriticalSection, 0> >::Iterator*> >, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<std::vector<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  if (*(void **)(this + 0x10) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


