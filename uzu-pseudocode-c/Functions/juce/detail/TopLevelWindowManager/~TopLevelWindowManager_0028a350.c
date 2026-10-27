// Function : ~TopLevelWindowManager
// Namespace: juce:detail:TopLevelWindowManager
// Entry    : 0028a350
// Prototype: undefined ~TopLevelWindowManager(TopLevelWindowManager * this)
// Body     : 0028a350 - 0028a3ac


/* juce::detail::TopLevelWindowManager::~TopLevelWindowManager() */

void __thiscall
juce::detail::TopLevelWindowManager::~TopLevelWindowManager(TopLevelWindowManager *this)

{
  *(undefined ***)this = &PTR__TopLevelWindowManager_00710e68;
  *(undefined ***)(this + 0x28) = &PTR__TopLevelWindowManager_00710e90;
  LOCK();
  if (this == singletonHolder) {
    singletonHolder = (TopLevelWindowManager *)0x0;
  }
  UNLOCK();
  *(undefined4 *)(this + 0x3c) = 0;
  free(*(void **)(this + 0x30));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)(this + 0x28));
  Timer::~Timer((Timer *)this);
  operator_delete(this);
  return;
}


