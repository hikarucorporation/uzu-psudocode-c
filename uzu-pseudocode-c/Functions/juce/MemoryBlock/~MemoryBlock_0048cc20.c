// Function : ~MemoryBlock
// Namespace: juce:MemoryBlock
// Entry    : 0048cc20
// Prototype: undefined ~MemoryBlock(MemoryBlock * this)
// Body     : 0048cc20 - 0048cc27


/* juce::MemoryBlock::~MemoryBlock() */

void __thiscall juce::MemoryBlock::~MemoryBlock(MemoryBlock *this)

{
  free(*(void **)this);
  return;
}


