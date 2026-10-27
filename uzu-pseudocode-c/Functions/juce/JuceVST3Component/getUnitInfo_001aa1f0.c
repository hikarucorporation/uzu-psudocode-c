// Function : getUnitInfo
// Namespace: juce:JuceVST3Component
// Entry    : 001aa1f0
// Prototype: undefined getUnitInfo(JuceVST3Component * this, int param_1, uint * param_2)
// Body     : 001aa1f0 - 001aa1f8


/* non-virtual thunk to juce::JuceVST3Component::getUnitInfo(int, Steinberg::Vst::UnitInfo&) */

void __thiscall
juce::JuceVST3Component::getUnitInfo(JuceVST3Component *this,int param_1,uint *param_2)

{
  JuceAudioProcessor::getUnitInfo(*(JuceAudioProcessor **)(this + 0x68),param_1,param_2);
  return;
}


