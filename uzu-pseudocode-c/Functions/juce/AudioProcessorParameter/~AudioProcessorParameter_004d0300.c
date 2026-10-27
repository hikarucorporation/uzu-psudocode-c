// Function : ~AudioProcessorParameter
// Namespace: juce:AudioProcessorParameter
// Entry    : 004d0300
// Prototype: undefined ~AudioProcessorParameter(AudioProcessorParameter * this)
// Body     : 004d0300 - 004d0394


/* juce::AudioProcessorParameter::~AudioProcessorParameter() */

void __thiscall
juce::AudioProcessorParameter::~AudioProcessorParameter(AudioProcessorParameter *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__AudioProcessorParameter_00714218;
  if (0 < *(int *)(this + 0x5c)) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)(this + 0x50) + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x5c));
  }
  *(undefined4 *)(this + 0x5c) = 0;
  free(*(void **)(this + 0x50));
  *(undefined4 *)(this + 0x44) = 0;
  free(*(void **)(this + 0x38));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10));
  return;
}


