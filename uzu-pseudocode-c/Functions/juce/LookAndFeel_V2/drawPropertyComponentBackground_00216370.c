// Function : drawPropertyComponentBackground
// Namespace: juce:LookAndFeel_V2
// Entry    : 00216370
// Prototype: undefined drawPropertyComponentBackground(undefined8 param_1_00, Graphics * param_2, undefined4 param_3, int param_4, Component * param_5)
// Body     : 00216370 - 002163cd


/* juce::LookAndFeel_V2::drawPropertyComponentBackground(juce::Graphics&, int, int,
   juce::PropertyComponent&) */

void __thiscall
juce::LookAndFeel_V2::drawPropertyComponentBackground
          (undefined8 param_1_00,Graphics *param_2,undefined4 param_3,int param_4,Component *param_5
          )

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = Component::findColour(param_5,0x1008300,'\0');
  Graphics::setColour(param_2,(int)uVar1);
  local_20 = CONCAT44(param_4 + -1,param_3);
  local_28 = 0;
  (**(code **)(**(long **)(param_2 + 8) + 0xb0))(*(long **)(param_2 + 8),&local_28,0);
  return;
}


