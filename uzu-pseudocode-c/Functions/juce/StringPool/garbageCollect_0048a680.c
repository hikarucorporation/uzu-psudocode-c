// Function : garbageCollect
// Namespace: juce:StringPool
// Entry    : 0048a680
// Prototype: undefined garbageCollect(void)
// Body     : 0048a680 - 0048a778


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::StringPool::garbageCollect() */

void juce::StringPool::garbageCollect(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  timespec local_20;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0071d1d0);
  uVar4 = (ulong)DAT_0071d1cc;
  if (0 < (int)DAT_0071d1cc) {
    do {
      uVar5 = uVar4 - 1;
      if ((*(int *)(*(long *)(getGlobalPool()::pool + (uVar5 & 0xffffffff) * 8) + -0x10) == 0) &&
         ((uint)uVar5 < DAT_0071d1cc)) {
        Array<juce::String,juce::DummyCriticalSection,0>::removeInternal
                  ((Array<juce::String,juce::DummyCriticalSection,0> *)&getGlobalPool()::pool,
                   (long *)(uVar5 & 0xffffffff));
      }
      bVar1 = 1 < uVar4;
      uVar4 = uVar5;
    } while (bVar1);
  }
  uVar3 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_20);
    auVar2 = SEXT816(local_20.tv_nsec / 1000 + local_20.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar3 = (int)(auVar2._8_8_ >> 7) - (auVar2._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar3) ||
       (uVar3 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar3;
    }
  }
  _DAT_0071d1f8 = uVar3;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0071d1d0);
  return;
}


