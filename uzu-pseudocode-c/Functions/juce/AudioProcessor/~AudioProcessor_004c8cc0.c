// Function : ~AudioProcessor
// Namespace: juce:AudioProcessor
// Entry    : 004c8cc0
// Prototype: undefined ~AudioProcessor(AudioProcessor * this)
// Body     : 004c8cc0 - 004c8e26


/* juce::AudioProcessor::~AudioProcessor() */

void __thiscall juce::AudioProcessor::~AudioProcessor(AudioProcessor *this)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long lVar2;
  int *piVar3;
  
  *(undefined ***)this = &PTR__AudioProcessor_007142b8;
  __mutex = (pthread_mutex_t *)(this + 0x98);
  pthread_mutex_lock(__mutex);
  pthread_mutex_unlock(__mutex);
  *(undefined4 *)(this + 0x134) = 0;
  free(*(void **)(this + 0x128));
  OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
  ::~OwnedArray((OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
                 *)(this + 0x110));
  piVar3 = (int *)(*(long *)(this + 0x108) + -0x10);
  if (piVar3 == &emptyString) {
LAB_004c8d2f:
    lVar2 = *(long *)(this + 0x100);
  }
  else {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_004c8d2f;
    operator_delete__(piVar3);
    lVar2 = *(long *)(this + 0x100);
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
  piVar3 = (int *)(*(long *)(this + 0xf8) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 0xe8);
      goto joined_r0x004c8d93;
    }
  }
  lVar2 = *(long *)(this + 0xe8);
joined_r0x004c8d93:
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
  piVar3 = (int *)(*(long *)(this + 0xe0) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection>::~OwnedArray
            ((OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection> *)(this + 0xd0));
  OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection>::~OwnedArray
            ((OwnedArray<juce::AudioProcessor::Bus,juce::DummyCriticalSection> *)(this + 0xc0));
  pthread_mutex_destroy(__mutex);
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x70));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x48));
  *(undefined4 *)(this + 0x24) = 0;
  free(*(void **)(this + 0x18));
  return;
}


