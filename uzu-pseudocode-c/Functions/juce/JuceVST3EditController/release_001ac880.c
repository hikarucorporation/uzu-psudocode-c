// Function : release
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac880
// Prototype: int release(JuceVST3EditController * this)
// Body     : 001ac880 - 001ac8b8


/* non-virtual thunk to juce::JuceVST3EditController::release() */

int __thiscall juce::JuceVST3EditController::release(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x98) = *(int *)(this + -0x98) + -1;
  UNLOCK();
  if (*(int *)(this + -0x98) == 0) {
    *(undefined4 *)(this + -0x98) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0xa0) + 0x28))(this + -0xa0);
    return 0;
  }
  return *(int *)(this + -0x98);
}


