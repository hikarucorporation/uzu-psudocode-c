// Function : getProgramName
// Namespace: juce:JuceVST3Component
// Entry    : 001a92a0
// Prototype: undefined getProgramName(JuceVST3Component * this, int param_1, uint param_2, long param_3)
// Body     : 001a92a0 - 001a92a8


/* juce::JuceVST3Component::getProgramName(int, int, char16_t*) */

void __thiscall
juce::JuceVST3Component::getProgramName
          (JuceVST3Component *this,int param_1,uint param_2,long param_3)

{
  JuceAudioProcessor::getProgramName(*(JuceAudioProcessor **)(this + 0x78),param_1,param_2,param_3);
  return;
}


