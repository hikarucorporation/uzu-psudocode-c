// Function : getProgramInfo
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4360
// Prototype: char getProgramInfo(long param_1)
// Body     : 001b4360 - 001b4372


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::getProgramInfo(int, int, char const*, char16_t*) */

char __cdecl juce::JuceVST3EditController::getProgramInfo(long param_1)

{
  return (*(long *)(param_1 + 0xe8) != 0) * '\x02' + '\x01';
}


