// Function : ~TopLevelWindowManager
// Namespace: juce:detail:TopLevelWindowManager
// Entry    : 0028a420
// Prototype: undefined ~TopLevelWindowManager(TopLevelWindowManager * this)
// Body     : 0028a420 - 0028a47c


/* non-virtual thunk to juce::detail::TopLevelWindowManager::~TopLevelWindowManager() */

void __thiscall
juce::detail::TopLevelWindowManager::~TopLevelWindowManager(TopLevelWindowManager *this)

{
  Timer *this_00;
  
  this_00 = (Timer *)(this + -0x28);
  *(undefined ***)(this + -0x28) = &PTR__TopLevelWindowManager_00710e68;
  *(undefined ***)this = &PTR__TopLevelWindowManager_00710e90;
  LOCK();
  if (this_00 == singletonHolder) {
    singletonHolder = (Timer *)0x0;
  }
  UNLOCK();
  *(undefined4 *)(this + 0x14) = 0;
  free(*(void **)(this + 8));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  Timer::~Timer(this_00);
  operator_delete(this_00);
  return;
}


