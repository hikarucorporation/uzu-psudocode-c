// Function : getUnitCount
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4a80
// Prototype: int getUnitCount(JuceVST3EditController * this)
// Body     : 001b4a80 - 001b4a98


/* non-virtual thunk to juce::JuceVST3EditController::getUnitCount() */

int __thiscall juce::JuceVST3EditController::getUnitCount(JuceVST3EditController *this)

{
  if (*(long *)(this + 0x58) == 0) {
    return 1;
  }
  return *(int *)(*(long *)(this + 0x58) + 0x18c) + 1;
}


