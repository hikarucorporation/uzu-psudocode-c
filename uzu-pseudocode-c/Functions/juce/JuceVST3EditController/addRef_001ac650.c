// Function : addRef
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac650
// Prototype: undefined4 addRef(JuceVST3EditController * this)
// Body     : 001ac650 - 001ac658


/* juce::JuceVST3EditController::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::addRef(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


