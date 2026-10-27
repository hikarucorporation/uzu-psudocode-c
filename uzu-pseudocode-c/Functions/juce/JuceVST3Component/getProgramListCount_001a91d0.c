// Function : getProgramListCount
// Namespace: juce:JuceVST3Component
// Entry    : 001a91d0
// Prototype: bool getProgramListCount(JuceVST3Component * this)
// Body     : 001a91d0 - 001a91ef


/* juce::JuceVST3Component::getProgramListCount() */

bool __thiscall juce::JuceVST3Component::getProgramListCount(JuceVST3Component *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(*(long *)(this + 0x78) + 0xd8) + 0xe0))();
  return 0 < iVar1;
}


