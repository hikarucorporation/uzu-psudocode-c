// Function : ~FileInputStream
// Namespace: juce:FileInputStream
// Entry    : 0049e610
// Prototype: undefined ~FileInputStream(FileInputStream * this)
// Body     : 0049e610 - 0049e68f


/* juce::FileInputStream::~FileInputStream() */

void __thiscall juce::FileInputStream::~FileInputStream(FileInputStream *this)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR__FileInputStream_007130c8;
  if (-1 < *(int *)(this + 0x10)) {
                    /* try { // try from 0049e628 to 0049e62c has its CatchHandler @ 0049e690 */
    close(*(int *)(this + 0x10));
  }
  piVar2 = (int *)(*(long *)(this + 0x20) + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar2);
      piVar2 = (int *)(*(long *)(this + 8) + -0x10);
      if (piVar2 == &emptyString) {
        return;
      }
      goto LAB_0049e65b;
    }
  }
  piVar2 = (int *)(*(long *)(this + 8) + -0x10);
  if (piVar2 == &emptyString) {
    return;
  }
LAB_0049e65b:
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


