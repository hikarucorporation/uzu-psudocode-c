// Function : getDefaultValue
// Namespace: juce:AudioParameterFloat
// Entry    : 004d0230
// Prototype: undefined getDefaultValue(AudioParameterFloat * this)
// Body     : 004d0230 - 004d023c


/* juce::AudioParameterFloat::getDefaultValue() const */

void __thiscall juce::AudioParameterFloat::getDefaultValue(AudioParameterFloat *this)

{
  RangedAudioParameter::convertTo0to1((ulong)*(uint *)(this + 0xfc),(RangedAudioParameter *)this);
  return;
}


