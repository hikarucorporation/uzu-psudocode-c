// Function : SavedStateBase
// Namespace: juce:RenderingHelpers:SavedStateBase_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003c0ab0
// Prototype: undefined SavedStateBase(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> * this, long * param_1)
// Body     : 003c0ab0 - 003c0bcd


/* juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::SavedStateBase(juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>
   const&) */

void __thiscall
juce::RenderingHelpers::SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState>::
SavedStateBase(SavedStateBase<juce::RenderingHelpers::SoftwareRendererSavedState> *this,
              long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__src;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__dest;
  uint uVar7;
  
  lVar2 = *param_1;
  *(long *)this = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  *(int *)(this + 0x28) = (int)param_1[5];
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  lVar5 = param_1[4];
  *(long *)(this + 0x18) = param_1[3];
  *(long *)(this + 0x20) = lVar5;
  *(long *)(this + 8) = lVar2;
  *(long *)(this + 0x10) = lVar4;
  *(int *)(this + 0x30) = (int)param_1[6];
  puVar3 = (undefined8 *)param_1[7];
  if (puVar3 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 003c0afb to 003c0b04 has its CatchHandler @ 003c0bce */
    puVar6 = operator_new(0x28);
    *puVar6 = *puVar3;
    puVar6[1] = puVar3[1];
    *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(puVar3 + 2);
    puVar6[3] = 0;
    puVar6[4] = 0;
    uVar1 = *(uint *)((long)puVar3 + 0x24);
    if (0 < (int)uVar1) {
      __src = (void *)puVar3[3];
      uVar7 = (uVar1 >> 1) + uVar1 + 8 & 0xfffffff8;
      if ((int)uVar7 < 1) {
        __dest = (void *)0x0;
      }
      else {
        __dest = malloc((ulong)uVar7 << 4);
        puVar6[3] = __dest;
      }
      *(uint *)(puVar6 + 4) = uVar7;
      memcpy(__dest,__src,(ulong)uVar1 << 4);
    }
    *(uint *)((long)puVar6 + 0x24) = uVar1;
  }
  *(undefined8 **)(this + 0x38) = puVar6;
  lVar2 = param_1[8];
  *(long *)(this + 0x40) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(long *)(this + 0x58) = param_1[0xb];
  lVar2 = param_1[10];
  *(long *)(this + 0x48) = param_1[9];
  *(long *)(this + 0x50) = lVar2;
  *(int *)(this + 0x60) = (int)param_1[0xc];
  *(undefined4 *)(this + 100) = *(undefined4 *)((long)param_1 + 100);
  return;
}


