// Function : getActiveEditor
// Namespace: juce:AudioProcessor
// Entry    : 004ccd10
// Prototype: undefined8 getActiveEditor(AudioProcessor * this)
// Body     : 004ccd10 - 004ccd3c


/* juce::AudioProcessor::getActiveEditor() const */

undefined8 __thiscall juce::AudioProcessor::getActiveEditor(AudioProcessor *this)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  uVar1 = *(undefined8 *)(this + 0x28);
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  return uVar1;
}


