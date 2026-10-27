// Function : release
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac840
// Prototype: int release(JuceVST3EditController * this)
// Body     : 001ac840 - 001ac878


/* non-virtual thunk to juce::JuceVST3EditController::release() */

int __thiscall juce::JuceVST3EditController::release(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x90) = *(int *)(this + -0x90) + -1;
  UNLOCK();
  if (*(int *)(this + -0x90) == 0) {
    *(undefined4 *)(this + -0x90) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x98) + 0x28))(this + -0x98);
    return 0;
  }
  return *(int *)(this + -0x90);
}


