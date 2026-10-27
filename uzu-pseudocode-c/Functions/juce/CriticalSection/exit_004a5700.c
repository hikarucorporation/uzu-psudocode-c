// Function : exit
// Namespace: juce:CriticalSection
// Entry    : 004a5700
// Prototype: undefined exit(CriticalSection * this)
// Body     : 004a5700 - 004a5704


/* juce::CriticalSection::exit() const */

void __thiscall juce::CriticalSection::exit(CriticalSection *this)

{
  (*(code *)PTR_pthread_mutex_unlock_00716690)();
  return;
}


