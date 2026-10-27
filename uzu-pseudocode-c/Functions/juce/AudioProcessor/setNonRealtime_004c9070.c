// Function : setNonRealtime
// Namespace: juce:AudioProcessor
// Entry    : 004c9070
// Prototype: undefined setNonRealtime(AudioProcessor * this, AudioProcessor param_2)
// Body     : 004c9070 - 004c9074


/* juce::AudioProcessor::setNonRealtime(bool) */

void __thiscall juce::AudioProcessor::setNonRealtime(AudioProcessor *this,AudioProcessor param_2)

{
  LOCK();
  this[0x41] = param_2;
  UNLOCK();
  return;
}


