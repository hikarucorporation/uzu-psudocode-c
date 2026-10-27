// Function : ~ReferenceCountedObjectPtr
// Namespace: juce:ReferenceCountedObjectPtr_juce__CurrentThreadHolder_
// Entry    : 004aaf70
// Prototype: undefined ~ReferenceCountedObjectPtr(ReferenceCountedObjectPtr<juce::CurrentThreadHolder> * this)
// Body     : 004aaf70 - 004aafb7


/* juce::ReferenceCountedObjectPtr<juce::CurrentThreadHolder>::~ReferenceCountedObjectPtr() */

void __thiscall
juce::ReferenceCountedObjectPtr<juce::CurrentThreadHolder>::~ReferenceCountedObjectPtr
          (ReferenceCountedObjectPtr<juce::CurrentThreadHolder> *this)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      pvVar4 = *(void **)((long)pvVar2 + 0x10);
      while (pvVar4 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar4 + 8);
        operator_delete(pvVar4);
        pvVar4 = pvVar3;
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


