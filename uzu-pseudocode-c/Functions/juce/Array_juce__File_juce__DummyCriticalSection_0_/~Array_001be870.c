// Function : ~Array
// Namespace: juce:Array_juce__File_juce__DummyCriticalSection_0_
// Entry    : 001be870
// Prototype: undefined ~Array(Array<juce::File,juce::DummyCriticalSection,0> * this)
// Body     : 001be870 - 001be8d5


/* juce::Array<juce::File, juce::DummyCriticalSection, 0>::~Array() */

void __thiscall
juce::Array<juce::File,juce::DummyCriticalSection,0>::~Array
          (Array<juce::File,juce::DummyCriticalSection,0> *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar2 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)this + lVar2 * 8) + -0x10);
      if (piVar3 != &emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


