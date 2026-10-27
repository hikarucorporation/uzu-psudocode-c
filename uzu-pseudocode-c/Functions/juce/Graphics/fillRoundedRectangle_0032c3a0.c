// Function : fillRoundedRectangle
// Namespace: juce:Graphics
// Entry    : 0032c3a0
// Prototype: undefined fillRoundedRectangle(undefined4 param_1, undefined8 param_2, undefined4 param_3, long param_4)
// Body     : 0032c3a0 - 0032c3c5


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Graphics::fillRoundedRectangle(juce::Rectangle<float>, float) const */

void __cdecl
juce::Graphics::fillRoundedRectangle
          (undefined4 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined4 local_10 [2];
  undefined8 uStack_8;
  
  local_10[0] = param_1;
  uStack_8 = param_2;
  (**(code **)(**(long **)(param_4 + 8) + 0x120))(param_3,*(long **)(param_4 + 8),local_10);
  return;
}


