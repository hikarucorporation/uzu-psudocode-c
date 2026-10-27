// Function : read
// Namespace: juce:MemoryInputStream
// Entry    : 004a6240
// Prototype: ulong read(MemoryInputStream * this, void * param_1, uint param_2)
// Body     : 004a6240 - 004a6287


/* juce::MemoryInputStream::read(void*, int) */

ulong __thiscall juce::MemoryInputStream::read(MemoryInputStream *this,void *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong __n;
  
  __n = 0;
  if (0 < (int)param_2) {
    uVar1 = *(ulong *)(this + 0x18);
    uVar2 = *(ulong *)(this + 0x10) - uVar1;
    if (uVar1 <= *(ulong *)(this + 0x10) && uVar2 != 0) {
      __n = (ulong)param_2;
      if (uVar2 < param_2) {
        __n = uVar2;
      }
      if (__n != 0) {
        memcpy(param_1,(void *)(uVar1 + *(long *)(this + 8)),__n);
        *(ulong *)(this + 0x18) = *(long *)(this + 0x18) + __n;
      }
    }
  }
  return __n & 0xffffffff;
}


