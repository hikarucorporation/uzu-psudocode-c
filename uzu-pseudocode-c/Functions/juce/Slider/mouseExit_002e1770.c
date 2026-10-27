// Function : mouseExit
// Namespace: juce:Slider
// Entry    : 002e1770
// Prototype: undefined mouseExit(long param_1)
// Body     : 002e1770 - 002e1868


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Slider::mouseExit(juce::MouseEvent const&) */

void __cdecl juce::Slider::mouseExit(long param_1)

{
  long *plVar1;
  int iVar2;
  Component *this;
  long *plVar3;
  int *piVar4;
  timespec local_18;
  
  this = *(Component **)(*(long *)(param_1 + 0x1a0) + 0x270);
  *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x270) = 0;
  if (this == (Component *)0x0) {
    return;
  }
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
    }
  }
  plVar3 = *(long **)(this + 0x140);
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
  Component::~Component(this);
  operator_delete(this);
  return;
}


