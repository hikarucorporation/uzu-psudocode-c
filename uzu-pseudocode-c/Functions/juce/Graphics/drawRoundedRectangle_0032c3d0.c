// Function : drawRoundedRectangle
// Namespace: juce:Graphics
// Entry    : 0032c3d0
// Prototype: undefined drawRoundedRectangle(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, long param_5)
// Body     : 0032c3d0 - 0032c3f8


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Graphics::drawRoundedRectangle(juce::Rectangle<float>, float, float) const */

void __cdecl
juce::Graphics::drawRoundedRectangle
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  undefined4 local_10 [2];
  undefined4 uStack_8;
  
  local_10[0] = param_1;
  uStack_8 = param_2;
  (**(code **)(**(long **)(param_5 + 8) + 0x118))(param_3,param_4,*(long **)(param_5 + 8),local_10);
  return;
}


