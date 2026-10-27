// Function : ~File
// Namespace: juce:File
// Entry    : 00171e00
// Prototype: undefined ~File(File * this)
// Body     : 00171e00 - 00171e04


/* juce::File::~File() */

void __thiscall juce::File::~File(File *this)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(long *)this + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      return;
    }
  }
  return;
}


