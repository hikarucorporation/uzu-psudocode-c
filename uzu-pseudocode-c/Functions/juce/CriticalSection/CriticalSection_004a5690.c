// Function : CriticalSection
// Namespace: juce:CriticalSection
// Entry    : 004a5690
// Prototype: undefined CriticalSection(CriticalSection * this)
// Body     : 004a5690 - 004a56d6


/* juce::CriticalSection::CriticalSection() */

void __thiscall juce::CriticalSection::CriticalSection(CriticalSection *this)

{
  pthread_mutexattr_t apStack_18 [2];
  
  pthread_mutexattr_init(apStack_18);
  pthread_mutexattr_settype(apStack_18,1);
  pthread_mutexattr_setprotocol(apStack_18,1);
  pthread_mutex_init((pthread_mutex_t *)this,apStack_18);
  pthread_mutexattr_destroy(apStack_18);
  return;
}


