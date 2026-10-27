// Function : getCurrentValueAsString
// Namespace: juce:LabelAccessibilityHandler:LabelValueInterface
// Entry    : 002834a0
// Prototype: undefined8 getCurrentValueAsString(undefined8 param_1, long param_2)
// Body     : 002834a0 - 002834e8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LabelAccessibilityHandler::LabelValueInterface::getCurrentValueAsString() const */

undefined8 __cdecl
juce::LabelAccessibilityHandler::LabelValueInterface::getCurrentValueAsString
          (undefined8 param_1,long param_2)

{
  long local_20;
  undefined1 local_18 [8];
  
  (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x178) + 0x10))(&local_20);
                    /* try { // try from 002834ca to 002834d2 has its CatchHandler @ 002834f1 */
  (**(code **)(local_20 + 0x28))(param_1,local_18);
                    /* try { // try from 002834d8 to 002834dd has its CatchHandler @ 002834e9 */
  (**(code **)(local_20 + 0x58))(local_18);
  return param_1;
}


