// Function : setLatencySamples
// Namespace: juce:AudioProcessor
// Entry    : 004ccc00
// Prototype: undefined setLatencySamples(AudioProcessor * this, int param_1)
// Body     : 004ccc00 - 004ccc9d


/* juce::AudioProcessor::setLatencySamples(int) */

void __thiscall juce::AudioProcessor::setLatencySamples(AudioProcessor *this,int param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  bool bVar2;
  ulong uVar4;
  ulong uVar3;
  undefined4 local_2c;
  
  if (*(int *)(this + 0x3c) != param_1) {
    *(int *)(this + 0x3c) = param_1;
    local_2c = 1;
    if (0 < (int)*(uint *)(this + 0x24)) {
      __mutex = (pthread_mutex_t *)(this + 0x70);
      uVar4 = (ulong)*(uint *)(this + 0x24);
      do {
        uVar3 = uVar4 - 1;
        pthread_mutex_lock(__mutex);
        if ((uint)uVar3 < *(uint *)(this + 0x24)) {
          plVar1 = *(long **)(*(long *)(this + 0x18) + (uVar3 & 0xffffffff) * 8);
          pthread_mutex_unlock(__mutex);
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x18))(plVar1,this,&local_2c);
          }
        }
        else {
          pthread_mutex_unlock(__mutex);
        }
        bVar2 = 1 < uVar4;
        uVar4 = uVar3;
      } while (bVar2);
    }
  }
  return;
}


