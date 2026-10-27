// Function : ~AsyncUpdater
// Namespace: juce:AsyncUpdater
// Entry    : 00482d60
// Prototype: undefined ~AsyncUpdater(AsyncUpdater * this)
// Body     : 00482d60 - 00482d88


/* juce::AsyncUpdater::~AsyncUpdater() */

void __thiscall juce::AsyncUpdater::~AsyncUpdater(AsyncUpdater *this)

{
  int *piVar1;
  void *pvVar2;
  
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
      return;
    }
  }
  return;
}


