// Function : getCurrentValueAsString
// Namespace: juce:ComboBoxAccessibilityHandler:ComboBoxValueInterface
// Entry    : 002dd590
// Prototype: undefined8 getCurrentValueAsString(undefined8 param_1, long param_2)
// Body     : 002dd590 - 002dd5df


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComboBoxAccessibilityHandler::ComboBoxValueInterface::getCurrentValueAsString() const */

undefined8 __cdecl
juce::ComboBoxAccessibilityHandler::ComboBoxValueInterface::getCurrentValueAsString
          (undefined8 param_1,long param_2)

{
  long local_20;
  undefined1 local_18 [8];
  
  (**(code **)(**(long **)(*(long *)(*(long *)(param_2 + 8) + 0x1b8) + 0x178) + 0x10))(&local_20);
                    /* try { // try from 002dd5c1 to 002dd5c9 has its CatchHandler @ 002dd5e8 */
  (**(code **)(local_20 + 0x28))(param_1,local_18);
                    /* try { // try from 002dd5cf to 002dd5d4 has its CatchHandler @ 002dd5e0 */
  (**(code **)(local_20 + 0x58))(local_18);
  return param_1;
}


