// Function : release
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b6d70
// Prototype: int release(JuceVST3Editor * this)
// Body     : 001b6d70 - 001b6d99


/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::release() */

int __thiscall juce::JuceVST3EditController::JuceVST3Editor::release(JuceVST3Editor *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + -1;
  UNLOCK();
  if (*(int *)(this + -8) == 0) {
    *(undefined4 *)(this + -8) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x10) + 0x28))(this + -0x10);
    return 0;
  }
  return *(int *)(this + -8);
}


