// Function : ~OutlineWindowComponent
// Namespace: juce:OutlineWindowComponent
// Entry    : 002b9250
// Prototype: undefined ~OutlineWindowComponent(OutlineWindowComponent * this)
// Body     : 002b9250 - 002b927d


/* juce::OutlineWindowComponent::~OutlineWindowComponent() */

void __thiscall juce::OutlineWindowComponent::~OutlineWindowComponent(OutlineWindowComponent *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xf0);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


