// Function : ~NativeIterator
// Namespace: juce:DirectoryIterator:NativeIterator
// Entry    : 00499210
// Prototype: undefined ~NativeIterator(NativeIterator * this)
// Body     : 00499210 - 00499286


/* juce::DirectoryIterator::NativeIterator::~NativeIterator() */

void __thiscall juce::DirectoryIterator::NativeIterator::~NativeIterator(NativeIterator *this)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    if ((DIR *)plVar2[2] != (DIR *)0x0) {
      closedir((DIR *)plVar2[2]);
    }
    piVar3 = (int *)(plVar2[1] + -0x10);
    if (piVar3 != &emptyString) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar3);
      }
    }
    piVar3 = (int *)(*plVar2 + -0x10);
    if (piVar3 != &emptyString) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar3);
      }
    }
    operator_delete(plVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


