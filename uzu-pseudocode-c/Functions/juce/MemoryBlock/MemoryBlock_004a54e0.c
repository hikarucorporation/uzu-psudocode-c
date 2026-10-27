// Function : MemoryBlock
// Namespace: juce:MemoryBlock
// Entry    : 004a54e0
// Prototype: undefined MemoryBlock(MemoryBlock * this, size_t param_1, byte param_2)
// Body     : 004a54e0 - 004a5505


/* juce::MemoryBlock::MemoryBlock(unsigned long, bool) */

void __thiscall juce::MemoryBlock::MemoryBlock(MemoryBlock *this,size_t param_1,byte param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (param_1 != 0) {
    *(size_t *)(this + 8) = param_1;
                    /* try { // try from 004a54f6 to 004a54fd has its CatchHandler @ 004a5506 */
    HeapBlock<char,true>::allocate<unsigned_long>
              ((HeapBlock<char,true> *)this,param_1,(uint)param_2);
  }
  return;
}


