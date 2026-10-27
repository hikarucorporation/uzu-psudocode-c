// Function : getTitle
// Namespace: juce:LabelAccessibilityHandler
// Entry    : 002832e0
// Prototype: undefined8 getTitle(undefined8 param_1, long param_2)
// Body     : 002832e0 - 00283328


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LabelAccessibilityHandler::getTitle() const */

undefined8 __cdecl juce::LabelAccessibilityHandler::getTitle(undefined8 param_1,long param_2)

{
  long local_20;
  undefined1 local_18 [8];
  
  (**(code **)(**(long **)(*(long *)(param_2 + 0x78) + 0x178) + 0x10))(&local_20);
                    /* try { // try from 0028330a to 00283312 has its CatchHandler @ 00283331 */
  (**(code **)(local_20 + 0x28))(param_1,local_18);
                    /* try { // try from 00283318 to 0028331d has its CatchHandler @ 00283329 */
  (**(code **)(local_20 + 0x58))(local_18);
  return param_1;
}


