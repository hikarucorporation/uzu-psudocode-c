// Function : ~SavedStateBase
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003c1210
// Prototype: undefined ~SavedStateBase(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 003c1210 - 003c1278


/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::~SavedStateBase()
    */

void __thiscall
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::
~SavedStateBase(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x003c1276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


