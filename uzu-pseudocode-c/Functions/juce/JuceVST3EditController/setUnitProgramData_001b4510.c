// Function : setUnitProgramData
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4510
// Prototype: char setUnitProgramData(long param_1)
// Body     : 001b4510 - 001b4522


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::setUnitProgramData(int, int, Steinberg::IBStream*) */

char __cdecl juce::JuceVST3EditController::setUnitProgramData(long param_1)

{
  return (*(long *)(param_1 + 0xe8) != 0) * '\x02' + '\x01';
}


