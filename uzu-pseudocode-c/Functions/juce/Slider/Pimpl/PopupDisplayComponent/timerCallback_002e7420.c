// Function : timerCallback
// Namespace: juce:Slider:Pimpl:PopupDisplayComponent
// Entry    : 002e7420
// Prototype: undefined timerCallback(PopupDisplayComponent * this)
// Body     : 002e7420 - 002e752e


/* juce::Slider::Pimpl::PopupDisplayComponent::timerCallback() */

void __thiscall
juce::Slider::Pimpl::PopupDisplayComponent::timerCallback(PopupDisplayComponent *this)

{
  long *plVar1;
  int iVar2;
  Component *this_00;
  long *plVar3;
  int *piVar4;
  timespec local_18;
  
  Timer::stopTimer((Timer *)(this + 0x110));
  this_00 = *(Component **)(*(long *)(*(long *)(this + 0x138) + 0x1a0) + 0x270);
  *(undefined8 *)(*(long *)(*(long *)(this + 0x138) + 0x1a0) + 0x270) = 0;
  if (this_00 == (Component *)0x0) {
    return;
  }
  if (*(long *)(*(long *)(this_00 + 0x138) + 0x1a0) != 0) {
    clock_gettime(1,&local_18);
    *(double *)(*(long *)(*(long *)(this_00 + 0x138) + 0x1a0) + 0x248) =
         (double)(local_18.tv_nsec / 1000 + local_18.tv_sec * 1000000) * DAT_00651e50;
  }
  piVar4 = (int *)(*(long *)(this_00 + 0x148) + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar4);
    }
  }
  plVar3 = *(long **)(this_00 + 0x140);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  Timer::~Timer((Timer *)(this_00 + 0x110));
  Component::~Component(this_00);
  operator_delete(this_00);
  return;
}


