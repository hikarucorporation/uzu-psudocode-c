// Function : ~MemoryInputStream
// Namespace: juce:MemoryInputStream
// Entry    : 004a6200
// Prototype: undefined ~MemoryInputStream(MemoryInputStream * this)
// Body     : 004a6200 - 004a621f


/* juce::MemoryInputStream::~MemoryInputStream() */

void __thiscall juce::MemoryInputStream::~MemoryInputStream(MemoryInputStream *this)

{
  *(undefined ***)this = &PTR__MemoryInputStream_007132a0;
  free(*(void **)(this + 0x20));
  operator_delete(this);
  return;
}


