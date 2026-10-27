// Function : valueTreeRedirected
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c22c0
// Prototype: undefined valueTreeRedirected(AudioProcessorValueTreeState * this, long * param_1)
// Body     : 001c22c0 - 001c22ce


/* juce::AudioProcessorValueTreeState::valueTreeRedirected(juce::ValueTree&) */

void __thiscall
juce::AudioProcessorValueTreeState::valueTreeRedirected
          (AudioProcessorValueTreeState *this,long *param_1)

{
  if (*param_1 == *(long *)(this + 0x38)) {
    updateParameterConnectionsToChildTrees(this);
    return;
  }
  return;
}


