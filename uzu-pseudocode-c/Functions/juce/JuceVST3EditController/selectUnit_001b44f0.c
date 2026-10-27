// Function : selectUnit
// Namespace: juce:JuceVST3EditController
// Entry    : 001b44f0
// Prototype: char selectUnit(long param_1)
// Body     : 001b44f0 - 001b4502


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::selectUnit(int) */

char __cdecl juce::JuceVST3EditController::selectUnit(long param_1)

{
  return (*(long *)(param_1 + 0xe8) != 0) * '\x02' + '\x01';
}


