// Function : release
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac770
// Prototype: int release(JuceVST3EditController * this)
// Body     : 001ac770 - 001ac799


/* non-virtual thunk to juce::JuceVST3EditController::release() */

int __thiscall juce::JuceVST3EditController::release(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x28) = *(int *)(this + -0x28) + -1;
  UNLOCK();
  if (*(int *)(this + -0x28) == 0) {
    *(undefined4 *)(this + -0x28) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x30) + 0x28))(this + -0x30);
    return 0;
  }
  return *(int *)(this + -0x28);
}


