// Function : ~TopLevelWindowManager
// Namespace: juce:detail:TopLevelWindowManager
// Entry    : 0028a3c0
// Prototype: undefined ~TopLevelWindowManager(TopLevelWindowManager * this)
// Body     : 0028a3c0 - 0028a414


/* non-virtual thunk to juce::detail::TopLevelWindowManager::~TopLevelWindowManager() */

void __thiscall
juce::detail::TopLevelWindowManager::~TopLevelWindowManager(TopLevelWindowManager *this)

{
  *(undefined ***)(this + -0x28) = &PTR__TopLevelWindowManager_00710e68;
  *(undefined ***)this = &PTR__TopLevelWindowManager_00710e90;
  LOCK();
  if ((Timer *)(this + -0x28) == singletonHolder) {
    singletonHolder = (Timer *)0x0;
  }
  UNLOCK();
  *(undefined4 *)(this + 0x14) = 0;
  free(*(void **)(this + 8));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  Timer::~Timer((Timer *)(this + -0x28));
  return;
}


