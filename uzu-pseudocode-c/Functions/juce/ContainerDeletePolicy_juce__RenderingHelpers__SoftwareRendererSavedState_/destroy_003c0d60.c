// Function : destroy
// Namespace: juce:ContainerDeletePolicy_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003c0d60
// Prototype: undefined destroy(long * param_1)
// Body     : 003c0d60 - 003c0dfe


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ContainerDeletePolicy<juce::RenderingHelpers::SoftwareRendererSavedState>::destroy(juce::RenderingHelpers::SoftwareRendererSavedState*)
    */

void __cdecl
juce::ContainerDeletePolicy<juce::RenderingHelpers::SoftwareRendererSavedState>::destroy
          (long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[0xe];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = (long *)param_1[0xd];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = (long *)param_1[8];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  pvVar3 = (void *)param_1[7];
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)((long)pvVar3 + 0x24) = 0;
    free(*(void **)((long)pvVar3 + 0x18));
    operator_delete(pvVar3);
  }
  param_1[7] = 0;
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  operator_delete(param_1);
  return;
}


