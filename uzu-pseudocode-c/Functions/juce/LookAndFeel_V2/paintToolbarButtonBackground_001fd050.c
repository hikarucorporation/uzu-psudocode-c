// Function : paintToolbarButtonBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 001fd050
// Prototype: undefined paintToolbarButtonBackground(undefined8 param_1_00, Graphics * param_2, undefined8 param_3, undefined8 param_4_00, char param_5, uint param_6_00, Component * param_7)
// Body     : 001fd050 - 001fd086


/* juce::LookAndFeel_V2::paintToolbarButtonBackground(juce::Graphics&, int, int, bool, bool,
   juce::ToolbarItemComponent&) */

void __thiscall
juce::LookAndFeel_V2::paintToolbarButtonBackground
          (undefined8 param_1_00,Graphics *param_2,undefined8 param_3,undefined8 param_4_00,
          char param_5,uint param_6_00,Component *param_7)

{
  ulong uVar1;
  
  if ((param_6_00 == 0) && (param_5 == '\0')) {
    return;
  }
  uVar1 = Component::findColour(param_7,(param_6_00 & 0xff) << 4 | 0x1003220,'\x01');
  Graphics::fillAll(param_2,(uint)uVar1);
  return;
}


