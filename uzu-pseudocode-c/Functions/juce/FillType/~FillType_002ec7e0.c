// Function : ~FillType
// Namespace: juce:FillType
// Entry    : 002ec7e0
// Prototype: undefined ~FillType(FillType * this)
// Body     : 002ec7e0 - 002ec82d


/* juce::FillType::~FillType() */

void __thiscall juce::FillType::~FillType(FillType *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)((long)pvVar3 + 0x24) = 0;
    free(*(void **)((long)pvVar3 + 0x18));
    operator_delete(pvVar3);
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}


