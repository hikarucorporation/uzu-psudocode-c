// Function : operator()
// Namespace: std:default_delete_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003c0940
// Prototype: undefined operator()(default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 003c0940 - 003c09de


/* std::default_delete<juce::RenderingHelpers::SoftwareRendererSavedState>::TEMPNAMEPLACEHOLDERVALUE(juce::RenderingHelpers::SoftwareRendererSavedState*)
   const */

void __thiscall
std::default_delete<juce::RenderingHelpers::SoftwareRendererSavedState>::operator()
          (default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  if (this == (default_delete<juce::RenderingHelpers::SoftwareRendererSavedState> *)0x0) {
    return;
  }
  plVar2 = *(long **)(this + 0x70);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x68);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  pvVar3 = *(void **)(this + 0x38);
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)((long)pvVar3 + 0x24) = 0;
    free(*(void **)((long)pvVar3 + 0x18));
    operator_delete(pvVar3);
  }
  *(undefined8 *)(this + 0x38) = 0;
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  operator_delete(this);
  return;
}


