// Function : release
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac740
// Prototype: int release(JuceVST3EditController * this)
// Body     : 001ac740 - 001ac765


/* non-virtual thunk to juce::JuceVST3EditController::release() */

int __thiscall juce::JuceVST3EditController::release(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + -0x10) = *(int *)(this + -0x10) + -1;
  UNLOCK();
  if (*(int *)(this + -0x10) == 0) {
    *(undefined4 *)(this + -0x10) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x18) + 0x28))();
    return 0;
  }
  return *(int *)(this + -0x10);
}


