// Function : canProcessSampleSize
// Namespace: juce:JuceVST3Component
// Entry    : 001a99f0
// Prototype: byte canProcessSampleSize(JuceVST3Component * this, int param_1)
// Body     : 001a99f0 - 001a9a15


/* juce::JuceVST3Component::canProcessSampleSize(int) */

byte __thiscall juce::JuceVST3Component::canProcessSampleSize(JuceVST3Component *this,int param_1)

{
  byte bVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = (**(code **)(**(long **)(this + 0x68) + 0x80))();
  return param_1 != 1 | bVar1 ^ 1;
}


