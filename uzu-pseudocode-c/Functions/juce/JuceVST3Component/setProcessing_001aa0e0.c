// Function : setProcessing
// Namespace: juce:JuceVST3Component
// Entry    : 001aa0e0
// Prototype: undefined8 setProcessing(JuceVST3Component * this, int param_1)
// Body     : 001aa0e0 - 001aa0fb


/* non-virtual thunk to juce::JuceVST3Component::setProcessing(unsigned char) */

undefined8 __thiscall juce::JuceVST3Component::setProcessing(JuceVST3Component *this,int param_1)

{
  if (param_1 == 0) {
    (**(code **)(**(long **)(this + 0x60) + 0xb0))();
    return 0;
  }
  return 0;
}


