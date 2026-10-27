// Function : release
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac7d0
// Prototype: int release(JuceVST3EditController * this)
// Body     : 001ac7d0 - 001ac7ff


/* non-virtual thunk to juce::JuceVST3EditController::release() */

int __thiscall juce::JuceVST3EditController::release(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x80) = *(int *)(this + -0x80) + -1;
  UNLOCK();
  if (*(int *)(this + -0x80) == 0) {
    *(undefined4 *)(this + -0x80) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x88) + 0x28))(this + -0x88);
    return 0;
  }
  return *(int *)(this + -0x80);
}


