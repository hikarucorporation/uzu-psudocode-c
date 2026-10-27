// Function : editorBeingDeleted
// Namespace: juce:AudioProcessor
// Entry    : 004cccd0
// Prototype: undefined editorBeingDeleted(AudioProcessor * this, long param_1)
// Body     : 004cccd0 - 004ccd04


/* juce::AudioProcessor::editorBeingDeleted(juce::AudioProcessorEditor*) */

void __thiscall juce::AudioProcessor::editorBeingDeleted(AudioProcessor *this,long param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  if (*(long *)(this + 0x28) == param_1) {
    *(undefined8 *)(this + 0x28) = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  return;
}


