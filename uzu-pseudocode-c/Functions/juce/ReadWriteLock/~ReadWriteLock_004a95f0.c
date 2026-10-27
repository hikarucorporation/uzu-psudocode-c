// Function : ~ReadWriteLock
// Namespace: juce:ReadWriteLock
// Entry    : 004a95f0
// Prototype: undefined ~ReadWriteLock(ReadWriteLock * this)
// Body     : 004a95f0 - 004a9622


/* juce::ReadWriteLock::~ReadWriteLock() */

void __thiscall juce::ReadWriteLock::~ReadWriteLock(ReadWriteLock *this)

{
  *(undefined4 *)(this + 0xf4) = 0;
  free(*(void **)(this + 0xe8));
  std::condition_variable::~condition_variable((condition_variable *)(this + 0xa0));
  std::condition_variable::~condition_variable((condition_variable *)(this + 0x38));
  return;
}


