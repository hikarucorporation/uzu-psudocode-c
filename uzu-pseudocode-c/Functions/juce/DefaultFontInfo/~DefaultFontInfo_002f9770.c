// Function : ~DefaultFontInfo
// Namespace: juce:DefaultFontInfo
// Entry    : 002f9770
// Prototype: undefined ~DefaultFontInfo(DefaultFontInfo * this)
// Body     : 002f9770 - 002f97f7


/* juce::DefaultFontInfo::~DefaultFontInfo() */

void __thiscall juce::DefaultFontInfo::~DefaultFontInfo(DefaultFontInfo *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 8);
      goto joined_r0x002f97c9;
    }
  }
  lVar2 = *(long *)(this + 8);
joined_r0x002f97c9:
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(*(long *)this + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      return;
    }
  }
  return;
}


