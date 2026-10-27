// Function : ~TemporaryFile
// Namespace: juce:TemporaryFile
// Entry    : 004a45e0
// Prototype: undefined ~TemporaryFile(TemporaryFile * this)
// Body     : 004a45e0 - 004a464c


/* juce::TemporaryFile::~TemporaryFile() */

void __thiscall juce::TemporaryFile::~TemporaryFile(TemporaryFile *this)

{
  int iVar1;
  int *piVar2;
  
                    /* try { // try from 004a45e7 to 004a45eb has its CatchHandler @ 004a464d */
  deleteTemporaryFile(this);
  piVar2 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      piVar2 = (int *)(*(long *)this + -0x10);
      if (piVar2 == &emptyString) {
        return;
      }
      goto LAB_004a4619;
    }
  }
  piVar2 = (int *)(*(long *)this + -0x10);
  if (piVar2 == &emptyString) {
    return;
  }
LAB_004a4619:
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar1 == 0) {
    operator_delete__(piVar2);
    return;
  }
  return;
}


