// Function : ~ChangeBroadcaster
// Namespace: juce:ChangeBroadcaster
// Entry    : 00483690
// Prototype: ulong ~ChangeBroadcaster(ChangeBroadcaster * this)
// Body     : 00483690 - 004836e6


/* juce::ChangeBroadcaster::~ChangeBroadcaster() */

ulong __thiscall juce::ChangeBroadcaster::~ChangeBroadcaster(ChangeBroadcaster *this)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  ulong extraout_RAX;
  
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
    piVar1 = (int *)((long)pvVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar3);
      return extraout_RAX;
    }
  }
  return (ulong)uVar2;
}


