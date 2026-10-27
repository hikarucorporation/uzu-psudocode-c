// Function : ~AudioProcessorParameterWithID
// Namespace: juce:AudioProcessorParameterWithID
// Entry    : 004cfef0
// Prototype: undefined ~AudioProcessorParameterWithID(AudioProcessorParameterWithID * this)
// Body     : 004cfef0 - 004d000a


/* juce::AudioProcessorParameterWithID::~AudioProcessorParameterWithID() */

void __thiscall
juce::AudioProcessorParameterWithID::~AudioProcessorParameterWithID
          (AudioProcessorParameterWithID *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__AudioProcessorParameterWithID_00714588;
  piVar3 = (int *)(*(long *)(this + 0x70) + -0x10);
  if (piVar3 == &emptyString) {
LAB_004cff23:
    lVar2 = *(long *)(this + 0x68);
  }
  else {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_004cff23;
    operator_delete__(piVar3);
    lVar2 = *(long *)(this + 0x68);
  }
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(*(long *)(this + 0x60) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      *(undefined ***)this = &PTR__AudioProcessorParameter_00714218;
      iVar1 = *(int *)(this + 0x5c);
      goto joined_r0x004cff7f;
    }
  }
  *(undefined ***)this = &PTR__AudioProcessorParameter_00714218;
  iVar1 = *(int *)(this + 0x5c);
joined_r0x004cff7f:
  if (0 < iVar1) {
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


