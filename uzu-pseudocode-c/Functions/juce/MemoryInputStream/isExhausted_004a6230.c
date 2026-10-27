// Function : isExhausted
// Namespace: juce:MemoryInputStream
// Entry    : 004a6230
// Prototype: undefined8 isExhausted(MemoryInputStream * this)
// Body     : 004a6230 - 004a623b


/* juce::MemoryInputStream::isExhausted() */

undefined8 __thiscall juce::MemoryInputStream::isExhausted(MemoryInputStream *this)

{
  return CONCAT71((int7)(*(ulong *)(this + 0x18) >> 8),
                  *(ulong *)(this + 0x10) <= *(ulong *)(this + 0x18));
}


