// Function : createEditorIfNeeded
// Namespace: juce:AudioProcessor
// Entry    : 004ccd40
// Prototype: long createEditorIfNeeded(AudioProcessor * this)
// Body     : 004ccd40 - 004ccd8b


/* juce::AudioProcessor::createEditorIfNeeded() */

long __thiscall juce::AudioProcessor::createEditorIfNeeded(AudioProcessor *this)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x98));
  if (*(long *)(this + 0x28) == 0) {
                    /* try { // try from 004ccd66 to 004ccd6e has its CatchHandler @ 004ccd8c */
    lVar1 = (**(code **)(*(long *)this + 200))(this);
    if (lVar1 != 0) {
      *(long *)(this + 0x28) = lVar1;
      goto LAB_004ccd7b;
    }
  }
  lVar1 = 0;
LAB_004ccd7b:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x98));
  return lVar1;
}


