// Function : ~ParameterStorage
// Namespace: juce:AudioProcessorValueTreeState:ParameterLayout:ParameterStorage_juce__RangedAudioParameter_
// Entry    : 00174380
// Prototype: undefined ~ParameterStorage(ParameterStorage<juce::RangedAudioParameter> * this)
// Body     : 00174380 - 001743a5


/* juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorage<juce::RangedAudioParameter>::~ParameterStorage()
    */

void __thiscall
juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorage<juce::RangedAudioParameter>::
~ParameterStorage(ParameterStorage<juce::RangedAudioParameter> *this)

{
  *(undefined ***)this = &PTR__ParameterStorage_00701f28;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}


