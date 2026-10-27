// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__LegacyAudioParameter_std__default_delete_juce__LegacyAudioParameter__
// Entry    : 001abb40
// Prototype: undefined ~unique_ptr(unique_ptr<juce::LegacyAudioParameter,std::default_delete<juce::LegacyAudioParameter>> * this)
// Body     : 001abb40 - 001abb6d


/* std::unique_ptr<juce::LegacyAudioParameter, std::default_delete<juce::LegacyAudioParameter>
   >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::LegacyAudioParameter,std::default_delete<juce::LegacyAudioParameter>>::
~unique_ptr(unique_ptr<juce::LegacyAudioParameter,std::default_delete<juce::LegacyAudioParameter>>
            *this)

{
  AudioProcessorParameter *this_00;
  
  this_00 = *(AudioProcessorParameter **)this;
  if (this_00 != (AudioProcessorParameter *)0x0) {
    juce::AudioProcessorParameter::~AudioProcessorParameter(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)this = 0;
  return;
}


