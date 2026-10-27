// Function : drawButtonBackground
// Namespace: juce:CRQLLNF
// Entry    : 00174ba0
// Prototype: undefined drawButtonBackground(undefined8 param_1, Graphics * param_2, Component * param_3)
// Body     : 00174ba0 - 00174bd1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::CRQLLNF::drawButtonBackground(juce::Graphics&, juce::Button&, juce::Colour const&, bool,
   bool) */

void __cdecl
juce::CRQLLNF::drawButtonBackground(undefined8 param_1,Graphics *param_2,Component *param_3)

{
  undefined1 auVar1 [16];
  
  Graphics::setColour(param_2,Colours::transparentBlack);
  auVar1 = Component::getLocalBounds(param_3);
  Graphics::fillRect((long)param_2,auVar1._0_8_,auVar1._8_8_);
  return;
}


