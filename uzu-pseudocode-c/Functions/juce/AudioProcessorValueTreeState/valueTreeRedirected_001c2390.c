// Function : valueTreeRedirected
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c2390
// Prototype: undefined valueTreeRedirected(AudioProcessorValueTreeState * this, long * param_1)
// Body     : 001c2390 - 001c23a2


/* non-virtual thunk to juce::AudioProcessorValueTreeState::valueTreeRedirected(juce::ValueTree&) */

void __thiscall
juce::AudioProcessorValueTreeState::valueTreeRedirected
          (AudioProcessorValueTreeState *this,long *param_1)

{
  if (*param_1 == *(long *)(this + 0x10)) {
    updateParameterConnectionsToChildTrees(this + -0x28);
    return;
  }
  return;
}


