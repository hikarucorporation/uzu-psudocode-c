// Function : getPhysicalPixelScaleFactor
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 003302f0
// Prototype: float getPhysicalPixelScaleFactor(StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState> * this)
// Body     : 003302f0 - 00330333


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::getPhysicalPixelScaleFactor()
   const */

float __thiscall
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::
getPhysicalPixelScaleFactor
          (StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>
           *this)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(this + 8);
  if (*(char *)(lVar1 + 0x28) != '\0') {
    return DAT_005d9038;
  }
  fVar2 = (float)((uint)(*(float *)(lVar1 + 8) * *(float *)(lVar1 + 0x18) -
                        *(float *)(lVar1 + 0x14) * *(float *)(lVar1 + 0xc)) & _DAT_005d91c0);
  if (0.0 <= fVar2) {
    return SQRT(fVar2);
  }
  fVar2 = sqrtf(fVar2);
  return fVar2;
}


