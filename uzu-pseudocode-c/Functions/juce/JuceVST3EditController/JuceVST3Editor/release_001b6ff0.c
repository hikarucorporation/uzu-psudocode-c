// Function : release
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b6ff0
// Prototype: int release(JuceVST3Editor * this)
// Body     : 001b6ff0 - 001b7019


/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::release() */

int __thiscall juce::JuceVST3EditController::JuceVST3Editor::release(JuceVST3Editor *this)

{
  LOCK();
  *(int *)(this + -0x38) = *(int *)(this + -0x38) + -1;
  UNLOCK();
  if (*(int *)(this + -0x38) == 0) {
    *(undefined4 *)(this + -0x38) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x40) + 0x28))(this + -0x40);
    return 0;
  }
  return *(int *)(this + -0x38);
}


