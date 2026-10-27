// Function : isProgressBarOpaque
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020fa50
// Prototype: bool isProgressBarOpaque(undefined8 param_1_00, Component * param_2)
// Body     : 0020fa50 - 0020fa69


/* juce::LookAndFeel_V2::isProgressBarOpaque(juce::ProgressBar&) */

bool __thiscall juce::LookAndFeel_V2::isProgressBarOpaque(undefined8 param_1_00,Component *param_2)

{
  ulong uVar1;
  
  uVar1 = Component::findColour(param_2,0x1001900,'\0');
  return 0xfeffffff < (uint)uVar1;
}


