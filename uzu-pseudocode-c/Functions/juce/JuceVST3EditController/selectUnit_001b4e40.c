// Function : selectUnit
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4e40
// Prototype: char selectUnit(JuceVST3EditController * this)
// Body     : 001b4e40 - 001b4e4f


/* non-virtual thunk to juce::JuceVST3EditController::selectUnit(int) */

char __thiscall juce::JuceVST3EditController::selectUnit(JuceVST3EditController *this)

{
  return (*(long *)(this + 0x58) != 0) * '\x02' + '\x01';
}


