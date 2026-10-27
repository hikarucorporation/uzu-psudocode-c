// Function : drawLinearSliderOutline
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f4830
// Prototype: undefined drawLinearSliderOutline(undefined8 param_1, Graphics * param_2)
// Body     : 001f4830 - 001f48a5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::drawLinearSliderOutline(juce::Graphics&, int, int, int, int,
   juce::Slider::SliderStyle, juce::Slider&) */

void __cdecl juce::LookAndFeel_V2::drawLinearSliderOutline(undefined8 param_1,Graphics *param_2)

{
  ulong uVar1;
  Component *in_stack_00000010;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (*(int *)(*(long *)(in_stack_00000010 + 0x1a0) + 0x208) == 0) {
    uVar1 = Component::findColour(in_stack_00000010,0x1001700,'\0');
    Graphics::setColour(param_2,(int)uVar1);
    uStack_18 = CONCAT44((float)(int)((ulong)*(undefined8 *)(in_stack_00000010 + 0x40) >> 0x20),
                         (float)(int)*(undefined8 *)(in_stack_00000010 + 0x40));
    local_20 = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_2 + 8),&local_20);
    return;
  }
  return;
}


