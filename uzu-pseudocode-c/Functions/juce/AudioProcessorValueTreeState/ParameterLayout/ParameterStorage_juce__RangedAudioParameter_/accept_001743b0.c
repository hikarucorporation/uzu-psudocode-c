// Function : accept
// Namespace: juce:AudioProcessorValueTreeState:ParameterLayout:ParameterStorage_juce__RangedAudioParameter_
// Entry    : 001743b0
// Prototype: undefined accept(ParameterStorage<juce::RangedAudioParameter> * this, long * param_1)
// Body     : 001743b0 - 001743ec


/* juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorage<juce::RangedAudioParameter>::accept(juce::AudioProcessorValueTreeState::ParameterLayout::Visitor
   const&) */

void __thiscall
juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorage<juce::RangedAudioParameter>::
accept(ParameterStorage<juce::RangedAudioParameter> *this,long *param_1)

{
  long *local_10;
  
  local_10 = *(long **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
                    /* try { // try from 001743cc to 001743d6 has its CatchHandler @ 001743ed */
  (**(code **)(*param_1 + 0x10))(param_1,&local_10);
  if (local_10 != (long *)0x0) {
    (**(code **)(*local_10 + 8))();
  }
  return;
}


