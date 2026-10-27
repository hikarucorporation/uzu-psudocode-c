// Function : ~AudioParameterBool
// Namespace: juce:AudioParameterBool
// Entry    : 004d1490
// Prototype: undefined ~AudioParameterBool(AudioParameterBool * this)
// Body     : 004d1490 - 004d14a1


/* juce::AudioParameterBool::~AudioParameterBool() */

void __thiscall juce::AudioParameterBool::~AudioParameterBool(AudioParameterBool *this)

{
  ~AudioParameterBool(this);
  operator_delete(this);
  return;
}


