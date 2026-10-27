// Function : addRef
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac690
// Prototype: undefined4 addRef(JuceVST3EditController * this)
// Body     : 001ac690 - 001ac698


/* non-virtual thunk to juce::JuceVST3EditController::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::addRef(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x30) = *(int *)(this + -0x30) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x30);
}


