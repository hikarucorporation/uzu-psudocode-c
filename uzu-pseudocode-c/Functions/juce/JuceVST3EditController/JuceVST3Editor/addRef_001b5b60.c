// Function : addRef
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b5b60
// Prototype: undefined4 addRef(JuceVST3Editor * this)
// Body     : 001b5b60 - 001b5b68


/* juce::JuceVST3EditController::JuceVST3Editor::addRef() */

undefined4 __thiscall juce::JuceVST3EditController::JuceVST3Editor::addRef(JuceVST3Editor *this)

{
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + 8);
}


