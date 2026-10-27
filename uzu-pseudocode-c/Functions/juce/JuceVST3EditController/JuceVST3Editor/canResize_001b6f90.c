// Function : canResize
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b6f90
// Prototype: undefined8 canResize(JuceVST3Editor * this)
// Body     : 001b6f90 - 001b6fbe


/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::canResize() */

undefined8 __thiscall juce::JuceVST3EditController::JuceVST3Editor::canResize(JuceVST3Editor *this)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if ((*(long *)(this + 200) == 0) ||
     ((lVar1 = *(long *)(*(long *)(this + 200) + 0xf0), lVar1 != 0 &&
      (uVar2 = 0, *(char *)(lVar1 + 0x108) != '\0')))) {
    return uVar2;
  }
  return 1;
}


