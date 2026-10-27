// Function : ~UndoManager
// Namespace: juce:UndoManager
// Entry    : 004c6230
// Prototype: ulong ~UndoManager(UndoManager * this)
// Body     : 004c6230 - 004c62fd


/* juce::UndoManager::~UndoManager() */

ulong __thiscall juce::UndoManager::~UndoManager(UndoManager *this)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  ulong extraout_RAX;
  int *piVar4;
  
  *(undefined ***)this = &PTR__UndoManager_00713ef8;
  piVar4 = (int *)(*(long *)(this + 0x70) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
                    /* try { // try from 004c626b to 004c6272 has its CatchHandler @ 004c6300 */
  OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>::deleteAllObjects
            ((OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *)(this + 0x60));
  *(undefined4 *)(this + 0x6c) = 0;
  free(*(void **)(this + 0x60));
                    /* try { // try from 004c6287 to 004c628e has its CatchHandler @ 004c62fe */
  OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection>::deleteAllObjects
            ((OwnedArray<juce::UndoManager::ActionSet,juce::DummyCriticalSection> *)(this + 0x50));
  *(undefined4 *)(this + 0x5c) = 0;
  free(*(void **)(this + 0x50));
  *(undefined ***)this = &PTR__ChangeBroadcaster_00712b80;
  ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::ChangeListener,juce::Array<juce::ChangeListener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x20));
  *(undefined ***)(this + 8) = &PTR__ChangeBroadcasterCallback_00712ba0;
  LOCK();
  *(undefined4 *)(*(long *)(this + 0x10) + 0x18) = 0;
  UNLOCK();
  *(undefined ***)(this + 8) = &PTR__AsyncUpdater_00712b58;
  LOCK();
  uVar2 = *(uint *)(*(long *)(this + 0x10) + 0x18);
  *(uint *)(*(long *)(this + 0x10) + 0x18) = 0;
  UNLOCK();
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar4 = (int *)((long)pvVar3 + 8);
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      operator_delete(pvVar3);
      return extraout_RAX;
    }
  }
  return (ulong)uVar2;
}


