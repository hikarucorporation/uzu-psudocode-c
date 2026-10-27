// Function : ~ChangeBroadcasterCallback
// Namespace: juce:ChangeBroadcaster:ChangeBroadcasterCallback
// Entry    : 00482e50
// Prototype: undefined ~ChangeBroadcasterCallback(ChangeBroadcasterCallback * this)
// Body     : 00482e50 - 00482e97


/* juce::ChangeBroadcaster::ChangeBroadcasterCallback::~ChangeBroadcasterCallback() */

void __thiscall
juce::ChangeBroadcaster::ChangeBroadcasterCallback::~ChangeBroadcasterCallback
          (ChangeBroadcasterCallback *this)

{
  int *piVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__ChangeBroadcasterCallback_00712ba0;
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  *(undefined ***)this = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  pvVar2 = *(void **)(this + 8);
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


