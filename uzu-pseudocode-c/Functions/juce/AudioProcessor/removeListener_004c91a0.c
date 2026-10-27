// Function : removeListener
// Namespace: juce:AudioProcessor
// Entry    : 004c91a0
// Prototype: undefined removeListener(AudioProcessor * this, long param_1)
// Body     : 004c91a0 - 004c9250


/* juce::AudioProcessor::removeListener(juce::AudioProcessorListener*) */

void __thiscall juce::AudioProcessor::removeListener(AudioProcessor *this,long param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x70));
  uVar1 = *(uint *)(this + 0x24);
  if (0 < (int)uVar1) {
    lVar2 = *(long *)(this + 0x18);
    uVar5 = 0;
    do {
      if (*(long *)(lVar2 + uVar5 * 8) == param_1) {
        memmove((void *)(lVar2 + uVar5 * 8),(void *)(lVar2 + uVar5 * 8 + 8),
                (long)(int)(~(uint)uVar5 + uVar1) << 3);
        iVar7 = *(int *)(this + 0x24);
        uVar1 = iVar7 - 1;
        *(uint *)(this + 0x24) = uVar1;
        iVar4 = iVar7 * 2 + -2;
        iVar7 = 0;
        if (-1 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar7 < *(int *)(this + 0x20)) {
          uVar6 = 8;
          if (8 < (int)uVar1) {
            uVar6 = uVar1;
          }
          if ((int)uVar6 < *(int *)(this + 0x20)) {
            pvVar3 = realloc(*(void **)(this + 0x18),(ulong)uVar6 << 3);
            *(void **)(this + 0x18) = pvVar3;
            *(uint *)(this + 0x20) = uVar6;
          }
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x70));
  return;
}


