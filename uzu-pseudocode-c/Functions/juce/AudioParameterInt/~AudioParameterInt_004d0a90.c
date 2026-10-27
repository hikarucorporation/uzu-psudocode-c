// Function : ~AudioParameterInt
// Namespace: juce:AudioParameterInt
// Entry    : 004d0a90
// Prototype: undefined ~AudioParameterInt(AudioParameterInt * this)
// Body     : 004d0a90 - 004d0aa1


/* juce::AudioParameterInt::~AudioParameterInt() */

void __thiscall juce::AudioParameterInt::~AudioParameterInt(AudioParameterInt *this)

{
  ~AudioParameterInt(this);
  operator_delete(this);
  return;
}


