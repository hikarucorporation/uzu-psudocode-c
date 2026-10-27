// Function : ~MouseInputSourceImpl
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 001e3c00
// Prototype: undefined ~MouseInputSourceImpl(MouseInputSourceImpl * this)
// Body     : 001e3c00 - 001e3c6a


/* juce::detail::MouseInputSourceImpl::~MouseInputSourceImpl() */

void __thiscall
juce::detail::MouseInputSourceImpl::~MouseInputSourceImpl(MouseInputSourceImpl *this)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__MouseInputSourceImpl_0070dd80;
  plVar3 = *(long **)(this + 0x50);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  plVar3 = *(long **)(this + 0x48);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined ***)this = &PTR__AsyncUpdater_00712b58;
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 != (void *)0x0) {
    LOCK();
    piVar2 = (int *)((long)pvVar4 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      operator_delete(pvVar4);
    }
  }
  operator_delete(this);
  return;
}


