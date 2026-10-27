// Function : getProgramListCount
// Namespace: juce:JuceVST3EditController
// Entry    : 001b41f0
// Prototype: bool getProgramListCount(JuceVST3EditController * this)
// Body     : 001b41f0 - 001b421b


/* juce::JuceVST3EditController::getProgramListCount() */

bool __thiscall juce::JuceVST3EditController::getProgramListCount(JuceVST3EditController *this)

{
  int iVar1;
  
  if (*(long *)(this + 0xe8) == 0) {
    return false;
  }
  iVar1 = (**(code **)(**(long **)(*(long *)(this + 0xe8) + 0xd8) + 0xe0))();
  return 0 < iVar1;
}


