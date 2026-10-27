// Function : mouseExit
// Namespace: juce:Button
// Entry    : 0022cd20
// Prototype: undefined mouseExit(Button * param_1)
// Body     : 0022cd20 - 0022cd28


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Button::mouseExit(juce::MouseEvent const&) */

void __cdecl juce::Button::mouseExit(Button *param_1)

{
  updateState(param_1,0,'\0');
  return;
}


