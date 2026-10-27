// Function : ~CurrentThreadHolder
// Namespace: juce:CurrentThreadHolder
// Entry    : 004ab000
// Prototype: undefined ~CurrentThreadHolder(CurrentThreadHolder * this)
// Body     : 004ab000 - 004ab02f


/* juce::CurrentThreadHolder::~CurrentThreadHolder() */

void __thiscall juce::CurrentThreadHolder::~CurrentThreadHolder(CurrentThreadHolder *this)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x10);
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((long)pvVar2 + 8);
    operator_delete(pvVar2);
    pvVar2 = pvVar1;
  }
  operator_delete(this);
  return;
}


