// Function : setPosition
// Namespace: juce:MemoryInputStream
// Entry    : 004a62a0
// Prototype: undefined8 setPosition(MemoryInputStream * this, long param_1)
// Body     : 004a62a0 - 004a62ba


/* juce::MemoryInputStream::setPosition(long long) */

undefined8 __thiscall juce::MemoryInputStream::setPosition(MemoryInputStream *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x10);
  if (param_1 <= *(long *)(this + 0x10)) {
    lVar1 = param_1;
  }
  lVar2 = 0;
  if (-1 < param_1) {
    lVar2 = lVar1;
  }
  *(long *)(this + 0x18) = lVar2;
  return CONCAT71((int7)((ulong)lVar1 >> 8),1);
}


