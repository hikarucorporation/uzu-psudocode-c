// Function : addRef
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac660
// Prototype: undefined4 addRef(JuceVST3EditController * this)
// Body     : 001ac660 - 001ac668


/* non-virtual thunk to juce::JuceVST3EditController::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::addRef(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -8);
}


