// Function : release
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b70e0
// Prototype: int release(JuceVST3Editor * this)
// Body     : 001b70e0 - 001b7105


/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::release() */

int __thiscall juce::JuceVST3EditController::JuceVST3Editor::release(JuceVST3Editor *this)

{
  LOCK();
  *(int *)(this + -0x40) = *(int *)(this + -0x40) + -1;
  UNLOCK();
  if (*(int *)(this + -0x40) == 0) {
    *(undefined4 *)(this + -0x40) = 0xfffffc18;
    (**(code **)(*(long *)(this + -0x48) + 0x28))();
    return 0;
  }
  return *(int *)(this + -0x40);
}


