// Function : getBusCount
// Namespace: juce:JuceVST3Component
// Entry    : 001a7ff0
// Prototype: undefined4 getBusCount(JuceVST3Component * this, int param_1, int param_2)
// Body     : 001a7ff0 - 001a800d


/* juce::JuceVST3Component::getBusCount(int, int) */

undefined4 __thiscall
juce::JuceVST3Component::getBusCount(JuceVST3Component *this,int param_1,int param_2)

{
  if (param_1 == 0) {
    return *(undefined4 *)((ulong)(param_2 != 0) * 0x10 + 0xcc + *(long *)(this + 0x68));
  }
  return 0;
}


