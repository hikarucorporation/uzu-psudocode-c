// Function : getData
// Namespace: juce:MemoryOutputStream
// Entry    : 004a6300
// Prototype: long getData(MemoryOutputStream * this)
// Body     : 004a6300 - 004a6329


/* juce::MemoryOutputStream::getData() const */

long __thiscall juce::MemoryOutputStream::getData(MemoryOutputStream *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  if (plVar1 == (long *)0x0) {
    return *(long *)(this + 0x28);
  }
  if (*(ulong *)(this + 0x38) < (ulong)plVar1[1]) {
    *(undefined1 *)(*plVar1 + *(ulong *)(this + 0x38)) = 0;
    plVar1 = *(long **)(this + 0x10);
  }
  return *plVar1;
}


