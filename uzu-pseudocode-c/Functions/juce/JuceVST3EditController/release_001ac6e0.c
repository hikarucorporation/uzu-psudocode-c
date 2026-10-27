// Function : release
// Namespace: juce:JuceVST3EditController
// Entry    : 001ac6e0
// Prototype: int release(JuceVST3EditController * this)
// Body     : 001ac6e0 - 001ac701


/* juce::JuceVST3EditController::release() */

int __thiscall juce::JuceVST3EditController::release(JuceVST3EditController *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  UNLOCK();
  if (*(int *)(this + 8) == 0) {
    *(undefined4 *)(this + 8) = 0xfffffc18;
    (**(code **)(*(long *)this + 0x28))();
    return 0;
  }
  return *(int *)(this + 8);
}


