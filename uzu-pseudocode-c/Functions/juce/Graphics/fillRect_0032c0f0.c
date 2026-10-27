// Function : fillRect
// Namespace: juce:Graphics
// Entry    : 0032c0f0
// Prototype: undefined fillRect(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, Graphics * this)
// Body     : 0032c0f0 - 0032c118


/* juce::Graphics::fillRect(float, float, float, float) const */

void __thiscall
juce::Graphics::fillRect
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          Graphics *this)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  (**(code **)(**(long **)(this + 8) + 0xb8))(*(long **)(this + 8),&local_10);
  return;
}


