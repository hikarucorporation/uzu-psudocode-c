// Function : fillRoundedRectangle
// Namespace: juce:Graphics
// Entry    : 0032c370
// Prototype: undefined fillRoundedRectangle(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, Graphics * this)
// Body     : 0032c370 - 0032c39b


/* juce::Graphics::fillRoundedRectangle(float, float, float, float, float) const */

void __thiscall
juce::Graphics::fillRoundedRectangle
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,Graphics *this)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  (**(code **)(**(long **)(this + 8) + 0x120))(param_5,*(long **)(this + 8),&local_10);
  return;
}


