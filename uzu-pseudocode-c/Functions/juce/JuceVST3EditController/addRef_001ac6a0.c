// Function : addRef
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac6a0
// Prototype: undefined4 addRef(JuceVST3EditController * this)
// Body     : 001ac6a0 - 001ac6a8


/* non-virtual thunk to juce::JuceVST3EditController::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::addRef(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x80) = *(int *)(this + -0x80) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x80);
}


