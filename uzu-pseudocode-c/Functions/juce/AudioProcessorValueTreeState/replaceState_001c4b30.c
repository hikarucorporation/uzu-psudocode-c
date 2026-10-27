// Function : replaceState
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c4b30
// Prototype: undefined replaceState(AudioProcessorValueTreeState * this, long * param_1)
// Body     : 001c4b30 - 001c4b70


/* juce::AudioProcessorValueTreeState::replaceState(juce::ValueTree const&) */

void __thiscall
juce::AudioProcessorValueTreeState::replaceState(AudioProcessorValueTreeState *this,long *param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)(this + 0xb8));
                    /* try { // try from 001c4b4e to 001c4b63 has its CatchHandler @ 001c4b71 */
  ValueTree::operator=((ValueTree *)(this + 0x38),param_1);
  if (*(UndoManager **)(this + 0x68) != (UndoManager *)0x0) {
    UndoManager::clearUndoHistory(*(UndoManager **)(this + 0x68));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0xb8));
  return;
}


