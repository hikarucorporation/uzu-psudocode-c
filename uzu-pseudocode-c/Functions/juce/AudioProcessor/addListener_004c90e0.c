// Function : addListener
// Namespace: juce:AudioProcessor
// Entry    : 004c90e0
// Prototype: undefined addListener(AudioProcessor * this, long param_1)
// Body     : 004c90e0 - 004c9193


/* juce::AudioProcessor::addListener(juce::AudioProcessorListener*) */

void __thiscall juce::AudioProcessor::addListener(AudioProcessor *this,long param_1)

{
  long lVar1;
  void *__ptr;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x70));
  __ptr = *(void **)(this + 0x18);
  iVar2 = *(int *)(this + 0x24);
  lVar1 = (long)iVar2;
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(long *)((long)__ptr + lVar3) == param_1) goto LAB_004c9182;
      lVar3 = lVar3 + 8;
    } while (lVar1 * 8 != lVar3);
  }
  if ((int)*(uint *)(this + 0x20) <= iVar2) {
    uVar4 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x20) != uVar4) {
      if ((int)uVar4 < 1) {
        free(__ptr);
        *(undefined8 *)(this + 0x18) = 0;
        __ptr = (void *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar4 << 3);
        *(void **)(this + 0x18) = __ptr;
      }
    }
    *(uint *)(this + 0x20) = uVar4;
    iVar2 = *(int *)(this + 0x24);
    lVar1 = (long)iVar2;
  }
  *(int *)(this + 0x24) = iVar2 + 1;
  *(long *)((long)__ptr + lVar1 * 8) = param_1;
LAB_004c9182:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x70));
  return;
}


