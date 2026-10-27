// Function : save
// Namespace: juce:RenderingHelpers:SavedStateStack_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003c09e0
// Prototype: undefined save(SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 003c09e0 - 003c0a97


/* juce::RenderingHelpers::SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState>::save()
    */

void __thiscall
juce::RenderingHelpers::SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState>::save
          (SavedStateStack<juce::RenderingHelpers::SoftwareRendererSavedState> *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this_00;
  void *pvVar4;
  uint uVar5;
  
  this_00 = operator_new(0x78);
  plVar1 = *(long **)this;
                    /* try { // try from 003c09f8 to 003c0a02 has its CatchHandler @ 003c0a98 */
  SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::SavedStateBase(this_00,plVar1)
  ;
  lVar2 = plVar1[0xd];
  *(long *)(this_00 + 0x68) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = plVar1[0xe];
  *(long *)(this_00 + 0x70) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(this + 0x14);
  if ((int)*(uint *)(this + 0x10) <= iVar3) {
    uVar5 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x10) != uVar5) {
      if ((int)uVar5 < 1) {
        free(*(void **)(this + 8));
        *(undefined8 *)(this + 8) = 0;
      }
      else {
        pvVar4 = realloc(*(void **)(this + 8),(ulong)uVar5 << 3);
        *(void **)(this + 8) = pvVar4;
      }
    }
    *(uint *)(this + 0x10) = uVar5;
    iVar3 = *(int *)(this + 0x14);
  }
  *(int *)(this + 0x14) = iVar3 + 1;
  *(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> **)
   (*(long *)(this + 8) + (long)iVar3 * 8) = this_00;
  return;
}


