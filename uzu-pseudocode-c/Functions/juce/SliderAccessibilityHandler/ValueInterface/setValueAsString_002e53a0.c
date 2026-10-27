// Function : setValueAsString
// Namespace: juce:SliderAccessibilityHandler:ValueInterface
// Entry    : 002e53a0
// Prototype: undefined setValueAsString(ValueInterface * param_1)
// Body     : 002e53a0 - 002e53b9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SliderAccessibilityHandler::ValueInterface::setValueAsString(juce::String const&) */

void __cdecl
juce::SliderAccessibilityHandler::ValueInterface::setValueAsString(ValueInterface *param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(**(long **)(param_1 + 8) + 0x1b0))();
  setValue(dVar1,param_1);
  return;
}


