// Function : ~AudioProcessorValueTreeState
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c2030
// Prototype: undefined ~AudioProcessorValueTreeState(AudioProcessorValueTreeState * this)
// Body     : 001c2030 - 001c2041


/* juce::AudioProcessorValueTreeState::~AudioProcessorValueTreeState() */

void __thiscall
juce::AudioProcessorValueTreeState::~AudioProcessorValueTreeState
          (AudioProcessorValueTreeState *this)

{
  ~AudioProcessorValueTreeState(this);
  operator_delete(this);
  return;
}


