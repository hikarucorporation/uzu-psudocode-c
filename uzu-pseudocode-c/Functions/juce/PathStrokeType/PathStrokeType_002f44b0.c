// Function : PathStrokeType
// Namespace: juce:PathStrokeType
// Entry    : 002f44b0
// Prototype: undefined PathStrokeType(undefined4 param_1, PathStrokeType * this, undefined4 param_3, undefined4 param_4)
// Body     : 002f44b0 - 002f44ba


/* juce::PathStrokeType::PathStrokeType(float, juce::PathStrokeType::JointStyle,
   juce::PathStrokeType::EndCapStyle) */

void __thiscall
juce::PathStrokeType::PathStrokeType
          (undefined4 param_1,PathStrokeType *this,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  return;
}


