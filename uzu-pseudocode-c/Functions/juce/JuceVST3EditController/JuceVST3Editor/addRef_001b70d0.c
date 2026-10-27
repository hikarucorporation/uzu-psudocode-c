// Function : addRef
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b70d0
// Prototype: undefined4 addRef(JuceVST3Editor * this)
// Body     : 001b70d0 - 001b70d8


/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::JuceVST3Editor::addRef(JuceVST3Editor *this)

{
  LOCK();
  *(int *)(this + -0x40) = *(int *)(this + -0x40) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -0x40);
}


