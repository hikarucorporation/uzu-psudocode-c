// Function : ~AudioParameterFloat
// Namespace: juce:AudioParameterFloat
// Entry    : 004d01d0
// Prototype: undefined ~AudioParameterFloat(AudioParameterFloat * this)
// Body     : 004d01d0 - 004d01e1


/* juce::AudioParameterFloat::~AudioParameterFloat() */

void __thiscall juce::AudioParameterFloat::~AudioParameterFloat(AudioParameterFloat *this)

{
  ~AudioParameterFloat(this);
  operator_delete(this);
  return;
}


