// Function : ~MemoryOutputStream
// Namespace: juce:MemoryOutputStream
// Entry    : 0048d5a0
// Prototype: undefined ~MemoryOutputStream(MemoryOutputStream * this)
// Body     : 0048d5a0 - 0048d5fd


/* juce::MemoryOutputStream::~MemoryOutputStream() */

void __thiscall juce::MemoryOutputStream::~MemoryOutputStream(MemoryOutputStream *this)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR__MemoryOutputStream_00713378;
                    /* try { // try from 0048d5b1 to 0048d5b5 has its CatchHandler @ 0048d5fe */
  trimExternalBlockSize(this);
  free(*(void **)(this + 0x18));
  *(undefined ***)this = &PTR__OutputStream_00713440;
  piVar2 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
    }
  }
  operator_delete(this);
  return;
}


