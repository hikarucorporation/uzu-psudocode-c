// Function : getCurrentValueAsString
// Namespace: juce:SliderAccessibilityHandler:ValueInterface
// Entry    : 002e5280
// Prototype: undefined8 getCurrentValueAsString(undefined8 param_1, long param_2)
// Body     : 002e5280 - 002e52f8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SliderAccessibilityHandler::ValueInterface::getCurrentValueAsString() const */

undefined8 __cdecl
juce::SliderAccessibilityHandler::ValueInterface::getCurrentValueAsString
          (undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long local_28;
  undefined1 local_20 [8];
  
  plVar1 = *(long **)(param_2 + 8);
  if (*(char *)(param_2 + 0x10) == '\0') {
    (**(code **)(**(long **)(plVar1[0x34] + 0x50) + 0x10))(&local_28);
                    /* try { // try from 002e52c0 to 002e52cb has its CatchHandler @ 002e5301 */
    uVar2 = (**(code **)(local_28 + 0x20))(local_20);
                    /* try { // try from 002e52d1 to 002e52d6 has its CatchHandler @ 002e52f9 */
    (**(code **)(local_28 + 0x58))(local_20);
  }
  else {
    uVar2 = *(undefined8 *)(plVar1[0x34] + 0x100);
  }
  (**(code **)(*plVar1 + 0x1b8))(uVar2,param_1,plVar1);
  return param_1;
}


