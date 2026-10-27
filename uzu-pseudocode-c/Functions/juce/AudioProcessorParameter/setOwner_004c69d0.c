// Function : setOwner
// Namespace: juce:AudioProcessorParameter
// Entry    : 004c69d0
// Prototype: undefined setOwner(AudioProcessorParameter * this, undefined8 param_1)
// Body     : 004c69d0 - 004c69d4


/* juce::AudioProcessorParameter::setOwner(juce::AudioProcessorParameter::Listener*) */

void __thiscall
juce::AudioProcessorParameter::setOwner(AudioProcessorParameter *this,undefined8 param_1)

{
  *(undefined8 *)(this + 0x48) = param_1;
  return;
}


