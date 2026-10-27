// Function : setOrigin
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00330060
// Prototype: undefined setOrigin(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this, undefined8 param_1)
// Body     : 00330060 - 00330103


/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::setOrigin(juce::Point<int>)
    */

void __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::setOrigin
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this,undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = *(long *)(this + 8);
  iVar6 = (int)((ulong)param_1 >> 0x20);
  if (*(char *)(lVar5 + 0x28) == '\0') {
    fVar8 = (float)(int)param_1;
    fVar7 = (float)iVar6;
    fVar1 = *(float *)(lVar5 + 8);
    fVar2 = *(float *)(lVar5 + 0xc);
    fVar3 = *(float *)(lVar5 + 0x14);
    fVar4 = *(float *)(lVar5 + 0x18);
    *(float *)(lVar5 + 8) = fVar2 * 0.0 + fVar1;
    *(float *)(lVar5 + 0xc) = fVar1 * 0.0 + fVar2;
    *(float *)(lVar5 + 0x10) = fVar1 * fVar8 + fVar2 * fVar7 + *(float *)(lVar5 + 0x10);
    *(float *)(lVar5 + 0x14) = fVar4 * 0.0 + fVar3;
    *(float *)(lVar5 + 0x18) = fVar3 * 0.0 + fVar4;
    *(float *)(lVar5 + 0x1c) = fVar3 * fVar8 + fVar4 * fVar7 + *(float *)(lVar5 + 0x1c);
    return;
  }
  *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + (int)param_1;
  *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + iVar6;
  return;
}


