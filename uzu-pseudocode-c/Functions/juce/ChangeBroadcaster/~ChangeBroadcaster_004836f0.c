// Function : ~ChangeBroadcaster
// Namespace: juce:ChangeBroadcaster
// Entry    : 004836f0
// Prototype: undefined ~ChangeBroadcaster(ChangeBroadcaster * this)
// Body     : 004836f0 - 0048374c


/* juce::ChangeBroadcaster::~ChangeBroadcaster() */

void __thiscall juce::ChangeBroadcaster::~ChangeBroadcaster(ChangeBroadcaster *this)

{
  int *piVar1;
  void *pvVar2;
  
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
  *(undefined4 *)(*(long *)(this + 0x10) + 0x18) = 0;
  UNLOCK();
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar2);
    }
  }
  operator_delete(this);
  return;
}


