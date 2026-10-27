// Function : ~LegacyAudioParameter
// Namespace: juce:LegacyAudioParameter
// Entry    : 001abb70
// Prototype: undefined ~LegacyAudioParameter(LegacyAudioParameter * this)
// Body     : 001abb70 - 001abb81


/* juce::LegacyAudioParameter::~LegacyAudioParameter() */

void __thiscall juce::LegacyAudioParameter::~LegacyAudioParameter(LegacyAudioParameter *this)

{
  AudioProcessorParameter::~AudioProcessorParameter((AudioProcessorParameter *)this);
  operator_delete(this);
  return;
}


