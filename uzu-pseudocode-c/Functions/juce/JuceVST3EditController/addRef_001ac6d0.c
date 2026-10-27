// Function : addRef
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac6d0
// Prototype: undefined4 addRef(JuceVST3EditController * this)
// Body     : 001ac6d0 - 001ac6de


/* non-virtual thunk to juce::JuceVST3EditController::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::addRef(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x98) = *(int *)(this + -0x98) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x98);
}


