// Function : release
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac800
// Prototype: int release(JuceVST3EditController * this)
// Body     : 001ac800 - 001ac838


/* non-virtual thunk to juce::JuceVST3EditController::release() */

int __thiscall juce::JuceVST3EditController::release(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x88) = *(int *)(this + -0x88) + -1;
  UNLOCK();
  if (*(int *)(this + -0x88) == 0) {
    *(undefined4 *)(this + -0x88) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x90) + 0x28))(this + -0x90);
    return 0;
  }
  return *(int *)(this + -0x88);
}


