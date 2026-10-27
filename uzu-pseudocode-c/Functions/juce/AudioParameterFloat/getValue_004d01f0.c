// Function : getValue
// Namespace: juce:AudioParameterFloat
// Entry    : 004d01f0
// Prototype: undefined getValue(AudioParameterFloat * this)
// Body     : 004d01f0 - 004d01fc


/* juce::AudioParameterFloat::getValue() const */

void __thiscall juce::AudioParameterFloat::getValue(AudioParameterFloat *this)

{
  RangedAudioParameter::convertTo0to1((ulong)*(uint *)(this + 0xf8),(RangedAudioParameter *)this);
  return;
}


