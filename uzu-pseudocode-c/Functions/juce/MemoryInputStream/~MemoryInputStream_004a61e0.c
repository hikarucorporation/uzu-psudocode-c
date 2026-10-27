// Function : ~MemoryInputStream
// Namespace: juce:MemoryInputStream
// Entry    : 004a61e0
// Prototype: undefined ~MemoryInputStream(MemoryInputStream * this)
// Body     : 004a61e0 - 004a61f2


/* juce::MemoryInputStream::~MemoryInputStream() */

void __thiscall juce::MemoryInputStream::~MemoryInputStream(MemoryInputStream *this)

{
  *(undefined ***)this = &PTR__MemoryInputStream_007132a0;
  free(*(void **)(this + 0x20));
  return;
}


