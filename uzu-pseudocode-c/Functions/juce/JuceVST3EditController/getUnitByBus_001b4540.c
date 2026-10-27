// Function : getUnitByBus
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4540
// Prototype: undefined8 getUnitByBus(long param_1)
// Body     : 001b4540 - 001b4559


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::getUnitByBus(int, int, int, int, int&) */

undefined8 __cdecl juce::JuceVST3EditController::getUnitByBus(long param_1)

{
  undefined4 *in_R9;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    return 1;
  }
  *in_R9 = 0;
  return 0;
}


