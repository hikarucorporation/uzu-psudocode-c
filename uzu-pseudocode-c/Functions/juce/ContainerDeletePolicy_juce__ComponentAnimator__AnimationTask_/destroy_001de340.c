// Function : destroy
// Namespace: juce:ContainerDeletePolicy_juce__ComponentAnimator__AnimationTask_
// Entry    : 001de340
// Prototype: undefined destroy(long * param_1)
// Body     : 001de340 - 001de3dc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ContainerDeletePolicy<juce::ComponentAnimator::AnimationTask>::destroy(juce::ComponentAnimator::AnimationTask*)
    */

void __cdecl
juce::ContainerDeletePolicy<juce::ComponentAnimator::AnimationTask>::destroy(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    if ((long *)plVar2[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[2] + 8))();
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  plVar2 = (long *)param_1[0x10];
  if (plVar2 != (long *)0x0) {
    plVar2[2] = 0;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  operator_delete(param_1);
  return;
}


