// Function : enter
// Namespace: juce:CriticalSection
// Entry    : 004a56f0
// Prototype: undefined enter(CriticalSection * this)
// Body     : 004a56f0 - 004a56f4


/* juce::CriticalSection::enter() const */

void __thiscall juce::CriticalSection::enter(CriticalSection *this)

{
  (*(code *)PTR_pthread_mutex_lock_00716790)();
  return;
}


