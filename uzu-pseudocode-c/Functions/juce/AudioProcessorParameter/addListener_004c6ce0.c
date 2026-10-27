// Function : addListener
// Namespace: juce:AudioProcessorParameter
// Entry    : 004c6ce0
// Prototype: undefined addListener(AudioProcessorParameter * this, long param_1)
// Body     : 004c6ce0 - 004c6d93


/* juce::AudioProcessorParameter::addListener(juce::AudioProcessorParameter::Listener*) */

void __thiscall
juce::AudioProcessorParameter::addListener(AudioProcessorParameter *this,long param_1)

{
  long lVar1;
  void *__ptr;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  __ptr = *(void **)(this + 0x38);
  iVar2 = *(int *)(this + 0x44);
  lVar1 = (long)iVar2;
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(long *)((long)__ptr + lVar3) == param_1) goto LAB_004c6d82;
      lVar3 = lVar3 + 8;
    } while (lVar1 * 8 != lVar3);
  }
  if ((int)*(uint *)(this + 0x40) <= iVar2) {
    uVar4 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x40) != uVar4) {
      if ((int)uVar4 < 1) {
        free(__ptr);
        *(undefined8 *)(this + 0x38) = 0;
        __ptr = (void *)0x0;
      }
      else {
        __ptr = realloc(__ptr,(ulong)uVar4 << 3);
        *(void **)(this + 0x38) = __ptr;
      }
    }
    *(uint *)(this + 0x40) = uVar4;
    iVar2 = *(int *)(this + 0x44);
    lVar1 = (long)iVar2;
  }
  *(int *)(this + 0x44) = iVar2 + 1;
  *(long *)((long)__ptr + lVar1 * 8) = param_1;
LAB_004c6d82:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  return;
}


