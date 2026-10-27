// Function : ~GenericScopedLock
// Namespace: juce:GenericScopedLock_juce__CriticalSection_
// Entry    : 004803e0
// Prototype: undefined ~GenericScopedLock(GenericScopedLock<juce::CriticalSection> * this)
// Body     : 004803e0 - 004803e4


/* juce::GenericScopedLock<juce::CriticalSection>::~GenericScopedLock() */

void __thiscall
juce::GenericScopedLock<juce::CriticalSection>::~GenericScopedLock
          (GenericScopedLock<juce::CriticalSection> *this)

{
  (*(code *)PTR_pthread_mutex_unlock_00716690)();
  return;
}


