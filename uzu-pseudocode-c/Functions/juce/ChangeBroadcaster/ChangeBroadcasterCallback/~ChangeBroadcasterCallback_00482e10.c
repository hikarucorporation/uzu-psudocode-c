// Function : ~ChangeBroadcasterCallback
// Namespace: juce:ChangeBroadcaster:ChangeBroadcasterCallback
// Entry    : 00482e10
// Prototype: ulong ~ChangeBroadcasterCallback(ChangeBroadcasterCallback * this)
// Body     : 00482e10 - 00482e4b


/* juce::ChangeBroadcaster::ChangeBroadcasterCallback::~ChangeBroadcasterCallback() */

ulong __thiscall
juce::ChangeBroadcaster::ChangeBroadcasterCallback::~ChangeBroadcasterCallback
          (ChangeBroadcasterCallback *this)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  ulong extraout_RAX;
  
  *(undefined ***)this = &PTR__ChangeBroadcasterCallback_00712ba0;
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  *(undefined ***)this = &PTR__AsyncUpdater_00712b58;
  LOCK();
  uVar2 = *(uint *)(*(long *)(this + 8) + 0x18);
  *(uint *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  pvVar3 = *(void **)(this + 8);
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


