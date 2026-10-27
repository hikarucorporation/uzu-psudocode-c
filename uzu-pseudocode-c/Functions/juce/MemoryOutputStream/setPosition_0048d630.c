// Function : setPosition
// Namespace: juce:MemoryOutputStream
// Entry    : 0048d630
// Prototype: undefined8 setPosition(MemoryOutputStream * this, ulong param_1)
// Body     : 0048d630 - 0048d64a


/* juce::MemoryOutputStream::setPosition(long long) */

undefined8 __thiscall juce::MemoryOutputStream::setPosition(MemoryOutputStream *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x38);
  if ((long)param_1 <= (long)uVar1) {
    uVar2 = param_1;
    if (uVar1 < param_1) {
      uVar2 = uVar1;
    }
    *(ulong *)(this + 0x30) = uVar2;
  }
  return CONCAT71((int7)(uVar1 >> 8),(long)param_1 <= (long)uVar1);
}


