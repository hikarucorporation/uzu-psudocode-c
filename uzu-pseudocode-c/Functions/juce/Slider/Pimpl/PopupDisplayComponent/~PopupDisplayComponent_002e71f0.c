// Function : ~PopupDisplayComponent
// Namespace: juce:Slider:Pimpl:PopupDisplayComponent
// Entry    : 002e71f0
// Prototype: undefined ~PopupDisplayComponent(PopupDisplayComponent * this)
// Body     : 002e71f0 - 002e72d1


/* juce::Slider::Pimpl::PopupDisplayComponent::~PopupDisplayComponent() */

void __thiscall
juce::Slider::Pimpl::PopupDisplayComponent::~PopupDisplayComponent(PopupDisplayComponent *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  timespec local_18;
  
  if (*(long *)(*(long *)(this + 0x138) + 0x1a0) != 0) {
    clock_gettime(1,&local_18);
    *(double *)(*(long *)(*(long *)(this + 0x138) + 0x1a0) + 0x248) =
         (double)(local_18.tv_nsec / 1000 + local_18.tv_sec * 1000000) * DAT_00651e50;
  }
  piVar4 = (int *)(*(long *)(this + 0x148) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar4);
      plVar3 = *(long **)(this + 0x140);
      goto joined_r0x002e72af;
    }
  }
  plVar3 = *(long **)(this + 0x140);
joined_r0x002e72af:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  Timer::~Timer((Timer *)(this + 0x110));
  Component::~Component((Component *)this);
  operator_delete(this);
  return;
}


