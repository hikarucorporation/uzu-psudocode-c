// Function : ~OutputStream
// Namespace: juce:OutputStream
// Entry    : 0048cc30
// Prototype: undefined ~OutputStream(OutputStream * this)
// Body     : 0048cc30 - 0048cc60


/* juce::OutputStream::~OutputStream() */

void __thiscall juce::OutputStream::~OutputStream(OutputStream *this)

{
  int iVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR__OutputStream_00713440;
  piVar2 = (int *)(*(long *)(this + 8) + -0x10);
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


