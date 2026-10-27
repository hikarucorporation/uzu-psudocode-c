// Function : getLatencySamples
// Namespace: juce:JuceVST3Component
// Entry    : 001a9fe0
// Prototype: int getLatencySamples(JuceVST3Component * this)
// Body     : 001a9fe0 - 001a9fee


/* non-virtual thunk to juce::JuceVST3Component::getLatencySamples() */

int __thiscall juce::JuceVST3Component::getLatencySamples(JuceVST3Component *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < *(int *)(*(long *)(this + 0x60) + 0x3c)) {
    iVar1 = *(int *)(*(long *)(this + 0x60) + 0x3c);
  }
  return iVar1;
}


