// Function : AsyncUpdater
// Namespace: juce:AsyncUpdater
// Entry    : 00482cc0
// Prototype: undefined AsyncUpdater(AsyncUpdater * this)
// Body     : 00482cc0 - 00482d1c


/* juce::AsyncUpdater::AsyncUpdater() */

void __thiscall juce::AsyncUpdater::AsyncUpdater(AsyncUpdater *this)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &PTR__AsyncUpdater_00712b58;
  *(undefined8 *)(this + 8) = 0;
  puVar3 = operator_new(0x20);
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar3[2] = this;
  *(undefined4 *)(puVar3 + 3) = 0;
  LOCK();
  *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
  UNLOCK();
  pvVar2 = *(void **)(this + 8);
  *(undefined8 **)(this + 8) = puVar3;
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


