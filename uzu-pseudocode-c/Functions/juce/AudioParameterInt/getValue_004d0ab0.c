// Function : getValue
// Namespace: juce:AudioParameterInt
// Entry    : 004d0ab0
// Prototype: undefined getValue(AudioParameterInt * this)
// Body     : 004d0ab0 - 004d0abc


/* juce::AudioParameterInt::getValue() const */

void __thiscall juce::AudioParameterInt::getValue(AudioParameterInt *this)

{
  RangedAudioParameter::convertTo0to1((ulong)*(uint *)(this + 0xf8),(RangedAudioParameter *)this);
  return;
}


