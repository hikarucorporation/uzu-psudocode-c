// Function : setPlayHead
// Namespace: juce:AudioProcessor
// Entry    : 004c9260
// Prototype: undefined setPlayHead(AudioProcessor * this, undefined8 param_1)
// Body     : 004c9260 - 004c9264


/* juce::AudioProcessor::setPlayHead(juce::AudioPlayHead*) */

void __thiscall juce::AudioProcessor::setPlayHead(AudioProcessor *this,undefined8 param_1)

{
  LOCK();
  *(undefined8 *)(this + 0x10) = param_1;
  UNLOCK();
  return;
}


