// Function : ~LegacyAudioParametersWrapper
// Namespace: juce:LegacyAudioParametersWrapper
// Entry    : 001aadc0
// Prototype: undefined ~LegacyAudioParametersWrapper(LegacyAudioParametersWrapper * this)
// Body     : 001aadc0 - 001aade0


/* juce::LegacyAudioParametersWrapper::~LegacyAudioParametersWrapper() */

void __thiscall
juce::LegacyAudioParametersWrapper::~LegacyAudioParametersWrapper
          (LegacyAudioParametersWrapper *this)

{
  *(undefined4 *)(this + 0x44) = 0;
  free(*(void **)(this + 0x38));
  AudioProcessorParameterGroup::~AudioProcessorParameterGroup
            ((AudioProcessorParameterGroup *)(this + 8));
  return;
}


