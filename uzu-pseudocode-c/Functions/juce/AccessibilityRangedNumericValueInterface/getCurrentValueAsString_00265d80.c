// Function : getCurrentValueAsString
// Namespace: juce:AccessibilityRangedNumericValueInterface
// Entry    : 00265d80
// Prototype: String * getCurrentValueAsString(String * param_1, long * param_2)
// Body     : 00265d80 - 00265d99


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AccessibilityRangedNumericValueInterface::getCurrentValueAsString() const */

String * __cdecl
juce::AccessibilityRangedNumericValueInterface::getCurrentValueAsString
          (String *param_1,long *param_2)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(*param_2 + 0x18))(param_2);
  juce::String::String(dVar1,param_1);
  return param_1;
}


