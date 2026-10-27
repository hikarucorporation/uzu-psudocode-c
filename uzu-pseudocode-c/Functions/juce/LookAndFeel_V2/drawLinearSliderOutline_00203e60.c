// Function : drawLinearSliderOutline
// Namespace: juce:LookAndFeel_V2
// Entry    : 00203e60
// Prototype: undefined drawLinearSliderOutline(undefined8 param_1_00, Graphics * param_2)
// Body     : 00203e60 - 00203ed5


/* non-virtual thunk to juce::LookAndFeel_V2::drawLinearSliderOutline(juce::Graphics&, int, int,
   int, int, juce::Slider::SliderStyle, juce::Slider&) */

void __thiscall
juce::LookAndFeel_V2::drawLinearSliderOutline(undefined8 param_1_00,Graphics *param_2)

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


