// Function : paintToolbarButtonBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 002082b0
// Prototype: undefined paintToolbarButtonBackground(undefined8 param_1_00, Graphics * param_2, undefined8 param_3, undefined8 param_4, int param_5_00, byte param_6, Component * param_7)
// Body     : 002082b0 - 002082e6


/* non-virtual thunk to juce::LookAndFeel_V2::paintToolbarButtonBackground(juce::Graphics&, int,
   int, bool, bool, juce::ToolbarItemComponent&) */

void __thiscall
juce::LookAndFeel_V2::paintToolbarButtonBackground
          (undefined8 param_1_00,Graphics *param_2,undefined8 param_3,undefined8 param_4,
          int param_5_00,byte param_6,Component *param_7)

{
  ulong uVar1;
  
  if ((param_5_00 == 0) && (param_6 == 0)) {
    return;
  }
  uVar1 = Component::findColour(param_7,(uint)param_6 << 4 | 0x1003220,'\x01');
  Graphics::fillAll(param_2,(uint)uVar1);
  return;
}


