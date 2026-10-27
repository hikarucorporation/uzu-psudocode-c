// Function : setSeedRandomly
// Namespace: juce:Random
// Entry    : 004a4670
// Prototype: undefined setSeedRandomly(Random * this)
// Body     : 004a4670 - 004a48a2


/* juce::Random::setSeedRandomly() */

void __thiscall juce::Random::setSeedRandomly(Random *this)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  timespec local_38;
  
  uVar1 = *(long *)this * 0x5deece66d + 0xb;
  uVar3 = (uVar1 & 0xffffffffffff) * 0x5deece66d + 0xb;
  *(ulong *)this =
       (uVar3 >> 0x10 & 0xffffffff | (uVar1 & 0xffffffffffff0000) << 0x10) ^
       uVar3 & 0xffffffffffff ^ setSeedRandomly()::globalSeed ^ (ulong)this;
  clock_gettime(1,&local_38);
  uVar1 = (local_38.tv_nsec / 1000 + local_38.tv_sec * 1000000) / 1000;
  uVar2 = (uint)uVar1;
  if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar2) ||
     (uVar2 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
    LOCK();
    UNLOCK();
    _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar2;
  }
  uVar3 = *(long *)this * 0x5deece66d + 0xb;
  uVar4 = (uVar3 & 0xffffffffffff) * 0x5deece66d + 0xb;
  *(ulong *)this =
       (uVar4 >> 0x10 & 0xffffffff | uVar3 * 0x10000 & 0xffffffff00000000) ^
       uVar4 & 0xffffffffffff ^ uVar1 & 0xffffffff;
  clock_gettime(1,&local_38);
  uVar1 = *(long *)this * 0x5deece66d + 0xb;
  uVar3 = (uVar1 & 0xffffffffffff) * 0x5deece66d + 0xb;
  uVar3 = ((uVar3 >> 0x10 & 0xffffffff | uVar1 * 0x10000 & 0xffffffff00000000) ^
          uVar3 & 0xffffffffffff ^ local_38.tv_nsec / 1000 + local_38.tv_sec * 1000000) *
          0x5deece66d + 0xb;
  uVar1 = (uVar3 & 0xffffffffffff) * 0x5deece66d + 0xb;
  *(ulong *)this =
       (uVar1 >> 0x10 & 0xffffffff | uVar3 * 0x10000 & 0xffffffff00000000) ^ uVar1 & 0xffffffffffff
       ^ 1000000;
  gettimeofday((timeval *)&local_38,(__timezone_ptr_t)0x0);
  uVar1 = *(long *)this * 0x5deece66d + 0xb;
  uVar3 = (uVar1 & 0xffffffffffff) * 0x5deece66d + 0xb;
  uVar1 = (uVar3 >> 0x10 & 0xffffffff | uVar1 * 0x10000 & 0xffffffff00000000) ^
          uVar3 & 0xffffffffffff ^ local_38.tv_nsec / 1000 + local_38.tv_sec * 1000;
  *(ulong *)this = uVar1;
  LOCK();
  setSeedRandomly()::globalSeed = setSeedRandomly()::globalSeed ^ uVar1;
  UNLOCK();
  return;
}


