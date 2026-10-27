// Function : ~CriticalSection
// Namespace: juce:CriticalSection
// Entry    : 004a56e0
// Prototype: undefined ~CriticalSection(CriticalSection * this)
// Body     : 004a56e0 - 004a56e4


/* juce::CriticalSection::~CriticalSection() */

void __thiscall juce::CriticalSection::~CriticalSection(CriticalSection *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


