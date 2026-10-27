// Function : getProgramInfo
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4cd0
// Prototype: char getProgramInfo(JuceVST3EditController * this)
// Body     : 001b4cd0 - 001b4cdf


/* non-virtual thunk to juce::JuceVST3EditController::getProgramInfo(int, int, char const*,
   char16_t*) */

char __thiscall juce::JuceVST3EditController::getProgramInfo(JuceVST3EditController *this)

{
  return (*(long *)(this + 0x58) != 0) * '\x02' + '\x01';
}


