// Function : addRef
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b6d60
// Prototype: undefined4 addRef(JuceVST3Editor * this)
// Body     : 001b6d60 - 001b6d68


/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::JuceVST3Editor::addRef(JuceVST3Editor *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -8);
}


