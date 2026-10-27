// Function : addRef
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac680
// Prototype: undefined4 addRef(JuceVST3EditController * this)
// Body     : 001ac680 - 001ac688


/* non-virtual thunk to juce::JuceVST3EditController::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::addRef(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x28);
}


