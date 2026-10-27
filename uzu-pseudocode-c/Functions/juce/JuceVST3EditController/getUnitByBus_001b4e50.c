// Function : getUnitByBus
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4e50
// Prototype: undefined8 getUnitByBus(JuceVST3EditController * this)
// Body     : 001b4e50 - 001b4e66


/* non-virtual thunk to juce::JuceVST3EditController::getUnitByBus(int, int, int, int, int&) */

undefined8 __thiscall juce::JuceVST3EditController::getUnitByBus(JuceVST3EditController *this)

{
  undefined4 *in_R9;
  
  if (*(long *)(this + 0x58) == 0) {
    return 1;
  }
  *in_R9 = 0;
  return 0;
}


