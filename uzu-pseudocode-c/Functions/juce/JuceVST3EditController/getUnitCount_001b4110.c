// Function : getUnitCount
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4110
// Prototype: int getUnitCount(JuceVST3EditController * this)
// Body     : 001b4110 - 001b412b


/* juce::JuceVST3EditController::getUnitCount() */

int __thiscall juce::JuceVST3EditController::getUnitCount(JuceVST3EditController *this)

{
  if (*(long *)(this + 0xe8) == 0) {
    return 1;
  }
  return *(int *)(*(long *)(this + 0xe8) + 0x18c) + 1;
}


