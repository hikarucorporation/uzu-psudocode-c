// Function : getProgramListCount
// Namespace: juce:JuceVST3EditController
// Entry    : 001b4b60
// Prototype: bool getProgramListCount(JuceVST3EditController * this)
// Body     : 001b4b60 - 001b4b88


/* non-virtual thunk to juce::JuceVST3EditController::getProgramListCount() */

bool __thiscall juce::JuceVST3EditController::getProgramListCount(JuceVST3EditController *this)

{
  int iVar1;
  
  if (*(long *)(this + 0x58) == 0) {
    return false;
  }
  iVar1 = (**(code **)(**(long **)(*(long *)(this + 0x58) + 0xd8) + 0xe0))();
  return 0 < iVar1;
}


